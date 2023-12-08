sValue
    };
    function addValue(value) {
      switch (typeof value) {
        case "string":
          existingStrings.add(value);
          break;
        case "number":
          existingNumbers.add(value);
      }
    }
    function hasValue(value) {
      switch (typeof value) {
        case "string":
          return existingStrings.has(value);
        case "number":
          return existingNumbers.has(value);
        case "object":
          return existingBigInts.has(pseudoBigIntToString(value));
      }
    }
  }
  function fileShouldUseJavaScriptRequire(file, program, host, preferRequire) {
    var _a;
    const fileName = typeof file === "string" ? file : file.fileName;
    if (!hasJSFileExtension(fileName)) {
      return false;
    }
    const compilerOptions = program.getCompilerOptions();
    const moduleKind = getEmitModuleKind(compilerOptions);
    const impliedNodeFormat = typeof file === "string" ? getImpliedNodeFormatForFile(toPath(file, host.getCurrentDirectory(), hostGetCanonicalFileName(host)), (_a = program.getPackageJsonInfoCache) == null ? void 0 : _a.call(program), host, compilerOptions) : file.impliedNodeFormat;
    if (impliedNodeFormat === 99 /* ESNext */) {
      return false;
    }
    if (impliedNodeFormat === 1 /* CommonJS */) {
      return true;
    }
    if (compilerOptions.verbatimModuleSyntax && moduleKind === 1 /* CommonJS */) {
      return true;
    }
    if (compilerOptions.verbatimModuleSyntax && emitModuleKindIsNonNodeESM(moduleKind)) {
      return false;
    }
    if (typeof file === "object") {
      if (file.commonJsModuleIndicator) {
        return true;
      }
      if (file.externalModuleIndicator) {
        return false;
      }
    }
    return preferRequire;
  }
  var scanner, SemanticMeaning, tripleSlashDirectivePrefixRegex, typeKeywords, QuotePreference, displayPartWriter, lineFeed2, ANONYMOUS, syntaxMayBeASICandidate;
  var init_utilities4 = __esm({
    "src/services/utilities.ts"() {
      "use strict";
      init_ts4();
      scanner = createScanner(
        99 /* Latest */,
        /*skipTrivia*/
        true
      );
      SemanticMeaning = /* @__PURE__ */ ((SemanticMeaning3) => {
        SemanticMeaning3[SemanticMeaning3["None"] = 0] = "None";
        SemanticMeaning3[SemanticMeaning3["Value"] = 1] = "Value";
        SemanticMeaning3[SemanticMeaning3["Type"] = 2] = "Type";
        SemanticMeaning3[SemanticMeaning3["Namespace"] = 4] = "Namespace";
        SemanticMeaning3[SemanticMeaning3["All"] = 7] = "All";
        return SemanticMeaning3;
      })(SemanticMeaning || {});
      tripleSlashDirectivePrefixRegex = /^\/\/\/\s*</;
      typeKeywords = [
        133 /* AnyKeyword */,
        131 /* AssertsKeyword */,
        162 /* BigIntKeyword */,
        136 /* BooleanKeyword */,
        97 /* FalseKeyword */,
        140 /* InferKeyword */,
        143 /* KeyOfKeyword */,
        146 /* NeverKeyword */,
        106 /* NullKeyword */,
        150 /* NumberKeyword */,
        151 /* ObjectKeyword */,
        148 /* ReadonlyKeyword */,
        154 /* StringKeyword */,
        155 /* SymbolKeyword */,
        114 /* TypeOfKeyword */,
        112 /* TrueKeyword */,
        116 /* VoidKeyword */,
        157 /* UndefinedKeyword */,
        158 /* UniqueKeyword */,
        159 /* UnknownKeyword */
      ];
      QuotePreference = /* @__PURE__ */ ((QuotePreference7) => {
        QuotePreference7[QuotePreference7["Single"] = 0] = "Single";
        QuotePreference7[QuotePreference7["Double"] = 1] = "Double";
        return QuotePreference7;
      })(QuotePreference || {});
      displayPartWriter = getDisplayPartWriter();
      lineFeed2 = "\n";
      ANONYMOUS = "anonymous function";
      syntaxMayBeASICandidate = or(
        syntaxRequiresTrailingCommaOrSemicolonOrASI,
        syntaxRequiresTrailingFunctionBlockOrSemicolonOrASI,
        syntaxRequiresTrailingModuleBlockOrSemicolonOrASI,
        syntaxRequiresTrailingSemicolonOrASI
      );
    }
  });

  // src/services/exportInfoMap.ts
  function createCacheableExportInfoMap(host) {
    let exportInfoId = 1;
    const exportInfo = createMultiMap();
    const symbols = /* @__PURE__ */ new Map();
    const packages = /* @__PURE__ */ new Map();
    let usableByFileName;
    const cache = {
      isUsableByFile: (importingFile) => importingFile === usableByFileName,
      isEmpty: () => !exportInfo.size,
      clear: () => {
        exportInfo.clear();
        symbols.clear();
        usableByFileName = void 0;
      },
      add: (importingFile, symbol, symbolTableKey, moduleSymbol, moduleFile, exportKind, isFromPackageJson, checker) => {
        if (importingFile !== usableByFileName) {
          cache.clear();
          usableByFileName = importingFile;
        }
        let packageName;
        if (moduleFile) {
          const nodeModulesPathParts = getNodeModulePathParts(moduleFile.fileName);
          if (nodeModulesPathParts) {
            const { topLevelNodeModulesIndex, topLevelPackageNameIndex, packageRootIndex } = nodeModulesPathParts;
            packageName = unmangleScopedPackageName(getPackageNameFromTypesPackageName(moduleFile.fileName.substring(topLevelPackageNameIndex + 1, packageRootIndex)));
            if (startsWith(importingFile, moduleFile.path.substring(0, topLevelNodeModulesIndex))) {
              const prevDeepestNodeModulesPath = packages.get(packageName);
              const nodeModulesPath = moduleFile.fileName.substring(0, topLevelPackageNameIndex + 1);
              if (prevDeepestNodeModulesPath) {
                const prevDeepestNodeModulesIndex = prevDeepestNodeModulesPath.indexOf(nodeModulesPathPart);
                if (topLevelNodeModulesIndex > prevDeepestNodeModulesIndex) {
                  packages.set(packageName, nodeModulesPath);
                }
              } else {
                packages.set(packageName, nodeModulesPath);
              }
            }
          }
        }
        const isDefault = exportKind === 1 /* Default */;
        const namedSymbol = isDefault && getLocalSymbolForExportDefault(symbol) || symbol;
        const names = exportKind === 0 /* Named */ || isExternalModuleSymbol(namedSymbol) ? unescapeLeadingUnderscores(symbolTableKey) : getNamesForExportedSymbol(
          namedSymbol,
          /*scriptTarget*/
          void 0
        );
        const symbolName2 = typeof names === "string" ? names : names[0];
        const capitalizedSymbolName = typeof names === "string" ? void 0 : names[1];
        const moduleName = stripQuotes(moduleSymbol.name);
        const id = exportInfoId++;
        const target = skipAlias(symbol, checker);
        const storedSymbol = symbol.flags & 33554432 /* Transient */ ? void 0 : symbol;
        const storedModuleSymbol = moduleSymbol.flags & 33554432 /* Transient */ ? void 0 : moduleSymbol;
        if (!storedSymbol || !storedModuleSymbol)
          symbols.set(id, [symbol, moduleSymbol]);
        exportInfo.add(key(symbolName2, symbol, isExternalModuleNameRelative(moduleName) ? void 0 : moduleName, checker), {
          id,
          symbolTableKey,
          symbolName: symbolName2,
          capitalizedSymbolName,
          moduleName,
          moduleFile,
          moduleFileName: moduleFile == null ? void 0 : moduleFile.fileName,
          packageName,
          exportKind,
          targetFlags: target.flags,
          isFromPackageJson,
          symbol: storedSymbol,
          moduleSymbol: storedModuleSymbol
        });
      },
      get: (importingFile, key2) => {
        if (importingFile !== usableByFileName)
          return;
        const result = exportInfo.get(key2);
        return result == null ? void 0 : result.map(rehydrateCachedInfo);
      },
      search: (importingFile, preferCapitalized, matches, action) => {
        if (importingFile !== usableByFileName)
          return;
        return forEachEntry(exportInfo, (info, key2) => {
          const { symbolName: symbolName2, ambientModuleName } = parseKey(key2);
          const name = preferCapitalized && info[0].capitalizedSymbolName || symbolName2;
          if (matches(name, info[0].targetFlags)) {
            const rehydrated = info.map(rehydrateCachedInfo);
            const filtered = rehydrated.filter((r, i) => isNotShadowedByDeeperNodeModulesPackage(r, info[i].packageName));
            if (filtered.length) {
              const res = action(filtered, name, !!ambientModuleName, key2);
              if (res !== void 0)
                return res;
            }
          }
        });
      },
      releaseSymbols: () => {
        symbols.clear();
      },
      onFileChanged: (oldSourceFile, newSourceFile, typeAcquisitionEnabled) => {
        if (fileIsGlobalOnly(oldSourceFile) && fileIsGlobalOnly(newSourceFile)) {
          return false;
        }
        if (usableByFileName && usableByFileName !== newSourceFile.path || // If ATA is enabled, auto-imports uses existing imports to guess whether you want auto-imports from node.
        // Adding or removing imports from node could change the outcome of that guess, so could change the suggestions list.
        typeAcquisitionEnabled && consumesNodeCoreModules(oldSourceFile) !== consumesNodeCoreModules(newSourceFile) || // Module agumentation and ambient module changes can add or remove exports available to be auto-imported.
        // Changes elsewhere in the file can change the *type* of an export in a module augmentation,
        // but type info is gathered in getCompletionEntryDetails, which doesn't use the cache.
        !arrayIsEqualTo(oldSourceFile.moduleAugmentations, newSourceFile.moduleAugmentations) || !ambientModuleDeclarationsAreEqual(oldSourceFile, newSourceFile)) {
          cache.clear();
          return true;
        }
        usableByFileName = newSourceFile.path;
        return false;
      }
    };
    if (Debug.isDebugging) {
      Object.defineProperty(cache, "__cache", { get: () => exportInfo });
    }
    return cache;
    function rehydrateCachedInfo(info) {
      if (info.symbol && info.moduleSymbol)
        return info;
      const { id, exportKind, targetFlags, isFromPackageJson, moduleFileName } = info;
      const [cachedSymbol, cachedModuleSymbol] = symbols.get(id) || emptyArray;
      if (cachedSymbol && cachedModuleSymbol) {
        return {
          symbol: cachedSymbol,
          moduleSymbol: cachedModuleSymbol,
          moduleFileName,
          exportKind,
          targetFlags,
          isFromPackageJson
        };
      }
      const checker = (isFromPackageJson ? host.getPackageJsonAutoImportProvider() : host.getCurrentProgram()).getTypeChecker();
      const moduleSymbol = info.moduleSymbol || cachedModuleSymbol || Debug.checkDefined(info.moduleFile ? checker.getMergedSymbol(info.moduleFile.symbol) : checker.tryFindAmbientModule(info.moduleName));
      const symbol = info.symbol || cachedSymbol || Debug.checkDefined(
        exportKind === 2 /* ExportEquals */ ? checker.resolveExternalModuleSymbol(moduleSymbol) : checker.tryGetMemberInModuleExportsAndProperties(unescapeLeadingUnderscores(info.symbolTableKey), moduleSymbol),
        `Could not find symbol '${info.symbolName}' by key '${info.symbolTableKey}' in module ${moduleSymbol.name}`
      );
      symbols.set(id, [symbol, moduleSymbol]);
      return {
        symbol,
        moduleSymbol,
        moduleFileName,
        exportKind,
        targetFlags,
        isFromPackageJson
      };
    }
    function key(importedName, symbol, ambientModuleName, checker) {
      const moduleKey = ambientModuleName || "";
      return `${importedName}|${getSymbolId(skipAlias(symbol, checker))}|${moduleKey}`;
    }
    function parseKey(key2) {
      const symbolName2 = key2.substring(0, key2.indexOf("|"));
      const moduleKey = key2.substring(key2.lastIndexOf("|") + 1);
      const ambientModuleName = moduleKey === "" ? void 0 : moduleKey;
      return { symbolName: symbolName2, ambientModuleName };
    }
    function fileIsGlobalOnly(file) {
      return !file.commonJsModuleIndicator && !file.externalModuleIndicator && !file.moduleAugmentations && !file.ambientModuleNames;
    }
    function ambientModuleDeclarationsAreEqual(oldSourceFile, newSourceFile) {
      if (!arrayIsEqualTo(oldSourceFile.ambientModuleNames, newSourceFile.ambientModuleNames)) {
        return false;
      }
      let oldFileStatementIndex = -1;
      let newFileStatementIndex = -1;
      for (const ambientModuleName of newSourceFile.ambientModuleNames) {
        const isMatchingModuleDeclaration = (node) => isNonGlobalAmbientModule(node) && node.name.text === ambientModuleName;
        oldFileStatementIndex = findIndex(oldSourceFile.statements, isMatchingModuleDeclaration, oldFileStatementIndex + 1);
        newFileStatementIndex = findIndex(newSourceFile.statements, isMatchingModuleDeclaration, newFileStatementIndex + 1);
        if (oldSourceFile.statements[oldFileStatementIndex] !== newSourceFile.statements[newFileStatementIndex]) {
          return false;
        }
      }
      return true;
    }
    function isNotShadowedByDeeperNodeModulesPackage(info, packageName) {
      if (!packageName || !info.moduleFileName)
        return true;
      const typingsCacheLocation = host.getGlobalTypingsCacheLocation();
      if (typingsCacheLocation && startsWith(info.moduleFileName, typingsCacheLocation))
        return true;
      const packageDeepestNodeModulesPath = packages.get(packageName);
      return !packageDeepestNodeModulesPath || startsWith(info.moduleFileName, packageDeepestNodeModulesPath);
    }
  }
  function isImportableFile(program, from, to, preferences, packageJsonFilter, moduleSpecifierResolutionHost, moduleSpecifierCache) {
    var _a;
    if (from === to)
      return false;
    const cachedResult = moduleSpecifierCache == null ? void 0 : moduleSpecifierCache.get(from.path, to.path, preferences, {});
    if ((cachedResult == null ? void 0 : cachedResult.isBlockedByPackageJsonDependencies) !== void 0) {
      return !cachedResult.isBlockedByPackageJsonDependencies;
    }
    const getCanonicalFileName = hostGetCanonicalFileName(moduleSpecifierResolutionHost);
    const globalTypingsCache = (_a = moduleSpecifierResolutionHost.getGlobalTypingsCacheLocation) == null ? void 0 : _a.call(moduleSpecifierResolutionHost);
    const hasImportablePath = !!ts_moduleSpecifiers_exports.forEachFileNameOfModule(
      from.fileName,
      to.fileName,
      moduleSpecifierResolutionHost,
      /*preferSymlinks*/
      false,
      (toPath3) => {
        const toFile = program.getSourceFile(toPath3);
        return (toFile === to || !toFile) && isImportablePath(from.fileName, toPath3, getCanonicalFileName, globalTypingsCache);
      }
    );
    if (packageJsonFilter) {
      const isAutoImportable = hasImportablePath && packageJsonFilter.allowsImportingSourceFile(to, moduleSpecifierResolutionHost);
      moduleSpecifierCache == null ? void 0 : moduleSpecifierCache.setBlockedByPackageJsonDependencies(from.path, to.path, preferences, {}, !isAutoImportable);
      return isAutoImportable;
    }
    return hasImportablePath;
  }
  function isImportablePath(fromPath, toPath3, getCanonicalFileName, globalCachePath) {
    const toNodeModules = forEachAncestorDirectory(toPath3, (ancestor) => getBaseFileName(ancestor) === "node_modules" ? ancestor : void 0);
    const toNodeModulesParent = toNodeModules && getDirectoryPath(getCanonicalFileName(toNodeModules));
    return toNodeModulesParent === void 0 || startsWith(getCanonicalFileName(fromPath), toNodeModulesParent) || !!globalCachePath && startsWith(getCanonicalFileName(globalCachePath), toNodeModulesParent);
  }
  function forEachExternalModuleToImportFrom(program, host, preferences, useAutoImportProvider, cb) {
    var _a, _b;
    const useCaseSensitiveFileNames = hostUsesCaseSensitiveFileNames(host);
    const excludePatterns = preferences.autoImportFileExcludePatterns && mapDefined(preferences.autoImportFileExcludePatterns, (spec) => {
      const pattern = getPatternFromSpec(spec, "", "exclude");
      return pattern ? getRegexFromPattern(pattern, useCaseSensitiveFileNames) : void 0;
    });
    forEachExternalModule(program.getTypeChecker(), program.getSourceFiles(), excludePatterns, (module2, file) => cb(
      module2,
      file,
      program,
      /*isFromPackageJson*/
      false
    ));
    const autoImportProvider = useAutoImportProvider && ((_a = host.getPackageJsonAutoImportProvider) == null ? void 0 : _a.call(host));
    if (autoImportProvider) {
      const start = timestamp();
      const checker = program.getTypeChecker();
      forEachExternalModule(autoImportProvider.getTypeChecker(), autoImportProvider.getSourceFiles(), excludePatterns, (module2, file) => {
        if (file && !program.getSourceFile(file.fileName) || !file && !checker.resolveName(
          module2.name,
          /*location*/
          void 0,
          1536 /* Module */,
          /*excludeGlobals*/
          false
        )) {
          cb(
            module2,
            file,
            autoImportProvider,
            /*isFromPackageJson*/
            true
          );
        }
      });
      (_b = host.log) == null ? void 0 : _b.call(host, `forEachExternalModuleToImportFrom autoImportProvider: ${timestamp() - start}`);
    }
  }
  function forEachExternalModule(checker, allSourceFiles, excludePatterns, cb) {
    var _a;
    const isExcluded = excludePatterns && ((fileName) => excludePatterns.some((p) => p.test(fileName)));
    for (const ambient of checker.getAmbientModules()) {
      if (!stringContains(ambient.name, "*") && !(excludePatterns && ((_a = ambient.declarations) == null ? void 0 : _a.every((d) => isExcluded(d.getSourceFile().fileName))))) {
        cb(
          ambient,
          /*sourceFile*/
          void 0
        );
      }
    }
    for (const sourceFile of allSourceFiles) {
      if (isExternalOrCommonJsModule(sourceFile) && !(isExcluded == null ? void 0 : isExcluded(sourceFile.fileName))) {
        cb(checker.getMergedSymbol(sourceFile.symbol), sourceFile);
      }
    }
  }
  function getExportInfoMap(importingFile, host, program, preferences, cancellationToken) {
    var _a, _b, _c, _d, _e;
    const start = timestamp();
    (_a = host.getPackageJsonAutoImportProvider) == null ? void 0 : _a.call(host);
    const cache = ((_b = host.getCachedExportInfoMap) == null ? void 0 : _b.call(host)) || createCacheableExportInfoMap({
      getCurrentProgram: () => program,
      getPackageJsonAutoImportProvider: () => {
        var _a2;
        return (_a2 = host.getPackageJsonAutoImportProvider) == null ? void 0 : _a2.call(host);
      },
      getGlobalTypingsCacheLocation: () => {
        var _a2;
        return (_a2 = host.getGlobalTypingsCacheLocation) == null ? void 0 : _a2.call(host);
      }
    });
    if (cache.isUsableByFile(importingFile.path)) {
      (_c = host.log) == null ? void 0 : _c.call(host, "getExportInfoMap: cache hit");
      return cache;
    }
    (_d = host.log) == null ? void 0 : _d.call(host, "getExportInfoMap: cache miss or empty; calculating new results");
    const compilerOptions = program.getCompilerOptions();
    let moduleCount = 0;
    try {
      forEachExternalModuleToImportFrom(
        program,
        host,
        preferences,
        /*useAutoImportProvider*/
        true,
        (moduleSymbol, moduleFile, program2, isFromPackageJson) => {
          if (++moduleCount % 100 === 0)
            cancellationToken == null ? void 0 : cancellationToken.throwIfCancellationRequested();
          const seenExports = /* @__PURE__ */ new Map();
          const checker = program2.getTypeChecker();
          const defaultInfo = getDefaultLikeExportInfo(moduleSymbol, checker, compilerOptions);
          if (defaultInfo && isImportableSymbol(defaultInfo.symbol, checker)) {
            cache.add(
              importingFile.path,
              defaultInfo.symbol,
              defaultInfo.exportKind === 1 /* Default */ ? "default" /* Default */ : "export=" /* ExportEquals */,
              moduleSymbol,
              moduleFile,
              defaultInfo.exportKind,
              isFromPackageJson,
              checker
            );
          }
          checker.forEachExportAndPropertyOfModule(moduleSymbol, (exported, key) => {
            if (exported !== (defaultInfo == null ? void 0 : defaultInfo.symbol) && isImportableSymbol(exported, checker) && addToSeen(seenExports, key)) {
              cache.add(
                importingFile.path,
                exported,
                key,
                moduleSymbol,
                moduleFile,
                0 /* Named */,
                isFromPackageJson,
                checker
              );
            }
          });
        }
      );
    } catch (err) {
      cache.clear();
      throw err;
    }
    (_e = host.log) == null ? void 0 : _e.call(host, `getExportInfoMap: done in ${timestamp() - start} ms`);
    return cache;
  }
  function getDefaultLikeExportInfo(moduleSymbol, checker, compilerOptions) {
    const exported = getDefaultLikeExportWorker(moduleSymbol, checker);
    if (!exported)
      return void 0;
    const { symbol, exportKind } = exported;
    const info = getDefaultExportInfoWorker(symbol, checker, compilerOptions);
    return info && { symbol, exportKind, ...info };
  }
  function isImportableSymbol(symbol, checker) {
    return !checker.isUndefinedSymbol(symbol) && !checker.isUnknownSymbol(symbol) && !isKnownSymbol(symbol) && !isPrivateIdentifierSymbol(symbol);
  }
  function getDefaultLikeExportWorker(moduleSymbol, checker) {
    const exportEquals = checker.resolveExternalModuleSymbol(moduleSymbol);
    if (exportEquals !== moduleSymbol)
      return { symbol: exportEquals, exportKind: 2 /* ExportEquals */ };
    const defaultExport = checker.tryGetMemberInModuleExports("default" /* Default */, moduleSymbol);
    if (defaultExport)
      return { symbol: defaultExport, exportKind: 1 /* Default */ };
  }
  function getDefaultExportInfoWorker(defaultExport, checker, compilerOptions) {
    const localSymbol = getLocalSymbolForExportDefault(defaultExport);
    if (localSymbol)
      return { resolvedSymbol: localSymbol, name: localSymbol.name };
    const name = getNameForExportDefault(defaultExport);
    if (name !== void 0)
      return { resolvedSymbol: defaultExport, name };
    if (defaultExport.flags & 2097152 /* Alias */) {
      const aliased = checker.getImmediateAliasedSymbol(defaultExport);
      if (aliased && aliased.parent) {
        return getDefaultExportInfoWorker(aliased, checker, compilerOptions);
      }
    }
    if (defaultExport.escapedName !== "default" /* Default */ && defaultExport.escapedName !== "export=" /* ExportEquals */) {
      return { resolvedSymbol: defaultExport, name: defaultExport.getName() };
    }
    return { resolvedSymbol: defaultExport, name: getNameForExportedSymbol(defaultExport, compilerOptions.target) };
  }
  function getNameForExportDefault(symbol) {
    return symbol.declarations && firstDefined(symbol.declarations, (declaration) => {
      var _a;
      if (isExportAssignment(declaration)) {
        return (_a = tryCast(skipOuterExpressions(declaration.expression), isIdentifier)) == null ? void 0 : _a.text;
      } else if (isExportSpecifier(declaration)) {
        Debug.assert(declaration.name.text === "default" /* Default */, "Expected the specifier to be a default export");
        return declaration.propertyName && declaration.propertyName.text;
      }
    });
  }
  var ImportKind, ExportKind;
  var init_exportInfoMap = __esm({
    "src/services/exportInfoMap.ts"() {
      "use strict";
      init_ts4();
      ImportKind = /* @__PURE__ */ ((ImportKind2) => {
        ImportKind2[ImportKind2["Named"] = 0] = "Named";
        ImportKind2[ImportKind2["Default"] = 1] = "Default";
        ImportKind2[ImportKind2["Namespace"] = 2] = "Namespace";
        ImportKind2[ImportKind2["CommonJS"] = 3] = "CommonJS";
        return ImportKind2;
      })(ImportKind || {});
      ExportKind = /* @__PURE__ */ ((ExportKind3) => {
        ExportKind3[ExportKind3["Named"] = 0] = "Named";
        ExportKind3[ExportKind3["Default"] = 1] = "Default";
        ExportKind3[ExportKind3["ExportEquals"] = 2] = "ExportEquals";
        ExportKind3[ExportKind3["UMD"] = 3] = "UMD";
        return ExportKind3;
      })(ExportKind || {});
    }
  });

  // src/services/classifier.ts
  function createClassifier() {
    const scanner2 = createScanner(
      99 /* Latest */,
      /*skipTrivia*/
      false
    );
    function getClassificationsForLine(text, lexState, syntacticClassifierAbsent) {
      return convertClassificationsToResult(getEncodedLexicalClassifications(text, lexState, syntacticClassifierAbsent), text);
    }
    function getEncodedLexicalClassifications(text, lexState, syntacticClassifierAbsent) {
      let token = 0 /* Unknown */;
      let lastNonTriviaToken = 0 /* Unknown */;
      const templateStack = [];
      const { prefix, pushTemplate } = getPrefixFromLexState(lexState);
      text = prefix + text;
      const offset = prefix.length;
      if (pushTemplate) {
        templateStack.push(16 /* TemplateHead */);
      }
      scanner2.setText(text);
      let endOfLineState = 0 /* None */;
      const spans = [];
      let angleBracketStack = 0;
      do {
        token = scanner2.scan();
        if (!isTrivia(token)) {
          handleToken();
          lastNonTriviaToken = token;
        }
        const end = scanner2.getTokenEnd();
        pushEncodedClassification(scanner2.getTokenStart(), end, offset, classFromKind(token), spans);
        if (end >= text.length) {
          const end2 = getNewEndOfLineState(scanner2, token, lastOrUndefined(templateStack));
          if (end2 !== void 0) {
            endOfLineState = end2;
          }
        }
      } while (token !== 1 /* EndOfFileToken */);
      function handleToken() {
        switch (token) {
          case 44 /* SlashToken */:
          case 69 /* SlashEqualsToken */:
            if (!noRegexTable[lastNonTriviaToken] && scanner2.reScanSlashToken() === 14 /* RegularExpressionLiteral */) {
              token = 14 /* RegularExpressionLiteral */;
            }
            break;
          case 30 /* LessThanToken */:
            if (lastNonTriviaToken === 80 /* Identifier */) {
              angleBracketStack++;
            }
            break;
          case 32 /* GreaterThanToken */:
            if (angleBracketStack > 0) {
              angleBracketStack--;
            }
            break;
          case 133 /* AnyKeyword */:
          case 154 /* StringKeyword */:
          case 150 /* NumberKeyword */:
          case 136 /* BooleanKeyword */:
          case 155 /* SymbolKeyword */:
            if (angleBracketStack > 0 && !syntacticClassifierAbsent) {
              token = 80 /* Identifier */;
            }
            break;
          case 16 /* TemplateHead */:
            templateStack.push(token);
            break;
          case 19 /* OpenBraceToken */:
            if (templateStack.length > 0) {
              templateStack.push(token);
            }
            break;
          case 20 /* CloseBraceToken */:
            if (templateStack.length > 0) {
              const lastTemplateStackToken = lastOrUndefined(templateStack);
              if (lastTemplateStackToken === 16 /* TemplateHead */) {
                token = scanner2.reScanTemplateToken(
                  /*isTaggedTemplate*/
                  false
                );
                if (token === 18 /* TemplateTail */) {
                  templateStack.pop();
                } else {
                  Debug.assertEqual(token, 17 /* TemplateMiddle */, "Should have been a template middle.");
                }
              } else {
                Debug.assertEqual(lastTemplateStackToken, 19 /* OpenBraceToken */, "Should have been an open brace");
                templateStack.pop();
              }
            }
            break;
          default:
            if (!isKeyword(token)) {
              break;
            }
            if (lastNonTriviaToken === 25 /* DotToken */) {
              token = 80 /* Identifier */;
            } else if (isKeyword(lastNonTriviaToken) && isKeyword(token) && !canFollow(lastNonTriviaToken, token)) {
              token = 80 /* Identifier */;
            }
        }
      }
      return { endOfLineState, spans };
    }
    return { getClassificationsForLine, getEncodedLexicalClassifications };
  }
  function getNewEndOfLineState(scanner2, token, lastOnTemplateStack) {
    switch (token) {
      case 11 /* StringLiteral */: {
        if (!scanner2.isUnterminated())
          return void 0;
        const tokenText = scanner2.getTokenText();
        const lastCharIndex = tokenText.length - 1;
        let numBackslashes = 0;
        while (tokenText.charCodeAt(lastCharIndex - numBackslashes) === 92 /* backslash */) {
          numBackslashes++;
        }
        if ((numBackslashes & 1) === 0)
          return void 0;
        return tokenText.charCodeAt(0) === 34 /* doubleQuote */ ? 3 /* InDoubleQuoteStringLiteral */ : 2 /* InSingleQuoteStringLiteral */;
      }
      case 3 /* MultiLineCommentTrivia */:
        return scanner2.isUnterminated() ? 1 /* InMultiLineCommentTrivia */ : void 0;
      default:
        if (isTemplateLiteralKind(token)) {
          if (!scanner2.isUnterminated()) {
            return void 0;
          }
          switch (token) {
            case 18 /* TemplateTail */:
              return 5 /* InTemplateMiddleOrTail */;
            case 15 /* NoSubstitutionTemplateLiteral */:
              return 4 /* InTemplateHeadOrNoSubstitutionTemplate */;
            default:
              return Debug.fail("Only 'NoSubstitutionTemplateLiteral's and 'TemplateTail's can be unterminated; got SyntaxKind #" + token);
          }
        }
        return lastOnTemplateStack === 16 /* TemplateHead */ ? 6 /* InTemplateSubstitutionPosition */ : void 0;
    }
  }
  function pushEncodedClassification(start, end, offset, classification, result) {
    if (classification === 8 /* whiteSpace */) {
      return;
    }
    if (start === 0 && offset > 0) {
      start += offset;
    }
    const length2 = end - start;
    if (length2 > 0) {
      result.push(start - offset, length2, classification);
    }
  }
  function convertClassificationsToResult(classifications, text) {
    const entries = [];
    const dense = classifications.spans;
    let lastEnd = 0;
    for (let i = 0; i < dense.length; i += 3) {
      const start = dense[i];
      const length2 = dense[i + 1];
      const type = dense[i + 2];
      if (lastEnd >= 0) {
        const whitespaceLength2 = start - lastEnd;
        if (whitespaceLength2 > 0) {
          entries.push({ length: whitespaceLength2, classification: 4 /* Whitespace */ });
        }
      }
      entries.push({ length: length2, classification: convertClassification(type) });
      lastEnd = start + length2;
    }
    const whitespaceLength = text.length - lastEnd;
    if (whitespaceLength > 0) {
      entries.push({ length: whitespaceLength, classification: 4 /* Whitespace */ });
    }
    return { entries, finalLexState: classifications.endOfLineState };
  }
  function convertClassification(type) {
    switch (type) {
      case 1 /* comment */:
        return 3 /* Comment */;
      case 3 /* keyword */:
        return 1 /* Keyword */;
      case 4 /* numericLiteral */:
        return 6 /* NumberLiteral */;
      case 25 /* bigintLiteral */:
        return 7 /* BigIntLiteral */;
      case 5 /* operator */:
        return 2 /* Operator */;
      case 6 /* stringLiteral */:
        return 8 /* StringLiteral */;
      case 8 /* whiteSpace */:
        return 4 /* Whitespace */;
      case 10 /* punctuation */:
        return 0 /* Punctuation */;
      case 2 /* identifier */:
      case 11 /* className */:
      case 12 /* enumName */:
      case 13 /* interfaceName */:
      case 14 /* moduleName */:
      case 15 /* typeParameterName */:
      case 16 /* typeAliasName */:
      case 9 /* text */:
      case 17 /* parameterName */:
        return 5 /* Identifier */;
      default:
        return void 0;
    }
  }
  function canFollow(keyword1, keyword2) {
    if (!isAccessibilityModifier(keyword1)) {
      return true;
    }
    switch (keyword2) {
      case 139 /* GetKeyword */:
      case 153 /* SetKeyword */:
      case 137 /* ConstructorKeyword */:
      case 126 /* StaticKeyword */:
      case 129 /* AccessorKeyword */:
        return true;
      default:
        return false;
    }
  }
  function getPrefixFromLexState(lexState) {
    switch (lexState) {
      case 3 /* InDoubleQuoteStringLiteral */:
        return { prefix: '"\\\n' };
      case 2 /* InSingleQuoteStringLiteral */:
        return { prefix: "'\\\n" };
      case 1 /* InMultiLineCommentTrivia */:
        return { prefix: "/*\n" };
      case 4 /* InTemplateHeadOrNoSubstitutionTemplate */:
        return { prefix: "`\n" };
      case 5 /* InTemplateMiddleOrTail */:
        return { prefix: "}\n", pushTemplate: true };
      case 6 /* InTemplateSubstitutionPosition */:
        return { prefix: "", pushTemplate: true };
      case 0 /* None */:
        return { prefix: "" };
      default:
        return Debug.assertNever(lexState);
    }
  }
  function isBinaryExpressionOperatorToken(token) {
    switch (token) {
      case 42 /* AsteriskToken */:
      case 44 /* SlashToken */:
      case 45 /* PercentToken */:
      case 40 /* PlusToken */:
      case 41 /* MinusToken */:
      case 48 /* LessThanLessThanToken */:
      case 49 /* GreaterThanGreaterThanToken */:
      case 50 /* GreaterThanGreaterThanGreaterThanToken */:
      case 30 /* LessThanToken */:
      case 32 /* GreaterThanToken */:
      case 33 /* LessThanEqualsToken */:
      case 34 /* GreaterThanEqualsToken */:
      case 104 /* InstanceOfKeyword */:
      case 103 /* InKeyword */:
      case 130 /* AsKeyword */:
      case 152 /* SatisfiesKeyword */:
      case 35 /* EqualsEqualsToken */:
      case 36 /* ExclamationEqualsToken */:
      case 37 /* EqualsEqualsEqualsToken */:
      case 38 /* ExclamationEqualsEqualsToken */:
      case 51 /* AmpersandToken */:
      case 53 /* CaretToken */:
      case 52 /* BarToken */:
      case 56 /* AmpersandAmpersandToken */:
      case 57 /* BarBarToken */:
      case 75 /* BarEqualsToken */:
      case 74 /* AmpersandEqualsToken */:
      case 79 /* CaretEqualsToken */:
      case 71 /* LessThanLessThanEqualsToken */:
      case 72 /* GreaterThanGreaterThanEqualsToken */:
      case 73 /* GreaterThanGreaterThanGreaterThanEqualsToken */:
      case 65 /* PlusEqualsToken */:
      case 66 /* MinusEqualsToken */:
      case 67 /* AsteriskEqualsToken */:
      case 69 /* SlashEqualsToken */:
      case 70 /* PercentEqualsToken */:
      case 64 /* EqualsToken */:
      case 28 /* CommaToken */:
      case 61 /* QuestionQuestionToken */:
      case 76 /* BarBarEqualsToken */:
      case 77 /* AmpersandAmpersandEqualsToken */:
      case 78 /* QuestionQuestionEqualsToken */:
        return true;
      default:
        return false;
    }
  }
  function isPrefixUnaryExpressionOperatorToken(token) {
    switch (token) {
      case 40 /* PlusToken */:
      case 41 /* MinusToken */:
      case 55 /* TildeToken */:
      case 54 /* ExclamationToken */:
      case 46 /* PlusPlusToken */:
      case 47 /* MinusMinusToken */:
        return true;
      default:
        return false;
    }
  }
  function classFromKind(token) {
    if (isKeyword(token)) {
      return 3 /* keyword */;
    } else if (isBinaryExpressionOperatorToken(token) || isPrefixUnaryExpressionOperatorToken(token)) {
      return 5 /* operator */;
    } else if (token >= 19 /* FirstPunctuation */ && token <= 79 /* LastPunctuation */) {
      return 10 /* punctuation */;
    }
    switch (token) {
      case 9 /* NumericLiteral */:
        return 4 /* numericLiteral */;
      case 10 /* BigIntLiteral */:
        return 25 /* bigintLiteral */;
      case 11 /* StringLiteral */:
        return 6 /* stringLiteral */;
      case 14 /* RegularExpressionLiteral */:
        return 7 /* regularExpressionLiteral */;
      case 7 /* ConflictMarkerTrivia */:
      case 3 /* MultiLineCommentTrivia */:
      case 2 /* SingleLineCommentTrivia */:
        return 1 /* comment */;
      case 5 /* WhitespaceTrivia */:
      case 4 /* NewLineTrivia */:
        return 8 /* whiteSpace */;
      case 80 /* Identifier */:
      default:
        if (isTemplateLiteralKind(token)) {
          return 6 /* stringLiteral */;
        }
        return 2 /* identifier */;
    }
  }
  function getSemanticClassifications(typeChecker, cancellationToken, sourceFile, classifiableNames, span) {
    return convertClassificationsToSpans(getEncodedSemanticClassifications(typeChecker, cancellationToken, sourceFile, classifiableNames, span));
  }
  function checkForClassificationCancellation(cancellationToken, kind) {
    switch (kind) {
      case 266 /* ModuleDeclaration */:
      case 262 /* ClassDeclaration */:
      case 263 /* InterfaceDeclaration */:
      case 261 /* FunctionDeclaration */:
      case 230 /* ClassExpression */:
      case 217 /* FunctionExpression */:
      case 218 /* ArrowFunction */:
        cancellationToken.throwIfCancellationRequested();
    }
  }
  function getEncodedSemanticClassifications(typeChecker, cancellationToken, sourceFile, classifiableNames, span) {
    const spans = [];
    sourceFile.forEachChild(function cb(node) {
      if (!node || !textSpanIntersectsWith(span, node.pos, node.getFullWidth())) {
        return;
      }
      checkForClassificationCancellation(cancellationToken, node.kind);
      if (isIdentifier(node) && !nodeIsMissing(node) && classifiableNames.has(node.escapedText)) {
        const symbol = typeChecker.getSymbolAtLocation(node);
        const type = symbol && classifySymbol(symbol, getMeaningFromLocation(node), typeChecker);
        if (type) {
          pushClassification(node.getStart(sourceFile), node.getEnd(), type);
        }
      }
      node.forEachChild(cb);
    });
    return { spans, endOfLineState: 0 /* None */ };
    function pushClassification(start, end, type) {
      const length2 = end - start;
      Debug.assert(length2 > 0, `Classification had non-positive length of ${length2}`);
      spans.push(start);
      spans.push(length2);
      spans.push(type);
    }
  }
  function classifySymbol(symbol, meaningAtPosition, checker) {
    const flags = symbol.getFlags();
    if ((flags & 2885600 /* Classifiable */) === 0 /* None */) {
      return void 0;
    } else if (flags & 32 /* Class */) {
      return 11 /* className */;
    } else if (flags & 384 /* Enum */) {
      return 12 /* enumName */;
    } else if (flags & 524288 /* TypeAlias */) {
      return 16 /* typeAliasName */;
    } else if (flags & 1536 /* Module */) {
      return meaningAtPosition & 4 /* Namespace */ || meaningAtPosition & 1 /* Value */ && hasValueSideModule(symbol) ? 14 /* moduleName */ : void 0;
    } else if (flags & 2097152 /* Alias */) {
      return classifySymbol(checker.getAliasedSymbol(symbol), meaningAtPosition, checker);
    } else if (meaningAtPosition & 2 /* Type */) {
      return flags & 64 /* Interface */ ? 13 /* interfaceName */ : flags & 262144 /* TypeParameter */ ? 15 /* typeParameterName */ : void 0;
    } else {
      return void 0;
    }
  }
  function hasValueSideModule(symbol) {
    return some(symbol.declarations, (declaration) => isModuleDeclaration(declaration) && getModuleInstanceState(declaration) === 1 /* Instantiated */);
  }
  function getClassificationTypeName(type) {
    switch (type) {
      case 1 /* comment */:
        return "comment" /* comment */;
      case 2 /* identifier */:
        return "identifier" /* identifier */;
      case 3 /* keyword */:
        return "keyword" /* keyword */;
      case 4 /* numericLiteral */:
        return "number" /* numericLiteral */;
      case 25 /* bigintLiteral */:
        return "bigint" /* bigintLiteral */;
      case 5 /* operator */:
        return "operator" /* operator */;
      case 6 /* stringLiteral */:
        return "string" /* stringLiteral */;
      case 8 /* whiteSpace */:
        return "whitespace" /* whiteSpace */;
      case 9 /* text */:
        return "text" /* text */;
      case 10 /* punctuation */:
        return "punctuation" /* punctuation */;
      case 11 /* className */:
        return "class name" /* className */;
      case 12 /* enumName */:
        return "enum name" /* enumName */;
      case 13 /* interfaceName */:
        return "interface name" /* interfaceName */;
      case 14 /* moduleName */:
        return "module name" /* moduleName */;
      case 15 /* typeParameterName */:
        return "type parameter name" /* typeParameterName */;
      case 16 /* typeAliasName */:
        return "type alias name" /* typeAliasName */;
      case 17 /* parameterName */:
        return "parameter name" /* parameterName */;
      case 18 /* docCommentTagName */:
        return "doc comment tag name" /* docCommentTagName */;
      case 19 /* jsxOpenTagName */:
        return "jsx open tag name" /* jsxOpenTagName */;
      case 20 /* jsxCloseTagName */:
        return "jsx close tag name" /* jsxCloseTagName */;
      case 21 /* jsxSelfClosingTagName */:
        return "jsx self closing tag name" /* jsxSelfClosingTagName */;
      case 22 /* jsxAttribute */:
        return "jsx attribute" /* jsxAttribute */;
      case 23 /* jsxText */:
        return "jsx text" /* jsxText */;
      case 24 /* jsxAttributeStringLiteralValue */:
        return "jsx attribute string literal value" /* jsxAttributeStringLiteralValue */;
      default:
        return void 0;
    }
  }
  function convertClassificationsToSpans(classifications) {
    Debug.assert(classifications.spans.length % 3 === 0);
    const dense = classifications.spans;
    const result = [];
    for (let i = 0; i < dense.length; i += 3) {
      result.push({
        textSpan: createTextSpan(dense[i], dense[i + 1]),
        classificationType: getClassificationTypeName(dense[i + 2])
      });
    }
    return result;
  }
  function getSyntacticClassifications(cancellationToken, sourceFile, span) {
    return convertClassificationsToSpans(getEncodedSyntacticClassifications(cancellationToken, sourceFile, span));
  }
  function getEncodedSyntacticClassifications(cancellationToken, sourceFile, span) {
    const spanStart = span.start;
    const spanLength = span.length;
    const triviaScanner = createScanner(
      99 /* Latest */,
      /*skipTrivia*/
      false,
      sourceFile.languageVariant,
      sourceFile.text
    );
    const mergeConflictScanner = createScanner(
      99 /* Latest */,
      /*skipTrivia*/
      false,
      sourceFile.languageVariant,
      sourceFile.text
    );
    const result = [];
    processElement(sourceFile);
    return { spans: result, endOfLineState: 0 /* None */ };
    function pushClassification(start, length2, type) {
      result.push(start);
      result.push(length2);
      result.push(type);
    }
    function classifyLeadingTriviaAndGetTokenStart(token) {
      triviaScanner.resetTokenState(token.pos);
      while (true) {
        const start = triviaScanner.getTokenEnd();
        if (!couldStartTrivia(sourceFile.text, start)) {
          return start;
        }
        const kind = triviaScanner.scan();
        const end = triviaScanner.getTokenEnd();
        const width = end - start;
        if (!isTrivia(kind)) {
          return start;
        }
        switch (kind) {
          case 4 /* NewLineTrivia */:
          case 5 /* WhitespaceTrivia */:
            continue;
          case 2 /* SingleLineCommentTrivia */:
          case 3 /* MultiLineCommentTrivia */:
            classifyComment(token, kind, start, width);
            triviaScanner.resetTokenState(end);
            continue;
          case 7 /* ConflictMarkerTrivia */:
            const text = sourceFile.text;
            const ch = text.charCodeAt(start);
            if (ch === 60 /* lessThan */ || ch === 62 /* greaterThan */) {
              pushClassification(start, width, 1 /* comment */);
              continue;
            }
            Debug.assert(ch === 124 /* bar */ || ch === 61 /* equals */);
            classifyDisabledMergeCode(text, start, end);
            break;
          case 6 /* ShebangTrivia */:
            break;
          default:
            Debug.assertNever(kind);
        }
      }
    }
    function classifyComment(token, kind, start, width) {
      if (kind === 3 /* MultiLineCommentTrivia */) {
        const docCommentAndDiagnostics = parseIsolatedJSDocComment(sourceFile.text, start, width);
        if (docCommentAndDiagnostics && docCommentAndDiagnostics.jsDoc) {
          setParent(docCommentAndDiagnostics.jsDoc, token);
          classifyJSDocComment(docCommentAndDiagnostics.jsDoc);
          return;
        }
      } else if (kind === 2 /* SingleLineCommentTrivia */) {
        if (tryClassifyTripleSlashComment(start, width)) {
          return;
        }
      }
      pushCommentRange(start, width);
    }
    function pushCommentRange(start, width) {
      pushClassification(start, width, 1 /* comment */);
    }
    function classifyJSDocComment(docComment) {
      var _a, _b, _c, _d, _e, _f, _g, _h;
      let pos = docComment.pos;
      if (docComment.tags) {
        for (const tag of docComment.tags) {
          if (tag.pos !== pos) {
            pushCommentRange(pos, tag.pos - pos);
          }
          pushClassification(tag.pos, 1, 10 /* punctuation */);
          pushClassification(tag.tagName.pos, tag.tagName.end - tag.tagName.pos, 18 /* docCommentTagName */);
          pos = tag.tagName.end;
          let commentStart = tag.tagName.end;
          switch (tag.kind) {
            case 347 /* JSDocParameterTag */:
              const param = tag;
              processJSDocParameterTag(param);
              commentStart = param.isNameFirst && ((_a = param.typeExpression) == null ? void 0 : _a.end) || param.name.end;
              break;
            case 354 /* JSDocPropertyTag */:
              const prop = tag;
              commentStart = prop.isNameFirst && ((_b = prop.typeExpression) == null ? void 0 : _b.end) || prop.name.end;
              break;
            case 351 /* JSDocTemplateTag */:
              processJSDocTemplateTag(tag);
              pos = tag.end;
              commentStart = tag.typeParameters.end;
              break;
            case 352 /* JSDocTypedefTag */:
              const type = tag;
              commentStart = ((_c = type.typeExpression) == null ? void 0 : _c.kind) === 315 /* JSDocTypeExpression */ && ((_d = type.fullName) == null ? void 0 : _d.end) || ((_e = type.typeExpression) == null ? void 0 : _e.end) || commentStart;
              break;
            case 344 /* JSDocCallbackTag */:
              commentStart = tag.typeExpression.end;
              break;
            case 350 /* JSDocTypeTag */:
              processElement(tag.typeExpression);
              pos = tag.end;
              commentStart = tag.typeExpression.end;
              break;
            case 349 /* JSDocThisTag */:
            case 346 /* JSDocEnumTag */:
              commentStart = tag.typeExpression.end;
              break;
            case 348 /* JSDocReturnTag */:
              processElement(tag.typeExpression);
              pos = tag.end;
              commentStart = ((_f = tag.typeExpression) == null ? void 0 : _f.end) || commentStart;
              break;
            case 353 /* JSDocSeeTag */:
              commentStart = ((_g = tag.name) == null ? void 0 : _g.end) || commentStart;
              break;
            case 334 /* JSDocAugmentsTag */:
            case 335 /* JSDocImplementsTag */:
              commentStart = tag.class.end;
              break;
            case 355 /* JSDocThrowsTag */:
              processElement(tag.typeExpression);
              pos = tag.end;
              commentStart = ((_h = tag.typeExpression) == null ? void 0 : _h.end) || commentStart;
              break;
          }
          if (typeof tag.comment === "object") {
            pushCommentRange(tag.comment.pos, tag.comment.end - tag.comment.pos);
          } else if (typeof tag.comment === "string") {
            pushCommentRange(commentStart, tag.end - commentStart);
          }
        }
      }
      if (pos !== docComment.end) {
        pushCommentRange(pos, docComment.end - pos);
      }
      return;
      function processJSDocParameterTag(tag) {
        if (tag.isNameFirst) {
          pushCommentRange(pos, tag.name.pos - pos);
          pushClassification(tag.name.pos, tag.name.end - tag.name.pos, 17 /* parameterName */);
          pos = tag.name.end;
        }
        if (tag.typeExpression) {
          pushCommentRange(pos, tag.typeExpression.pos - pos);
          processElement(tag.typeExpression);
          pos = tag.typeExpression.end;
        }
        if (!tag.isNameFirst) {
          pushCommentRange(pos, tag.name.pos - pos);
          pushClassification(tag.name.pos, tag.name.end - tag.name.pos, 17 /* parameterName */);
          pos = tag.name.end;
        }
      }
    }
    function tryClassifyTripleSlashComment(start, width) {
      const tripleSlashXMLCommentRegEx = /^(\/\/\/\s*)(<)(?:(\S+)((?:[^/]|\/[^>])*)(\/>)?)?/im;
      const attributeRegex = /(\s)(\S+)(\s*)(=)(\s*)('[^']+'|"[^"]+")/img;
      const text = sourceFile.text.substr(start, width);
      const match = tripleSlashXMLCommentRegEx.exec(text);
      if (!match) {
        return false;
      }
      if (!match[3] || !(match[3] in commentPragmas)) {
        return false;
      }
      let pos = start;
      pushCommentRange(pos, match[1].length);
      pos += match[1].length;
      pushClassification(pos, match[2].length, 10 /* punctuation */);
      pos += match[2].length;
      pushClassification(pos, match[3].length, 21 /* jsxSelfClosingTagName */);
      pos += match[3].length;
      const attrText = match[4];
      let attrPos = pos;
      while (true) {
        const attrMatch = attributeRegex.exec(attrText);
        if (!attrMatch) {
          break;
        }
        const newAttrPos = pos + attrMatch.index + attrMatch[1].length;
        if (newAttrPos > attrPos) {
          pushCommentRange(attrPos, newAttrPos - attrPos);
          attrPos = newAttrPos;
        }
        pushClassification(attrPos, attrMatch[2].length, 22 /* jsxAttribute */);
        attrPos += attrMatch[2].length;
        if (attrMatch[3].length) {
          pushCommentRange(attrPos, attrMatch[3].length);
          attrPos += attrMatch[3].length;
        }
        pushClassification(attrPos, attrMatch[4].length, 5 /* operator */);
        attrPos += attrMatch[4].length;
        if (attrMatch[5].length) {
          pushCommentRange(attrPos, attrMatch[5].length);
          attrPos += attrMatch[5].length;
        }
        pushClassification(attrPos, attrMatch[6].length, 24 /* jsxAttributeStringLiteralValue */);
        attrPos += attrMatch[6].length;
      }
      pos += match[4].length;
      if (pos > attrPos) {
        pushCommentRange(attrPos, pos - attrPos);
      }
      if (match[5]) {
        pushClassification(pos, match[5].length, 10 /* punctuation */);
        pos += match[5].length;
      }
      const end = start + width;
      if (pos < end) {
        pushCommentRange(pos, end - pos);
      }
      return true;
    }
    function processJSDocTemplateTag(tag) {
      for (const child of tag.getChildren()) {
        processElement(child);
      }
    }
    function classifyDisabledMergeCode(text, start, end) {
      let i;
      for (i = start; i < end; i++) {
        if (isLineBreak(text.charCodeAt(i))) {
          break;
        }
      }
      pushClassification(start, i - start, 1 /* comment */);
      mergeConflictScanner.resetTokenState(i);
      while (mergeConflictScanner.getTokenEnd() < end) {
        classifyDisabledCodeToken();
      }
    }
    function classifyDisabledCodeToken() {
      const start = mergeConflictScanner.getTokenEnd();
      const tokenKind = mergeConflictScanner.scan();
      const end = mergeConflictScanner.getTokenEnd();
      const type = classifyTokenType(tokenKind);
      if (type) {
        pushClassification(start, end - start, type);
      }
    }
    function tryClassifyNode(node) {
      if (isJSDoc(node)) {
        return true;
      }
      if (nodeIsMissing(node)) {
        return true;
      }
      const classifiedElementName = tryClassifyJsxElementName(node);
      if (!isToken(node) && node.kind !== 12 /* JsxText */ && classifiedElementName === void 0) {
        return false;
      }
      const tokenStart = node.kind === 12 /* JsxText */ ? node.pos : classifyLeadingTriviaAndGetTokenStart(node);
      const tokenWidth = node.end - tokenStart;
      Debug.assert(tokenWidth >= 0);
      if (tokenWidth > 0) {
        const type = classifiedElementName || classifyTokenType(node.kind, node);
        if (type) {
          pushClassification(tokenStart, tokenWidth, type);
        }
      }
      return true;
    }
    function tryClassifyJsxElementName(token) {
      switch (token.parent && token.parent.kind) {
        case 285 /* JsxOpeningElement */:
          if (token.parent.tagName === token) {
            return 19 /* jsxOpenTagName */;
          }
          break;
        case 286 /* JsxClosingElement */:
          if (token.parent.tagName === token) {
            return 20 /* jsxCloseTagName */;
          }
          break;
        case 284 /* JsxSelfClosingElement */:
          if (token.parent.tagName === token) {
            return 21 /* jsxSelfClosingTagName */;
          }
          break;
        case 290 /* JsxAttribute */:
          if (token.parent.name === token) {
            return 22 /* jsxAttribute */;
          }
          break;
      }
      return void 0;
    }
    function classifyTokenType(tokenKind, token) {
      if (isKeyword(tokenKind)) {
        return 3 /* keyword */;
      }
      if (tokenKind === 30 /* LessThanToken */ || tokenKind === 32 /* GreaterThanToken */) {
        if (token && getTypeArgumentOrTypeParameterList(token.parent)) {
          return 10 /* punctuation */;
        }
      }
      if (isPunctuation(tokenKind)) {
        if (token) {
          const parent2 = token.parent;
          if (tokenKind === 64 /* EqualsToken */) {
            if (parent2.kind === 259 /* VariableDeclaration */ || parent2.kind === 171 /* PropertyDeclaration */ || parent2.kind === 168 /* Parameter */ || parent2.kind === 290 /* JsxAttribute */) {
              return 5 /* operator */;
            }
          }
          if (parent2.kind === 225 /* BinaryExpression */ || parent2.kind === 223 /* PrefixUnaryExpression */ || parent2.kind === 224 /* PostfixUnaryExpression */ || parent2.kind === 226 /* ConditionalExpression */) {
            return 5 /* operator */;
          }
        }
        return 10 /* punctuation */;
      } else if (tokenKind === 9 /* NumericLiteral */) {
        return 4 /* numericLiteral */;
      } else if (tokenKind === 10 /* BigIntLiteral */) {
        return 25 /* bigintLiteral */;
      } else if (tokenKind === 11 /* StringLiteral */) {
        return token && token.parent.kind === 290 /* JsxAttribute */ ? 24 /* jsxAttributeStringLiteralValue */ : 6 /* stringLiteral */;
      } else if (tokenKind === 14 /* RegularExpressionLiteral */) {
        return 6 /* stringLiteral */;
      } else if (isTemplateLiteralKind(tokenKind)) {
        return 6 /* stringLiteral */;
      } else if (tokenKind === 12 /* JsxText */) {
        return 23 /* jsxText */;
      } else if (tokenKind === 80 /* Identifier */) {
        if (token) {
          switch (token.parent.kind) {
            case 262 /* ClassDeclaration */:
              if (token.parent.name === token) {
                return 11 /* className */;
              }
              return;
            case 167 /* TypeParameter */:
              if (token.parent.name === token) {
                return 15 /* typeParameterName */;
              }
              return;
            case 263 /* InterfaceDeclaration */:
              if (token.parent.name === token) {
                return 13 /* interfaceName */;
              }
              return;
            case 265 /* EnumDeclaration */:
              if (token.parent.name === token) {
                return 12 /* enumName */;
              }
              return;
            case 266 /* ModuleDeclaration */:
              if (token.parent.name === token) {
                return 14 /* moduleName */;
              }
              return;
            case 168 /* Parameter */:
              if (token.parent.name === token) {
                return isThisIdentifier(token) ? 3 /* keyword */ : 17 /* parameterName */;
              }
              return;
          }
          if (isConstTypeReference(token.parent)) {
            return 3 /* keyword */;
          }
        }
        return 2 /* identifier */;
      }
    }
    function processElement(element) {
      if (!element) {
        return;
      }
      if (decodedTextSpanIntersectsWith(spanStart, spanLength, element.pos, element.getFullWidth())) {
        checkForClassificationCancellation(cancellationToken, element.kind);
        for (const child of element.getChildren(sourceFile)) {
          if (!tryClassifyNode(child)) {
            processElement(child);
          }
        }
      }
    }
  }
  var noRegexTable;
  var init_classifier = __esm({
    "src/services/classifier.ts"() {
      "use strict";
      init_ts4();
      noRegexTable = arrayToNumericMap([
        80 /* Identifier */,
        11 /* StringLiteral */,
        9 /* NumericLiteral */,
        10 /* BigIntLiteral */,
        14 /* RegularExpressionLiteral */,
        110 /* ThisKeyword */,
        46 /* PlusPlusToken */,
        47 /* MinusMinusToken */,
        22 /* CloseParenToken */,
        24 /* CloseBracketToken */,
        20 /* CloseBraceToken */,
        112 /* TrueKeyword */,
        97 /* FalseKeyword */
      ], (token) => token, () => true);
    }
  });

  // src/services/documentHighlights.ts
  var DocumentHighlights;
  var init_documentHighlights = __esm({
    "src/services/documentHighlights.ts"() {
      "use strict";
      init_ts4();
      ((DocumentHighlights3) => {
        function getDocumentHighlights(program, cancellationToken, sourceFile, position, sourceFilesToSearch) {
          const node = getTouchingPropertyName(sourceFile, position);
          if (node.parent && (isJsxOpeningElement(node.parent) && node.parent.tagName === node || isJsxClosingElement(node.parent))) {
            const { openingElement, closingElement } = node.parent.parent;
            const highlightSpans = [openingElement, closingElement].map(({ tagName }) => getHighlightSpanForNode(tagName, sourceFile));
            return [{ fileName: sourceFile.fileName, highlightSpans }];
          }
          return getSemanticDocumentHighlights(position, node, program, cancellationToken, sourceFilesToSearch) || getSyntacticDocumentHighlights(node, sourceFile);
        }
        DocumentHighlights3.getDocumentHighlights = getDocumentHighlights;
        function getHighlightSpanForNode(node, sourceFile) {
          return {
            fileName: sourceFile.fileName,
            textSpan: createTextSpanFromNode(node, sourceFile),
            kind: "none" /* none */
          };
        }
        function getSemanticDocumentHighlights(position, node, program, cancellationToken, sourceFilesToSearch) {
          const sourceFilesSet = new Set(sourceFilesToSearch.map((f) => f.fileName));
          const referenceEntries = ts_FindAllReferences_exports.getReferenceEntriesForNode(
            position,
            node,
            program,
            sourceFilesToSearch,
            cancellationToken,
            /*options*/
            void 0,
            sourceFilesSet
          );
          if (!referenceEntries)
            return void 0;
          const map2 = arrayToMultiMap(referenceEntries.map(ts_FindAllReferences_exports.toHighlightSpan), (e) => e.fileName, (e) => e.span);
          const getCanonicalFileName = createGetCanonicalFileName(program.useCaseSensitiveFileNames());
          return arrayFrom(mapDefinedIterator(map2.entries(), ([fileName, highlightSpans]) => {
            if (!sourceFilesSet.has(fileName)) {
              if (!program.redirectTargetsMap.has(toPath(fileName, program.getCurrentDirectory(), getCanonicalFileName))) {
                return void 0;
              }
              const redirectTarget = program.getSourceFile(fileName);
              const redirect = find(sourceFilesToSearch, (f) => !!f.redirectInfo && f.redirectInfo.redirectTarget === redirectTarget);
              fileName = redirect.fileName;
              Debug.assert(sourceFilesSet.has(fileName));
            }
            return { fileName, highlightSpans };
          }));
        }
        function getSyntacticDocumentHighlights(node, sourceFile) {
          const highlightSpans = getHighlightSpans(node, sourceFile);
          return highlightSpans && [{ fileName: sourceFile.fileName, highlightSpans }];
        }
        function getHighlightSpans(node, sourceFile) {
          switch (node.kind) {
            case 101 /* IfKeyword */:
            case 93 /* ElseKeyword */:
              return isIfStatement(node.parent) ? getIfElseOccurrences(node.parent, sourceFile) : void 0;
            case 107 /* ReturnKeyword */:
              return useParent(node.parent, isReturnStatement, getReturnOccurrences);
            case 111 /* ThrowKeyword */:
              return useParent(node.parent, isThrowStatement, getThrowOccurrences);
            case 113 /* TryKeyword */:
            case 85 /* CatchKeyword */:
            case 98 /* FinallyKeyword */:
              const tryStatement = node.kind === 85 /* CatchKeyword */ ? node.parent.parent : node.parent;
              return useParent(tryStatement, isTryStatement, getTryCatchFinallyOccurrences);
            case 109 /* SwitchKeyword */:
              return useParent(node.parent, isSwitchStatement, getSwitchCaseDefaultOccurrences);
            case 84 /* CaseKeyword */:
            case 90 /* DefaultKeyword */: {
              if (isDefaultClause(node.parent) || isCaseClause(node.parent)) {
                return useParent(node.parent.parent.parent, isSwitchStatement, getSwitchCaseDefaultOccurrences);
              }
              return void 0;
            }
            case 83 /* BreakKeyword */:
            case 88 /* ContinueKeyword */:
              return useParent(node.parent, isBreakOrContinueStatement, getBreakOrContinueStatementOccurrences);
            case 99 /* ForKeyword */:
            case 117 /* WhileKeyword */:
            case 92 /* DoKeyword */:
              return useParent(node.parent, (n) => isIterationStatement(
                n,
                /*lookInLabeledStatements*/
                true
              ), getLoopBreakContinueOccurrences);
            case 137 /* ConstructorKeyword */:
              return getFromAllDeclarations(isConstructorDeclaration, [137 /* ConstructorKeyword */]);
            case 139 /* GetKeyword */:
            case 153 /* SetKeyword */:
              return getFromAllDeclarations(isAccessor, [139 /* GetKeyword */, 153 /* SetKeyword */]);
            case 135 /* AwaitKeyword */:
              return useParent(node.parent, isAwaitExpression, getAsyncAndAwaitOccurrences);
            case 134 /* AsyncKeyword */:
              return highlightSpans(getAsyncAndAwaitOccurrences(node));
            case 127 /* YieldKeyword */:
              return highlightSpans(getYieldOccurrences(node));
            case 103 /* InKeyword */:
              return void 0;
            default:
              return isModifierKind(node.kind) && (isDeclaration(node.parent) || isVariableStatement(node.parent)) ? highlightSpans(getModifierOccurrences(node.kind, node.parent)) : void 0;
          }
          function getFromAllDeclarations(nodeTest, keywords) {
            return useParent(node.parent, nodeTest, (decl) => {
              var _a;
              return mapDefined((_a = tryCast(decl, canHaveSymbol)) == null ? void 0 : _a.symbol.declarations, (d) => nodeTest(d) ? find(d.getChildren(sourceFile), (c) => contains(keywords, c.kind)) : void 0);
            });
          }
          function useParent(node2, nodeTest, getNodes4) {
            return nodeTest(node2) ? highlightSpans(getNodes4(node2, sourceFile)) : void 0;
          }
          function highlightSpans(nodes) {
            return nodes && nodes.map((node2) => getHighlightSpanForNode(node2, sourceFile));
          }
        }
        function aggregateOwnedThrowStatements(node) {
          if (isThrowStatement(node)) {
            return [node];
          } else if (isTryStatement(node)) {
            return concatenate(
              node.catchClause ? aggregateOwnedThrowStatements(node.catchClause) : node.tryBlock && aggregateOwnedThrowStatements(node.tryBlock),
              node.finallyBlock && aggregateOwnedThrowStatements(node.finallyBlock)
            );
          }
          return isFunctionLike(node) ? void 0 : flatMapChildren(node, aggregateOwnedThrowStatements);
        }
        function getThrowStatementOwner(throwStatement) {
          let child = throwStatement;
          while (child.parent) {
            const parent2 = child.parent;
            if (isFunctionBlock(parent2) || parent2.kind === 311 /* SourceFile */) {
              return parent2;
            }
            if (isTryStatement(parent2) && parent2.tryBlock === child && parent2.catchClause) {
              return child;
            }
            child = parent2;
          }
          return void 0;
        }
        function aggregateAllBreakAndContinueStatements(node) {
          return isBreakOrContinueStatement(node) ? [node] : isFunctionLike(node) ? void 0 : flatMapChildren(node, aggregateAllBreakAndContinueStatements);
        }
        function flatMapChildren(node, cb) {
          const result = [];
          node.forEachChild((child) => {
            const value = cb(child);
            if (value !== void 0) {
              result.push(...toArray(value));
            }
          });
          return result;
        }
        function ownsBreakOrContinueStatement(owner, statement) {
          const actualOwner = getBreakOrContinueOwner(statement);
          return !!actualOwner && actualOwner === owner;
        }
        function getBreakOrContinueOwner(statement) {
          return findAncestor(statement, (node) => {
            switch (node.kind) {
              case 254 /* SwitchStatement */:
                if (statement.kind === 250 /* ContinueStatement */) {
                  return false;
                }
              case 247 /* ForStatement */:
              case 248 /* ForInStatement */:
              case 249 /* ForOfStatement */:
              case 246 /* WhileStatement */:
              case 245 /* DoStatement */:
                return !statement.label || isLabeledBy(node, statement.label.escapedText);
              default:
                return isFunctionLike(node) && "quit";
            }
          });
        }
        function getModifierOccurrences(modifier, declaration) {
          return mapDefined(getNodesToSearchForModifier(declaration, modifierToFlag(modifier)), (node) => findModifier(node, modifier));
        }
        function getNodesToSearchForModifier(declaration, modifierFlag) {
          const container = declaration.parent;
          switch (container.kind) {
            case 267 /* ModuleBlock */:
            case 311 /* SourceFile */:
            case 240 /* Block */:
            case 295 /* CaseClause */:
            case 296 /* DefaultClause */:
              if (modifierFlag & 256 /* Abstract */ && isClassDeclaration(declaration)) {
                return [...declaration.members, declaration];
              } else {
                return container.statements;
              }
            case 175 /* Constructor */:
            case 173 /* MethodDeclaration */:
            case 261 /* FunctionDeclaration */:
              return [...container.parameters, ...isClassLike(container.parent) ? container.parent.members : []];
            case 262 /* ClassDeclaration */:
            case 230 /* ClassExpression */:
            case 263 /* InterfaceDeclaration */:
            case 186 /* TypeLiteral */:
              const nodes = container.members;
              if (modifierFlag & (28 /* AccessibilityModifier */ | 64 /* Readonly */)) {
                const constructor = find(container.members, isConstructorDeclaration);
                if (constructor) {
                  return [...nodes, ...constructor.parameters];
                }
              } else if (modifierFlag & 256 /* Abstract */) {
                return [...nodes, container];
              }
              return nodes;
            case 209 /* ObjectLiteralExpression */:
              return void 0;
            default:
              Debug.assertNever(container, "Invalid container kind.");
          }
        }
        function pushKeywordIf(keywordList, token, ...expected) {
          if (token && contains(expected, token.kind)) {
            keywordList.push(token);
            return true;
          }
          return false;
        }
        function getLoopBreakContinueOccurrences(loopNode) {
          const keywords = [];
          if (pushKeywordIf(keywords, loopNode.getFirstToken(), 99 /* ForKeyword */, 117 /* WhileKeyword */, 92 /* DoKeyword */)) {
            if (loopNode.kind === 245 /* DoStatement */) {
              const loopTokens = loopNode.getChildren();
              for (let i = loopTokens.length - 1; i >= 0; i--) {
                if (pushKeywordIf(keywords, loopTokens[i], 117 /* WhileKeyword */)) {
                  break;
                }
              }
            }
          }
          forEach(aggregateAllBreakAndContinueStatements(loopNode.statement), (statement) => {
            if (ownsBreakOrContinueStatement(loopNode, statement)) {
              pushKeywordIf(keywords, statement.getFirstToken(), 83 /* BreakKeyword */, 88 /* ContinueKeyword */);
            }
          });
          return keywords;
        }
        function getBreakOrContinueStatementOccurrences(breakOrContinueStatement) {
          const owner = getBreakOrContinueOwner(breakOrContinueStatement);
          if (owner) {
            switch (owner.kind) {
              case 247 /* ForStatement */:
              case 248 /* ForInStatement */:
              case 249 /* ForOfStatement */:
              case 245 /* DoStatement */:
              case 246 /* WhileStatement */:
                return getLoopBreakContinueOccurrences(owner);
              case 254 /* SwitchStatement */:
                return getSwitchCaseDefaultOccurrences(owner);
            }
          }
          return void 0;
        }
        function getSwitchCaseDefaultOccurrences(switchStatement) {
          const keywords = [];
          pushKeywordIf(keywords, switchStatement.getFirstToken(), 109 /* SwitchKeyword */);
          forEach(switchStatement.caseBlock.clauses, (clause) => {
            pushKeywordIf(keywords, clause.getFirstToken(), 84 /* CaseKeyword */, 90 /* DefaultKeyword */);
            forEach(aggregateAllBreakAndContinueStatements(clause), (statement) => {
              if (ownsBreakOrContinueStatement(switchStatement, statement)) {
                pushKeywordIf(keywords, statement.getFirstToken(), 83 /* BreakKeyword */);
              }
            });
          });
          return keywords;
        }
        function getTryCatchFinallyOccurrences(tryStatement, sourceFile) {
          const keywords = [];
          pushKeywordIf(keywords, tryStatement.getFirstToken(), 113 /* TryKeyword */);
          if (tryStatement.catchClause) {
            pushKeywordIf(keywords, tryStatement.catchClause.getFirstToken(), 85 /* CatchKeyword */);
          }
          if (tryStatement.finallyBlock) {
            const finallyKeyword = findChildOfKind(tryStatement, 98 /* FinallyKeyword */, sourceFile);
            pushKeywordIf(keywords, finallyKeyword, 98 /* FinallyKeyword */);
          }
          return keywords;
        }
        function getThrowOccurrences(throwStatement, sourceFile) {
          const owner = getThrowStatementOwner(throwStatement);
          if (!owner) {
            return void 0;
          }
          const keywords = [];
          forEach(aggregateOwnedThrowStatements(owner), (throwStatement2) => {
            keywords.push(findChildOfKind(throwStatement2, 111 /* ThrowKeyword */, sourceFile));
          });
          if (isFunctionBlock(owner)) {
            forEachReturnStatement(owner, (returnStatement) => {
              keywords.push(findChildOfKind(returnStatement, 107 /* ReturnKeyword */, sourceFile));
            });
          }
          return keywords;
        }
        function getReturnOccurrences(returnStatement, sourceFile) {
          const func = getContainingFunction(returnStatement);
          if (!func) {
            return void 0;
          }
          const keywords = [];
          forEachReturnStatement(cast(func.body, isBlock), (returnStatement2) => {
            keywords.push(findChildOfKind(returnStatement2, 107 /* ReturnKeyword */, sourceFile));
          });
          forEach(aggregateOwnedThrowStatements(func.body), (throwStatement) => {
            keywords.push(findChildOfKind(throwStatement, 111 /* ThrowKeyword */, sourceFile));
          });
          return keywords;
        }
        function getAsyncAndAwaitOccurrences(node) {
          const func = getContainingFunction(node);
          if (!func) {
            return void 0;
          }
          const keywords = [];
          if (func.modifiers) {
            func.modifiers.forEach((modifier) => {
              pushKeywordIf(keywords, modifier, 134 /* AsyncKeyword */);
            });
          }
          forEachChild(func, (child) => {
            traverseWithoutCrossingFunction(child, (node2) => {
              if (isAwaitExpression(node2)) {
                pushKeywordIf(keywords, node2.getFirstToken(), 135 /* AwaitKeyword */);
              }
            });
          });
          return keywords;
        }
        function getYieldOccurrences(node) {
          const func = getContainingFunction(node);
          if (!func) {
            return void 0;
          }
          const keywords = [];
          forEachChild(func, (child) => {
            traverseWithoutCrossingFunction(child, (node2) => {
              if (isYieldExpression(node2)) {
                pushKeywordIf(keywords, node2.getFirstToken(), 127 /* YieldKeyword */);
              }
            });
          });
          return keywords;
        }
        function traverseWithoutCrossingFunction(node, cb) {
          cb(node);
          if (!isFunctionLike(node) && !isClassLike(node) && !isInterfaceDeclaration(node) && !isModuleDeclaration(node) && !isTypeAliasDeclaration(node) && !isTypeNode(node)) {
            forEachChild(node, (child) => traverseWithoutCrossingFunction(child, cb));
          }
        }
        function getIfElseOccurrences(ifStatement, sourceFile) {
          const keywords = getIfElseKeywords(ifStatement, sourceFile);
          const result = [];
          for (let i = 0; i < keywords.length; i++) {
            if (keywords[i].kind === 93 /* ElseKeyword */ && i < keywords.length - 1) {
              const elseKeyword = keywords[i];
              const ifKeyword = keywords[i + 1];
              let shouldCombineElseAndIf = true;
              for (let j = ifKeyword.getStart(sourceFile) - 1; j >= elseKeyword.end; j--) {
                if (!isWhiteSpaceSingleLine(sourceFile.text.charCodeAt(j))) {
                  shouldCombineElseAndIf = false;
                  break;
                }
              }
              if (shouldCombineElseAndIf) {
                result.push({
                  fileName: sourceFile.fileName,
                  textSpan: createTextSpanFromBounds(elseKeyword.getStart(), ifKeyword.end),
                  kind: "reference" /* reference */
                });
                i++;
                continue;
              }
            }
            result.push(getHighlightSpanForNode(keywords[i], sourceFile));
          }
          return result;
        }
        function getIfElseKeywords(ifStatement, sourceFile) {
          const keywords = [];
          while (isIfStatement(ifStatement.parent) && ifStatement.parent.elseStatement === ifStatement) {
            ifStatement = ifStatement.parent;
          }
          while (true) {
            const children = ifStatement.getChildren(sourceFile);
            pushKeywordIf(keywords, children[0], 101 /* IfKeyword */);
            for (let i = children.length - 1; i >= 0; i--) {
              if (pushKeywordIf(keywords, children[i], 93 /* ElseKeyword */)) {
                break;
              }
            }
            if (!ifStatement.elseStatement || !isIfStatement(ifStatement.elseStatement)) {
              break;
            }
            ifStatement = ifStatement.elseStatement;
          }
          return keywords;
        }
        function isLabeledBy(node, labelName) {
          return !!findAncestor(node.parent, (owner) => !isLabeledStatement(owner) ? "quit" : owner.label.escapedText === labelName);
        }
      })(DocumentHighlights || (DocumentHighlights = {}));
    }
  });

  // src/services/documentRegistry.ts
  function isDocumentRegistryEntry(entry) {
    return !!entry.sourceFile;
  }
  function createDocumentRegistry(useCaseSensitiveFileNames, currentDirectory) {
    return createDocumentRegistryInternal(useCaseSensitiveFileNames, currentDirectory);
  }
  function createDocumentRegistryInternal(useCaseSensitiveFileNames, currentDirectory = "", externalCache) {
    const buckets = /* @__PURE__ */ new Map();
    const getCanonicalFileName = createGetCanonicalFileName(!!useCaseSensitiveFileNames);
    function reportStats() {
      const bucketInfoArray = arrayFrom(buckets.keys()).filter((name) => name && name.charAt(0) === "_").map((name) => {
        const entries = buckets.get(name);
        const sourceFiles = [];
        entries.forEach((entry, name2) => {
          if (isDocumentRegistryEntry(entry)) {
            sourceFiles.push({
              name: name2,
              scriptKind: entry.sourceFile.scriptKind,
              refCount: entry.languageServiceRefCount
            });
          } else {
            entry.forEach((value, scriptKind) => sourceFiles.push({ name: name2, scriptKind, refCount: value.languageServiceRefCount }));
          }
        });
        sourceFiles.sort((x, y) => y.refCount - x.refCount);
        return {
          bucket: name,
          sourceFiles
        };
      });
      return JSON.stringify(bucketInfoArray, void 0, 2);
    }
    function getCompilationSettings(settingsOrHost) {
      if (typeof settingsOrHost.getCompilationSettings === "function") {
        return settingsOrHost.getCompilationSettings();
      }
      return settingsOrHost;
    }
    function acquireDocument(fileName, compilationSettings, scriptSnapshot, version2, scriptKind, languageVersionOrOptions) {
      const path = toPath(fileName, currentDirectory, getCanonicalFileName);
      const key = getKeyForCompilationSettings(getCompilationSettings(compilationSettings));
      return acquireDocumentWithKey(fileName, path, compilationSettings, key, scriptSnapshot, version2, scriptKind, languageVersionOrOptions);
    }
    function acquireDocumentWithKey(fileName, path, compilationSettings, key, scriptSnapshot, version2, scriptKind, languageVersionOrOptions) {
      return acquireOrUpdateDocument(
        fileName,
        path,
        compilationSettings,
        key,
        scriptSnapshot,
        version2,
        /*acquiring*/
        true,
        scriptKind,
        languageVersionOrOptions
      );
    }
    function updateDocument(fileName, compilationSettings, scriptSnapshot, version2, scriptKind, languageVersionOrOptions) {
      const path = toPath(fileName, currentDirectory, getCanonicalFileName);
      const key = getKeyForCompilationSettings(getCompilationSettings(compilationSettings));
      return updateDocumentWithKey(fileName, path, compilationSettings, key, scriptSnapshot, version2, scriptKind, languageVersionOrOptions);
    }
    function updateDocumentWithKey(fileName, path, compilationSettings, key, scriptSnapshot, version2, scriptKind, languageVersionOrOptions) {
      return acquireOrUpdateDocument(
        fileName,
        path,
        getCompilationSettings(compilationSettings),
        key,
        scriptSnapshot,
        version2,
        /*acquiring*/
        false,
        scriptKind,
        languageVersionOrOptions
      );
    }
    function getDocumentRegistryEntry(bucketEntry, scriptKind) {
      const entry = isDocumentRegistryEntry(bucketEntry) ? bucketEntry : bucketEntry.get(Debug.checkDefined(scriptKind, "If there are more than one scriptKind's for same document the scriptKind should be provided"));
      Debug.assert(scriptKind === void 0 || !entry || entry.sourceFile.scriptKind === scriptKind, `Script kind should match provided ScriptKind:${scriptKind} and sourceFile.scriptKind: ${entry == null ? void 0 : entry.sourceFile.scriptKind}, !entry: ${!entry}`);
      return entry;
    }
    function acquireOrUpdateDocument(fileName, path, compilationSettingsOrHost, key, scriptSnapshot, version2, acquiring, scriptKind, languageVersionOrOptions) {
      var _a, _b, _c, _d;
      scriptKind = ensureScriptKind(fileName, scriptKind);
      const compilationSettings = getCompilationSettings(compilationSettingsOrHost);
      const host = compilationSettingsOrHost === compilationSettings ? void 0 : compilationSettingsOrHost;
      const scriptTarget = scriptKind === 6 /* JSON */ ? 100 /* JSON */ : getEmitScriptTarget(compilationSettings);
      const sourceFileOptions = typeof languageVersionOrOptions === "object" ? languageVersionOrOptions : {
        languageVersion: scriptTarget,
        impliedNodeFormat: host && getImpliedNodeFormatForFile(path, (_d = (_c = (_b = (_a = host.getCompilerHost) == null ? void 0 : _a.call(host)) == null ? void 0 : _b.getModuleResolutionCache) == null ? void 0 : _c.call(_b)) == null ? void 0 : _d.getPackageJsonInfoCache(), host, compilationSettings),
        setExternalModuleIndicator: getSetExternalModuleIndicator(compilationSettings)
      };
      sourceFileOptions.languageVersion = scriptTarget;
      const oldBucketCount = buckets.size;
      const keyWithMode = getDocumentRegistryBucketKeyWithMode(key, sourceFileOptions.impliedNodeFormat);
      const bucket = getOrUpdate(buckets, keyWithMode, () => /* @__PURE__ */ new Map());
      if (tracing) {
        if (buckets.size > oldBucketCount) {
          tracing.instant(tracing.Phase.Session, "createdDocumentRegistryBucket", { configFilePath: compilationSettings.configFilePath, key: keyWithMode });
        }
        const otherBucketKey = !isDeclarationFileName(path) && forEachEntry(buckets, (bucket2, bucketKey) => bucketKey !== keyWithMode && bucket2.has(path) && bucketKey);
        if (otherBucketKey) {
          tracing.instant(tracing.Phase.Session, "documentRegistryBucketOverlap", { path, key1: otherBucketKey, key2: keyWithMode });
        }
      }
      const bucketEntry = bucket.get(path);
      let entry = bucketEntry && getDocumentRegistryEntry(bucketEntry, scriptKind);
      if (!entry && externalCache) {
        const sourceFile = externalCache.getDocument(keyWithMode, path);
        if (sourceFile) {
          Debug.assert(acquiring);
          entry = {
            sourceFile,
            languageServiceRefCount: 0
          };
          setBucketEntry();
        }
      }
      if (!entry) {
        const sourceFile = createLanguageServiceSourceFile(
          fileName,
          scriptSnapshot,
          sourceFileOptions,
          version2,
          /*setNodeParents*/
          false,
          scriptKind
        );
        if (externalCache) {
          externalCache.setDocument(keyWithMode, path, sourceFile);
        }
        entry = {
          sourceFile,
          languageServiceRefCount: 1
        };
        setBucketEntry();
      } else {
        if (entry.sourceFile.version !== version2) {
          entry.sourceFile = updateLanguageServiceSourceFile(
            entry.sourceFile,
            scriptSnapshot,
            version2,
            scriptSnapshot.getChangeRange(entry.sourceFile.scriptSnapshot)
          );
          if (externalCache) {
            externalCache.setDocument(keyWithMode, path, entry.sourceFile);
          }
        }
        if (acquiring) {
          entry.languageS                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                !7$$7!A		=�z�*	 /3/�9/////////3�3�3���22��/�/�229////////����33������105!#!53!#5!#3673!!!5!##"5# '$!5!!332677�#�����}�߁�Ry7�}��#��h�)��Xl�������K���!��8r1&
���1����t���!�W�u���y��8�����#����Vu<)}��8g� 	 �����    ! % ) - 3 = �@:<	5"4 ���
9!-($$(-!9<6�y�5 /3/�29///////////3��3�������/�/�229///////�����33����2���103!3!535!#3673!!!5!!!5!&'7!5!67!/�J}���}�ꁓgC}>K�����-��e���^���k4Y\h��Xa}Ew7T��d�n�����l��v�3�a�l���q��}�R��ʿ���AtJJW��{y�Dn[ 	 ��}/� 	 
-4224-	)'#��  (��:6)+�y�'<&�x�#9#8"�y@	.41�y  x 
+�z�* /3/�9//////////3�3���������/�/�229/////////������33����105!53!5##3673##!!5!##'325!#!!!7!��H}/�{�{nvL�}���G�)�z� YI�+�M��}����y��ww����{�觘'�|�e���f��#{����� IV�NT����a��ʿ�   ���� 	 
"-0A/?:<99<:?/A0-"
&',=ABFB�y�%:*0�y�171$A
y ! y  y 
# ������\`d<���=D7(���!OSKW���a]Ya*2��@3+3A=7a33a7=A��  ��	$;�v@	dWdIC@_Vc�w�`S`�y�R_�w�\O\N[KF�y  [�C37�v�848+/�v�0,0�y@ (`\FC8008CF\`
$d�}�='#�w $ /�2/�9//////////3�223�23�2��333�2�3�2��3��/�/�229////////3�233�23�2��2�33������22��10%#5##3673###5!#!#!5!5!!!#53#53#53#53%#'67!67!!!!!!!5!5!5!�{�}�7t/�{���w�y�uy�w��V����������������e{D7X؀b*
%#��  !�@)
,)),
���(�{�,*�y�(('�y@,((, //339///3�23�2��/�/9//////��3333��2���10%$%'$%&#'65!3!'67!!!%6�D�R�����l]��v���s��q��T�:���U����,���sq���5ͽC5��T����T�d�������o������O{����ɤ�   f��� $ G K P g n�@%<
W^?L+6 acYk[A�  �  f� m Q� T d� h ��K0M���/;C���H8HF�� - D�@"LYmTh460/H-LL-H/064hTmYA[�� ^ <�@A9&*3VRT�w f (v�-
w O Yw m [v k iy�cM0�y�KCK$�x  v�BJ�y@7;7OmkcK`!>$77$>!`KckmOf� R |  /�/�9///////////3�2���3�2����2������2�2/�/�9///////////////��3�2�3������������������10##"55'67'76%&'7&'3327&''67&#' !3!'67#!#%6&''$7&''$!'6!n���
Ng9K�!A�9������bZ�{
���"" ��  �@&&7B60IM>+
"&&"
+>MI06B7O4���PNC�}�) B�y L Kx�H'G�y@	C%C0,3$�y�?17�x@8<8)LHC3883CHL)
 ���%%#��@C?9Z/
%%
/Z9?C
)2�� 3 !��)/347;�x�<P<�~�,O?�x�a]a\`�x�YUY*�y�( (TX�x�@L@HD'�y@"KCF<,aY(@DFFD@(Ya,<
491�x 4 /�/39//////////�23�233�23�23�23�2�3�2�2�/�/�9//////////�3�2��2�3�3�2�2�������10&''67&#'6!3!'67#3##6#5!#5!!#!5!5!!5!5!53!!!!!5##5#5##5#�T�X��V�wr#Ll{iml<w$;h��'�n�����PX��y�Hw�-��y�%���D��oyj��C��j��y��y�%^�q�aL���d�����Jo)	�3�͈�Np�����{��{˫�3�������\o�Awu��uw����{{{{�{{{{   d�}��  : > C U l p@4?29)jl]Nx���uKuJtR|���yOyDm���}S}��  V��c>$�� ) @��".6���;+;9��@9 utyn]}c')"; 7//7 ;")'c}]nytuqgH&pZ
fd]_nu�x�x|x�~�B~vdi@#�x�
6>
EK�x�NRNTL5=�y�*.*�x@"xBvzlGi
1NLP**PLN1
iGlzvBx_�x�Z, /3/�9///////////////�3�233�233�22�3�3�2����2//39/////////////////�3�2��2��3�23�233�2�2�����10#"''326'!'$7&''67&#'6!53!'67#3##6#'$7#3353353#"''3267!'67#'67#3353353?y;GD@ ��XL=h$�J��i�H�T9H�h�+v'3s(��.�~����(>T���\��8m�jompk�9Ug6ES4/0(��u�H�od ^�G��B��"�jkj�\G���(�uHT��Q9��V^˓�T���?��d��?�V���ѕ`p�m�����B��m{�ȴB^&r��������rh
�z  /�22/�2//9////����10!53!3!!!#!�����������������v	������  q���7   " & * �� *�  &��'���

"�� # �@'
#  #
'
%!)�y  y��y@


"&*�y��y  /�2/�29/////3�22�/3/39////////������10!3#'$!5!&%7!53!3!!!#!�X;JE�i�c�X^��D`X��:M�<���4�����}��}���oW����>q��}�Ns��ku�?{
('!519�y + z@%&+&&+2-6:)�y ( y  /�/�29////�23��22���/3/39//////////�������10'$&$'!5!#"''3266'!'$!5!53!3!!!#!1��H_}��J���E�c�:G��boN�)�N+�4�FMrF�����4�����}��}�����i�<�G{9�}��K3����T�,0�o}�;{��K:��<��<��  `���7  0 8 < @ D@	1 <+#DA
� 4 �  @� A /��#-<���=*=��  �  7�@924!%A#=99=#A%!42
 /+3�y % y  y@%%',04#�y " y  /�/�29/////���223���//9////////3��3��3���10$!5!% '$!5!&$'!5!%'$!5!!!#####�N����������� ��XH� ��^�L���U�b�������X*�����k�}�}��kSy�����giv�Aw�ki)�ny����kic�5w��EF��F��F��  h����  1 9 = A E �%,3E���5
AA� B  �  ,�  =� > 8� : �@(*35
B>:**:>B
532%1'
@<DA
''
.6=8AE4�y 3 +y  /�/�29///////�����22����/3/9////////////������3�3�10'$7&'767!'$!#!"&5!#"''3265!3!25!53!3!!!#!���mk=�Vl^gU�0��y�`.�y"}���8JZ�k�AawKH%�sXyr���4�����}��}��\���hd�Y7^1Z����e�Y3?>���cQ��c������V���{��5P��R��R��  q����   ( , 0 4 ¼ 4� $ 0��1���,�� - '�@') 	$1-)		)-1$

%,'04#�y�" //�29///////3�23�2�22�//39/////////////3��3�2��10!&'7&''%67!5!5!5!53!!!!53!3!!!#!s�b��Hd�`P�a:]��1�h�l8��{���{/���4�����}��}���b7=et�fKD)��uv�w��w��Tw��GB��D��D��  f����   $ , 0 4 8 ȱ"8���(
# 1--1 #
5(
 &% 3/7�y�)�y�"!�y@))+048'�y�& //�29////3�23�223�22/3/39//////////3�2�3�2��3�210$#'$7!53!&5!3!!!!6!5!!!!#!#!�\����3U���r@V��7�;�)����>�Rq�H����
�s��}��}���uu3��*��x�;�7��}y�/
�o
���y��-\��\��\��   `����       $ ( , ��
1{����+��)���4�����}��}��1u�F���s��=!���y����頠�){}��������  q����   # ) 1 5 9 = �@!*+'=�� - � 	 9��:$5�� 6 0�@%2-	:62  26:	-	*+*#)&, 84<�y�.�y@..509=,�y�+ //�29///3�23�22�2�����//39/////////�������������10!' !5!67!$''$ '67'67!53!!!!!#!`�Ǜ�Sf��)�X��Ԕ�0:S+y�?|nxJ��,�w�K�������}��}��H�K��[�{Qu#_B��}n���*t*

&

&-(15$�y�# /3/�29////33�23�23��22//9//////////////��3�3�2��2��105!5!5!5!5!&'7!'67!!!!!!53!3!!!#!+�����>�n�9�R�V`�_�Qod���o=���d���4�����}��}���z�y�zqZV[�BHixI�\z�y���{��P6��8��8��  	 q���� $ ( , 0 4 < @ D H
� 2 >� ? :� ; 5�@72)	?;77;?	)2,0 ��@
��ES��?��Y
688	!vP_�������H-/QK��
+:h7>�([oW65
��NVʭR��\/<2
v���������|��}��#�e==K%nA8K/g+LQ)cY2+9,_"h?B+4IL?4A����T7CflF7TDg=V17hFH1?@n>iXE.;QLE8go��pH��������  
 q���7       $ , 0 4 8 �% &8���(!4���5	��  0� 1 +�@-(51--15( $��   ��3/7Ay ) z  y $ 	x  #y   y  y@)$  $)+048'�y & y  /�/�29///////�������22�/33�/�29///////���22�33����10##'3255!'$!5!5!!!7!7!!53!3!#!#!��>�D��:��^5 ~��������f��h��"���4�����{��}��ᨁ>���o}
5�䡡�夤��5����������{��{
�����)��)��'<���A��Aiev�\��lgv~_���k�e��3wc�p����G�����}��}����otrosjsjs���jj�ll��M�NTVuR�4VC�V\G��G�DNJ�Hu^�������� 
 q���� 
    " & . 2 6 : �@	#$ "��  :��*���6A
� 7 �  2� 3 -�@/*73	//	37*
 (' 
 q���� " & , E W \ d h l p�@

� ` '� * 
#
Y���Q7h���i=iVA
� [ @� 4 c� e T�@6X`*m
QiN[4eXXe4[NiQ
m*`-^]F->:1VN[GKkgoAy a y  Iz [ �  y  y�&YR#�z�!Q�y " (��+1E%�x@%a[&#!"B+EE+B"!#&[a
���٬`��
��pRh@L5J�:G>�!t�6m1���)���{NgCr.Xa�u}�a_V`VY�[wq�������� 	 q����    . 4 < D H L P*@/2,58;
)-%PA
� @ �  	�  L��M:��  H� I C�@E@MI%EE%IM@
,�� 
�y�&)�y�*;�y@<A<<A.HCLP?�y > -y . /�/�29///////�3�23�2�3�22�2�2��/�/�9//////////���23��������������������103#3##$7&'##'3253#7#537#537!5'67'6#5!53!3!!!#!������%�8ab�T?}-�9}��+�����
��St^J�X�V�!����4�����}��}��1�)�w�w�� }�G�h��HX}9H�@r���y�w�{��SPX?�r�cxy�Kw��N<��>��>��  
 d��� + / 3 7 ; ? G K O S4�@ )�� " S��C7?���-+'O���P$P3;���<4<K�� L ,��808F��@H"AC-P<L	8HH8	L<P-CA"
  ��@A
NJR�w D -v�?;?:>�v�73726�v�.

�v��w@#+#D?7.
#''#

%KOSFB�w A *~ % /�/�29//////////3�2�3��23�23��22�2��/�/9//////////�3��3�23�2�2�������10'67!%3!27#!"555%5!'6!3!!!!5!#5!5!#5!!53!3!5!#5!#5!L$y	�3��3�El(e����w��+�o�T}��L���w��y��%��y����������t��w��N�}OH\^/J5y�+``�g�Y��X��9pcf�%��RRRR�RRRR��i � ������   q���h  	 
KF7:1S93O"KK"O39S1:7F'D'B6"$0*?QMU�w G y�$.(4�w�:�w ; v  v@
    " 2 6 > B F J7@	78 7#',("��  J��:���FA
� G �  6� ( B��C1%���*.*=�� ? '�@3:G(C*?33?*C(G:
787
�z  /�/39///���/3�/�210#5!#!!!!�����������������8G���5J���7J��  ���5   " & * �� ��#'��@



 "&*��� �y * )y�&�y�
�  �  �  �@ "��� A

 

 "�~� //�9//////3�23�����/3/�29/////33����22�10!!!!7!5!7!5!5!5!%#3!h�!������l����������z�
 $(A
y + *y ' y  &y�#�z@
'#
���&���"��@##.##. 8<@1��@	2 30�y�@%	�y�?�y�< ;�y 8 y  z@,@<88<@,3(�y  7y 3 /�/�9////////���3�3�2����//�29/////3�33�22�23��10%#!"&5!#3!'$736%!3#5!33267#5##!###�^p��JZ������30����
���=�1:��}��}�������WQ�V��c+
|
;��)XM6����Cc�b9�����g���d!���g ��   ����5 ) 1 5 9 = �@#" &*���+26:+��  �  �@++ 59=.��@/ &"-�y = y  <y�9�y " 8y 5 4y@0=9"5005"9='�z  &y ' /�/�9//////���2����2���//�29/////���3�����2���10&'!!#"''3267!'#5'6!&!5!#5##!###�Zd>�3R'5udY�/�a$L&�>#���DClՑmO�͓$����U}��}������ZOSg����vc"�4#�yc`8L�hFǴ�
��
��E9�j�(�M�Wq)zg23�����n����a���e������g���d!���g ��"���_�+���	��68�Ĵ�����d�\;}  d���   $ ( , �����$(,A
� 	 �  �  �@!%)		  	A
x , +x ( 'x $ #x�



$(,��	 //3�9/////33�23�����//9//////3����2�2�10!!#5!#!7!' $%!7!5!5!5!��T���������w:�V�=��f����������L���ww�����W�RX���f������������  b���� 	   & * . 2 �@


x . -x * )y % y@.*%""%*.	2���	 //3�9/////��������2�2//9//////3���2���10##'3253'$7&%7#5!#'$ 7!5!5!5!h��"�/������hF��o���a@>��ׁ��<|�`�������)��)���}1^��dy���X��Tu��uu�0w�R�w�혘��������   ����7  ! ) - 1 5 ò"���#.2*#�����  �@ ## -15&��@	' 
��� ��@.!**!.��@1&")-
y  z  y  y@�y  /�/�9///��������2���//�29//////�3���10##'3253#5!#!!!!'7%'6 '$ ���3�=��T}��}������L{]�c���:�v�Q�m���DJ�S~J��73��s���r���g ���`)���D�D�o����F�L�`���_F{-�4  ����    " & 6 ̲���#������		0�� -  �@	--	'"&��@'+A
y & %y " !y  �@



."6&2�y + y  /�/�9////////33����3���//�29/////��3�2�3��105! ' !#!3!#5!#!!!!##"5333267�����p���������}���}������PZM㜁7�0 �������bF��w9��������r���g ���`)����n�)��<O�   m�}�5 	 
 ���
A
(	
 y  9y 6 y  y  5y@2,:
6226
:,	-"�y  1y - /�/�9/////////�������3�������//�29//////333�2233�10#!"5'%'%'$%%%3!267#5!#!!!!�&[\����o���s��K/TK����N��7D0/��}���}������1��l��3{5X+y/+	{�bnB��5y7��C{E��8\��ۏ���r���g ���`)��  ��}?� * . 2 6 ۷ &.26	A� 
 )�  '�  $�  "�  �@+/3

	  �x�6-
 //3�9//////3�23�2�������//9/////////3������2��10!!#5!#'$7!5!67!5!67'$%!!!5!5!5!?�!-?N�����Vs��+)�V�����:'
6������\����  �  � �?F�3ss#|ho��p>Aq3Dw
{bR%cqD;�������  d��7       % �� ����  �   �@  #%"A
y  y  w  
x@�y  /�/9/////����2�2�2//9///////33���22�10!5!5!5!!#!3!&%7%'$7T�5ˁ�7��7��7H���D��Di���`� ���V`������������������3�b��`�D�T��n��   q���  & * . 2 ʹ*.2#���$�����@ '+/ $  $	  "�x�21A
w . -w * )x % x��x�	�x@.*%%*.2�� $ /3/3�9//////3�23�23������//9/////////3�33�22�210!5!5!5!5!'6!53!!!!!#5!#!5!5!5!���P�  �7F�`�Cu
����Bt��K��������������q�q��Y�/,C��pq���uu��ww�}}�  ����  % ) - 1 �� �@	&*.��@		 )-1"���# $!�y 1 0y�-�y�
��   f���    ! % + 1 7 �� *��'	���!%��  �@""'2/" && "/2'	,5,07'A
4-�|  /�/39//////////������3�//9/////////33��22�2�10#!"553$%!3!267!!5!5!5!!3!&%7'$7�vQ�����F�S��-6F)�j��f��f��f<��}�ZH��F������VB���C���b^Zn4-f#����oo�qq�pp�������b�VeK� b;�   ���5   # + / 3 7 ˲	$��@	%04,%#A
�  �  �  �@%% /37(���) %)'�y�76�y�3#3"2�y@//)73//37)*�z�
.�y�
y 9 8y 5 #y   4y@1+%95	 11 	59%+,�z  0y , /�/�9///////////����3����2//�29///////�23�2�3�10##"536733267'73733#75##!###�WM��{�XZ{�5�%�;�qB�{�{����@y�}�y������e�5�%WtT�f�N6?���o/���+��~� 3{����r���g ���`)��  ���� " * . 2 6 ƶ #���$+/3$ �� 
&�y 6 5y 2 z�1�y@.
62..26

�������?\jL������\���}���}������1�ve��X��#&���`%{�bV@������^XP���r���g ���\-��  �����      : �@
3 865.!&���		.�� ) �@	&)$,,$)&	6�� 
 �y . 0y�:9-�y�*6*5�y 1 )y & y@ .:*1&&1*:. !
�y  %y ! /�/�9///////���3�2��3��/�/�29///////3��23�10#"''32664'!'6#5##!!!!!!5!5!73\]]�
�  /�  %� - *��,$E
��@6:>-,E0))0E,-

 1y@.(6	2
..
2	6()�y  -y ) /�/�9////////���3�3�2��2�2�//�29//////�23�3�����10##"537&'33267'6'3#5##!###'67&'7�hM�6ڂXt�<�'#���Zq׷�bP���}���}�����
9�g�*�4q&�e��s�)�TL[�d�O��@6�V���`z)�Y`�ŏ���r���g ���`)���ڟH����H�7�   ��}�� $ , 0 4 8 ڹ %��&-15&���#��@!!&
 048)���* +&*(�y�8�y�#7�y�4"	�y�

3�y�0
00
48*+/�y + /�/9///////33�2�3�2�3�2�3�2//�29//////////333�22�3�10!#!5!!5!!5!&'7367!!!!!#5!#!!!!��	����z��=RK�k�gX׬CV�'�@��{��F}���}������o��|{ }ŀNx�=��A��}� {���`����r���g ���`)��   ���5    & * . 2 ڴ��@	 +/' �� 
 �  

	  *.2#��@$ 
 $"�y 2 w  1y�.�y  -y * y@$2.**.2$%
�{�)�y�% /3�2/�9///////���2���3����//�29//////3���223���10 #%'7!!675!!5!#!!!!�_��Y�1��?�'��F�zb�ٳU��)����}�Ӂ+��/��/��h@�oX��o3����l�T�`�n���� � ������r���g ���`)��   ^��7      * 9 �A �  �  �  �   �@+74+!(%%(!+47
�y  /�22/9////33��2�2��//9/////////////�����10!!!#!#'%&''6&''$���������q��#�����'�$�_�g`�d��{���]�`d�qT
x 9 8w 5 4w 1 0x�,�x�$#�w� �x@51,,159��'+ /3/3�9//////33�23�23�2�����//9///////////3�3�2�2���10!' !5!5!5!5!5!&'7!67!!!!!#5!#!5!5!5!�����cD
��9���V�MBoXMoQBq<=��g��=��������������V:�sqhgp`:;Y|_v;Z@pghq�{ss��uu�}}�   ����      # > � !$6 ���
�  ,� 2 
�  8�@*
>"">:�y ( y  /�/�9////////3���33�2���/�/�29///////����3�����105!#!53%#5!#!!!!!5!##"5#'$!5!!33267F���Ʌ���}���}������A�Z�^6Շ���Z���y��-�3B��Y����h���r���g ���`)��u���S�C���bKA}��1�i   ��F� - 1 5 = A E I	@'.
<@�y < /�/9//////////33�2�3�2�333�����2/�/�29/////////�33�22���3����10#"''3267!#'$#'!5!5!&'7367!!5!5!#5##!###F
�  � 
)�y�9A
 �����     # ) / > D J �@
���'#r~& ^o]R^�k�zhZBT��s������r���g ���`)�����C��;��1����m�O���mUu���������P��9��>��  ��w�7 	     - = � 
�����#3,(8<��@!1!%51*:/31::13/	.��� .
 /33�22/�9////////3�2�3��2�3��3��//�29/////////3�3�2�23��105!5!5!5!5!53!!!!!5!#!!!!##'3255!#!##������P�\����\X���C}����������N>�<�5�σ6��{��{�wu{��{uw��@����r���i���^)����CV5��m��f��!��  ����      ( 5 A �%'"624,���		)���,@8��@9=9 	/;,99,;/	6��@
y  ,y 4 y  y@
{z�����~'{��������r���g ���`)��yX�f�jV�7#[byQar8�kX�Y"TmR����{�� 	 ����� 8 > D J P X \ ` d=@EHK NV?7-;	*D"1(Q��@	R]aYR# A�  >� " /� * 2� ; 7� 9 �@ 6R "'*<;99;<*'" R \`dU��@V FM,IPW`	dRVT�y�ddc�y�`D`7B#�x�$4>$_�y�\2<(�x@)/)Vd`$\))\$`dVW�x  [y W /�/�9///////3�22�33�223�2233�23��������//�29///////////3������33�����������10&'#"''3267!3!267#!"5'$7!5!67#5!6'!#!!&'#&'#&'7%'67#5##!###�J�sJ\:p)�&��C�8Ep=���L{V\���$�"om�$\��`��!;IO2�,S�Tt�Z���w�X����{��}�����7\h����}"8��D@�F� �-K[\��tFHr����r\2t�3JDN@��daad{^�xM]��Z\�����r���g ���`)��  	 ����� & * . 2 6 > B F J@ */!#
).
E�y�B(-
BB
FJ<=%�x  Ay = /�/�29////////33�2�3�2�3�2�3��/�/�29////3�23�23��2���23�22�10!5!5!53#53#5!5'$%!#3#3!!#3!####5##!###��L�?k�Ś���=8�@�������n�<�������1�{���y�}�{�����Bs�rBw%p� 	r�d@9�p��w��r�<��%���GB��B��������r���i���^)��  ��}��  # ' + 3 7 ; ? ��,��@-<48-#'+�����@($ (-
((
- 7;?0��@	1 	2-1�y�++#/�y�?*�y�''>�y�;&�y�##:�y�7"�y@?';#77#;'?2+��  6y 2 /�/�9//////3�2�3�2�3�2���3��2�2//�29///////333�2�23���10%!#'!67!!!!!!!!!!5!#!!!!���}'5X�|s4G'f>oA@l�L��L�������?��?����}�����
�����HCb�/����;�n}��w��w��!
���{���d%��/����r���i���^)��  	 `�}��  ( - 3 9 A E I M@
 *��!,��  :��;BFJ;%��@ )?.
" !;));! "
.?13=A
x M Lx I Hx E Dx�@0�y  u�'58�x�
 ��{��     ! ) - 1 5 A@	6 "���#.2*#��  �����@8��@9=9#;99;#-15&�� '  ��(#'%�y�57;�y�<@<4�y�1�y�0�y�--�y@'5<>1--1><5'	(9,�y ( /�/9/////////3�233�223�2�3�2�3�/3�/�29//////3�23�2��23�����10!'67!!67!5!#7!5!'%36#5!#!!!!%#!5!53!;�~��X���T/k0$���������+V���6��}� ��������J�b���e����e\Jh]eER)���������|_��T�ˏ���r���g ���`)��L�q�{��   ����� # + / 3 7 G �� $�@

9% /37(���) *	'�y�7E=�y�>B>6�y�3 3#
�  �  '�  %�@ // 9=A2���3 41�y A @y�=&�y�<�y�99"�y@#3-A=9##9=A-34)�y  8y 4 /�/�9///////�33�22�22����//�29//////3����23�����10%##"5# '$ #67!!!5!5!5!5!#33267#5##!!!!�,UN�������TJ��T�����������2r1+��}���}�  �  � ��]�Z����goVB - �V�'�v��v�}����0\��h���r���g ���`)��  ��}�� 3 7 ; C G K O!@	
/+<��@=HLD=
%-7;!1��@	'+��@848=8#))#8= GKO@��@A BA	1?�y O 0y�-,�y�;N�y�K*:�y�'7J�y�G6�y�%$�y@!O-KGGK-OB31�z  Fy B /�/�29////////3�23�2�33�22�3�2��������//�29///////3�23�2�3������10%!"''$!5!5!5!5!5!5!5!53!!!3#!!!35!5!5##!###�<���]�k}c���]�-���]�C����
& KRHW`]0���1<@81e�� ] W� O h��Mcf��@Y_Y+/$��@#
,;?C4��@5 (,JF"6WO3�y�C�y��x�O�z T By�?Z�x�e/e>�y�;.�x�&+*`�x@a $a5
.��@	/>6:/-)	���
�����@&*E/
BB
/ 9=A2��@
3 4/3
!4�y�-@
8�y 4 /�/3�9///////3�2�33�2�3�2�����3�2�//�29///////3�3�2�223������10!!#5!#'$7!5!5!5!533#36!5!5!#5##!###&'7��!�r �'mUL;��������{�ukT�p���'��'�X}�������9b�?�׆E�s}}�7%h��{�y��y��1���w������)����r���i���^)���^k0Y*   �����  " * . 2 6 J P� #�@	$+/3$!>��   8� = I��@NF��@.GK$;>C =@BNG	7KK7	GNB@= C>;$ .26'��@( OL:"!C$(&�y�68>�y�?I?5�y�2GC1�y�.
,A
)?�x�&%�x�"!�x�=95=84<�x@
==
 //9//////3�2233�23�23�2233�23�2/3/29////////���3�2����2�2�2��10%!#!5!5!5!&'7!5!5!5!5!!67!!!!!!!!!5!#5!#5!!!6���}��T��<9R��T��}�VW&o#5�_��T��V/+��}T����y��w�����:\%Q}�  s�nQ.>psqt�WFA1+�|tqsp3Y1n�禦������;�Y  	 d���   ' , 0 4 8 > D �@B9<? ! 048���
��  &� * �@-15*((*��   ��>C;@�w@
8/ 07A
w 4 3v 0 /w , &v�#�x@40,#

#,048�~�
>
BI9�y�'<')�w�76&�y�#3#2�v�/."�y�*�y@I'7#/::/#7'IF?
!%.5���6=EA6���*���
% /�/39//////////�3�3�2�3�2�3�2��3�2//�29/////////3���3�2�23������10$''$%&'#5!5!673#!3!5#535!5!!!%65##!###�P�������GE}����J��X�o��9{;��� {�JhT��4�py���}��}�����h7��)h'�b�{��vtm�{����u�}���{�����[t������r���i���^)��  ����      A I M5� > ���
"���#'+3#B��@CJC
H&*;/364463/;*&H
81�y� /3�2/39//////////�3��3�23��33/�/�29//////3���2�3��2���105!#!5##!###!!5!5!!5!53!&%7%'$7X���D�Ty�}�{�����`��y���X�g�} g���^�,���\���5�����r���g ���`)��/��������T{���ZˋPs#�vZs�  	 ���V   = O T \ ` d hH@DI),:#`dhY���Z8,6�� 3 !��+#QI�� 
h?AN$F(SgAv d cv ` _x [ x  Az S &u�!,�v�-<-�x�;0�{@5d`[S!-8558-!S[`d
h�{�VZ�x� /3�2/3�9//////////�2�3�2�������2��//�9////////////////�3�2��������2���10##"55#'655!3325%!!!#&''27!5!5#'67!#3&''67&'#5!!6#5!#!5!5!5!�B7�k��:��-CB��5���9��v/c��v-�S���/LPE[`���4�䍽5�cY<HDHi�n��7HMt�}�������x@j��O]���+}�cmy�#D[Ui[�\q%%@C{)
!\u�\p
�cc�dd�ii   ����    # ' A E I5� �@
 $	1EI���6���<�� 3 :� 5 ?��+���9��@$FBF >.16035+F>>F+53061.(#'���(�y�'?+1�y�2<2:6A

'2I#E7

7E#I2'
-)�y  /�/39//////////33�223�����23�22�3�2//�29////////////33�3�2���3�2�233�10!#5!#5!5!53!53!5!#!!!!$'$!5!67!!!!!5!5!s������)1%�X}� ��������ND���~�0V�s�D���}���KB�����o����z�����e����r���g ���`)����dJj��5d2{O>��N?{|�Ɗ�����   ���� % ) 1 5 9 = K YS@ >J
&LX*���+6:2+��  O��R )���X���T���A���D$���&!&J��@F+RUTDG&FF&GDTUR+
�y 	 4y 0 /�/�9/////////33�22�2�3�233�223�33���2/�/�29///////////�3�2�3�2�3�2��3������10!#!##'325!#!#!5#!5!53!53!5!#5##!###&''67#53&''67#53�����y�%�9��w��w����xg{I�<���)v�{�y�����ME2 DJ�d��F2!DJ�e�s��~�7�y5+�G��m~	r���������q����p���i ���`)��5cxrvtc��j���cxrvtc��j��  �����   # ' + / 3 C@4@ 	���$( ��  3��->B���7;
9A�y�+:>+-�y 3 *y�'2�y . &y # y@+<3'.##.'3<+	B6�y 5 "y  /�/�29/////////3���3��33�22�2�/�/�29///////�33�22��3�����2�105!#3&'73336735##!###%!!5!!5!5!5!53!!!7{��}�HxV�Yoj�,�;c��Vy�}�{�����"�T�z�KR�	?�j���k;���$�TRc�y����@�[�cj���r���g ���`)���������{�z��z�  
 s�}��     # + 3 7 ; ?
;72*#

#*27;?�|�-1	 /3�22/3�9///////33�2233���22���/�/�9////////�3�3�2��3�2�2���10!#5!#5!5!53!53!!!5!#5!#5!#5!#!#5!#!5!5!5!���z�zz��Pz�zP���@y��y��y��`}��}r�}�v}�}�v��v��v�ggggpwwww��b�����������P�+XX�ZZ�ZZ�__  `���   4 : @ F L T X \ `>@58GJ> 
� & � 
 �  M�@NUY]N.R*#&
NN

->��@
9`�|�NR6�� 9 /�/3�9//////////�2�2���3������2������/�/�9//////////3�����3�2�2�����������10&''67&''6!#!6##'325####!3!7&'7'67&'7%'6'#5!#!5!5!5!�Tբ��L�wJ;&>T�2k
��  ,�@-$*'!PL	�y�b]QB�y J y�-1/�y 2 y@D?=J1WG22GW1J=?DN7�y  /�/39////////////��3��3�223��2�����/�/�29///////////33�22�����3������������10'$%#5##!###'67&'7&'7#5!#!'67&'767#'6'#!535#5!533#3!5#���{7-���x�}�{������g�q�uPlP��v(fu^Jy��{m��-��V�f#MAA,5�ZdY�7k	��o��`1o�����u+�u	��ŏ���r���g ���`)��D������!�o#`�-�N)T���������Zz�33\4�i�pN�H/����N{�{��{���  
 ��}�� 0 6 : > F J N R X ^K@ 'S-(V
>\?���@KOG@���:>A�  6�  %�   �  /� 1 �@;7;@ V1;;1V @
*JNRC�� D -�@*W^
"ET[	:@DB�y�RA
J*/,(4�y@%DR>N:6JJ6:N>RDE
�z 	 Iy E /�/�9///////////3�22333�����2�3�2�2��2/�/�29//////////3������2�3��2����2�10&'!##'3265!'67&'767!5!67!!67%&'#5!5!5##!###&'7%'67�RUQ����+�"��NBR�j=ibJ?)L�m��	/�},GK0b4h�� gQRSq�������{��}�����7d��\�����T�z�i(E�#�?��"��;&iZ`[AC2]2�y\XOIynN8_IRHyRs��������������r���g ���`)����P�nL~2�_P�� 
 ��}��   1 5 9 = E I M QI@ 
�� 
IMQB�� C ��%?C#�}�="A�y�Q:Q<A
x 9 Py M 8x 5 Ly�I4'�y�(0(�y  Hy D +y@&,C%=Q9M
5I(D,,D(I5
M9Q=%C!/ /�/339///////////////���23�22����3�2�33/�/�29//////////��33����223����2����10&''67&'!####'7#5!5#5!#37#5#5##5##!###�c�Y^�`�gR!X�
@0�x�/
 /�22/�29/////////�333���23�2�3�233�22�/�/�29//////�3�2��23���2������2�10!5!&'7!5!53!!!%!365##!###!5!5!5!5!!!!!!5!#5!5!#5!N��i(GR�������S&<q���jP4�N��y�}�{�����C�1�R��h��k��T=����{�����{��DpWI5o��o5VJ�U�p�_Z���r���i���^)����sqn-��nq�mmmm�{{{{   �����      ! ' - 5 ; J P V m rb@T/N
z q y  o} f y�G@J7�� : y  1x�4),#� & y@$
&}�9�P"&�%��s�w�u�������v���'�{����t�u�t��^d=�yb�DZ,��'�|�H�5�f�) %_Q'nC+,�n���p���k���^)��_��^��^��]��RR�ꋋ 
 ����      # 4 8 I M�$0H!
9E���
v  /�/�9////////�2��33�2�3�2�����2�2�//�29/////////////��3��3��2��10$'$5##!###5!&''$#!##&''$#!##�V������\��s#��nv�{�y�������R��\r�]�h*$���&�vǁGY�s�b R��{)�X�\d�'��d�K-3���E����r���g ���`)���{�+V�K�R�/��
 j���  " 2 B F L T X \ `o@
�v@GC,)),CGK�~�#�w� /3�2/�9///////3�23�23�23�233�23�2��3�//9/////////333��2233�233��2�2210!!5!5!5!!!5!5!5!!#'$!67!!!!!!!5!5!5!��f�}�b��b��b���f��d��d��d���ssX�n!�( u"��j>��>��������������``�bb�ffi��``�bb�ff��l�kA\�3;5NGiud}d�uu�}}�  �����    # ' / 3 i\@0)14 f(`haNGU:B\L	ZS]��� $,���-���:�� \ <� G a��7��@]-\G77G\-])#'��@
y ' Pu U h� e &y�#a8]�x�^1)-2"�y  +x�.
�y@#R'cU:e#^2.

.2^#e:Uc'RD�x�?	 /3�22/�9//////////////33��2���22�22��������2/�/�29////////3�2���3�2�3��22�������2���10!#5!#5!5!53!53!5##!####5!#!!5! ##"''32654' '$&''$7&''$7!5!!67b��y��w��;wmy �s�w�s������v��tI���g��~!�Yu3X1zO*"����\�#���`D�$ ��T��H��h0�bP{���ZZPPnuuuu�cj���r���g ���`)�������k��Z5)���i{>�D0��_Zf# *�[TW�YG\C�ooR�=_V^@��  ��}��      3 7 ; ? E K Q0@ILOF0 +<���
Q?;72-))-27;?QNG /�/39////////////33��2�������33�2�2���/�/�29////////33����22�3�������10#5!#!53!5##!###!'$%!5!!67!5!5!5!'67&%7'$7Dw��w�{��Ew�{�y���������;"
%RW\^(I���EAI���0���>84<���FBF.Z�� ^  �@.6:!_T>F^:2  2:^F>T_!
�u@XIEA*''*AEIX	a�w�N�v� /3�2/�9/////////3�23�23�23�233�23�23��2��2�2//�9/////////////333���3�22�33�33�22���210!!5!5!5!!!5!5!5!!'67!67!!!!!!!5!5!5!&%%#'$%$'!5!%!6��c�z�X��X��X���e�{�[��[��[��=^[Ǉw�)}��DC��C������������@����������@�������i������D����AA�HH�GG\�AA�HH�GG���<7Xk�+ /75 \FTHTE5FF�HH�EE�j5455q*R^\\`T*�D7/   ��}��     # 3 7 ; ? O S W [ c k��\ $Ig8<���(WS[���E"��  B��H��  D��XQTPX��  ��
[WShFJL" 

 "LJFhSW[bj�z�_g	 /�2/3�29//////////////33�����3�233�233�2�233�2�2/�/�29////////////////////�33���22�2��3��22��2�22�2��2�10!!!!7!5!7!5!5!5!%#3!%!!37!5!7!5!5!5!!!!37!5!7!7!5!5!!#3!!#3!�-��h5�!�"q����V��V��V#��yy/V���ۨ�`�nJ���C��C���x���٦�l�o���F��F�����yv%�2�Gyy��F�F�FThP��::y<<x==�33�T��N��NTV#1��CC�EE�EE�N��NTV#1��AA�EE�EE�9F�IV;?�R   ��55      ! ) - 1 5 N S g k o s��MPC"��@	#2*.#!���]Zoks�� [ f��_TlV���WhpWE���H�� 	 9��C;6��@&7#Z[_lWHA	C>O77O>C	AHWl_[Z#-15&�� '  �@JfGR<>#'YAz s Xw p %y 5 >{ R ru o nu k 4y�1EfUj]�w�^7P�w�Mea�v�b	0�y�-!- �v�,�y@&(@'[sp5Rok1f^Mb-((-bM^f1koR5ps['@�w��w�
 /3�2/�9/////////////////�3�233�22�2�2�22��������3����/33�/�29///////////////����2�3�2���223�223���10%##'325!!5!5!!#!5!5!#5##!####&''67&''63#6'##5'7#535#5!#35#5#5#5�$�1�b
l��1����emn��-���j�n�m�����w;@(UN05>lK�:2&L�`�i.-�Pc�/;BŖ����������j2
�ii�ssh�T��ii�ss������r���i���^)����ߤP^A9Xc_Gip��H?7�3TTb��σ��VVbZ``Z�]]�hh�\�  ��P5 
 !z " /�/�9////3�22�/�/9////////������10'67!##'!25# '$!5!&'7$7!5!^8�wd!�@��3FRC�'��V���l���Vli)}�����FJ8���8�}�ը�D��\�y����0k-k|�p�r+B9   d���  5 9 A �@
6  -#',4A� " �  2� * 5� % 0� , 
�  5� @ M� Q *�@2J!NG@Q 22 Q@GN!J
��'�73����D�t�RLk�C�s����4��%T�QH�+�7��+JFfv�u���7'���X���L��L��CT[]Ɩg7���:s�s4(Z(.,;thy7�@Ss5nT+i@�qr�#u�����Z�   f��\         H f j n r � ��@��Ny~#DG+?9'A
� . G� 7 B� >  ��%���njr�� J �@	Y]ae���okgo��  �� �  �@<_c594.<7>%~J{o�c[II[c�o{J~%>7<.495s2stx*Mn1+�{v�w���~�v  Jv�rerdq�u�nan`m�u�j]jYS\i�{�PVP&5�y�6G6�v�D�u�<�u�
�u�?�y@$@�r/n"jSP6<:@@:<6PSj"n/r�+�y�*�v� /3�2/�9////////////////�3�23�2�3�23�23�233�23�23��2��2���2//9////////////////////333���2233�233��22�22�����������10!!5#5#5#!!5#5#5#'67###'325'!5!&'767!5!3!'67!67!!!!!!!5!5!5!$%'$7&'#5!'!6�]�`�������\�`�����L\-uyj>�/Y�[�c���g�D3HL9�^>p($?�V�#4L�B\\��@r��r�������-��-���8�������:.ʒzs�����in�)3�JJ�NN�RR^3�JJ�NN�RR�/������v6 ��R0�w�TP8Rpw{�~%-E�\b/1J��25"ZMPRNTDMM�RR�TT�f!ZR)h3G_Z^n0F�F%-  f��� ! s�
�� 

	   �z��z@	 //399//�23�22�//9/////////����10$  '$!5!6'!' !!!!�T���\]d�&��[{��5�"��W�w[ ��������uj����Yhu�߁��ôT�)�i��ہ��   h���  1 �@ 	%,��  *�  /�@"')..)'"	!/�y�,*�y ' y  w@'$$'�}  /�/39////���23�22���//9/////////����������10&''%67%&'7$'$!5!67!'67!!!!�v1>�{> ��n���<o�TJ������]Rz��+ ��bxv�eu ����bc�TBOGV��Tʊ1AGG���ub��.iuc_{{�}^V��3</{�q{��  f�};� " * . ��!�� 	 �  ��.'��@(
	 (( 	
	$#���+$&�z . y�!
�z��z  -z@).!))!.($ //339//////��23�2���/3�/9/////////�2������10%&''6 7!5!65#'!!!!#5!#!!�W����c��q��Q~v�3~#'��k��Z����r����m�v���d|�遺Ͼ�H��o�x��mW�����s����3   \�7�  # ; �@;*0"62 ��   0��29$��@/4/
 ��@
�1P�t���^��}u��6w!t�}��}ZX������4h�w�K����  j���  - 1 ÷
+�y�1	�y�

0�y�(
((
$,� # 'z $ /�/�9/////�2�3�23�2����//39/////////��23�2���10%&'' !5!#'6!#!!!#!!!!!!�g��_��cg-��\uIct�����
%*�y�&
&&
+7":4�y 3 !y " /�/�29////////�2���2�����//39///////////��33�2������10%&'' !5!#'6!#!!'!!!!&'7!5!6!�gt�_��cg-��\uIct�����
�m������u?gqo����CxAq��T�d��� \$�}{�}<��!��}��}DA|��{<�AD����)�/��L}�/��  b���  > \ c&@ D?:JQ=;24*TQ68;(%:���;	`�� Q [��S���B��@ b&*%;	QSLb]]bLSQ	;%*&
O�x N x  /�/�9//////////3�22��3�2����22�2��2�2//39/////////////////�������3�33�������10&'!'67!5!67#'3 %!!'&'#5!&'' !5!#'6!#3###'325!#!!!5#�Ft���gxP���`!#�Y8HK�FG���'3����K,�4K�����b:�I�i3��P,Ux�	qZ���	���)�5�7v���;�o��i2b��[Eik�p-@
X�w U Tx�P%	�x�
9C
<E���H?H8B�x�.
H..H
PU3Y�~�KO2�x 3 /�/3�9///////�2�23�23�22���������//39//////////////�33�����22��33������10%&'' !5!#'6!#3#&'!'67!&'!5!!7'67!7&'7#5!#!5!5!'bE�I�i3��R,Ux�	qF���	��Z9�J@!V�~j2A�`@�X�'���]X`�����\fLg({��{){��3�͘H�z���N uu��'��X�w��u�K��V/�c�;V��CJ=s`n���H���ah+hi��H��P+qX3H�khh�������  j��7   h�	�� 
 �  �@

  �y  z@
�z  /�2/39///��//9////3���2�10!!#5!#' !5!!��F0��������me}��������������`ţ^�U��i��\  h����  3 7 õ#) %7)�� * !� 0 %��&4&��@$1*0&

&0*1	 . 2	-&*(A
y 7 y  y  6z@#*7+##+7*2�z�!1�z 2 /�2/�9////////����3�2���//9/////////3�23���2��10#!"&5'%'$%%3!267!!#5##'#5!#�=Un��?N��sb�?'EL���/
��7!0A���C^}�}"4k�,������S=uD}F
y;�`zI��i}k��<��F���V���=:J���M!��   h���� 
  " > �@	# #18"��  �  ��8�� * 4�@0*00*##�y�"1!�z�2�z@	">		>":�z�'�z  /�2/�9///////�3�22�3�//9//////��3���2�������10!'!%!!#5##'#5!##!"&5467767!5! 3!267��R�i�J{(�����F`}�}"4k�,�����'~c��h�"#ִ�����Zr�D8�ڧP	�%vw!���V���=:J���M!����u\-Y&ز�����`:!dZ�  h���   # ��	 	�� 
 �  ��"��@

 
�y  z@
$ ���( A
y - x 
 ,z  
#!!#
- 	('�z ( /�2/9/////////����3�/�/9//////////3���2��10'$&'7!' %!!#5!#'#5!!\�%j��g�^�l�-�py�oxK�2�2�j=}����"4k�,����D��b��eb[� ����Vh-��R���V���=:J���M!��  h��� 	  ! ' - 5 �@
("+
!��  �  �� ��@#2%..%2	""*1&-# �y ! z   z@
+��@0E>D:	.2 00 2.	:D>E'B��@
'-
 z�

7AK>	$�z�25 /�2/�9/////////3�2�����3���/�/9///////////�3�23���2���10##"5'737332667#"''326#'$#5!!#5##'#5!#9Euk���}��7H�,jT?�!�L<1���\��H��CC���"4k�,�����ȚL0{4���<{B��<�J'�1���O�&U�������h�e�����n���=:J���M	��   h��5    % < �@  #-:
  %7*-/�y�"4;�z < z�	�z@<</�y * y  /�/�9///////�2��233�3���//9//////////�3���2�����10 !5!!!#5##'#5!#'$#"''326'! '$#5�k��.����
��FN�с"4k�,����)7��T3N-wUB�"�:00,�����X��bd1�y�:'���V���=:J���M!������l�C�����p$�?G�����/ZZ�M�  h�}�5   3 7 Ƿ#) %7)�� * !� 0 %��&4&�����@ 		1*0&		&0*1 . 
�z�6�z@#*7-+##+-7*2�z�!1�z�2 /3�2/�9//////�33�22��//9///////////3�2�3���2���10!##'325 ' !53#5!#!!!!#5##'#5!#��Ţ�+�5?����`�m� ˈ��=�D������FZ�݁"4k�,����^�Ӵ�7'���O�d�Ճ��-��+�����V��=:J���M!��   h�{��  " 6 : ҵ&,#(:,�� - $� 3 (��)7)!���
��@4-3)
y : 9z &  z  4z@5-:0.
&55&
.0:-�{�$ /�/�9///////////����3����//9/////////�23�23���2��10##"&536733267'73!!%!!#5##'#5!#�!^`�?L��l\}��=g:1���Iс��"���FD�ǁ"4k�,����܇P>?�`]�Z�o�<�����sCX�����q����V���=:J���M!��  h��7 
y % 'z - $z  ,z@(%-(  (-%�z��z  /�2/�9////////����3�//9/////////���3���2��10###'325!5!!!#5##'#5!#%!!!����3�:��$����
 &+=/�� 0 '� 6 +��,:,%�� 
8�z�'7�z 8 /�2/�9//////////3�3�2��3����//9///////////�2��23���2�����10%#"!%'7$%!!32667&!!#5##'#5!#!5!�\A����G��D�'V��s���%
%�G�r���FD�ǁ"4k�,����F����~xC�����y-�;�hZ6���������:��.��ڨ��V���=:J���M!���H�  d�}��  # 7 ; �4-���;-���."�����  )�@*8*5. *$$* .5 2 ,�y@;
:�y�'%5A

*�z  z@+!

!+&	%�z & /�2/39////////��3���3�//9///////3��2�23���2��10!!#5!#!3!!!!#5##'#5!#������Ń1�5���Ô�qFq��"4k�,�
����X����u����r�����V���=:J���M!��  h����    ) 0 �@
* .
  /+"�y  z  z@%%("�z�!	�z  /�2/�29///////3������//9//////////�3���2����105!3!%!!#5##'#5!#!5!!%6'7B�����O�qFq��"4k�,�
����X4�)�A���V�q`u���j��u����V��=:J���M!���V��u�r���#���<��   h��� " 6 : �@
+�y�:9�z@&&
:0.&&.0:

�����ҳ@<lL������h���K��FZ�݁"4k�,����1�ve�{X{�#&�Ł`(	{�bV@������\e����R��=:J���M!��  h�}�7  # ' - 3 �@	+. '��  �   ��$	1��@"(! 1((1 !  ,3")&�y�'�z�&�z@''"
" /3�2/9/////�3�2�3�2�2//9////////33�233���2����10%#!5!!5!!!!!#5##'#5!#'7%'6������L��`����FN�с"4k�,�����}4�m�����3�H�� ��� ���V���=:J���M!���'6�3������6�*  h���� * . B F �@	
.$��  "� + �@ @9?5
++
5?9@	 = A*597Ay F y  #y . Ez 2 u   y@9F<.:2  2:.<F9	A&�y�0@�z A /�2/�9/////////������3���//9/////////���2�3���2����10#!"5'6!#"''3266!!!3!267#!!#5##'#5!#�1`Y�׾)-g�Ux&�W�AT#JKA7!��,C���=##%7��� ��F>�"4k�,�����t��Q?X��%ff���"J�zf���^>7�?'�����V���=:J���M!��   h�}�� " & + ? C @ /5*,1C5�� 6 -� < 1��2@2&��  (��
���##*��  �@'=6<2
#''#
2<6=:���>&!4�y�C*C(�y�&&B�z�/%�y@6C97&//&79C6>-=�z > /�2/339///////3�2�3�23�2���/�/9///////////��3�2��23���2�����10&''67&#'6!3!'67!!!%6!!#5##'#5!#�g����`���Ag��g����xuO ��J!���]��Z��2�����F>�"4k�,����#^m��KbL��Vu���V�����+�u���W��hs�����������M��=:J���M!��  h�}�� * > B �@
.4+0B4�� 5 ,� ; 0�@	1?1"&��@&<5;1$(($1;5<	 9  =153�y�B)�y�&A�z�.%�y@"B86..68B=�z�,<�z = /�2/�9//////3�2�3�2��2���//9/////////33�22333���2�����10% ##'325'$!5!#'633!!!!!!#5##'#5!#�c��l��-�6|��d>^�w�5c�Fy#Á��s���P����F>�"4k�,���ǖW<��좃+���W��}3�uF�[-;m+��}��}������V���=:J���M!��  h����  # ' 7 �'��  �   �@
$-
26��@%+/+4! )-+4  4+-) !
((")�y�'5-�z�.2.�z�&�z�
'.00.'"6*�z�)!�z " /�2/�29////////3�2�3�3�2���//9//////////33�233���2��105!!5!3!!!!!#5##'#5!#!5!!5!53!!!u�����a�^�������FP�"4k�,���������w�t���T�����������T��=:J���M!����6�����  h�}�7  " 6 : �&,#(:,�� - $� 3 (��)7)��@		��@$4-3)  )3-4 1 )-+�y�:�{��{  9z@&-:0.&&.0:-5	
5 /33�2/39////////��2�332�3�//9////////////3�2333�23���2��10###53#5!#3#7'$'%#5!%!#5##'#5!#���������������o��)������FD�"4k�,�����y��1����/��"�!���n�T� <}D=�����V���=:J���M!��  h���5    % / 9 E �

8���3?.���)60D�� = $�@.,&"
;3?)0=&BB&=0)?3;
 : +!5.$8�y�C?�z�@'1�z@@@D<�y�;�z� /3�22/�29//////�3�2��22�22/3/9//////////////33��3�3�3���2��105!!!#5##'#5!#&'67&'67&'67!5!!5!!!���-����FD�"4k�,�����mQ��MmJt��mR��MmJt��mR��MmJnT�q�g��V������wh��=:J���M!��ZIᤛ�<��x�Iᤛ�<��x�Iᤛ�<��r�4��~�|  h���      & : > �@!$5 *0',>0�� 1 (� 7 ,��-;-��  �@817--7185 ��@#&9-1/A
y  y  =z * y@
 '-$);-�� . %� 4 )��*8*#������
  
*4.5	 2 	6*.	,�y ; x�A
y # :z ' "y  y@;1/#''#/1;6���	%5�z 6 /�2/�9////////3����2�����2��//9/////////3�3�2�223���2����10& #%'7!3!!675!5!!!#5##'#5!#�i���)��%A�ZV��B�lX���k��1�����?T�>e�&����!bg��Ԋ��o?\� �
���/!��  �@D=C9''9C=D	A ��@+#4DE9=;�y�J	
�/5



/#79+C6	>-=�z > /�2/9/////////3�23�2�3�23�233�223�//9/////////3�3�2�23���2���10%!#!5!5!!5!5!53!!!!!5!'7!5!#5!#!#5##'#5!#������j��;Á����k�������������?}�}>e�&�s�����j{���{��{��D�/�����۲���%���V���6IR ���G'��  h���  , 0 @ D L ��A0"�� # �  ��-E���JA���BB:��@,7*#)H	JB7  7BJ	H)#*1'1G5+B5!�y�0C8K$/�z  |�	�y@

#@0&K$

$K&0@#	+<�z�5*�z + /�2/�9/////////3�2��2333�����//9///////////////�3�2�3���2���10&''767!5!53!!%&'7#!#5##'#5!###"5333267#3'$3uk7��+�h]��Ձ���Mg�TBi���?{�{>e�&�k���
7asq}##�3}}����gB\NEC>u��}��}��\'BL���uX��6IR ���;3�͚r�}��['���;�����Z�59   h�{�5 $ ( , 0 4 H L6�8> L>�� ? 5� 6 :��;I;,4A
�   �  � " ��$(	0���1)1��@&-%-F?E6; "$1--1$" ;6E?FCA
w  v " =y L y� �y�404/3�y�,(,K�z�8'+�y@"	?"LB4@,88,@4BL"?G6F�z�G /3�2/39///////////3�2�3�23�2�����//9//////////////3�33�22����23���2���10!5!5!!!!$''$7&''673675!'5!5!#5!#!#5##'#5!#���8-���sg��<�N�~��J�NBCV@m?gCcL�������������?-{�{>e�&�k��9��}��ݑ�0w6��^q?�Blm7iEs�Gk���������������uX��6IR ���;3��   h��=�  " & * . 2 F J
@
A ��@
+#E;�y J 	y�2.2-1�y�*&*I�z 6 v   y@=J2@>*6  6*>@2J=	E�y�4D�z E /�2/�9/////////���3�23�����/33�/9//////////��2��23���2������10%##'325!'$'$!!%!!65!'7!5!#5!!!#5##'#5!#=��-�7�@)�kPg<�t(�;gp����<bJu$������������?#{�{>e�&����D�5���`�qX<d�M7@3{RV�TV[�;��������������uX��6IR ���;3��   h���7   ! % 9 = �)/&+=/�� 0 '� 6 +��,:,!%A
�  � 
,0.�y�=A
y % $y ! <z )  y@0=3%1!))!1%3=0	8�y�'7�z�8 /3�22/�9/////////����22�3�//9/////////33����223���2��10##"5# '$#!#332675!5!5!!!#5##'#5!#�$��������H5�@�AT52���>��>�����FV�ف"4k�,������������:��+���g<W�Ǻ��ɾ��������V���=:J���M!��   h�N5    - 1 5 I M �
$9M?�� @ 6� 7 ;��<J<51$�� + ��!2.!
��@G@F7<(+!
D ���'>�y�M	#�y�55L�z�94�y@11@MC5A9119A5CM@H�y�07G�z�,H /33�2/3�29///////3�2�3�2��2/33�/9//////////�2233��223���2���10%##'325#'6!####'325#'665!###!#5##'#5!#N�`/�3ٖh��}�����s1�5�abjNb�{�����?{�{>e�&�b��L�7����J�[�V/���T3���w�=����uJQ���V/���T3������bY��6IR ���(F��  d�}�� 0 4 8 < B F �@/=

C
9
*..*
9  �x�FEE�x��x�B/@�x�,<;�w 8 7w@4($ B84  48B"F�~�
+3&" /3�22/3�9//////33��33�22�2��2���//9////////3�3�233�2�����10&''!!#5!#'$7#'$7!5!!5!53!53!!!!5!5!5!&'!5!�NOpn�G>GD�����Gn���zR��?���G�G����3����"��"��"X2��5cJ���f;<N=�
ll\TCjZ�a0fZ�p%q����q��p��pp�qq�ss�GCDF�찰   h�}��   # @ �@	$<8 1#��  � 
:>��@33
5335+
*&.:3@�y # =y�:59"�z�6�y@
(#::#(	@�z�&
;$>#��  
�x@#1551#*�z ) y  /�/�9///////�3�2�23�2��2���//9///////////3�3�2�23���2����10!5!5!!!#5##'#5!#%%##'3265!5!5!5!#!&'7���K���I������F#}�}"4k�,�������٬5�/=�!�����6��V��R�������{���Vyy�=:J���=1��9���;/#{�}{���^�FTJ   h���    . ; G �@	8:5<-+��  � 	 
X]5�o^�N "|tQ�L�M�b^�vj�s���偈�   h���   + / 7 ; ?�!/!�� " � ( ��,?;4���5
������0��@"1<81)"(5115(") & *3A
y ?  z / >y ; :y�6.�z@	�y@
/;%6##6%;/*?���15)�z * /�2/3�9///////33�223�2�����2//9///////////33�3�23�2�223���2��105!#53533533#!#!!#5##'#5!##5!#!5!5!���;�߁���C�>��B��F/}�}"4k�,����E��Ճ/���-��{������������Vyy�=:J���?/���)h�˸�����   h�{��     ! 5 9 E@: %+"'9+�� , #� 2 '��(6(��  �����D<��@=A=3,2(?==?(2,3	0 ���4=,*�y�9;?�y�@D@�y�8�z�%�x��y@@B/-%%-/B@	49���(,#3�z 4 /�2/3�9/////////3�23�2�3�23�2���/3�/9/////////3�23�2��23���2������10!'67!!67!5!'7!5!'%36!!#5##'#5!#%#!5!53!;�~��X���T/k0$���������+V���6����F/}�}"4k�,������^��e���e\Jh]eER)���������|_��T���Vyy�=:J���=1��L�q�{��   h�}��  # ' + ? C �@
/5,1C5�� 6 -� < 1��2@2#'+�����@"($ (=6<2
((
2<6=
 : 	>�y�++#4�y�C*�y�''&�y�##B�z�/"�y@C'97#//#79'C>+���-=�z > /�2/�9///////3�2�3�23�2��3��2//9//////////333�2�23���2����10%!#'!67!!!!!!!!!!!!#5##'#5!#���'5X�|s4G'f>oA@l�L��L�������=��=�����F/}�}"4k�,�����HCb�/����;�n}��w��w��!
���{���d%�����Vyy�=:J���=1��  h���   # : S@; 8:*/5,#��  � 
�  M� @ C�@J
'>SF�y # Fy�G2L"�z�:A7�y@
#G4/-77-/4G#
O�y�>

����~�x�y���:�%�R�{������F%}�}"4k�,�R��!e����j�a�e�F}�-y������y��H�N{�}�����D���wXy�=:J���=1��   h�Z5    2 6 D J@
y I 'y 6 :v C 	y�5�z�""�x@I<6CG@,*""*,@GC6<I�z  y  /�/�9////////////�3�22�����2�/�/9/////////3����223���2��2����10%##'325!'$7#!!!5!5!!!#5##'#5!#%&''667!3!ZϢA�R�@]�RO�N��&(����L�����F+�"4k�,�����CJ�P�X�~!j�R�i`�V@a=hp���^T1���뢢����Vss�=:J���77��X^-X9^%�#K*)�����   h�{��  ' + C H M(�+��  �  ��(	5K���7���H���L<F���I9IA���/���>��@0D%$2574LI/D @@ D/IL4752$%,",&-1	&�y�+A/5�y�6>HK6*�z�FJ�y@8<86!8:

:8!6&+���%�z & /�2/3�9////////33�2�3�22���2�2//9/////////////////�3�2�3�2�3�2�33���2�10!#7!#5!5!53!53!#!#5##'#5!#$'$!53!53!3!##36`�����}��}?}�{�F+�"4k�,�T���R�����-T���C�V}X��@V˖�`ۺ$^����{����C���Vss�=:J���77����u���[�uuh{����{��jǣj���  b�}�� 	 
70",,"07
%@82C16C�v > y�+<08�y 9 y�*�z��y@>+!99!+>6�{�4
�y  /�2/�9////////3�2�3��22������2��//9/////////////3�33�22��23���2���10!5#'7#5##5#!!#5##'#5!#$#%'7#5!!67���e�{�g�y����F)}�}"4k�,����N��b��
% /3�2/3�9///////3�������2�2/3/9////////33���223���2������10!!!!7!5!5!5!5!5##'#5!!!#&%7'67��8F���JC�%'���\��\����}�"4k�,����Fb��]���R��[��Z������}�����׮��ճ���ss�=:J������H7����b�VY7"�9b4�  h��5     # I@
�  ;� @ 5� :  �@DG>8@::@8>GD4(���47+�z�
y H "z  y  
x@C#'HH'#C	0�y + y  /�/�9/////////����2�22����2��/�/9////////////3����23���2������10!5!5!!!#5##'#5!#%!#"''326'#'$#'$7#'67!5!���T���Q������F%�"4k�,������#"2�#U�0mq5 35�]��VmK�W��=D4�arJ�s����\�vv�B���Vss�=:J���77���K=�*��%y6�8�b����pjc�iAfj�}   h��� - 1 5 9 M Q*@ &*",6	=QC�� D :� ; ?��@N@���159��  � 	 �� $(,��@$62.6KDJ;@	66	@;JDK
H"
4B�z�Q+8�x�5(5'4�x�1$1P�z�=#0�x� ��
;K�z@LQ5G1E=

=E1G5Q
9��� //�9//////////�2�3�2�3�23�2����/�/9//////////33�2���2�3���2�������2�10%#' ##!67!#5!367!!!!!!!5!5!5!#!#5##'#5!#���=KS0����!���`+o�Ju!5f��;��;�������3��3�����F%�"4k�,�k���TGnG�Z�I]V���{�mh%`Nw�s�r�}����������#���Vss�=:J���95��  h���    # ' 5 9 =� (��  � 	 
,�z�+	�z  /�2/�9//////////����������/�/9/////////////������3���2��105!53!#!#5##'#5!#!!5!##'325!#!!7#��{��@�F{�{"4k�,�J����I��G���/�V�����)�}�\{��A���Vss�=:J���77��!����}�\-����k��ѹ�  
 h�}j7    $ ( < @ F L T ^#@ADGJ7 PRN,2ZVX).@2�� 3 *� 9 .��/=/$ (��  ]��X
M��@P!%P:39/XNPPNX/93:7��@ELS[BNVI;�z�*:1�y @ y�(
(	'?�z�,$,#�y@  @6(4,  ,4(6@�y��y  /�2/�9//////3�233�223����2���������/�/9////////3�2��223���2��2����2�����10!!!!!!#"''3265!!5!5!5!!!#5##'#5!#4'7%'6654'7654'7j�T[��]���%+YIZ~%�%)&/�������B��B�����F9�"4k�,�����sdjW�h�{�&=vPrR��$y��y�y���e�E!�15h���⣣�Ӵ��ҷ�ب��{Ns�=:J���77��w%���B���-�D�������zq`Whkl  h��7 1 5 9 M QJ@.0&	=C$)
:?QC�� D ;� J ?��@N@5��  ��
9���)���"&�� 6 �@#2KDJ@
62((26
@JDK
 B�y Q 0��-)�y�9&%8�y�"P�z = y@5D+Q-GE=55=EG-Q+D

�z  4y  /�/�9//////////��33�2233�22���2���2��2//9/////////////��2�3�2��223���2��������10$#7'7#'6!!35#53533533#3!675!7#!!#5##'#5!#�T�yY���';���r����훙{�{����l0�IOE��R�>?�����F{�{"4k�,����!`���LAy�f8��z�J����i���{����{�{ofGaZUQ����Z��#����F��=:J���;3��   h��� 	  # ' E c+@

> (AC7+0@\F_UaIN^'��  �  ��$^KW�� R F��I@-9��@4! KPRI2-44-2IRPK !+(��@+"@^,JG�y@';Y94R3Q=[&�z�6T�y@!'YWRQ[TT[QRWY'"A_)G!�z " /�2/3�29///////////3�3�33333��2�2�2�/�/9////////////�����3���2�����������������105!67!%&'7#!#5##'#5!#4''767&'76677&'74''767&'76677&'7��s�y1�>fX�pB�h��F�F{�{"4k�,�y���w�i)?bNc�A0y*sOtAC]4l���/oV��w�F)oaOc�B/z*rOs@C^3m���-qT�{��/_4�x?yz���wRs�=:J���77���V#=YHu��v[s�/�ְ.B��:�W��)]O��%5`Mt��v[s�/�ְ.B��:�W��'cI�  h���    3 P@  402!>L75)$GJ��  � 	 
�X|$�%�D>!�sY�cV����^{��C���iR��=:J���(F��䢢|K5S�b�5~F��k-����"����zq]�{��  h���   $ ( , 0 D H Y0@	RW-4H:���;126���7E7(0���$,���-%-��  T� N ��)!)I��@(UB;A7-N)WUUW)N-7A;BL? LC
M9�y�HTHL�u�U�y�0,0G�z�4+/�y�($(#'�y@; HUXQ><04((40<>QXUH ;C�y�2B�z C /�2/�9////////////3�23�2�3�22�3�2��/�/9//////////////�3���3�2�23�32�2����10%#!"5#'$#367!!33275!'7!5!#5!#!#5##'#5!#4''7677&'7�SN��w��e���:/y 0+��*�<���y�����w����F/{�{"4k�,�y���^�� )Og/D�,\B�z`�:�b�q0+W)@~5K<����'������������w���iR��=:J���(F��?- Vc��'�o//4'g  `��7   ' + ? C	@ $/<,1
=C5A
� 6 -� < �  1��2@2+��  � $ �@=
C	!9C*B�y�//%-=�y�>&>�y  y@
.,
:5D>E B+ F<�y�K1�y�.,�y�)J�z�7(�y�%$�y@!>K.A?77?A.K>	F2�y�5E�z F /�2/�29/////////33�23�2�3�2�2��2�/3/9/////////////////�3�2�3���2���2��10!5!!' !5!5!5!5!5!&'7367!!!!!!!!!#!#5##'#5!#��������bce����y��5g;�L�QE�hDy-Z-�;��y��!%�����q�F�"4k�,�y��D{3��\q{�y�zRTV�De�7uuz�y�{ZP{��]����D��=:J���X��   h��� 	  ! ' - _?@."]VNQS^G:<4A
7A!��  �  ��IA� D P� ? (� + [� 9 Z� : ^�@!1 %AD?6+9:1%%1:9+6?DA
�P%/��X@n@qMpP;�Zn���89\�Wk.��$�Ny%v��F��u���iR��=:J���(F���B�q5Z�A�_6N��s���\s6�{�#{$�ZX
)j�L�u>AˬJ��'A1<��<9<!�{�  h�}�� > B F J N R f j\@ /48<:"V\SXj\�� ] T� c X�@
=�w@	RNMQ;�w�FJ8i�z�VIE�w�6B�w@	2(5A1Td�z@e]j`^VeeV^`j]$	1�{�.$ /3�2/39///////////�2�233�33�22�3�233�2�3��2/3�/9///////////3�23�2�33���2��2���2���10%&###'6#5!5!5!5!5!5!5!5'6735'$7!!!3##5#5##5#5##5#!!#5##'#5!#�]�q�q���Z�x�-��\����VRj8�I(J�F7xJY�n��'vv�u���߶q�߶q��E��Fp�q"4k�,����P�H��h��h���P�g�f�f�g�^#`H$�h
V8QHD2g���f�������������������J���iR��=:J���(F��   ^��� " & , B T Y m q�@
#
VN5�� : S��X=_���`n2`Q��@%Uk*d
N:KX`UZZU`XK:N
d*kCh-Cgdb�x@q70epSKXDHp�x�][kA
�  /� ) �  (�@,),,)	 ���	
A
y # ;� > )y / .y�*%"�z�&�y@#5>/**/>5#
82�y�1
)&!FM5�y�DHKYQ�y�RVRC�z�00���$�x�,,>�z@"?M7DR:8T0!,??,!0T8:RD7M)J.) /�/9//////////////�33�22�3�223�2�3��//9///////////////333�22�33�2��3���2������10##5!533533#3# '67&'767#'6!!#5##'#5!#$#'$!5!53!!��w��Z�w����˅����H��(YLB1E�@�I�"q����Fy�y"4k�,�����L������XP����V����x���y��>������G[e?�OON,W}���V�\#]D/����R��=:J���K#����c�W��w���c�x��y��  h����   4 8 @ D H L+@$*!&8*�� + "� 1 &��'5'L�� < H��I���D�� E ?�@,A2+1':<IEA	  	AEI<:'1+29/93
3?DHL;�y�:"2�z 3 /�2/�29//////////3�23�2���22����//9////////////////��3�2��33���2�����10!%&'7&''767!5!5!5!53!!!!!#5##'#5!#!53!3#####b��R^�UWj��k)(��1�p>�w��m����r ����Fy�y"4k�,�������ō���t�w��y+U29w�A?2_���u�u��u����iR��=:J���(F���}y��)e��e��e��   h��� 0 4 8 < @ T X ^M�Y\1 9��@"DJXJ�� K A� B F��GUG8@��� 4<$��@	5=/��@(	
1O1$%.N%Z]I�y�X/.-�w�%#�w @ Wz�D;?�w�84837�w� BR�z@#SSK]X.%(L<@D8SS8D@<L(%.X]K�y� /�2/�9//////////////33�23�23�2��2��23���2��/�/9//////////�3�23�2�23���2��2������10!##'3255!5!5'%5!!5!5!53!!!!7&'7&'!5!#5!5!#5!#!#5##'#5!#&'7���j1�R���`9��w��)�} � ��w�,,o^u M ����}�����}����F{�{"4k�,�k��``b�`���yR�ky)l�Fylwwly���8^�-.$
{Ƅ���񉉉�H���iR��=:J���(F����Ey;='  	 h�}��   ' - 3 9 ? S W7� CI@EWI�� J A� P E��FTF���	.�� 1 (��+A
�  :� = &�  4�@!7QJPF	1+=7$$7=+1	FPJQN���R#�y�H�y W ;�>5/�~�282V�z�C)#�y@$

JW>M!2KC,#

#,CK2!M>WJ
*"E/;%7#2**2#7%;/E"BG	 /�2/39////////////33�23�23�����3�23/3/9///////////33�33�22�223���2������10!5!5!5!5!5!53!!!!!!!#5##'#5!#!!5!5!5!'$7&%7��{��x�:Ɓ��?s������F{�{"4k�,����f����������J<��@���T�nohil��lifq<���iR��=:J���(F�����ii�hh�nnݝ*j'��f�"a% 	 f�}��   & , 2 6 D X \%@	7 ?E0* ���' \%N���O"OF�� U 3� 4 
-���J��@$KYKS VOU4
KK
4UOV S<E<4\ROM�x@
\P[25=,D[�x�HFV�y@W/):D%! ##�x@	
'%�x�OBO(G*J�z�#AN�x�K>K=J�x�G:G9F�y�060"�z  y@#KG03--30GK#
O���'
+1.v$��kV��P�������N��N���\�A��啨��iR��=:J���+C����DR#E�+%oUOWw�s�p�=���娨�޲� 	 d�}��  % 7 < E I M a eN�,1^W	_>���CeIW���XJX=���F91��  6� . S��TbT ��  4�@(8_CXF 1.T8NN8T.1 FXC_&A\&[XV�x�eYd6.;d�x�QO_�y�`+'@)�z ; >v�MIMH91L�v�D2D�v�"%
�x@Q`@;MD%

%DM;@`Qe��TX	 /�2/3�9///////////�3�3��3�23��33�2��2���/3/39///////////////��3�����3�2�3��10!!!5!5!5!53!##"55!'655!3327&''$7&'#5!!6!'655!5##5#!!#5!#'$7!5!5!;�#�/<�y�r�RK+V�� �P��/#$o>�ö��?	�YCHuG�����T=_�����V��w�l���9^���}��F���������^``^]ppw.��X�OP9���6m�Gjsk"j^PwnrrSg0l"3x�SKV���yyyy�;OJ�iqonM^��w�٨�  h�~�� 8 W u � ��@ 1+9SI<UMARq[sk`pyv{��� � w� � {��|�|pA
� ] i� d �  n��k
 R� > 3�  K� F )� # P�@5M���|b]dk
>F%#MM#%F>
C[
w 
 3v . ~y � x�,
.��&qyt`kidc��cdik`tyq&��.
�f6�x�wf /�/�9/////////////////�3333333�2��33�22������22�2�2���2��/�/9////////////////////////��������������3���2�������������10%#"''67&'!&''$#5!473!&'73!6732&''767&'767677&'7&''767&'767677&'7!3#5##'#5!#�$WS����D�2*���jGJu,�Z 
�"w7<RFE3��4�mR��(l"PAp��/RHb�B%
V/o<`7)C(bh��\@�jp��/Z>\�B-V1n@]3/A(dj��Z?�m��F�u�u"4k�,��՛ɺ��aAo@Ue�57�Re?���R�KpF�i����?"A&N.p��gpI�XLL	�!C3{f�GFd��7��$^}3��H0��!?3{t~EHd��7�� #`{3��H0~����iR��=:J���(F��  h���� + ? C G K Q [P@L X(R#Z!H���D!��@
0 ���4�z�#3;*�y�9E9D�w A @x < 8z�%	�x�!! �w@,9A/-<%!!%<-/A9,	�x��x�
 /3�2/�9/////////3�23�2���3�2�2��/33�/9//////////3��23��2�223���2��10%##'325!!5#5#!#!7#5##!#5##'#5!#!5#5#P�}'B���{������{�}�����Fy�y"4k�,�V�����w���\�r>�d����s���������J���iR��=:J���(F��~����  h�u��   ! 5 9 P b fU@ 0NP@E%+	KB9+�� , "� # '��(6(E�� B :��G���f���X]aS��@1TZcT_3,2#(>BGVXT__TXVGB>(#2,3 0Q  #RV�y�WfaW*�y�9`e�y�Y]YH�y�P8�z�%�y�
{���{��/��  h���   ' + 7 ; ? C G M S,�NH+��  �  ��(5Q?G���1
���;.C���D<3D���0��@+@8@%$Q1DK@  @KD1Q$%H",H&LS1�y�+GC+BF�x�?;?:>�x�2.2-5�y 6 y@S+?!2662!?+S
&IP%�z�
& /3�2/39//////////��23�23�233�23�2/3/9//////////////3�3�233�223�2�233���2��10#!5#5353!5335!%#!#5##'#5!#%!!!5!5!5!'7!5!#5!&%7'$7F�����}f������\�Fy�y"4k�,�V�������q������������}���X���L����H
����y�����ww����iR��=:J���(F��s��yr{�������������\�7`4�(j2� 
 h�}��  0 4 : @ H L P T X;@	58; >+ 4&�� ' �  "��#1#XPE���FLT���UMUA��@+BQIB.'-#	FUBBUF	#-'. + /'FD�y�X%�z�4SW�x�PLP*KO�y G 3z� �y�
/TX���BF.�z / /�2/3�29//////////3��3�2��2333�2������//9///////////////33�33�2��223���2�����10$#'$7!5!''$%!!#!#5##'#5!#'67&'7#5!#!5#'5#5##5#�T�����D��}��%J\g��������Y�Fy�y"4k�,�V��55g`b<�n/eq]�z��{bz�w�m�w��u���P��ug�{!vqXH ��{�1���iR��=:J���+C��KoS5N}�-`B9K�={{+�ߨ����檪��   h�}�� 3 7 ; ? S WF@?	CI@EWI�� J A� P E��FTF;7?���/��  ��4'#+��@1<8<%)QJPF4<)!-11-!)<4FPJQ N R7;H�y�W2�x�
���[���N26��@<+/+(Y! S:V;UD8)-N+ 4YY4 +N-)8DU;V:S !HHRLFG9)�y�'ZPV�x@W6*)G.2B>&�z@
-5E=@0@�x�
!�z@ "`'W*G>@""@>G*W'`]�x�L
 f�}��  ! % ) = A G M S Y*@QTWBH8
)-3N*/A3�� 4 +� : /��0>0K%!)�����@+&"&;4:0K&E  E&K0:4;B8B

;�x@<)7%-!
<<
!-%7)A���4+ /�/�9///////�3�23�2�3�23������2�2�22�//9///////////333�2�2233���2��2�������10!'6!67!!!!!!!5!5!5!!!#5##' #5!#&'7%'67&'76'7m�FA_�ro17Dz'/u�{`��`�������C��C�����Cw�w!RP��ͮ�w�u��d#�t�,�qoqh��yjwbf6i;R�t1id�r!�_p�q�r�w�����������ܻ�`l�.FT�q�5R����1��!����?�������� ���  h�q3  ' + / 3 7 ; C G K O S:@4,-50819" 

+K!B:2

2:B!K+&OS��=A
�𦦦��第��  d���  / C G eV@ HZ]_TR!OX3@c_$XG9�� : 0� 1 5��6D6RX)���&+-ae�� V ����@#A:@16X#-	VV	-#X61@:A_>Z��@
_NJQ\aFL�w T 8x G dx�a`X�x�Y F�x 3 u�.,$�w�%
?A!FPN�w@	]>CI4�x�
�����lI�^�9Xkd0�Li=gcn���?��n%1_�&�j��Zj����wl\�q�k�mANBn}��}��n4_>m�k�q��elQ�]2c~�<�U:j�����y�L;F%�q�R)��   ^�m�    + / 3 7 ? C G K OC@& (/!�� " �  ��,���OG<�� = 7��1
CK���LDL0�� 4 8�@9H@9)"(=1L4994L1=(")& ���;�x�O
)�y@*/G>%72**27%>G/
KO��9= /�/3�29//////////�3��3���23�2��2���/�/9///////////33��33�22��22�3���2�����10#5!#!3!%&'7%'67#!#5##'$#5!#!!5!#5!#!5!'7!5!#5!m��r��
kyk0 @<,���"?���:JN���262SA
 _�@;H]PWvouk &<:2/-
L]WW]L
-/2:<& kuov s #+_%r+d�z b v 
 z�m�w | _�@	\XU,!
Z|\!+p�(h59ww95h(�p+!\|Z
bC�w�=C /3/�9/////////////////�233�23�233�22��2332��2���3�2���//9///////////////////33�����3�2�33�22�33���2��2���������10%#"''67&'!7##'3255'%5!5!5'$7!&7!5!5!5!5!5!&'7367!!!!!!!!67327!!#5##'#5!#&'7�#H9`��UI��0 ����H7�!�/�A ��yQ>�D^i�k�Z��3�YuQz[K�y=hlT���d�h���0zGEE�$S'-����Ap�r/R��R���PUiGi����cT9Nm�/f/�ATh2�-k/�krfTP3���k�j�kW:L6WPd{99mk�j�k./[�kwb]GDPb=K������ssk%7I�m�A!��WFo/C+   d�}�� 1 E I O Uh@
MP#S@J($ ,��@/0 
5;)%-"I;�� < 2� 3 7��8F8	A
 �  �� ��  "�@C<B38

83B<C
*
�x�3C�y@D?=5 
D..D
 5=?I���8<- /�/3�9///////////�2�3�2���323����2�2/�/9/////////////��2�����3���2���2�������������10!53673#3#333#33#33#53#537!5!3#!#5##'#5!#&%7%'$7��Vi7�GR8������kZ�y������
��
m l�{������{{{e<7L$�}�X���yN�Jl���N��   f�}��  L ` d ��@>'%}upzPV5+ �jdV�� W M� N R��SaS���z	A�  h� r �� u j� m e� f �  %�� EI�� ) :� 2 =�@2-8GA4A^W]NSzsrumf  /)2-AA-2)/  fmurszSN]W^C[>��@Co05)Ky@Z"kWIKmU�y�dhds�y@
tE�tHf"+Dc�y�P=P�w�� | x  x�	N^�y@_dt"X,P|2	_66_	2|P,X"td
+61,���7XfoNs<;�HK�ZRFN3�q0x''D�;q(p��dXH�f�:{�{&c����L�
TbP=\]�Z$��>(<X_6i3���T9��?JoFIo3�����^Hm��GQHFƍ=ytqL%/[�{}��!5=��|I��x�
y�]C<l�*6{�   d�^7      ' + 3 7 ; ? C K O S W [l�+��  � $ ��([SH���I���OW���XPXD���ETLE���C;0���17?���@8@ ��@!%$IXE1@@1EXI$%
�x  /�2/3�29/////////�23�23��3�23�2��2/33�/9/////////////3�3�2�223�233�3�2�2�223���2�10!!5!#5!5!#5!!3#5##' #5!##5!#!#######5!#!######��V�u��r�����r�ٹ��F�w�tB]�j��h��shejd3ejd�k��j�kbbe)bbe���������򤤤�y����ss}+IP�v�L���'yy��������������yy�������������  	 f�}�5   # Y ] a e i m�@ $,BMOG#��  � 
7A>@�v 8 x�#;#6E�x�H*H)K�w�mimhl�v�eae"�x�`d�w@&L&\LXTP%[ORVR8#HmeLPRRPLemH#8
1�w 0 w 
 /�/�9///////////3�223333�2�3�23�23�23��2���2��2/�/9/////////////////3��3�23�23�2�2��3���2�����10!'65!#!#5##'#5!#!3!!##'325!7&'7&''75!#!5!35#5353!53!!!5##5#5##5#���o�coy��1�8q�s(g��)��������O@�!�G��aL@0T�M$���q������i)h����)��r�Z�r���;���Dc������dy{)-J�x�6�����q�=?RhF9�W|'&*=Z��Vqbiiiib�ssss�{{{{  h�}�� ) - 1 P d h ~�@i"| %'$.I2BNL:KThZ�� [ Q� R V��WeWK�� 7 D� ? 2��5-1���zm���n���.*.$��@+b[aRWr<7u?L5twn..nwt5L?u7<rWRa[b_ ��@
hzvlo}ux�v�%�x�113K5A
w L gx T 0z  
v�DH,�x�
jp7h</���0690>@�cA
�{xr0�quGA
{ J D} T Ey O .u�A<!)?7�w�8�}�&"�z  z@,]�r0u3JTO1M@QA<88<AQ@M1OTJ3u0r�]��|�`d�{  /�/3�9////////////////////��33�22�2������2332�2��2�2���/3/9///////////////////3�2�3�����2�33�23�22������10&''67&'767&'#'67#53533#&'#'67#53533#7''67&'767&''!!#5!#'$!'$7!5!67!!'&'!5!A9[G�P�<�5A"�:2N(2_�X�0n,�X�?��n��T�NKMnH�N�[��n��8QkJ���H�L\;-Vj-:M!=8HOws�(Q+}��{ÝJ����@����j)-o ����fZ��NV��^XD7?LAI6E	NB
:Q1O<C��F���q��s5��i��i�Ef)��5�nL��i��if+&��L�gJ5<#R.*U3@=�m`22DL�F^^c"bLR1bi�f2K1&&f�@Z_;���  
 d�}�H  G K O S W [ _ c g�@<@D 4- 
/>O/:4=N7J�w�-ae�w�fbf	Y]�w�^Z^�w�

+'�w@(K/47-f	^
((
^	f-74/K
W�{�
��nX��X���������i��i�������������������}�\gg\�HP�_ED�whsڞH��gg���1�:+;.e&Uf}ab�7���}}��)ekb��ddd  d��� % 9 ? N R V j n~@ ehW'h85g`4&VRK;�� + 5��/2n`�� a 6��:&O@��@
HSH ���	\��@&]k]-L+),/aE:OH]]HO:Ea/,)+L-
u  Qv M u  'w@#(8=(	2.ZiEVRM(2..2(MRVEiZ0n�{@	]a;5-
0 /3�2/3�9////////////3�33����3�233�23�2�2�����/�/�9/////////////3�3�23����22��33�������2���10#!"5!5!3!!!!!!!!!!3!27!5!&'7#5!53!!!%!36##'3255!#!5!5!!!#5!#'$7!5!5!�|��sL��}��{L��;��;����/�I���^96R�dT��Z*����I"\>�J9�!�)�C}�{�C��C���AE�}��z�J���������'�u'T?XVD�DEHFID--��c)+5`PP`/3'�L==�F?FZ''�[�RR�TT�cJ3�ZZZ7q(fQ�h�/��  `�}�     [� ��@�y��z 
 y  /�/�9/�2�2�2//9//////���105!!##'325!5!'$7���=��!lL�3�R� d�����ZW�#k���dI�|���`Ie�Tm}���p�\����ZJZ�  f���     ' ��#%��  ��
��@  ��@
�y@	�y  /�/�99//�23�2����2//�9///////3�2������10!5!!5!3!!!5!!#!5!#3'63��p
�P����T ����9��}���ww�!uyuy�{��s{��:y��J�y�������%�!  ^���5    " & . ��*'�� , �  #��$��  
�@ ,$$,  * %-$)�y� �y@
!!!�y��y� /3�2/�9///�2�����2//9///////��2�����10#!"&5!!3!267!5!!#!5!#3'63� ow�bk�ps�AD�������$H��}���)ww�!}y}y;ۤxh�����s�� K��=y��L�y�������%�:  `�}7   $ ( 0 ��,"A
+'/&�z�
"�y@
#
#
# �y� /3�2/399//�2����2�/�/�9//////���������10#"''3254&'7!#!5!!#!5!#3'53qyr��to���Y�=��c���=�A�����GT�����w������z��2�m�]�������}�
��@)1#) 

 )#1
 ,% .2**!%�y@&)*&&*)#�y  /�/339////�233�22����//�9//////////�333�����10  '6 !5!#'$%!!5!!#!5!#3'63�_��^9����_�1 �b��;Y=V�����ya����N9�����1�>qse}jbJ���O�jz�	{�}�^p&�{���}�
		
& . )" +/
''"�y@#&'##'& �y� /3�22/339///�233�22��//�9///////////�33�����10 '6 !5!!5!!!!5!!#!5!#3'653�_�|Ub�^�#�\�����< �l-�����N9�����1�>is]}d_8����d{�	{}{��{���=b}�
�y�,,26�y@7)$,7))7,$/"�z  .y / /�/�9/////3�23�2��2����2//�9////////33�2�2������10%#"&'!%'7$%!!32&5475!!#!5!#3'653�
D`)0R}R��6��E�'
c����x	Ea
���+l��j9��bY0��`Qz�����prqr	�b�}��B�}��������J�X�  h���    # + ��'��   ��!��  �@)!		!) $ &"*!�y��y@
�y  /�/3399//�2�2���2�//�9///////��2�����10!#!'$%!5!!#!5!#3'653�������}��M`���U%����}J�����V�#ssg}���9���a��D|w�d�%���}��B�}��������J�X�   h���     ' ��#��  �  ��
��@%%   &"
�y@

�y  /�/�99//3�2�����2//�9///////�2������10!533!3!!!5!!#!5!#3'653��7݁���u��|��ZH�ہ���A�3ssg}}N��)�mw��T}��B�}��������J�X�  h���   $ , 0 8 ��!"4*'�� ( -��.��  �  �@%6(..(6 1* /7#.
� 
 �  �  �@$3%+

+%3	 .' 0,4 + �y  y�#'�y�(�y@
�y   /�/339//////3�2�2�����2�//�9/////////3����2�������10!!#5!#' !5!67!!5!!#!5!#3'63��v4@d���H^Rb��~}����z��X<�����3�3ssg}���V����`q#�{�����b'��/}��B�}���������J�X
 :��@? %,<7(,8@�x  
u�/3�y@44"44",1+�y , /�/339//////33�2���2�����//�9//////////�3�2���2��2����10&''$&' #533!!76&'75!!#!5!#3'653�e�����fkܓFQ��jm�����+i3�� �:��k]�f�����F�����)yy�5HNwdp�̌d[�?�!��T>�w��uw�f��˺!����CT�TIN^y�1�#�y�R{�節z�  h�}��   " * 0 4 < ��+.  8(%�� & 1� 2 ����@-

:&2

2&:	 5( ,7/;!&3$(�y@
�T�<"�RF��[9���f��l}��y��L�y����7����}3�bԚ����H�G�  m��5       # + ��'���! ��  �@)!!) $ "*!&�y  y��y@
�y� /3�2/�9///�2�����2//�9//////33��22������10!53!3!!!5!!#!5!#3'653��&��������������PQ�܁���?�1}rp}{��-�^���p������hZ}�
�{��y�$$*.�y@/!$/!!/$'�{  &y ' /�/�9/////3�23�2����������2//�9/////////���2����2����10%#"!%'7$%!!32667&75!!#!5!3'653!5!�#�����4�=N\4o����x�9�G������g�����Fww�/NTw��+�������J�ks!�XO:���}���5�O���"�P
y��L�y���^Ѽ��w�R{   j����   " & . �@	* ,��  #��$
��@$$ '��@, )%-$	�y  y� �y�!
Z�����/yy�ciw���w��w�^ɸT"�%�v^y��L�y��������J   f��� # ' / 3 ; �@$%7- !
*�� + 0� 1 ��
��@

1+94- ��@	6:&1�x�2)-�y�.�y@"2..2"&+%�y & /�/39///////3�2�2�32������/�/�9////////3�2����������10&''27!5!!5!3!!!!$7&'75!!#!5!#3'63�q 2���=/GT�e�f���y�y�����U��5sj�����M:�����1{{�;}qq{=DYU/-�iwj}Z��}��w����


""
	�y  /�/339////3�23�����2�//�9///////3�3�2�2�����10!!#5!#!!5!3!!5!!#!5!#3'63��"L���G�4ʁ���������M:�����1{{�;}qq{u�Z����N�}��i����+D}���Z�}������|�I�_	  f��B  ! % - 1 9 �� 5+(A� ) .� / %�  �  �  �@""7)/""/)72+08/4)�y�%'+�y@
,!%,,%!�y�$�y� /3�2/�9///�2�22�2���2//�9////////���������105!#"&&5#'6#!#32667!'!#!5!#3'63��K�J[akI3���^���B�2b9)�����ف���E{{�;}qq{�}�Ε�.H?��(���hR~����%:h����^�Z�}������|�I�_	 	 f�/�       ' + 3 Ŵ/%"�� # (��)���
��@1#))#1,% ��@
&&#�y  /�/39////3�2�23�23�2���2�/3�/�9/////3�2�2�����10!#!!3!!!!#!5!!#!5!#3'63/�s��n�����������������M:�����1{{�;}qq{���+�1���f��!���i'��'���}���Z�}������|�I�_	   f���   * 0 6 ȴ1.��  
�����&&��   �@$(#+&44&+#(
1.105#2-"(�x ) x  x��x@

)

)
5�����������s����E[9Js���Ay=���f�9`.  f�3B       $ ( 0 �� ,A
�  %� & $�  �@!.&!		!&.)��@+	'/&	�y $ #y��y  y@$$	�y��y� /3�2/�9////��2�����2�/�/�9///////���������105!##'325!5!5!!#!5!!!!#3'63��M%[K�+�E�����-����������H�����xx�>}qq{�}��QgA}y�Py��Z�}��w� ��w������|�I�_	   f���    & * 2 8 > �@69<3.��  '� ( �@$0(
!
(0	+��@-!)17>;4(! �y  y@	%%	!�z   y  /�/�9/////��2���22�2�2�/�/�9/////////����������10'67!'6%5!!#!5!##'3253#3'63'7%'6f3bgL-��li�P1�f��M:������O;�5�){�Ktt�:}mqwRqe�i���g�l�hLs��P\{�V��)��{}���Z�}�t:[�-�_����|�I�_	�^@H�:˕���L�q   f���    ' / 3 ; �@		 
/ 2%&@:7���8 ��  ��"
��@',HB8HH8B =:)E +'IF.3'?#'8�u� C6:�y@; C;;C '�y  &y ' /�/�9//////�23��2�2��2���/33/�9//////3�3��2�������10##"&5333267'6'#36735!'67&'7!#!5!'63&'7�]B�AL@t2&����aߴ��3{y�ȃ���MyV�k�N�VoK�^��������}qq{J_p�]��iL<C��DP������udm%ZeZ�����Pw��}��њP����NàG��Z�}���|�I�_	�OV�qNt  	 b���5       - 3 9 ӵ41	������"���)�����@#  +&.)7  7).&+
41483&50%!+�x , x  x��x@,,
&�x�%	�x 
 /�22/�9////33�2233���2�2�2//9//////////3�3�2�3�2����10!!!!5!5!5!5!#5!#5!!5!!##'325!5!'$7$%7J��������e�`�����y��y����������$�B����˸�3>���@����Iǚ�R��n��������������o���r�u9in���rnz���d�Z`4  f����  1 5 D J P �@E2K3+BH. %0�� ' 8� @ �@"%='@N	66	N@'=%"K��@
0C4%#00#%4C
=�x�<- /3/�9//////////3�2���3�2��2�2/3/�9////////////�������2�����10 767!5!'67&'767&'767!'$!!5!!##'325!5!'$7 %7�h�pzn*�~|���dÌ��k|��c�A]ZMQ7:=aXEJ[��]�o&vt*j{�]�w�yS8�5�7�?��@��oP���c����TM�`1�'����^�n{֭�Ѣ��S`lcP3P+`,:W.X(W{V��X�/5BA�Cs�D�P;]q9�r���ouS���^<bQ 
 `�}��     # + 3 7 = C �@	>8A !)/1&�� ' 4��5
�����@'5$;  ;$5'	8,��@18.@62"5@"<C�y��x  y�%)�y�*�y@
C**C"'9@!�y " /�/339//////33�22�2��33�3�2��2�//�9/////////3�23�23���2����1053#5353!533#35!5!5!5!!'!5!'6533&%7%'$7�������ہ������#��#��#����N������PVw�ww�e���V�����PC�T}J}����}�������������y���9�x�˵������-�TTR`�ndz� 	 h��7   ! % ) - 5 = A �*+930�� 1 >��?!)���%���&��@'"";1?	""	?1;	 63 @<,?8�x�
@A D)*2<>#%	'G
 w@)

)#�y�" //�9///////3�������2�2�2//9////////////��3�2����105!53!!!!%!5!5!5!%##'325!5!'$7$%7D�������{�V�>�y�4���\���E2�'�/����ï�4L���>����;bmk��� @�$��F�TT�Ci����4Sy)i��jo>��n�Lf;   h���  + / > D J ״"<'*���$2���:��@10<-!7?	):H00H:)	?7!-< BE ID7FA61<�x = -x@.
@



=&YV
5Q:L1+4�y�25 /3�22/339//////////�23�2�2���3�22������2�/�/�9////////////////3��3�233���������10#5575#535#53533#3#7#"''326'#'$#55!###5!3'6'3$#'$!5!67!!9�������쁺����1%&O9GLPX-}��\2��F�/�;��Vuy�^NXyi_���u�XZd��k�}�gp��n�l�w��w�l�E��o5}$�����T��yy��L�y���������rh�r���hX6wCXU0w�� 	 h��7    ( , 4 8 @ P@
92��@
+ /3�2/�29/////////33�22�2��3�2�����/3�/�9//////////3�23�23�2�������2���10!!!!5!5!5#5#3327##"55#'67#!5!##!5!#3'653!5!5!5!53!!!��}B�+��w�
���&
f(aLk�	�f������3�r���#pp�Tbk[r^�L1�B�y��C
Ũ�T��r�樨�ݰ�P���y��5���7�q���k�q�������C��j�oq�q��q�  	 f�JB      ( , 5 9 = � 1&	#A� $ )� * �  �  =� 7  �  6� : �@3$*7::7*$3	-&��@0	+4*	$7�x = <x 8 y� "&�y ' y@=8''8=	�z��y� /3�2/�9/////��23����2��2�/�/�9/////////3������������105!##'325!#3!35!3#%!#!5!#3'63!!7#��EDVD�-�:��s{����Z��������?ss�RG<kuw�����}��Hh�=��w��L������f���Z�}��������oI�W	������  
 f�{��      # ' / 5 ; ޷609+!��  $��%���
��  �@"-%33%-0(! 0*1&.%14;�y  x  x�!�y " y��y@;"

";81��  /�/339////////�3��2���3��2�/3/�9///////33��2�22�������10!!!!3!5!5!5!5!!#!5!3'63&'7'$7��}��h�����h��h������M8�����2xx�>}qq{LJ��@�I���Z#������������ѽ�����w}���Z�}� ����|�I�_	�If�2f+)�>q!�   f��B       # + / 3 7 ; � $��  ��;3(�� ) ��	/7���808��@!)	88	)!%$��@4,%";)'�x�;6:�w�3/3.2�y * 	x��y  x@
3*

*37;���%)�y� /3�2/3�29/////��2��23�2�����2/33�/�9////////�3�2��22������105!5!!!5!%!#!5!3'63#5!#!5!'7!5!#5!��M���/���y���������4xx�>}qq{�y�5y�y�ف��������}�}�B�����9�Z�}� ����|�I�_	�牉q������������ 	 f�bB  ) - 1 5 9 A E M@ I?9	<�� = B� C ��19���#(-5���!.6��  &�@2*2K=C#22#C=KF?��@H	DLC	=�x��x� ( '#�x�959;?�y�@48�w@1-1 9@11@9 	�x�0,�y�$ /3�22/�9///////3�2�23�23�2����2��2�/�/�9////////3��3�2�2����2�����105!##'325!7&'7&''%5!#!5!!!!5!#5!5!#5!'!#!5!#3'63��MTL;�-�4���!`Q`
��-��v���c������w� y��w� ������6vv�<}mqw�}��?Ps5�2A��N)<i"��H'���)�^����������V�Z�}������|�I�_	   f�}�B       # @ ٴ ��  �����:>�� 3 �@+!,51/3<<3/15,!$8$"+&.5)3@=�x�:95�y��y  x@:66:@�y�&
�y� /3�2/�9///////��2��2�����2��/3/�9///////////3��2�2�����105!!5!5!%!#!5!3'63!"$''$5!!!!3��M���'y��1���������8tt�>}mqwH,�����g[�d
	A
A55A
-";DRL�x K 
q0�����\X��84V���ri���s?�k�2m2��_�%\' 
 `����    + / 5 9 A I M6@=?*'"1��  6��7M/F���G#G1���!���'�� 0 &� , B�@"CJC7	G!0,C  C,0!G	7:��@
?8@M<7GE�w M Lx H x�3*1'#�x / .x�$�y  x��y@
H/$$/HM�~�CG	 /�2/3�9///////33�3��2��2233�������2//�9//////////////3���3�2�3�22���������10!!!5!5!5!53!5!!##5!!5!&'7#!#!5!%363'653#5!#!5!m�
��#�����=�+�\� �{��fw+N`���X09�����yW8s[��ss�dXy^qׁ�Z����X�ysqypwu`y��P�y�tM8<f��3W7-��nOtN���V�/����+oo�����   h�}��  = y } � � ��@z{�>r��9;"'8OZUXF�A+� � �� � �  � 
X
���"����@"�|�EA^.|T�A#qMyo5*P�C�v H tv o Rx�MmKX�x�YjcYd�{@g"�� 8<9��y��31,'��@"*HoMYg��
 /33�22/�9//////3�2�2�233�23�23�2�2�/�/�9/////////3��3�2��2�����2���10!!5!!!5!%!5!###5!!#!5!5!!!!5!#5!5!#5!#3'653d��p�����p�����/�C��^���{���Z��X���{�����{����ss�fD{Ls�t����ht�����w� �\�w�/��Jr����	������������T��-���  
 h��5     ' 7 ; ? C K$�G% (���8<4(
w ? >w ; :w 2 	w�!%�y�&�x@.?;2&&2;?.+#�y� /3�2/39///////33�22�2����23�2��2�/�/�9/////////3�23�23�2�2�����3������10!!##!5##!5!5!5#5#!5!!#!5!!#!5!5!!!!5!5!#3'63���9u��T�u8�����������)5� y������}��
�}��{��f��f��ww�``oVy�w������uwr�ww����p{���X�{����
ss��s�oo�oo��#�����I�)A  `���       # ' / 3 ; ? O S YP@$%7-@< NKCUA=*�� + 0��1#��  S� G U��F���  
���K�� T J�@P9+1=GEF TPPT FEG=1+94- ��@
w S Rw H =x > w�##)-�y�."�v�
%�y@&SH>#.&&.#>HSWNB�x�A /3�22/�229////////�3333�22�233����22����2/3�/�9////////////��33�2233�22���2����������10!53353!5##7##7#5##5##5#5!!#!5!3'653!5!!5!&'7#!#!5!%36�Gy�y}�y�y���w�w����>�����3yy�Gfo\w/��5-�F�:7B�H�J("��������KHZ4�q���������������������y��D�y��1���7�����r��q_.:C��8Z5-sshD�4  	 h��7 ) - 5 I Z ^ f | ��@
� 1 [� \ �  U��RY{�� q y��vJg���jLj$���<�HA
� > � � F� C 6��9}���������@8d1\.nNRsqPvj��@>�C	9��9	C�>@��jvPqsRNn.\1d%_3 ��@)%a	]e,1(+4EVASC7K;ML�x�tv�h\�m�j�|�v�vL�{ U 9}�C/3�x@4$4vUC44CUv,	�w�#+�x� , /3�22/�9////33�2��3�2�2�22�2�2�2�2�2�2�2�2�2��2�/�/�9/////////////////////////�3�2����33�23�2��2�����������10&'##'325!#!#'67!!5!!!&'7%!5!##!5!&''67&'767''67&'77#3'63&''667&'767&''67&'767�4"I:mb-��y��}/)��/����@�-���+����6/�y���}P
'J<""8=#
E"!��;0M:?!+1/2"#D
+4�ww�Hmoew�@
	FEa
>> F#'�1#F
^cMYO>&2**2&>OYMc^
 f���   K O S W [ c g o�@	kaH6J@CO:>63#'+^A
� _ e� f S� + ��W0[���!)!.�� P �  O��3<8@���XT1X6��@7L Bm_f\+%!P3XLBBLX3P!%+\f_mhajn
G $gSb,

,bSg$ G	�y� /�/�9/////////�33�2�23�23�2233�2233�22������2���//�9////////////////3�33�22���3�22�����2������������10!5!53!!5!$#7'75'$7!5!5#535#535#!#!5#!#!!3#!!675#!5#5!5!###5!#'653j�qq�!�/�@�e�33V��d=dg�=���!������}P}������H�&WhqPZsr*����<��P���T��T!w��6>w�l��Vw��jb�EG�:o^`�OUlr�dubsbwC��wwC��wbsbud`_)mHY?U?�����Zss�uuZ�R�w���H���Ț��  \�}�� 
��  6� 7 5��/eV�� W .��2aR���SbS-���'&���*]N���O^O%��  B�@"KZK7/W2S'*OKKO*'S2W/7":�� ? �@"<H@	OSWFQMU�w�ea]e`\d�x@X'-%5/8,$4�w�0( 0�x��y@G7eX580085Xe7G
	H�v F { 	 /�/�9//////////���2233�22�3322�2233�22��2�2��/�/�9//////////////3��3�2���3�2��2������������10$''6 7%!5!!5!##!5!!!5#!!5#!!5##3'63##'655##5##5##!5##5##5#�B�}���aH�a_h�����)L�5����o��%���-fa���+g^���/i^�vv�i\kRu@7^)Z�r�p�p�s�r�p��g����gC�3
V�{5Fb"���������殮���� 
�}� 0 4 8 Ʒ( %8���+/4��@	!5-��@111��   ���x�
�x�/.�x�84837�x@ + 8 $""$ 8'�y�' //�9///////3�23�23�2����/�/�9/////��3�2�����10%##'325!7&'7&''%5!#!5!!5!'%!!!7!7!Q<�?�)���!9{Jy$�F��ʃ���	����:��`��=������y��x=B]+��>1/v�7BA^j1��u��љ{�TW:��/�����  �u7 % ) - 1 5 ʶ.-5���$)1���2*��  "�@.&...��   ���x�
�y�$#�y�51504�x@-)-5--5 �y�(,�y   /�2/�9/////3�23�23�2����/�/�9////3��3�2�2���10%##'325!7&'7&''%5!#!5!!!!7!#7!5!#5!H?�+�5���8wo[v#��9��ȃ����������P��P��P��P@Oy5��!08+x�5R;wmA�������u����������  ��}q�   J@	 ,G)74B9�� : B� ? I��<G���>>
���/!F��@C:?7<>*!CC!*><7?:
 y�D@�x@*-;B
@@
B;-*	!�x�  //�9/////////3�3���23�2������/�/9/////////////���3�2�������10!5!53!&''67&%767##'3265!%&'7&''767!#!67!3!3!!q� 0�/�-U��EVp���R����V '�j�`<�)�*��IG�0;`�cl(��/�>R�;�s+�ׁ˃��'�ur���=Z]CNaO]LO4d�E�MS��ZVq-��q#G89��3;8<aY����"��y��2v  f���  ) W,�976DAOFA� G O� L V� D �  T� K (� % �  ��"</S�� P *�@12GL#DK%"7/P22P/7"%KD#LG  G.#67@?�v�74E�x�HVHTL�x O ~  x@! QM($#&7:HO M$&&$M OH:7
/�w . v  /�/�9//////////�2333���23�2�������//9////////////////��������������10$ '$ #&''67&'767!5!53!##'325!%&'7&''767!#!67!3!3!!�D�J�p����D[``	m�Fdgh�F����;��|�F�ˢ8�=���J;� �-�T3H�#=`�\`  ��'�P)�?y+�߁���"��m82��^mf95��5R7#Tdf-j\F++JDQ@o���?=Nd-B[[%/hs>-/^iX�+DP*���\�3F4   f�}��  ^���@
�f^nN��y���t   h�}��  " 3 �����-��@%**##*
  	 '+"�y@
�r�A�\���wr�z�}�`O4�{�����wd��͞VF�@��  d�}��  9 ˶  9,0���5���,�� . 8�@/	65&.//.&56	+3 ��@
+2#&(,�y�906�y�7�x�

 
$*-((-*$
"��@	"*+#"
' /3/39////////3�2������/�/9////////333�223�10!7&'#'$!5!'$%!&''7 %&'7��C�|lP����_0��m���Q5�+Fu�Q��(��1�����-@�r���8f�N�n��'���`��{J0}�p:3���j;lqJ�� 3����1��1��   f���  . �����-!��@"&"$ ("++"( $		�x� $�y�%-%�y@
�����30P��]��X���1,$�'��'Lg\���R���gc j�j�j�lwp�ZG/�l��j�����������  f���   5 �@	&,4#��@%$($!&,$1!!1$,& 	 0,)+"&�x�'4'+�x@	,�x@
u_dC�   f�}��  - 3 9 �@	.14 7+'���$)��@	!)		)!  3906
# &�x�,*�y@'+,,+#&�} # /�/339//////3�2������2�2//9///////�333�22����10 '6 3 &'#' !5!5'$%3#7''6�[������[� }.�hZ{�`�m<y��e��;�J�|��?��%�s����n�m����b�J/������V�`�q���J+�y�y�jA ��y�/�y���;'���>�:  f���  * 0 6 �@	+1.4	���)!��@%"&"% "" %	/,52*)$#�z &  z ) w��y@
 ) / 5 < �@	60*39'#��� $ ��@$--$**+2.5
�z  v�(&�y@#<'(('<

8
 /3/39//////////3�2���2��//9////////�333�22����10##'3253&'#' !5!''%!!7%'7%'7'$ �UG�1�<�n9��j�g8I��9�BNk+Nz���Y�Koi�i���/�o����V��[�HT�:���H���ZXܳN:Ix{|`5'��x�7x�N.�I����F!����7�oo�)   h���  5 A ȴ��� <@���9>6)/��@ &8 96&,,&69 8		7A@9$�z 1 x��y@ 
zn`+/���<p��I�*�?�u4�Y�^� >�����s/b��y�wn  f���  $ A G M �@	"BHE���?(��@(6<6:
 6K0%%0K6 
:HHGLD*94I
  "4�y�5:>�y ? w 	 -y�.�y@#5?	%.##.%	?5
<"�~�' /3�2/39//////////��2���2����//39//////////��333�22��10$'#7&'#'6!5!#'$%!$!5!##'325!##5!�[�ۮ���P�D�lh]��V�cӒ��3�'BGOIc�Z�
�
$�{  /�/39//////////3�23�23�2�3��//9////////////33�2233�22310&'#'6!5!'$7!!7 #' !5!!5!3!!!!yb:�|R�g�U��+j�7F�Zg���B�Xe��k{o��a`O����:�{��)���H3E���L\��\��}r
u\2(��}�/���R
�7����X=�v4v��v��v�Z  f���  . 4 : ��58/	��@


2$-!��@%"&"
$ ("++"( $
	9461 $�y�%-%�v��y@,(
(�|  /�2/39///////33�2�3�2����2�2//9/////////3�23333�22���10%7&'#' !5!5'$7!%#!5!!5!!!'67'7o��Nn2q!Z�l�]X��5�X?s�J�d'�
����j��g��
=�t�27u1�j�'�+��:���yX�Vr{�{	�XZ������z�}{�/8���F���;;�1�   b��� ) / O ��"(/�� 	  �  ��NK4���5?5#�� , (�@2*:
=C	<5,*HM'00'MH*,5<	C=
:  GC@B196N=�w�>K>BC(
�x�%/#-�w� �x@9>CC>95 //9///////3�23�2233�22�3�2233��//9/////////////////��33�2�����10$!'$7!5!67!5!67!5!67!!!!!!&'#$%#'$!5!5''3 %!!�N������\TN��^�3%������{��;k��0��d��F" �0�P����w����G���GF��%20J�YA��id�0���`��pMQj6`nIUc-nOGjPNp���=aFX�7d�P���¼.gDk�hV^:�kR  j�}��  5 : ? �%(	���

��  =� * :��>/8���;,;4�� " 1�@!6
(*'>;"6336";>'*(
4"(�y�)1:=)�x��y�8<�y@+/+
�}  /�/339////////3�23�2�3�22��//9///////////��3�2���33�23��10#7&'#'6!5!5'$73$'$!53!3!3!##36P�>XGh^�\�e�y��7�gI~�Z�R�JP�����3Z�}�iXl�q��`t�m��!�+g�F\y�Hd�X��{� y%�Ta���Cb�!�.�b��z�;���s{�\������  h�}�� # B ƴ@<(���)2/)9>������
)8 /3/339//////////3�23�2�//9///////////////�3�2�333�22�10 ' !5!65#'633!!!!&'#' !5!'$73#7�k��Y��Lf�n�i��/d�u��u�����J�5r0p�f�g%@��=�;G�ZT���Gu1P+����P�z�ψ�5�pobw��zv�{�TD���w7ϣM#^{n�X59��{�2s   b���  = C G �@
DE(>��� C&�� + 3� > 6�@$* +>$/55/$>+ *
	!E�y@F!='&+1@)�z + y�6%�y�C3C�y@
C
8��)gtLE�Rk��B��#�����4��N�4o����x�9�G����
 
1$)!���"&"B��@?
$"??"$
99/,4
"' /3/39//////////3�23������//39////////�3�2�333�22���103#7&'#'6!5!'$%!#!5!3!'&'7'6##"&533327\����Bq^m<f�^�[����7f�5�2���s���<`Lyaz����i���-wm=J{#/C)G��y�3k�@�i�kw���Z��yor���H�y��)�J�f@i�������Z_TM����L?��j)�   h����  , 0 ����@	'+0!�� " )�@- "-%%-" 	" �x�+*�y 0 w  /y�'�y�

5,-

-,5	$:���04'�| $ /�/3�9/////////3�23�23��������//9///////////3�3�2�233�22310!!!5!!5!3!&'#' !5!5'%!!7#5!#!!����Y��!݁��
wC��K�cU��C~�?dYy�-��P�����������{y)����E���XT��a��xz^='���-���yy�����m   f�}��  4 K �@K@
+0(".��@	$!02@���;I
 ��@"29F=;

;=F92"B5��@	B*%'-C�y K w�31"�y�#.#
##
H32K>E@*8-�| * /�/39///////////////�3�2��3���/�/9////////////���3�33�23�����10'67&'767!'$7&'#' !5!'$73#7 '$7&'767!'$=��
AXG6K0,���"K�� L Z� R ��:G���H7H<��@4D& P)S.
LRHD  DHRL
.S)P &33#+10%8SL@�x A Mu�604S�x�TZT/ �x�!,!�z 
!2 $���	0���&��@*	#3--3#	*��  �@	,)/ $�x�%0%3/�x  	x  w@
 %/

/%  /�/9////////3���3�3�223��/�/�9////////�33�22������10!5!53!!!5!#5!#!$#'$7!5!5!'%!!
���{�����w���w��wbg@� ��y���B��w#���=#n7���� �g��k����b����!����l1
����5l6�pujD`(�p�  f�}��   " A ��?;'��@	(1.(8="A
� 
 �  �  �@*/(	=#

#=	(/
 5, 
�w��y " &w @ !y�>/�y�0;0�y@+$"?@00@?"$+	7
�z  :} 7 /�/�9/////////3�3�2���2�������2�//39//////////3����22333�22��10$#%'7!53!!675!5!&'#'6!5!'$%!!7�R�
� = 6� < B� 4 @�@(J9 =<#4JJ4#<= 9	-,)81A6=�y M w  Ly�>INDX( 	 �    
 v g a 9 5 0 . f o n   �Q     p Z     �     �
M|���X
4l�u3]���
M|��        @               v g a f 1 2 5 5 . f o n       �Q     p Z     �     �n|���[�3l�u3]���n|��        �               v g a f 1 2 5 6 . f o n       �Q     p Z     �     GNj~�����+4l�u3]��GNj~��                        v g a f 1 2 5 7 . f o n       �Q     h X     �     B�7|����(4l�u3]��B�7|��                        v g a f 8 7 4 . f o n �Q     h V     �     ��l~�����+4l�u3]����l~��        �              
 v g a f i x . f o n   �Q     h X     �     o~�����+4l�u3]��o~��                        v g a f i x e . f o n �Q     h X     �     o~�����+4l�u3]��o~��        �               v g a f i x g . f o n �Q     h X     �     �uq~�����+4l�u3]���uq~��        �               v g a f i x r . f o  �Q     h X     �     �uq~�����+4l���_���uq~��        �               v g a f i x t . f o n �Q     h V     �     �uq~�����+4l�'b���uq~��        0              
 v g a o e m . f o n   �Q     p Z     �     �
M|���X
4l�'b���
M|��        �               v g a s 1 2 5 5 . f o n       �Q     p Z     �     �|���[�3l�'b���|��        �               v g a s 1 2 5 6 . f o n       �Q     p Z     �     ��s~��&��+4l�'b����s~��                       v g a s 1 2 5 7 . f o n       �Q     h X     �     ��9|��O�(4l�'b����9|�� 0       "               v g a s 8 7 4 . f o n �Q     h V     �     ��s~��&��+4l�'b����s~��        p              
 v g a s y s . f o n   �Q     h X     �     ��s~��&��+4l�'b����s~��        �               v g a s y s e . f o n �Q     h X     �     ��s~��&��+4l�'b����s~��        `               v g a s y s g . f o n �Q     h X     �     V:v~��&��+4l�ϔd��V:v~��                       v g a s y s r . f o n �Q     h X     �     V:v~��&��+4l�ϔd��V:v~��                        v g a s y s t . f o n �!    h V     �     (\�M��O���M����τ��O���M�� `     X             
 v i j a y a . t t f f �!    h X     �     �� �M��Z	��M����τ��=���M�� 0     D$              v i j a y a b . t t f �Q     h V     �     S�|��ݭ�4l�Ѕ��S�|�� �     t�             
 v r i n d a . t t f   �Q     h X     �     ���|��B�4l�i������|�  �     ��              v r i n d a b . t t f �!    p Z     �     � �M����$�M��x�ф��vc"�M�� �     @�              w e b d i n g s . t t f       �!    p Z     �     ��M��h�וM��x�ф��h�וM�� P     G              w i n g d i n g . t t f       N"    p Z     �     `I�M��5zQ�M����$������M�� ��     0��              y u g o t h i b . t t f       A"    p Z     �     +�9�M��P�F�M����X���}s�M�� `�     �T�              y u g o t h i c . t t f       K"    p Z    �     �G$�M��ј��M�������bss�M�� ��     ���              y u g o t h i l . t t f       M"    h T     �     ���M��͉�M��[���9�c�M�� �      �             	 y u m i n . t t f f   P"    h X     �     `I�M���h �M��;*}�����ܕM�� 0�     |,�              y u m i n d b . t t f �!    h V     �     o+�M��UX�M���������B�M�� �S     �S             
 y u m i n l . t t f                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       INDX( 	 �a           (   @  �       �  o i             �     h X     �     ����M��f���M��oT"���F��M�� P     LO              a p a r a j i . t t f Q     h V     �     j�|��,�3l�����j�|�� �      ��              
 a p p 7 7 5 . f o n   Q     h V     �     �D�|��l��3l������D�|�� �      @�              
 a p p 8 5 0 . f o n   Q     h V     �     <��|��l��3l�����<��|�� �      0�              
 a p p 8 5 2 . f o n   Q     h V     �     �	�|� ���3l�������	�|�� �      ��              
 a p p 8 5 5 . f o n   Q     h V     �     l�|�����3l������l�|�� �      @�              
 a p p 8 5 7 . f o n   Q     h V     �     l�|�����3l������l�|�� �      `�              
 a p p 8 6 6 . f o n   Q     h V     �     ���{��B�4l���������{�� @      <             
 a p p 9 3 2 . f o n   Q     h V     �     �i|�� 4l�������i|��       p             
 a p p 9 3 6 . f o n   Q     h V     �     �
M|��|��4l�QV����
M|�� @      <             
 a p p 9 4 9 . f o n   Q     h V     �     ��{����4l�QV�����{��       p             
 a p p 9 5 0 . f o n   �     p Z     �     ��M���ĕM��|�$���Z	��M�� �     h�              a r a b t y p e . t t f      7Q     h T     �     ��x~��4GH�� �W����x~�� �
 a r i a l i . t t f o �     h V     �     � �M�����M��|�$���J<�M�� �     4�             
 a r i b l k . t t f o �!    h V     �     ��V|��L�4l�s�?�����V|�� 0�     .�             
 b a t a n g . t t c o �     h T     �     �2�M��k��M���L'���b�M�� `     �P             	 b r o w a . t t f f  �     h V     �     w�4�M�����M���L'����9��M��       �             
 b r o w a b . t t f o �     h V     �     �� �M��B⸕M����*������M�� �     �y             
 b r o w a i . t t f f �     h V     �     p�-�M����ʙM����*����cșM�� `     `P             
 b r o w a u . t t f f �     h X     �     ��!�M��,'F�M���L'���g�C�M��       �              b r o w a u b . t t f �     h X     �     +�9�M��/�M����*���/�M�� �     �y              b r o w a u  . t t f �     h X     �     �)�M��g�٘M����*���$oИM�� P     XO              b r o w a u z . t t f �     h V     �     ���M��q���M��$s,����T��M�� P     `O             
 b r o w a z . t t f o Q     p Z     �     ���{����4l�P�������{�� 0      �*               c 8 5 1 4 f i x . f o n                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          INDX( 	 >           (     �         . u                 2Q     p Z     �     ���|���A�4l���P�����|�� `      �[               c o u e 1 2 5 7 . f o n       3Q     p Z     �     k�2|��Q��4l���P��k�2|�� �      0�               c o u f 1 2 5 5 . f o n       4Q     p Z     �     2 |���:��3l���P��2 |�� �      ��               c o u f 1 2 5 6 . f o n       ;Q     p Z     �     ��|���A�4l���^����|�� �      |               c o u f 1 2 5 7 . f o n      !    h R     �     Ib��q�sN�������Ib�� @     88              c o u r . t t f t f   !    h V     �     �
 c o u r b d . t t f   !    h V     �     ��k��U��N���������k��       ��             
 c o u r b i . t t f   :Q     h T     �     ��|����84l���^����|�� `      p[              	 c o u r e . f o n     <Q     h V     �     gk�|����84l���^��gk�|�� `      �[              
 c o u r e e  f o n   ?Q     h V     �     gk�|����84l�[Ba��gk�|�� p      �a              
 c o u r e g . f o n   >Q     h V     �     �ͮ|����84l�[Ba���ͮ|�� `      �[              
 c o u r e r . f o n   @Q     h V     �     �ͮ|����84l�[Ba���ͮ|�� p      �a              
 c o u r e t . f o n   BQ     h T     �     60�|����84l�[Ba��60�|�� �      �{              	 c o u r f . f o n n   DQ     h V     �     ���|����84l���c�����|�� �       |              
 c o  r f e . f o n   AQ     h V     �     rW�|����=4l�[Ba��rW�|�� �      @�              
 c o u r f g . f o n   GQ     h V     �     ۹�|����=4l���c��۹�|�� �      @|              
 c o u r f r . f o n n FQ     h V     �     ۹�|����=4l���c��۹�|�� �      P�              
 c o u r f t . f o n n !!    h T     �     ��r����N����������r�� p	     �b	             	 c o u r i . t t f o n CQ     h X     �     _[�{����4l�[Ba��_[�{��        �              c v g a f i x . f o n                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   MZ�       ��  �       @                                   �   � �	�!�L�!This program cannot be run in DOS mode.
$        NE�  *�p� �                  * @ @ � � �            
 �       P@     �     $ G0�    �     k 0�      FONTDIRSVGAOEM     &FONTRES 100,96,96 : Terminal (VGA res)                                                                       k  (c) Copyright Bitstream Inc. 1984. All rights reserved.        � ` 
 
 "
 2
 B
 R
 b
 r
 �
 �
 �
 �
 �
 �
 �
 �
   " 2 B R b r � � � � � � � �   " 2 B R b r � � � � � � � � 
  �   
  �   ?   
                   ^  StringFileInfo  J  040904E4    '  CompanyName Microsoft Corporation   (  FileDescription Terminal font (VGA)   FileVersion 3.10      InternalName    svgaoem ; ' LegalCopyright  Copyright � Microsoft Corp. 1991-1993   $  OriginalFilename    svgaoem.fon 9 ) ProductName Microsoft� Windows(TM) Operating System       ProductVersion  3.10    $   VarFileInfo   Translation 	�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    MZ�       ��  �       @                                   �   � �	�!�L�!This program cannot be run in DOS mode.
$        NE�  �k�� �                  & @ @ � � �                 �       P@     �      80�    �     T  0�      FONTDIRFIXFONTS     "FONTRES 100,96,96 : Fixedsys (VGA)            (c) Copyright Bitstream Inc. 1984 and (c) Kivun 1991-1992      ` `        ��  0  �`      v       Fixedsys     (c) Copyright Bitstream Inc. 1984 and (c) Kivun 1991-1992      ` `        ��  0  �`      v      v    v � � � � � � � � �   * 9 H W f u � � � � � � � � �   ) 8 G V e t � � � � � � � � � 
  ( 7 F U d s � � � � � � � � � 	  ' 6 E T c r � � � � � � � � � 	 	 &	 5	 D	 S	 b	 q	 �	 �	 �	 �	 �	 �	 �	 �	 �	 
 
 %
 4
 C
 R
 a
 p
 
 �
 �
 �
 �
 �
 �
 �
 �
   $ 3 B Q ` o ~ � � � � � � � �   # 2 A P _ n } � � � � � � � � 
 OriginalFilename    VGAFIX.FON  5 % ProductName Microsoft� Windows� Operating System     	 ProductVersion  4.00.950    $   VarFileInfo   Translation 	�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                MZ�       ��  �       @                                   �   � �	�!�L�!This program cannot be run in DOS mode.
$        NE�  �k�� �                  & @ @ � � �                 �       P@     �      \0�    �     x  0�      FONTDIRFIXFONTS     "FONTRES 100,96,96 : Fixedsys (VGA)          �  (C) 1992 Glyph Systems, Inc. and (C) 1984 Bitstream Inc. .     ` `        ��  0   ��     �       Fixedsys   �  (C) 1992 Glyph Systems, Inc. and (C) 1984 Bitstream Inc. .     ` `        ��  0   ��     �      �                                 �   �   �   �   �   �   �         !   0   ?   N   ]   l   {   �   �   �   �   �   �   �   �             /   >   M   \   k   z   �   �   �   �   �   �   �   �   	   	   	   .	   =	   L	   [	   j	   y	   �	   �	   �	   �	   �	   �	   �	   �	    
   
   
   -
   <
   K
   Z
   i
   x
   �
   �
   �
   �
   �
   �
   �
   �
   �
         ,   ;   J   Y   h   w   �   �   �   �   �   �   �   �   �   
      (   7   F   U   d   s   �   �   �   �   �   �   �   �   �   	      '   6   E   T   c   r   �   �   �   �   �   �   �   �   �         &   5   D   S   b   q   �   �   �   �   �   �   �   �   �         %   4   C   R   a   p      �   �   �   �   �   �   �   �         $   3   B   Q   `   o   ~   �   �   �   �   �   �   �   �         #   2   A   P   _   n   }   �   �   �   �   �   �   �   �         "   1   @   O   ^   m   |   �   �           ?     @0@    x�       ?      @0@       ��         ��         ��          <��       ?"CI@`?      <��        ?"CA@`?     <��       ?"CA@`?       ��       
  ��          Q��         8               D|x`0      J~t 0      < 00 >         88Hxp       xx      Bbb64      8(,lFFB      8Hxx         Q��          0x@��          <��          <'C@`?      0x@��         <��                     <<<        fff            6666666    <f`0f<   dd &F@      8ll8`off;                  00000    00      66          ~                       ~                       00``     3773;;3      |      <ff0`~      <ffff<      00666f      ~```|x      0|ffff<      ~000      <ffv<nff<      <ffff>8                          0`0         ~ ~         `00`      <ff       ~�������      <fff~fff      |fff|fff|      <ff```ff<      xlffffflx      ~```|```~      ~```|````      <ff``nff>      ffff~ffff      <<      ff<      ffllxllff      ````````~      ccwkkkccc      ccs{ogccc      <fffffff<      |fff|````      <fffffff<    |fff|lfff      <f`0f<      ~      ffffffff<      fffffff<      ccckkk666      ff4,fff      ffff<      ~0``~    <00000000000<    ``00   <<  <f                         � 8                <>ff>      ``|fffff|        <f```f<      >fffff>        <ff~``<      000~0000        >fffff>|   ``|ffffff      x~      <x   ``fflxlff      x~        ~kkkkkc        |ffffff        <fffff<        |fffff|```     >fffff>     fnp````        >``<|      00~00000        ffffff>        fffff<        ckkkk66        ff<<ff        ffffff<�     ~0`~      0`0       00    qێ              <'C@`?     0Hx��        ��                 P  0Hx��              ww3f           **      ~    |~  <f            @��P @�UU"        ��          0      ��      ��           	��          ��         0xLr��                             3fww           ww3f              ��         >                        (87      u'%%                ��         00            /ID|8( (  (87            /ID|8              ��       <f``�``��       f<ff<f      !19
}         3f�f3      ���          `���             ~ù�����~   ��0�            <ff<              ~ ~   @�a�
}    p�!19




                         8p�Bbr
}                 �f3f�       `�cfl7o�    `�cfl>c�    �0c6�7o�    <ff0     0 <fff~fff           0    x�              @0@       <            @0@   @�f�	LFB~<              AA>       $$<<          AA>         AA>        ? @H@`?    ? @@@`?   ? @@@`?                        <        <        ���`    
  ���`       ���`      ���`     Bf<<fB       0  &/1��       2  &/1��        < > @@@?   < > @@@?         ��        ���~       
   	���~<  	
 Bbr
=@�`�               Fixedsys                4 VS_VERSION_INFO ���      �     �  ?                       �  StringFileInfo  }  040904E4    &  CompanyName Microsoft Corporation   3  FileDescription VGA (640x480) Fixed System Font  	 FileVersion 4.00.950    5 ! InternalName    Fixed System Font (VGA) - Arabic    A - LegalCopyright  � Copyright Microsoft� Corporation 1988-1996.   " 
 OriginalFilename    VGAFIX.FON  5 % ProductName Microsoft� Windows� Operating System     	 ProductVersion  4.00.950    $   VarFileInfo   Translation 	�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                MZ�       ��  �       @                                   �   � �	�!�L�!This program cannot be run in DOS mode.
$        NE�  �k�� �                  & @ @ � � �               
 �       P@     �      0�    �     0  0�      FONTDIRFIXFONTS     "FONTRES 100,96,96 : Fixedsys (VGA)          2  (c) Copyright Microsoft Corporation 1985-95. All rights res    ` `        ��  0   �` �     )       Fixedsys   2  (c) Copyright Microsoft Corporation 1985-95. All rights res    ` `        ��  0   �` �     )      �    � 	  ' 6 E T c r � � � � � � � � �   & 5 D S b q � � � � � � � � �   % 4 C R a p  � � � � � � � �   $ 3 B Q ` o ~ � � � � � � � �   # 2 A P _ n } � � � � � � � � 	 	 "	 1	 @	 O	 ^	 m	 |	 �	 �	 �	 �	 �	 �	 �	 �	 
 
 !
 0
 ?
 N
 ]
 l
 {
 �
 �
 �
 �
 �
 �
 �
 �
     / > M \ k z � � � � � � � �    . = L [ j y � � � � � � � �  
$        NE�  �:4 �                  ) @ @ � � �     	          
	 �       P@     �       0�    �     
       Fixedsys                                                                                                                                                                                                                                                                                                                                                                                                     (c) Copyright Bitstream Inc. 1984. All rights reserved.        ` `        ��  0   �` �     
      �    � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
	 	 *	 :	 J	 Z	 j	 z	 �	 �	 �	 �	 �	 �	 �	 �	 

 
 *
 :
 J
 Z
 j
 z
 �
 �
 �
 �
 �
 �
 �
 �
 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 

  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � � 
  * : J Z j z � � � � � � � �                   <<<        fff             6666666     <f`0f<    p��v0n[      8ll8`off;                    00000     00       66           ~                         ~                         00``      3773;;3       |       <ff0`~       <ffff<       00666f       ~```|x       0|ffff<       ~000       <ffv<nff<       <ffff>8                             0`0          ~ ~          `00`       <ff        ~�������       <fff~fff       |fff|fff|       <ff```ff<       xlffffflx       ~```|```~       ~```|````       <ff``nff>       ffff~ffff       <<       ff<       ffllxllff       ````````~       ccwkkkccc       ccs{ogccc       <fffffff<       |fff|````       <fffffff<     |fff|lfff       <f`0f<       ~       ffffffff<       fffffff<       ccckkk666       ff4,fff       ffff<       ~0``~       <0000000000<    ``00      <<  <f                          �  8                 <>ff>       ``|fffff|         <f```f<       >fffff>         <ff~``<       000~0000         >fffff>|    ``|ffffff       x~       <x    ``fflxlff       x~         ~kkkkkc         |ffffff         <fffff<         |fffff|```      >fffff>      fnp````         >``<|       00~00000         ffffff>         fffff<         ckkkk66         ff<<ff         ffffff<�      ~0`~       0`0         00     qێ             ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~              ��       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~                               6l~~            ~~6l               <~~~<             >               �          ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~       ~~~~~~~~~                         |f&ffff         v66666<         Vv6666<         <ffvfff         f~fvfff         Ss333;6         f&6         <f         <fv6>6         v6<666<         Vv<666<         ��[����         ��[����       >3333s?       >3333s7      >f ~       ^{33333         ������[         ��[���[         <ff~nv6         f~f~nv&         |f&fffv         v;33333         >`~ff|         s33337         s33333>      s33333>         3cckkk~      3cckkk~         �cckkk~      �cckkk~         >3333s         s3333;6         6fv6ff|         <f`|<         |f&fffv       <f>ffv         >3333s       <f        >ffvfff         v66?66<        >f>ffv         w7;3333        �cckkk         <fvff|        >fvff|         n~          b| b|        3>                <f       ��<f       <~              6~             :|             
:~                                     6                                          ~@                                    |fff|fff|                 ffffffw     >`x     8ll     l|<         <f       f~fv  <b~                         �l�           mn                                      8l8           00                 <BZZB<          <ffff<          <ffv6       �``{{kc          6~ffv6        <`nll~        >`nll~       �``|Fvf|       +gggv       >``c{n       >xlf{9         [{           hOt0                                                                                     Fixedsys >ff>      <>ff>     <f <>ff>     qێ <>ff>      ff <>ff>     <f< <>ff>         n��w         <f```f<8  p0 <ff~``<      <ff~``<     <f <ff~``<      ff <ff~``<     p0 x~      x~     <f x~      ff x~       6lffff<     qێ |ffffff     p0 <fffff<      <fffff<     <f <fffff<     qێ <fffff<      ff <fffff<         ~           >fn~vf|     p0 ffffff>      ffffff>     <f ffffff>      ff ffffff>      ffffff<�    ```|ffff|```   ff ffffff<�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     �4 VS_VERSION_INFO ���      �     �  ?   
                   �  StringFileInfo  r  040904E4    '  CompanyName Microsoft Corporation   D 0 FileDescription VGA (640x480) resolution monospaced system font  
 FileVersion 4.00.950     	 InternalName    FIXFONTS    ; ' LegalCopyright  Copyright � Microsoft Corp. 1991-1992   #  OriginalFilename    VGAFIX.FON  9 ) ProductName Microsoft� Windows(TM) Operating System      
 ProductVersion  4.00.950    $   VarFileInfo   Translation 	�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            MZ�       ��  �       @                                   �   � �	�!�L�!This program cannot be run in DOS mode.
$        NE�  �54 �                  ) @ @ � � �               
 �       P@     �      0�    �     0 0�      FONTDIRFIXFONTS     %FONTRES 100,96,96 : Fixedsys (Set #6)       2  (c) Copyright Bitstream Inc. 1984. All rights reserved.        ` `        �   0   �` �     )       Fixedsys   2  (c) Copyright Bitstream Inc. 1984. All rights reserved.        ` `        �   0   �` �     )      �    � 	  ' 6 E T c r � � � � � � � � �   & 5 D S b q � � � � � � � � �   % 4 C R a p  � � � � � � � �   $ 3 B Q ` o ~ � � � � � � � �   # 2 A P _ n } � � � � � � � � 	 	 "	 1	 @	 O	 ^	 m	 |	 �	 �	 �	 �	 �	 �	 �	 �	 
 
 !
 0
 ?
 N
 ]
 l
 {
 �
 �
 �
 �
 �
 �
 �
 �
     / > M \ k z � � � � � � � �    . = L [ j y � � � � � � � �  