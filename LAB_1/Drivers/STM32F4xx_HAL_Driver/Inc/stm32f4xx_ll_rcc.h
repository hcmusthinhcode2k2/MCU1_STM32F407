mOrHost, configFileParsingDiagnosticsOrOldProgram, configFileParsingDiagnostics, projectReferences));
  }
  function createEmitAndSemanticDiagnosticsBuilderProgram(newProgramOrRootNames, hostOrOptions, oldProgramOrHost, configFileParsingDiagnosticsOrOldProgram, configFileParsingDiagnostics, projectReferences) {
    return createBuilderProgram(1 /* EmitAndSemanticDiagnosticsBuilderProgram */, getBuilderCreationParameters(newProgramOrRootNames, hostOrOptions, oldProgramOrHost, configFileParsingDiagnosticsOrOldProgram, configFileParsingDiagnostics, projectReferences));
  }
  function createAbstractBuilder(newProgramOrRootNames, hostOrOptions, oldProgramOrHost, configFileParsingDiagnosticsOrOldProgram, configFileParsingDiagnostics, projectReferences) {
    const { newProgram, configFileParsingDiagnostics: newConfigFileParsingDiagnostics } = getBuilderCreationParameters(newProgramOrRootNames, hostOrOptions, oldProgramOrHost, configFileParsingDiagnosticsOrOldProgram, configFileParsingDiagnostics, projectReferences);
    return createRedirectedBuilderProgram(() => ({ program: newProgram, compilerOptions: newProgram.getCompilerOptions() }), newConfigFileParsingDiagnostics);
  }
  var init_builderPublic = __esm({
    "src/compiler/builderPublic.ts"() {
      "use strict";
      init_ts2();
    }
  });

  // src/compiler/resolutionCache.ts
  function removeIgnoredPath(path) {
    if (endsWith(path, "/node_modules/.staging")) {
      return removeSuffix(path, "/.staging");
    }
    return some(ignoredPaths, (searchPath) => stringContains(path, searchPath)) ? void 0 : path;
  }
  function perceivedOsRootLengthForWatching(pathComponents2, length2) {
    if (length2 <= 1)
      return 1;
    let userCheckIndex = 1;
    let isDosStyle = pathComponents2[0].search(/[a-zA-Z]:/) === 0;
    if (pathComponents2[0] !== directorySeparator && !isDosStyle && // Non dos style paths
    pathComponents2[1].search(/[a-zA-Z]\$$/) === 0) {
      if (length2 === 2)
        return 2;
      userCheckIndex = 2;
      isDosStyle = true;
    }
    if (isDosStyle && !pathComponents2[userCheckIndex].match(/^users$/i)) {
      return userCheckIndex;
    }
    return userCheckIndex + 2;
  }
  function canWatchDirectoryOrFile(pathComponents2, length2) {
    if (length2 === void 0)
      length2 = pathComponents2.length;
    if (length2 <= 2)
      return false;
    const perceivedOsRootLength = perceivedOsRootLengthForWatching(pathComponents2, length2);
    return length2 > perceivedOsRootLength + 1;
  }
  function canWatchAtTypes(atTypes) {
    return canWatchAffectedPackageJsonOrNodeModulesOfAtTypes(getDirectoryPath(atTypes));
  }
  function isInDirectoryPath(dirComponents, fileOrDirComponents) {
    if (fileOrDirComponents.length < fileOrDirComponents.length)
      return false;
    for (let i = 0; i < dirComponents.length; i++) {
      if (fileOrDirComponents[i] !== dirComponents[i])
        return false;
    }
    return true;
  }
  function canWatchAffectedPackageJsonOrNodeModulesOfAtTypes(fileOrDirPath) {
    return canWatchDirectoryOrFile(getPathComponents(fileOrDirPath));
  }
  function canWatchAffectingLocation(filePath) {
    return canWatchAffectedPackageJsonOrNodeModulesOfAtTypes(filePath);
  }
  function getDirectoryToWatchFailedLookupLocation(failedLookupLocation, failedLookupLocationPath, rootDir, rootPath, rootPathComponents, getCurrentDirectory) {
    const failedLookupPathComponents = getPathComponents(failedLookupLocationPath);
    failedLookupLocation = isRootedDiskPath(failedLookupLocation) ? normalizePath(failedLookupLocation) : getNormalizedAbsolutePath(failedLookupLocation, getCurrentDirectory());
    const failedLookupComponents = getPathComponents(failedLookupLocation);
    const perceivedOsRootLength = perceivedOsRootLengthForWatching(failedLookupPathComponents, failedLookupPathComponents.length);
    if (failedLookupPathComponents.length <= perceivedOsRootLength + 1)
      return void 0;
    const nodeModulesIndex = failedLookupPathComponents.indexOf("node_modules");
    if (nodeModulesIndex !== -1 && nodeModulesIndex + 1 <= perceivedOsRootLength + 1)
      return void 0;
    if (isInDirectoryPath(rootPathComponents, failedLookupPathComponents)) {
      if (failedLookupPathComponents.length > rootPathComponents.length + 1) {
        return getDirectoryOfFailedLookupWatch(failedLookupComponents, failedLookupPathComponents, Math.max(rootPathComponents.length + 1, perceivedOsRootLength + 1));
      } else {
        return {
          dir: rootDir,
          dirPath: rootPath,
          nonRecursive: true
        };
      }
    }
    return getDirectoryToWatchFromFailedLookupLocationDirectory(
      failedLookupComponents,
      failedLookupPathComponents,
      failedLookupPathComponents.length - 1,
      perceivedOsRootLength,
      nodeModulesIndex,
      rootPathComponents
    );
  }
  function getDirectoryToWatchFromFailedLookupLocationDirectory(dirComponents, dirPathComponents, dirPathComponentsLength, perceivedOsRootLength, nodeModulesIndex, rootPathComponents) {
    if (nodeModulesIndex !== -1) {
      return getDirectoryOfFailedLookupWatch(dirComponents, dirPathComponents, nodeModulesIndex + 1);
    }
    let nonRecursive = true;
    let length2 = dirPathComponentsLength;
    for (let i = 0; i < dirPathComponentsLength; i++) {
      if (dirPathComponents[i] !== rootPathComponents[i]) {
        nonRecursive = false;
        length2 = Math.max(i + 1, perceivedOsRootLength + 1);
        break;
      }
    }
    return getDirectoryOfFailedLookupWatch(dirComponents, dirPathComponents, length2, nonRecursive);
  }
  function getDirectoryOfFailedLookupWatch(dirComponents, dirPathComponents, length2, nonRecursive) {
    return {
      dir: getPathFromPathComponents(dirComponents, length2),
      dirPath: getPathFromPathComponents(dirPathComponents, length2),
      nonRecursive
    };
  }
  function getDirectoryToWatchFailedLookupLocationFromTypeRoot(typeRoot, typeRootPath, rootPath, rootPathComponents, getCurrentDirectory, filterCustomPath) {
    const typeRootPathComponents = getPathComponents(typeRootPath);
    if (isInDirectoryPath(rootPathComponents, typeRootPathComponents)) {
      return rootPath;
    }
    typeRoot = isRootedDiskPath(typeRoot) ? normalizePath(typeRoot) : getNormalizedAbsolutePath(typeRoot, getCurrentDirectory());
    const toWatch = getDirectoryToWatchFromFailedLookupLocationDirectory(
      getPathComponents(typeRoot),
      typeRootPathComponents,
      typeRootPathComponents.length,
      perceivedOsRootLengthForWatching(typeRootPathComponents, typeRootPathComponents.length),
      typeRootPathComponents.indexOf("node_modules"),
      rootPathComponents
    );
    return toWatch && filterCustomPath(toWatch.dirPath) ? toWatch.dirPath : void 0;
  }
  function getRootDirectoryOfResolutionCache(rootDirForResolution, getCurrentDirectory) {
    const normalized = getNormalizedAbsolutePath(rootDirForResolution, getCurrentDirectory());
    return !isDiskPathRoot(normalized) ? removeTrailingDirectorySeparator(normalized) : normalized;
  }
  function getRootPathSplitLength(rootPath) {
    return rootPath.split(directorySeparator).length - (hasTrailingDirectorySeparator(rootPath) ? 1 : 0);
  }
  function createResolutionCache(resolutionHost, rootDirForResolution, logChangesWhenResolvingModule) {
    let filesWithChangedSetOfUnresolvedImports;
    let filesWithInvalidatedResolutions;
    let filesWithInvalidatedNonRelativeUnresolvedImports;
    const nonRelativeExternalModuleResolutions = createMultiMap();
    const resolutionsWithFailedLookups = /* @__PURE__ */ new Set();
    const resolutionsWithOnlyAffectingLocations = /* @__PURE__ */ new Set();
    const resolvedFileToResolution = /* @__PURE__ */ new Map();
    const impliedFormatPackageJsons = /* @__PURE__ */ new Map();
    let hasChangedAutomaticTypeDirectiveNames = false;
    let affectingPathChecksForFile;
    let affectingPathChecks;
    let failedLookupChecks;
    let startsWithPathChecks;
    let isInDirectoryChecks;
    let allModuleAndTypeResolutionsAreInvalidated = false;
    const getCurrentDirectory = memoize(() => resolutionHost.getCurrentDirectory());
    const cachedDirectoryStructureHost = resolutionHost.getCachedDirectoryStructureHost();
    const resolvedModuleNames = /* @__PURE__ */ new Map();
    const moduleResolutionCache = createModuleResolutionCache(
      getCurrentDirectory(),
      resolutionHost.getCanonicalFileName,
      resolutionHost.getCompilationSettings()
    );
    const resolvedTypeReferenceDirectives = /* @__PURE__ */ new Map();
    const typeReferenceDirectiveResolutionCache = createTypeReferenceDirectiveResolutionCache(
      getCurrentDirectory(),
      resolutionHost.getCanonicalFileName,
      resolutionHost.getCompilationSettings(),
      moduleResolutionCache.getPackageJsonInfoCache()
    );
    const resolvedLibraries = /* @__PURE__ */ new Map();
    const libraryResolutionCache = createModuleResolutionCache(
      getCurrentDirectory(),
      resolutionHost.getCanonicalFileName,
      getOptionsForLibraryResolution(resolutionHost.getCompilationSettings()),
      moduleResolutionCache.getPackageJsonInfoCache()
    );
    const directoryWatchesOfFailedLookups = /* @__PURE__ */ new Map();
    const fileWatchesOfAffectingLocations = /* @__PURE__ */ new Map();
    const rootDir = getRootDirectoryOfResolutionCache(rootDirForResolution, getCurrentDirectory);
    const rootPath = resolutionHost.toPath(rootDir);
    const rootPathComponents = getPathComponents(rootPath);
    const typeRootsWatches = /* @__PURE__ */ new Map();
    return {
      getModuleResolutionCache: () => moduleResolutionCache,
      startRecordingFilesWithChangedResolutions,
      finishRecordingFilesWithChangedResolutions,
      // perDirectoryResolvedModuleNames and perDirectoryResolvedTypeReferenceDirectives could be non empty if there was exception during program update
      // (between startCachingPerDirectoryResolution and finishCachingPerDirectoryResolution)
      startCachingPerDirectoryResolution,
      finishCachingPerDirectoryResolution,
      resolveModuleNameLiterals,
      resolveTypeReferenceDirectiveReferences,
      resolveLibrary: resolveLibrary2,
      resolveSingleModuleNameWithoutWatching,
      removeResolutionsFromProjectReferenceRedirects,
      removeResolutionsOfFile,
      hasChangedAutomaticTypeDirectiveNames: () => hasChangedAutomaticTypeDirectiveNames,
      invalidateResolutionOfFile,
      invalidateResolutionsOfFailedLookupLocations,
      setFilesWithInvalidatedNonRelativeUnresolvedImports,
      createHasInvalidatedResolutions,
      isFileWithInvalidatedNonRelativeUnresolvedImports,
      updateTypeRootsWatch,
      closeTypeRootsWatch,
      clear: clear2,
      onChangesAffectModuleResolution
    };
    function getResolvedModule2(resolution) {
      return resolution.resolvedModule;
    }
    function getResolvedTypeReferenceDirective2(resolution) {
      return resolution.resolvedTypeReferenceDirective;
    }
    function clear2() {
      clearMap(directoryWatchesOfFailedLookups, closeFileWatcherOf);
      clearMap(fileWatchesOfAffectingLocations, closeFileWatcherOf);
      nonRelativeExternalModuleResolutions.clear();
      closeTypeRootsWatch();
      resolvedModuleNames.clear();
      resolvedTypeReferenceDirectives.clear();
      resolvedFileToResolution.clear();
      resolutionsWithFailedLookups.clear();
      resolutionsWithOnlyAffectingLocations.clear();
      failedLookupChecks = void 0;
      startsWithPathChecks = void 0;
      isInDirectoryChecks = void 0;
      affectingPathChecks = void 0;
      affectingPathChecksForFile = void 0;
      allModuleAndTypeResolutionsAreInvalidated = false;
      moduleResolutionCache.clear();
      typeReferenceDirectiveResolutionCache.clear();
      moduleResolutionCache.update(resolutionHost.getCompilationSettings());
      typeReferenceDirectiveResolutionCache.update(resolutionHost.getCompilationSettings());
      libraryResolutionCache.clear();
      impliedFormatPackageJsons.clear();
      resolvedLibraries.clear();
      hasChangedAutomaticTypeDirectiveNames = false;
    }
    function onChangesAffectModuleResolution() {
      allModuleAndTypeResolutionsAreInvalidated = true;
      moduleResolutionCache.clearAllExceptPackageJsonInfoCache();
      typeReferenceDirectiveResolutionCache.clearAllExceptPackageJsonInfoCache();
      moduleResolutionCache.update(resolutionHost.getCompilationSettings());
      typeReferenceDirectiveResolutionCache.update(resolutionHost.getCompilationSettings());
    }
    function startRecordingFilesWithChangedResolutions() {
      filesWithChangedSetOfUnresolvedImports = [];
    }
    function finishRecordingFilesWithChangedResolutions() {
      const collected = filesWithChangedSetOfUnresolvedImports;
      filesWithChangedSetOfUnresolvedImports = void 0;
      return collected;
    }
    function isFileWithInvalidatedNonRelativeUnresolvedImports(path) {
      if (!filesWithInvalidatedNonRelativeUnresolvedImports) {
        return false;
      }
      const value = filesWithInvalidatedNonRelativeUnresolvedImports.get(path);
      return !!value && !!value.length;
    }
    function createHasInvalidatedResolutions(customHasInvalidatedResolutions, customHasInvalidatedLibResolutions) {
      invalidateResolutionsOfFailedLookupLocations();
      const collected = filesWithInvalidatedResolutions;
      filesWithInvalidatedResolutions = void 0;
      return {
        hasInvalidatedResolutions: (path) => customHasInvalidatedResolutions(path) || allModuleAndTypeResolutionsAreInvalidated || !!(collected == null ? void 0 : collected.has(path)) || isFileWithInvalidatedNonRelativeUnresolvedImports(path),
        hasInvalidatedLibResolutions: (libFileName) => {
          var _a;
          return customHasInvalidatedLibResolutions(libFileName) || !!((_a = resolvedLibraries == null ? void 0 : resolvedLibraries.get(libFileName)) == null ? void 0 : _a.isInvalidated);
        }
      };
    }
    function startCachingPerDirectoryResolution() {
      moduleResolutionCache.clearAllExceptPackageJsonInfoCache();
      typeReferenceDirectiveResolutionCache.clearAllExceptPackageJsonInfoCache();
      libraryResolutionCache.clearAllExceptPackageJsonInfoCache();
      nonRelativeExternalModuleResolutions.forEach(watchFailedLookupLocationOfNonRelativeModuleResolutions);
      nonRelativeExternalModuleResolutions.clear();
    }
    function cleanupLibResolutionWatching(newProgram) {
      resolvedLibraries.forEach((resolution, libFileName) => {
        var _a;
        if (!((_a = newProgram == null ? void 0 : newProgram.resolvedLibReferences) == null ? void 0 : _a.has(libFileName))) {
          stopWatchFailedLookupLocationOfResolution(
            resolution,
            resolutionHost.toPath(getInferredLibraryNameResolveFrom(newProgram.getCompilerOptions(), getCurrentDirectory(), libFileName)),
            getResolvedModule2
          );
          resolvedLibraries.delete(libFileName);
        }
      });
    }
    function finishCachingPerDirectoryResolution(newProgram, oldProgram) {
      filesWithInvalidatedNonRelativeUnresolvedImports = void 0;
      allModuleAndTypeResolutionsAreInvalidated = false;
      nonRelativeExternalModuleResolutions.forEach(watchFailedLookupLocationOfNonRelativeModuleResolutions);
      nonRelativeExternalModuleResolutions.clear();
      if (newProgram !== oldProgram) {
        cleanupLibResolutionWatching(newProgram);
        newProgram == null ? void 0 : newProgram.getSourceFiles().forEach((newFile) => {
          var _a;
          const expected = isExternalOrCommonJsModule(newFile) ? ((_a = newFile.packageJsonLocations) == null ? void 0 : _a.length) ?? 0 : 0;
          const existing = impliedFormatPackageJsons.get(newFile.path) ?? emptyArray;
          for (let i = existing.length; i < expected; i++) {
            createFileWatcherOfAffectingLocation(
              newFile.packageJsonLocations[i],
              /*forResolution*/
              false
            );
          }
          if (existing.length > expected) {
            for (let i = expected; i < existing.length; i++) {
              fileWatchesOfAffectingLocations.get(existing[i]).files--;
            }
          }
          if (expected)
            impliedFormatPackageJsons.set(newFile.path, newFile.packageJsonLocations);
          else
            impliedFormatPackageJsons.delete(newFile.path);
        });
        impliedFormatPackageJsons.forEach((existing, path) => {
          if (!(newProgram == null ? void 0 : newProgram.getSourceFileByPath(path))) {
            existing.forEach((location) => fileWatchesOfAffectingLocations.get(location).files--);
            impliedFormatPackageJsons.delete(path);
          }
        });
      }
      directoryWatchesOfFailedLookups.forEach((watcher, path) => {
        if (watcher.refCount === 0) {
          directoryWatchesOfFailedLookups.delete(path);
          watcher.watcher.close();
        }
      });
      fileWatchesOfAffectingLocations.forEach((watcher, path) => {
        if (watcher.files === 0 && watcher.resolutions === 0) {
          fileWatchesOfAffectingLocations.delete(path);
          watcher.watcher.close();
        }
      });
      hasChangedAutomaticTypeDirectiveNames = false;
    }
    function resolveModuleName2(moduleName, containingFile, compilerOptions, redirectedReference, mode) {
      var _a;
      const host = ((_a = resolutionHost.getCompilerHost) == null ? void 0 : _a.call(resolutionHost)) || resolutionHost;
      const primaryResult = resolveModuleName(moduleName, containingFile, compilerOptions, host, moduleResolutionCache, redirectedReference, mode);
      if (!resolutionHost.getGlobalCache) {
        return primaryResult;
      }
      const globalCache = resolutionHost.getGlobalCache();
      if (globalCache !== void 0 && !isExternalModuleNameRelative(moduleName) && !(primaryResult.resolvedModule && extensionIsTS(primaryResult.resolvedModule.extension))) {
        const { resolvedModule, failedLookupLocations, affectingLocations, resolutionDiagnostics } = loadModuleFromGlobalCache(
          Debug.checkDefined(resolutionHost.globalCacheResolutionModuleName)(moduleName),
          resolutionHost.projectName,
          compilerOptions,
          host,
          globalCache,
          moduleResolutionCache
        );
        if (resolvedModule) {
          primaryResult.resolvedModule = resolvedModule;
          primaryResult.failedLookupLocations = updateResolutionField(primaryResult.failedLookupLocations, failedLookupLocations);
          primaryResult.affectingLocations = updateResolutionField(primaryResult.affectingLocations, affectingLocations);
          primaryResult.resolutionDiagnostics = updateResolutionField(primaryResult.resolutionDiagnostics, resolutionDiagnostics);
          return primaryResult;
        }
      }
      return primaryResult;
    }
    function createModuleResolutionLoader2(containingFile, redirectedReference, options) {
      return {
        nameAndMode: moduleResolutionNameAndModeGetter,
        resolve: (moduleName, resoluionMode) => resolveModuleName2(
          moduleName,
          containingFile,
          options,
          redirectedReference,
          resoluionMode
        )
      };
    }
    function resolveNamesWithLocalCache({
      entries,
      containingFile,
      containingSourceFile,
      redirectedReference,
      options,
      perFileCache,
      reusedNames,
      loader,
      getResolutionWithResolvedFileName,
      deferWatchingNonRelativeResolution,
      shouldRetryResolution,
      logChanges
    }) {
      var _a;
      const path = resolutionHost.toPath(containingFile);
      const resolutionsInFile = perFileCache.get(path) || perFileCache.set(path, createModeAwareCache()).get(path);
      const resolvedModules = [];
      const hasInvalidatedNonRelativeUnresolvedImport = logChanges && isFileWithInvalidatedNonRelativeUnresolvedImports(path);
      const program = resolutionHost.getCurrentProgram();
      const oldRedirect = program && program.getResolvedProjectReferenceToRedirect(containingFile);
      const unmatchedRedirects = oldRedirect ? !redirectedReference || redirectedReference.sourceFile.path !== oldRedirect.sourceFile.path : !!redirectedReference;
      const seenNamesInFile = createModeAwareCache();
      for (const entry of entries) {
        const name = loader.nameAndMode.getName(entry);
        const mode = loader.nameAndMode.getMode(entry, containingSourceFile);
        let resolution = resolutionsInFile.get(name, mode);
        if (!seenNamesInFile.has(name, mode) && (allModuleAndTypeResolutionsAreInvalidated || unmatchedRedirects || !resolution || resolution.isInvalidated || // If the name is unresolved import that was invalidated, recalculate
        hasInvalidatedNonRelativeUnresolvedImport && !isExternalModuleNameRelative(name) && shouldRetryResolution(resolution))) {
          const existingResolution = resolution;
          resolution = loader.resolve(name, mode);
          if (resolutionHost.onDiscoveredSymlink && resolutionIsSymlink(resolution)) {
            resolutionHost.onDiscoveredSymlink();
          }
          resolutionsInFile.set(name, mode, resolution);
          watchFailedLookupLocationsOfExternalModuleResolutions(name, resolution, path, getResolutionWithResolvedFileName, deferWatchingNonRelativeResolution);
          if (existingResolution) {
            stopWatchFailedLookupLocationOfResolution(existingResolution, path, getResolutionWithResolvedFileName);
          }
          if (logChanges && filesWithChangedSetOfUnresolvedImports && !resolutionIsEqualTo(existingResolution, resolution)) {
            filesWithChangedSetOfUnresolvedImports.push(path);
            logChanges = false;
          }
        } else {
          const host = ((_a = resolutionHost.getCompilerHost) == null ? void 0 : _a.call(resolutionHost)) || resolutionHost;
          if (isTraceEnabled(options, host) && !seenNamesInFile.has(name, mode)) {
            const resolved = getResolutionWithResolvedFileName(resolution);
            trace(
              host,
              perFileCache === resolvedModuleNames ? (resolved == null ? void 0 : resolved.resolvedFileName) ? resolved.packageId ? Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_successfully_resolved_to_2_with_Package_ID_3 : Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_successfully_resolved_to_2 : Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_not_resolved : (resolved == null ? void 0 : resolved.resolvedFileName) ? resolved.packageId ? Diagnostics.Reusing_resolution_of_type_reference_directive_0_from_1_of_old_program_it_was_successfully_resolved_to_2_with_Package_ID_3 : Diagnostics.Reusing_resolution_of_type_reference_directive_0_from_1_of_old_program_it_was_successfully_resolved_to_2 : Diagnostics.Reusing_resolution_of_type_reference_directive_0_from_1_of_old_program_it_was_not_resolved,
              name,
              containingFile,
              resolved == null ? void 0 : resolved.resolvedFileName,
              (resolved == null ? void 0 : resolved.packageId) && packageIdToString(resolved.packageId)
            );
          }
        }
        Debug.assert(resolution !== void 0 && !resolution.isInvalidated);
        seenNamesInFile.set(name, mode, true);
        resolvedModules.push(resolution);
      }
      reusedNames == null ? void 0 : reusedNames.forEach((entry) => seenNamesInFile.set(
        loader.nameAndMode.getName(entry),
        loader.nameAndMode.getMode(entry, containingSourceFile),
        true
      ));
      if (resolutionsInFile.size() !== seenNamesInFile.size()) {
        resolutionsInFile.forEach((resolution, name, mode) => {
          if (!seenNamesInFile.has(name, mode)) {
            stopWatchFailedLookupLocationOfResolution(resolution, path, getResolutionWithResolvedFileName);
            resolutionsInFile.delete(name, mode);
          }
        });
      }
      return resolvedModules;
      function resolutionIsEqualTo(oldResolution, newResolution) {
        if (oldResolution === newResolution) {
          return true;
        }
        if (!oldResolution || !newResolution) {
          return false;
        }
        const oldResult = getResolutionWithResolvedFileName(oldResolution);
        const newResult = getResolutionWithResolvedFileName(newResolution);
        if (oldResult === newResult) {
          return true;
        }
        if (!oldResult || !newResult) {
          return false;
        }
        return oldResult.resolvedFileName === newResult.resolvedFileName;
      }
    }
    function resolveTypeReferenceDirectiveReferences(typeDirectiveReferences, containingFile, redirectedReference, options, containingSourceFile, reusedNames) {
      var _a;
      return resolveNamesWithLocalCache({
        entries: typeDirectiveReferences,
        containingFile,
        containingSourceFile,
        redirectedReference,
        options,
        reusedNames,
        perFileCache: resolvedTypeReferenceDirectives,
        loader: createTypeReferenceResolutionLoader(
          containingFile,
          redirectedReference,
          options,
          ((_a = resolutionHost.getCompilerHost) == null ? void 0 : _a.call(resolutionHost)) || resolutionHost,
          typeReferenceDirectiveResolutionCache
        ),
        getResolutionWithResolvedFileName: getResolvedTypeReferenceDirective2,
        shouldRetryResolution: (resolution) => resolution.resolvedTypeReferenceDirective === void 0,
        deferWatchingNonRelativeResolution: false
      });
    }
    function resolveModuleNameLiterals(moduleLiterals, containingFile, redirectedReference, options, containingSourceFile, reusedNames) {
      return resolveNamesWithLocalCache({
        entries: moduleLiterals,
        containingFile,
        containingSourceFile,
        redirectedReference,
        options,
        reusedNames,
        perFileCache: resolvedModuleNames,
        loader: createModuleResolutionLoader2(
          containingFile,
          redirectedReference,
          options
        ),
        getResolutionWithResolvedFileName: getResolvedModule2,
        shouldRetryResolution: (resolution) => !resolution.resolvedModule || !resolutionExtensionIsTSOrJson(resolution.resolvedModule.extension),
        logChanges: logChangesWhenResolvingModule,
        deferWatchingNonRelativeResolution: true
        // Defer non relative resolution watch because we could be using ambient modules
      });
    }
    function resolveLibrary2(libraryName, resolveFrom, options, libFileName) {
      var _a;
      const host = ((_a = resolutionHost.getCompilerHost) == null ? void 0 : _a.call(resolutionHost)) || resolutionHost;
      let resolution = resolvedLibraries == null ? void 0 : resolvedLibraries.get(libFileName);
      if (!resolution || resolution.isInvalidated) {
        const existingResolution = resolution;
        resolution = resolveLibrary(libraryName, resolveFrom, options, host, libraryResolutionCache);
        const path = resolutionHost.toPath(resolveFrom);
        watchFailedLookupLocationsOfExternalModuleResolutions(
          libraryName,
          resolution,
          path,
          getResolvedModule2,
          /*deferWatchingNonRelativeResolution*/
          false
        );
        resolvedLibraries.set(libFileName, resolution);
        if (existingResolution) {
          stopWatchFailedLookupLocationOfResolution(existingResolution, path, getResolvedModule2);
        }
      } else {
        if (isTraceEnabled(options, host)) {
          const resolved = getResolvedModule2(resolution);
          trace(
            host,
            (resolved == null ? void 0 : resolved.resolvedFileName) ? resolved.packageId ? Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_successfully_resolved_to_2_with_Package_ID_3 : Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_successfully_resolved_to_2 : Diagnostics.Reusing_resolution_of_module_0_from_1_of_old_program_it_was_not_resolved,
            libraryName,
            resolveFrom,
            resolved == null ? void 0 : resolved.resolvedFileName,
            (resolved == null ? void 0 : resolved.packageId) && packageIdToString(resolved.packageId)
          );
        }
      }
      return resolution;
    }
    function resolveSingleModuleNameWithoutWatching(moduleName, containingFile) {
      const path = resolutionHost.toPath(containingFile);
      const resolutionsInFile = resolvedModuleNames.get(path);
      const resolution = resolutionsInFile == null ? void 0 : resolutionsInFile.get(
        moduleName,
        /*mode*/
        void 0
      );
      if (resolution && !resolution.isInvalidated)
        return resolution;
      return resolveModuleName2(moduleName, containingFile, resolutionHost.getCompilationSettings());
    }
    function isNodeModulesAtTypesDirectory(dirPath) {
      return endsWith(dirPath, "/node_modules/@types");
    }
    function watchFailedLookupLocationsOfExternalModuleResolutions(name, resolution, filePath, getResolutionWithResolvedFileName, deferWatchingNonRelativeResolution) {
      var _a;
      if (resolution.refCount) {
        resolution.refCount++;
        Debug.assertIsDefined(resolution.files);
      } else {
        resolution.refCount = 1;
        Debug.assert(!((_a = resolution.files) == null ? void 0 : _a.size));
        if (!deferWatchingNonRelativeResolution || isExternalModuleNameRelative(name)) {
          watchFailedLookupLocationOfResolution(resolution);
        } else {
          nonRelativeExternalModuleResolutions.add(name, resolution);
        }
        const resolved = getResolutionWithResolvedFileName(resolution);
        if (resolved && resolved.resolvedFileName) {
          const key = resolutionHost.toPath(resolved.resolvedFileName);
          let resolutions = resolvedFileToResolution.get(key);
          if (!resolutions)
            resolvedFileToResolution.set(key, resolutions = /* @__PURE__ */ new Set());
          resolutions.add(resolution);
        }
      }
      (resolution.files ?? (resolution.files = /* @__PURE__ */ new Set())).add(filePath);
    }
    function watchFailedLookupLocation(failedLookupLocation, setAtRoot) {
      const failedLookupLocationPath = resolutionHost.toPath(failedLookupLocation);
      const toWatch = getDirectoryToWatchFailedLookupLocation(
        failedLookupLocation,
        failedLookupLocationPath,
        rootDir,
        rootPath,
        rootPathComponents,
        getCurrentDirectory
      );
      if (toWatch) {
        const { dir, dirPath, nonRecursive } = toWatch;
        if (dirPath === rootPath) {
          Debug.assert(nonRecursive);
          setAtRoot = true;
        } else {
          setDirectoryWatcher(dir, dirPath, nonRecursive);
        }
      }
      return setAtRoot;
    }
    function watchFailedLookupLocationOfResolution(resolution) {
      Debug.assert(!!resolution.refCount);
      const { failedLookupLocations, affectingLocations, node10Result } = resolution;
      if (!(failedLookupLocations == null ? void 0 : failedLookupLocations.length) && !(affectingLocations == null ? void 0 : affectingLocations.length) && !node10Result)
        return;
      if ((failedLookupLocations == null ? void 0 : failedLookupLocations.length) || node10Result)
        resolutionsWithFailedLookups.add(resolution);
      let setAtRoot = false;
      if (failedLookupLocations) {
        for (const failedLookupLocation of failedLookupLocations) {
          setAtRoot = watchFailedLookupLocation(failedLookupLocation, setAtRoot);
        }
      }
      if (node10Result)
        setAtRoot = watchFailedLookupLocation(node10Result, setAtRoot);
      if (setAtRoot) {
        setDirectoryWatcher(
          rootDir,
          rootPath,
          /*nonRecursive*/
          true
        );
      }
      watchAffectingLocationsOfResolution(resolution, !(failedLookupLocations == null ? void 0 : failedLookupLocations.length) && !node10Result);
    }
    function watchAffectingLocationsOfResolution(resolution, addToResolutionsWithOnlyAffectingLocations) {
      Debug.assert(!!resolution.refCount);
      const { affectingLocations } = resolution;
      if (!(affectingLocations == null ? void 0 : affectingLocations.length))
        return;
      if (addToResolutionsWithOnlyAffectingLocations)
        resolutionsWithOnlyAffectingLocations.add(resolution);
      for (const affectingLocation of affectingLocations) {
        createFileWatcherOfAffectingLocation(
          affectingLocation,
          /*forResolution*/
          true
        );
      }
    }
    function createFileWatcherOfAffectingLocation(affectingLocation, forResolution) {
      const fileWatcher = fileWatchesOfAffectingLocations.get(affectingLocation);
      if (fileWatcher) {
        if (forResolution)
          fileWatcher.resolutions++;
        else
          fileWatcher.files++;
        return;
      }
      let locationToWatch = affectingLocation;
      if (resolutionHost.realpath) {
        locationToWatch = resolutionHost.realpath(affectingLocation);
        if (affectingLocation !== locationToWatch) {
          const fileWatcher2 = fileWatchesOfAffectingLocations.get(locationToWatch);
          if (fileWatcher2) {
            if (forResolution)
              fileWatcher2.resolutions++;
            else
              fileWatcher2.files++;
            fileWatcher2.paths.add(affectingLocation);
            fileWatchesOfAffectingLocations.set(affectingLocation, fileWatcher2);
            return;
          }
        }
      }
      const paths = /* @__PURE__ */ new Set();
      paths.add(locationToWatch);
      let actualWatcher = canWatchAffectingLocation(resolutionHost.toPath(locationToWatch)) ? resolutionHost.watchAffectingFileLocation(locationToWatch, (fileName, eventKind) => {
        cachedDirectoryStructureHost == null ? void 0 : cachedDirectoryStructureHost.addOrDeleteFile(fileName, resolutionHost.toPath(locationToWatch), eventKind);
        const packageJsonMap = moduleResolutionCache.getPackageJsonInfoCache().getInternalMap();
        paths.forEach((path) => {
          if (watcher.resolutions)
            (affectingPathChecks ?? (affectingPathChecks = /* @__PURE__ */ new Set())).add(path);
          if (watcher.files)
            (affectingPathChecksForFile ?? (affectingPathChecksForFile = /* @__PURE__ */ new Set())).add(path);
          packageJsonMap == null ? void 0 : packageJsonMap.delete(resolutionHost.toPath(path));
        });
        resolutionHost.scheduleInvalidateResolutionsOfFailedLookupLocations();
      }) : noopFileWatcher;
      const watcher = {
        watcher: actualWatcher !== noopFileWatcher ? {
          close: () => {
            actualWatcher.close();
            actualWatcher = noopFileWatcher;
          }
        } : actualWatcher,
        resolutions: forResolution ? 1 : 0,
        files: forResolution ? 0 : 1,
        paths
      };
      fileWatchesOfAffectingLocations.set(locationToWatch, watcher);
      if (affectingLocation !== locationToWatch) {
        fileWatchesOfAffectingLocations.set(affectingLocation, watcher);
        paths.add(affectingLocation);
      }
    }
    function watchFailedLookupLocationOfNonRelativeModuleResolutions(resolutions, name) {
      const program = resolutionHost.getCurrentProgram();
      if (!program || !program.getTypeChecker().tryFindAmbientModuleWithoutAugmentations(name)) {
        resolutions.forEach(watchFailedLookupLocationOfResolution);
      } else {
        resolutions.forEach((resolution) => watchAffectingLocationsOfResolution(
          resolution,
          /*addToResolutionsWithOnlyAffectingLocations*/
          true
        ));
      }
    }
    function setDirectoryWatcher(dir, dirPath, nonRecursive) {
      const dirWatcher = directoryWatchesOfFailedLookups.get(dirPath);
      if (dirWatcher) {
        Debug.assert(!!nonRecursive === !!dirWatcher.nonRecursive);
        dirWatcher.refCount++;
      } else {
        directoryWatchesOfFailedLookups.set(dirPath, { watcher: createDirectoryWatcher(dir, dirPath, nonRecursive), refCount: 1, nonRecursive });
      }
    }
    function stopWatchFailedLookupLocation(failedLookupLocation, removeAtRoot) {
      const failedLookupLocationPath = resolutionHost.toPath(failedLookupLocation);
      const toWatch = getDirectoryToWatchFailedLookupLocation(
        failedLookupLocation,
        failedLookupLocationPath,
        rootDir,
        rootPath,
        rootPathComponents,
        getCurrentDirectory
      );
      if (toWatch) {
        const { dirPath } = toWatch;
        if (dirPath === rootPath) {
          removeAtRoot = true;
        } else {
          removeDirectoryWatcher(dirPath);
        }
      }
      return removeAtRoot;
    }
    function stopWatchFailedLookupLocationOfResolution(resolution, filePath, getResolutionWithResolvedFileName) {
      Debug.checkDefined(resolution.files).delete(filePath);
      resolution.refCount--;
      if (resolution.refCount) {
        return;
      }
      const resolved = getResolutionWithResolvedFileName(resolution);
      if (resolved && resolved.resolvedFileName) {
        const key = resolutionHost.toPath(resolved.resolvedFileName);
        const resolutions = resolvedFileToResolution.get(key);
        if ((resolutions == null ? void 0 : resolutions.delete(resolution)) && !resolutions.size)
          resolvedFileToResolution.delete(key);
      }
      const { failedLookupLocations, affectingLocations, node10Result } = resolution;
      if (resolutionsWithFailedLookups.delete(resolution)) {
        let removeAtRoot = false;
        if (failedLookupLocations) {
          for (const failedLookupLocation of failedLookupLocations) {
            removeAtRoot = stopWatchFailedLookupLocation(failedLookupLocation, removeAtRoot);
          }
        }
        if (node10Result)
          removeAtRoot = stopWatchFailedLookupLocation(node10Result, removeAtRoot);
        if (removeAtRoot)
          removeDirectoryWatcher(rootPath);
      } else if (affectingLocations == null ? void 0 : affectingLocations.length) {
        resolutionsWithOnlyAffectingLocations.delete(resolution);
      }
      if (affectingLocations) {
        for (const affectingLocation of affectingLocations) {
          const watcher = fileWatchesOfAffectingLocations.get(affectingLocation);
          watcher.resolutions--;
        }
      }
    }
    function removeDirectoryWatcher(dirPath) {
      const dirWatcher = directoryWatchesOfFailedLookups.get(dirPath);
      dirWatcher.refCount--;
    }
    function createDirectoryWatcher(directory, dirPath, nonRecursive) {
      return resolutionHost.watchDirectoryOfFailedLookupLocation(directory, (fileOrDirectory) => {
        const fileOrDirectoryPath = resolutionHost.toPath(fileOrDirectory);
        if (cachedDirectoryStructureHost) {
          cachedDirectoryStructureHost.addOrDeleteFileOrDirectory(fileOrDirectory, fileOrDirectoryPath);
        }
        scheduleInvalidateResolutionOfFailedLookupLocation(fileOrDirectoryPath, dirPath === fileOrDirectoryPath);
      }, nonRecursive ? 0 /* None */ : 1 /* Recursive */);
    }
    function removeResolutionsOfFileFromCache(cache, filePath, getResolutionWithResolvedFileName) {
      const resolutions = cache.get(filePath);
      if (resolutions) {
        resolutions.forEach((resolution) => stopWatchFailedLookupLocationOfResolution(resolution, filePath, getResolutionWithResolvedFileName));
        cache.delete(filePath);
      }
    }
    function removeResolutionsFromProjectReferenceRedirects(filePath) {
      if (!fileExtensionIs(filePath, ".json" /* Json */))
        return;
      const program = resolutionHost.getCurrentProgram();
      if (!program)
        return;
      const resolvedProjectReference = program.getResolvedProjectReferenceByPath(filePath);
      if (!resolvedProjectReference)
        return;
      resolvedProjectReference.commandLine.fileNames.forEach((f) => removeResolutionsOfFile(resolutionHost.toPath(f)));
    }
    function removeResolutionsOfFile(filePath) {
      removeResolutionsOfFileFromCache(resolvedModuleNames, filePath, getResolvedModule2);
      removeResolutionsOfFileFromCache(resolvedTypeReferenceDirectives, filePath, getResolvedTypeReferenceDirective2);
    }
    function invalidateResolutions(resolutions, canInvalidate) {
      if (!resolutions)
        return false;
      let invalidated = false;
      resolutions.forEach((resolution) => {
        if (resolution.isInvalidated || !canInvalidate(resolution))
          return;
        resolution.isInvalidated = invalidated = true;
        for (const containingFilePath of Debug.checkDefined(resolution.files)) {
          (filesWithInvalidatedResolutions ?? (filesWithInvalidatedResolutions = /* @__PURE__ */ new Set())).add(containingFilePath);
          hasChangedAutomaticTypeDirectiveNames = hasChangedAutomaticTypeDirectiveNames || endsWith(containingFilePath, inferredTypesContainingFile);
        }
      });
      return invalidated;
    }
    function invalidateResolutionOfFile(filePath) {
      removeResolutionsOfFile(filePath);
      const prevHasChangedAutomaticTypeDirectiveNames = hasChangedAutomaticTypeDirectiveNames;
      if (invalidateResolutions(resolvedFileToResolution.get(filePath), returnTrue) && hasChangedAutomaticTypeDirectiveNames && !prevHasChangedAutomaticTypeDirectiveNames) {
        resolutionHost.onChangedAutomaticTypeDirectiveNames();
      }
    }
    function setFilesWithInvalidatedNonRelativeUnresolvedImports(filesMap) {
      Debug.assert(filesWithInvalidatedNonRelativeUnresolvedImports === filesMap || filesWithInvalidatedNonRelativeUnresolvedImports === void 0);
      filesWithInvalidatedNonRelativeUnresolvedImports = filesMap;
    }
    function scheduleInvalidateResolutionOfFailedLookupLocation(fileOrDirectoryPath, isCreatingWatchedDirectory) {
      if (isCreatingWatchedDirectory) {
        (isInDirectoryChecks || (isInDirectoryChecks = /* @__PURE__ */ new Set())).add(fileOrDirectoryPath);
      } else {
        const updatedPath = removeIgnoredPath(fileOrDirectoryPath);
        if (!updatedPath)
          return false;
        fileOrDirectoryPath = updatedPath;
        if (resolutionHost.fileIsOpen(fileOrDirectoryPath)) {
          return false;
        }
        const dirOfFileOrDirectory = getDirectoryPath(fileOrDirectoryPath);
        if (isNodeModulesAtTypesDirectory(fileOrDirectoryPath) || isNodeModulesDirectory(fileOrDirectoryPath) || isNodeModulesAtTypesDirectory(dirOfFileOrDirectory) || isNodeModulesDirectory(dirOfFileOrDirectory)) {
          (failedLookupChecks || (failedLookupChecks = /* @__PURE__ */ new Set())).add(fileOrDirectoryPath);
          (startsWithPathChecks || (startsWithPathChecks = /* @__PURE__ */ new Set())).add(fileOrDirectoryPath);
        } else {
          if (isEmittedFileOfProgram(resolutionHost.getCurrentProgram(), fileOrDirectoryPath)) {
            return false;
          }
          if (fileExtensionIs(fileOrDirectoryPath, ".map")) {
            return false;
          }
          (failedLookupChecks || (failedLookupChecks = /* @__PURE__ */ new Set())).add(fileOrDirectoryPath);
          const packagePath = parseNodeModuleFromPath(
            fileOrDirectoryPath,
            /*isFolder*/
            true
          );
          if (packagePath)
            (startsWithPathChecks || (startsWithPathChecks = /* @__PURE__ */ new Set())).add(packagePath);
        }
      }
      resolutionHost.scheduleInvalidateResolutionsOfFailedLookupLocations();
    }
    function invalidatePackageJsonMap() {
      const packageJsonMap = moduleResolutionCache.getPackageJsonInfoCache().getInternalMap();
      if (packageJsonMap && (failedLookupChecks || startsWithPathChecks || isInDirectoryChecks)) {
        packageJsonMap.forEach((_value, path) => isInvalidatedFailedLookup(path) ? packageJsonMap.delete(path) : void 0);
      }
    }
    function invalidateResolutionsOfFailedLookupLocations() {
      var _a;
      if (allModuleAndTypeResolutionsAreInvalidated) {
        affectingPathChecksForFile = void 0;
        invalidatePackageJsonMap();
        if (failedLookupChecks || startsWithPathChecks || isInDirectoryChecks || affectingPathChecks) {
          invalidateResolutions(resolvedLibraries, canInvalidateFailedLookupResolution);
        }
        failedLookupChecks = void 0;
        startsWithPathChecks = void 0;
        isInDirectoryChecks = void 0;
        affectingPathChecks = void 0;
        return true;
      }
      let invalidated = false;
      if (affectingPathChecksForFile) {
        (_a = resolutionHost.getCurrentProgram()) == null ? void 0 : _a.getSourceFiles().forEach((f) => {
          if (some(f.packageJsonLocations, (location) => affectingPathChecksForFile.has(location))) {
            (filesWithInvalidatedResolutions ?? (filesWithInvalidatedResolutions = /* @__PURE__ */ new Set())).add(f.path);
            invalidated = true;
          }
        });
        affectingPathChecksForFile = void 0;
      }
      if (!failedLookupChecks && !startsWithPathChecks && !isInDirectoryChecks && !affectingPathChecks) {
        return invalidated;
      }
      invalidated = invalidateResolutions(resolutionsWithFailedLookups, canInvalidateFailedLookupResolution) || invalidated;
      invalidatePackageJsonMap();
      failedLookupChecks = void 0;
      startsWithPathChecks = void 0;
      isInDirectoryChecks = void 0;
      invalidated = invalidateResolutions(resolutionsWithOnlyAffectingLocations, canInvalidatedFailedLookupResolutionWithAffectingLocation) || invalidated;
      affectingPathChecks = void 0;
      return invalidated;
    }
    function canInvalidateFailedLookupResolution(resolution) {
      var _a;
      if (canInvalidatedFailedLookupResolutionWithAffectingLocation(resolution))
        return true;
      if (!failedLookupChecks && !startsWithPathChecks && !isInDirectoryChecks)
        return false;
      return ((_a = resolution.failedLookupLocations) == null ? void 0 : _a.some((location) => isInvalidatedFailedLookup(resolutionHost.toPath(location)))) || !!resolution.node10Result && isInvalidatedFailedLookup(resolutionHost.toPath(resolution.node10Result));
    }
    function isInvalidatedFailedLookup(locationPath) {
      return (failedLookupChecks == null ? void 0 : failedLookupChecks.has(locationPath)) || firstDefinedIterator((startsWithPathChecks == null ? void 0 : startsWithPathChecks.keys()) || [], (fileOrDirectoryPath) => startsWith(locationPath, fileOrDirectoryPath) ? true : void 0) || firstDefinedIterator((isInDirectoryChecks == null ? void 0 : isInDirectoryChecks.keys()) || [], (dirPath) => locationPath.length > dirPath.length && startsWith(locationPath, dirPath) && (isDiskPathRoot(dirPath) || locationPath[dirPath.length] === directorySeparator) ? true : void 0);
    }
    function canInvalidatedFailedLookupResolutionWithAffectingLocation(resolution) {
      var _a;
      return !!affectingPathChecks && ((_a = resolution.affectingLocations) == null ? void 0 : _a.some((location) => affectingPathChecks.has(location)));
    }
    function closeTypeRootsWatch() {
      clearMap(typeRootsWatches, closeFileWatcher);
    }
    function createTypeRootsWatch(typeRootPath, typeRoot) {
      return canWatchTypeRootPath(typeRootPath) ? resolutionHost.watchTypeRootsDirectory(typeRoot, (fileOrDirectory) => {
        const fileOrDirectoryPath = resolutionHost.toPath(fileOrDirectory);
        if (cachedDirectoryStructureHost) {
          cachedDirectoryStructureHost.addOrDeleteFileOrDirectory(fileOrDirectory, fileOrDirectoryPath);
        }
        hasChangedAutomaticTypeDirectiveNames = true;
        resolutionHost.onChangedAutomaticTypeDirectiveNames();
        const dirPath = getDirectoryToWatchFailedLookupLocationFromTypeRoot(
          typeRoot,
          typeRootPath,
          rootPath,
          rootPathComponents,
          getCurrentDirectory,
          (dirPath2) => directoryWatchesOfFailedLookups.has(dirPath2)
        );
        if (dirPath) {
          scheduleInvalidateResolutionOfFailedLookupLocation(fileOrDirectoryPath, dirPath === fileOrDirectoryPath);
        }
      }, 1 /* Recursive */) : noopFileWatcher;
    }
    function updateTypeRootsWatch() {
      const options = resolutionHost.getCompilationSettings();
      if (options.types) {
        closeTypeRootsWatch();
        return;
      }
      const typeRoots = getEffectiveTypeRoots(options, { getCurrentDirectory });
      if (typeRoots) {
        mutateMap(
          typeRootsWatches,
          arrayToMap(typeRoots, (tr) => resolutionHost.toPath(tr)),
          {
            createNewValue: createTypeRootsWatch,
            onDeleteValue: closeFileWatcher
          }
        );
      } else {
        closeTypeRootsWatch();
      }
    }
    function canWatchTypeRootPath(typeRoot) {
      if (resolutionHost.getCompilationSettings().typeRoots)
        return true;
      return canWatchAtTypes(resolutionHost.toPath(typeRoot));
    }
  }
  function resolutionIsSymlink(resolution) {
    var _a, _b;
    return !!(((_a = resolution.resolvedModule) == null ? void 0 : _a.originalPath) || ((_b = resolution.resolvedTypeReferenceDirective) == null ? void 0 : _b.originalPath));
  }
  var init_resolutionCache = __esm({
    "src/compiler/resolutionCache.ts"() {
      "use strict";
      init_ts2();
    }
  });

  // src/compiler/watch.ts
  function createDiagnosticReporter(system, pretty) {
    const host = system === sys && sysFormatDiagnosticsHost ? sysFormatDiagnosticsHost : {
      getCurrentDirectory: () => system.getCurrentDirectory(),
      getNewLine: () => system.newLine,
      getCanonicalFileName: createGetCanonicalFileName(system.useCaseSensitiveFileNames)
    };
    if (!pretty) {
      return (diagnostic) => system.write(formatDiagnostic(diagnostic, host));
    }
    const diagnostics = new Array(1);
    return (diagnostic) => {
      diagnostics[0] = diagnostic;
      system.write(formatDiagnosticsWithColorAndContext(diagnostics, host) + host.getNewLine());
      diagnostics[0] = void 0;
    };
  }
  function clearScreenIfNotWatchingForFileChanges(system, diagnostic, options) {
    if (system.clearScreen && !options.preserveWatchOutput && !options.extendedDiagnostics && !options.diagnostics && contains(screenStartingMessageCodes, diagnostic.code)) {
      system.clearScreen();
      return true;
    }
    return false;
  }
  function getPlainDiagnosticFollowingNewLines(diagnostic, newLine) {
    return contains(screenStartingMessageCodes, diagnostic.code) ? newLine + newLine : newLine;
  }
  function getLocaleTimeString(system) {
    return !system.now ? (/* @__PURE__ */ new Date()).toLocaleTimeString() : (
      // On some systems / builds of Node, there's a non-breaking space between the time and AM/PM.
      // This branch is solely for testing, so just switch it to a normal space for baseline stability.
      // See:
      //     - https://github.com/nodejs/node/issues/45171
      //     - https://github.com/nodejs/node/issues/45753
      system.now().toLocaleTimeString("en-US", { timeZone: "UTC" }).replace("\u202F", " ")
    );
  }
  function createWatchStatusReporter(system, pretty) {
    return pretty ? (diagnostic, newLine, options) => {
      clearScreenIfNotWatchingForFileChanges(system, diagnostic, options);
      let output = `[${formatColorAndReset(getLocaleTimeString(system), "\x1B[90m" /* Grey */)}] `;
      output += `${flattenDiagnosticMessageText(diagnostic.messageText, system.newLine)}${newLine + newLine}`;
      system.write(output);
    } : (diagnostic, newLine, options) => {
      let output = "";
      if (!clearScreenIfNotWatchingForFileChanges(system, diagnostic, options)) {
        output += newLine;
      }
      output += `${getLocaleTimeString(system)} - `;
      output += `${flattenDiagnosticMessageText(diagnostic.messageText, system.newLine)}${getPlainDiagnosticFollowingNewLines(diagnostic, newLine)}`;
      system.write(output);
    };
  }
  function parseConfigFileWithSystem(configFileName, optionsToExtend, extendedConfigCache, watchOptionsToExtend, system, reportDiagnostic) {
    const host = system;
    host.onUnRecoverableConfigFileDiagnostic = (diagnostic) => reportUnrecoverableDiagnostic(system, reportDiagnostic, diagnostic);
    const result = getParsedCommandLineOfConfigFile(configFileName, optionsToExtend, host, extendedConfigCache, watchOptionsToExtend);
    host.onUnRecoverableConfigFileDiagnostic = void 0;
    return result;
  }
  function getErrorCountForSummary(diagnostics) {
    return countWhere(diagnostics, (diagnostic) => diagnostic.category === 1 /* Error */);
  }
  function getFilesInErrorForSummary(diagnostics) {
    const filesInError = filter(diagnostics, (diagnostic) => diagnostic.category === 1 /* Error */).map(
      (errorDiagnostic) => {
        if (errorDiagnostic.file === void 0)
          return;
        return `${errorDiagnostic.file.fileName}`;
      }
    );
    return filesInError.map((fileName) => {
      if (fileName === void 0) {
        return void 0;
      }
      const diagnosticForFileName = find(
        diagnostics,
        (diagnostic) => diagnostic.file !== void 0 && diagnostic.file.fileName === fileName
      );
      if (diagnosticForFileName !== void 0) {
        const { line } = getLineAndCharacterOfPosition(diagnosticForFileName.file, diagnosticForFileName.start);
        return {
          fileName,
          line: line + 1
        };
      }
    });
  }
  function getWatchErrorSummaryDiagnosticMessage(errorCount) {
    return errorCount === 1 ? Diagnostics.Found_1_error_Watching_for_file_changes : Diagnostics.Found_0_errors_Watching_for_file_changes;
  }
  function prettyPathForFileError(error, cwd) {
    const line = formatColorAndReset(":" + error.line, "\x1B[90m" /* Grey */);
    if (pathIsAbsolute(error.fileName) && pathIsAbsolute(cwd)) {
      return getRelativePathFromDirectory(
        cwd,
        error.fileName,
        /*ignoreCase*/
        false
      ) + line;
    }
    return error.fileName + line;
  }
  function getErrorSummaryText(errorCount, filesInError, newLine, host) {
    if (errorCount === 0)
      return "";
    const nonNilFiles = filesInError.filter((fileInError) => fileInError !== void 0);
    const distinctFileNamesWithLines = nonNilFiles.map((fileInError) => `${fileInError.fileName}:${fileInError.line}`).filter((value, index, self) => self.indexOf(value) === index);
    const firstFileReference = nonNilFiles[0] && prettyPathForFileError(nonNilFiles[0], host.getCurrentDirectory());
    let messageAndArgs;
    if (errorCount === 1) {
      messageAndArgs = filesInError[0] !== void 0 ? [Diagnostics.Found_1_error_in_0, firstFileReference] : [Diagnostics.Found_1_error];
    } else {
      messageAndArgs = distinctFileNamesWithLines.length === 0 ? [Diagnostics.Found_0_errors, errorCount] : distinctFileNamesWithLines.length === 1 ? [Diagnostics.Found_0_errors_in_the_same_file_starting_at_Colon_1, errorCount, firstFileReference] : [Diagnostics.Found_0_errors_in_1_files, errorCount, distinctFileNamesWithLines.length];
    }
    const d = createCompilerDiagnostic(...messageAndArgs);
    const suffix = distinctFileNamesWithLines.length > 1 ? createTabularErrorsDisplay(nonNilFiles, host) : "";
    return `${newLine}${flattenDiagnosticMessageText(d.messageText, newLine)}${newLine}${newLine}${suffix}`;
  }
  function createTabularErrorsDisplay(filesInError, host) {
    const distinctFiles = filesInError.filter((value, index, self) => index === self.findIndex((file) => (file == null ? void 0 : file.fileName) === (value == null ? void 0 : value.fileName)));
    if (distinctFiles.length === 0)
      return "";
    const numberLength = (num) => Math.log(num) * Math.LOG10E + 1;
    const fileToErrorCount = distinctFiles.map((file) => [file, countWhere(filesInError, (fileInError) => fileInError.fileName === file.fileName)]);
    const maxErrors = fileToErrorCount.reduce((acc, value) => Math.max(acc, value[1] || 0), 0);
    const headerRow = Diagnostics.Errors_Files.message;
    const leftColumnHeadingLength = headerRow.split(" ")[0].length;
    const leftPaddingGoal = Math.max(leftColumnHeadingLength, numberLength(maxErrors));
    const headerPadding = Math.max(numberLength(maxErrors) - leftColumnHeadingLength, 0);
    let tabularData = "";
    tabularData += " ".repeat(headerPadding) + headerRow + "\n";
    fileToErrorCount.forEach((row) => {
      const [file, errorCount] = row;
      const errorCountDigitsLength = Math.log(errorCount) * Math.LOG10E + 1 | 0;
      const leftPadding = errorCountDigitsLength < leftPaddingGoal ? " ".repeat(leftPaddingGoal - errorCountDigitsLength) : "";
      const fileRef = prettyPathForFileError(file, host.getCurrentDirectory());
      tabularData += `${leftPadding}${errorCount}  ${fileRef}
`;
    });
    return tabularData;
  }
  function isBuilderProgram2(program) {
    return !!program.getState;
  }
  function listFiles(program, write) {
    const options = program.getCompilerOptions();
    if (options.explainFiles) {
      explainFiles(isBuilderProgram2(program) ? program.getProgram() : program, write);
    } else if (options.listFiles || options.listFilesOnly) {
      forEach(program.getSourceFiles(), (file) => {
        write(file.fileName);
      });
    }
  }
  function explainFiles(program, write) {
    var _a, _b;
    const reasons = program.getFileIncludeReasons();
    const relativeFileName = (fileName) => convertToRelativePath(fileName, program.getCurrentDirectory(), program.getCanonicalFileName);
    for (const file of program.getSourceFiles()) {
      write(`${toFileName(file, relativeFileName)}`);
      (_a = reasons.get(file.path)) == null ? void 0 : _a.forEach((reason) => write(`  ${fileIncludeReasonToDiagnostics(program, reason, relativeFileName).messageText}`));
      (_b = explainIfFileIsRedirectAndImpliedFormat(file, relativeFileName)) == null ? void 0 : _b.forEach((d) => write(`  ${d.messageText}`));
    }
  }
  function explainIfFileIsRedirectAndImpliedFormat(file, fileNameConvertor) {
    var _a;
    let result;
    if (file.path !== file.resolvedPath) {
      (result ?? (result = [])).push(chainDiagnosticMessages(
        /*details*/
        void 0,
        Diagnostics.File_is_output_of_project_reference_source_0,
        toFileName(file.originalFileName, fileNameConvertor)
      ));
    }
    if (file.redirectInfo) {
      (result ?? (result = [])).push(chainDiagnosticMessages(
        /*details*/
        void 0,
        Diagnostics.File_redirects_to_file_0,
        toFileName(file.redirectInfo.redirectTarget, fileNameConvertor)
      ));
    }
    if (isExternalOrCommonJsModule(file)) {
      switch (file.impliedNodeFormat) {
        case 99 /* ESNext */:
          if (file.packageJsonScope) {
            (result ?? (result = [])).push(chainDiagnosticMessages(
              /*details*/
              void 0,
              Diagnostics.File_is_ECMAScript_module_because_0_has_field_type_with_value_module,
              toFileName(last(file.packageJsonLocations), fileNameConvertor)
            ));
          }
          break;
        case 1 /* CommonJS */:
          if (file.packageJsonScope) {
            (result ?? (result = [])).push(chainDiagnosticMessages(
              /*details*/
              void 0,
              file.packageJsonScope.contents.packageJsonContent.type ? Diagnostics.File_is_CommonJS_module_because_0_has_field_type_whose_value_is_not_module : Diagnostics.File_is_CommonJS_module_because_0_does_not_have_field_type,
              toFileName(last(file.packageJsonLocations), fileNameConvertor)
            ));
          } else if ((_a = file.packageJsonLocations) == null ? void 0 : _a.length) {
            (result ?? (result = [])).push(chainDiagnosticMessages(
              /*details*/
              void 0,
              Diagnostics.File_is_CommonJS_module_because_package_json_was_not_found
            ));
          }
          break;
      }
    }
    return result;
  }
  function getMatchedFileSpec(program, fileName) {
    var _a;
    const configFile = program.getCompilerOptions().configFile;
    if (!((_a = configFile == null ? void 0 : configFile.configFileSpecs) == null ? void 0 : _a.validatedFilesSpec))
      return void 0;
    const filePath = program.getCanonicalFileName(fileName);
    const basePath = getDirectoryPath(getNormalizedAbsolutePath(configFile.fileName, program.getCurrentDirectory()));
    return find(configFile.configFileSpecs.validatedFilesSpec, (fileSpec) => program.getCanonicalFileName(getNormalizedAbsolutePath(fileSpec, basePath)) === filePath);
  }
  function getMatchedIncludeSpec(program, fileName) {
    var _a, _b;
    const configFile = program.getCompilerOptions().configFile;
    if (!((_a = configFile == null ? void 0 : configFile.configFileSpecs) == null ? void 0 : _a.validatedIncludeSpecs))
      return void 0;
    if (configFile.configFileSpecs.isDefaultIncludeSpec)
      return true;
    const isJsonFile = fileExtensionIs(fileName, ".json" /* Json */);
    const basePath = getDirectoryPath(getNormalizedAbsolutePath(configFile.fileName, program.getCurrentDirectory()));
    const useCaseSensitiveFileNames = program.useCaseSensitiveFileNames();
    return find((_b = configFile == null ? void 0 : configFile.configFileSpecs) == null ? void 0 : _b.validatedIncludeSpecs, (includeSpec) => {
      if (isJsonFile && !endsWith(includeSpec, ".json" /* Json */))
        return false;
      const pattern = getPatternFromSpec(includeSpec, basePath, "files");
      return !!pattern && getRegexFromPattern(`(${pattern})$`, useCaseSensitiveFileNames).test(fileName);
    });
  }
  function fileIncludeReasonToDiagnostics(program, reason, fileNameConvertor) {
    var _a, _b;
    const options = program.getCompilerOptions();
    if (isReferencedFile(reason)) {
      const referenceLocation = getReferencedFileLocation((path) => program.getSourceFileByPath(path), reason);
      const referenceText = isReferenceFileLocation(referenceLocation) ? referenceLocation.file.text.substring(referenceLocation.pos, referenceLocation.end) : `"${referenceLocation.text}"`;
      let message;
      Debug.assert(isReferenceFileLocation(referenceLocation) || reason.kind === 3 /* Import */, "Only synthetic references are imports");
      switch (reason.kind) {
        case 3 /* Import */:
          if (isReferenceFileLocation(referenceLocation)) {
            message = referenceLocation.packageId ? Diagnostics.Imported_via_0_from_file_1_with_packageId_2 : Diagnostics.Imported_via_0_from_file_1;
          } else if (referenceLocation.text === externalHelpersModuleNameText) {
            message = referenceLocation.packageId ? Diagnostics.Imported_via_0_from_file_1_with_packageId_2_to_import_importHelpers_as_specified_in_compilerOptions : Diagnostics.Imported_via_0_from_file_1_to_import_importHelpers_as_specified_in_compilerOptions;
          } else {
            message = referenceLocation.packageId ? Diagnostics.Imported_via_0_from_file_1_with_packageId_2_to_import_jsx_and_jsxs_factory_functions : Diagnostics.Imported_via_0_from_file_1_to_import_jsx_and_jsxs_factory_functions;
          }
          break;
        case 4 /* ReferenceFile */:
          Debug.assert(!referenceLocation.packageId);
          message = Diagnostics.Referenced_via_0_from_file_1;
          break;
        case 5 /* TypeReferenceDirective */:
          message = referenceLocation.packageId ? Diagnostics.Type_library_referenced_via_0_from_file_1_with_packageId_2 : Diagnostics.Type_library_referenced_via_0_from_file_1;
          break;
        case 7 /* LibReferenceDirective */:
          Debug.assert(!referenceLocation.packageId);
          message = Diagnostics.Library_referenced_via_0_from_file_1;
          break;
        default:
          Debug.assertNever(reason);
      }
      return chainDiagnosticMessages(
        /*details*/
        void 0,
        message,
        referenceText,
        toFileName(referenceLocation.file, fileNameConvertor),
        referenceLocation.packageId && packageIdToString(referenceLocation.packageId)
      );
    }
    switch (reason.kind) {
      case 0 /* RootFile */:
        if (!((_a = options.configFile) == null ? void 0 : _a.configFileSpecs))
          return chainDiagnosticMessages(
            /*details*/
            void 0,
            Diagnostics.Root_file_specified_for_compilation
          );
        const fileName = getNormalizedAbsolutePath(program.getRootFileNames()[reason.index], program.getCurrentDirectory());
        const matchedByFiles = getMatchedFileSpec(program, fileName);
        if (matchedByFiles)
          return chainDiagnosticMessages(
            /*details*/
            void 0,
            Diagnostics.Part_of_files_list_in_tsconfig_json
          );
        const matchedByInclude = getMatchedIncludeSpec(program, fileName);
        return isString(matchedByInclude) ? chainDiagnosticMessages(
          /*details*/
          void 0,
          Diagnostics.Matched_by_include_pattern_0_in_1,
          matchedByInclude,
          toFileName(options.configFile, fileNameConvertor)
        ) : (
          // Could be additional files specified as roots or matched by default include
          chainDiagnosticMessages(
            /*details*/
            void 0,
            matchedByInclude ? Diagnostics.Matched_by_default_include_pattern_Asterisk_Asterisk_Slash_Asterisk : Diagnostics.Root_file_specified_for_compilation
          )
        );
      case 1 /* SourceFromProjectReference */:
      case 2 /* OutputFromProjectReference */:
        const isOutput = reason.kind === 2 /* OutputFromProjectReference */;
        const referencedResolvedRef = Debug.checkDefined((_b = program.getResolvedProjectReferences()) == null ? void 0 : _b[reason.index]);
        return chainDiagnosticMessages(
          /*details*/
          void 0,
          outFile(options) ? isOutput ? Diagnostics.Output_from_referenced_project_0_included_because_1_specified : Diagnostics.Source_from_referenced_project_0_included_because_1_specified : isOutput ? Diagnostics.Output_from_referenced_project_0_included_because_module_is_specified_as_none : Diagnostics.Source_from_referenced_project_0_included_because_module_is_specified_as_none,
          toFileName(referencedResolvedRef.sourceFile.fileName, fileNameConvertor),
          options.outFile ? "--outFile" : "--out"
        );
      case 8 /* AutomaticTypeDirectiveFile */: {
        const messageAndArgs = options.types ? reason.packageId ? [Diagnostics.Entry_point_of_type_library_0_specified_in_compilerOptions_with_packageId_1, reason.typeReference, packageIdToString(reason.packageId)] : [Diagnostics.Entry_point_of_type_library_0_specified_in_compilerOptions, reason.typeReference] : reason.packageId ? [Diagnostics.Entry_point_for_implicit_type_library_0_with_packageId_1, reason.typeReference, packageIdToString(reason.packageId)] : [Diagnostics.Entry_point_for_implicit_type_library_0, reason.typeReference];
        return chainDiagnosticMessages(
          /*details*/
          void 0,
          ...messageAndArgs
        );
      }
      case 6 /* LibFile */: {
        if (reason.index !== void 0)
          return chainDiagnosticMessages(
            /*details*/
            void 0,
            Diagnostics.Library_0_specified_in_compilerOptions,
            options.lib[reason.index]
          );
        const target = forEachEntry(targetOptionDeclaration.type, (value, key) => value === getEmitScriptTarget(options) ? key : void 0);
        const messageAndArgs = target ? [Diagnostics.Default_library_for_target_0, target] : [Diagnostics.Default_library];
        return chainDiagnosticMessages(
          /*details*/
          void 0,
          ...messageAndArgs
        );
      }
      default:
        Debug.assertNever(reason);
    }
  }
  function toFileName(file, fileNameConvertor) {
    const fileName = isString(file) ? file : file.fileName;
    return fileNameConvertor ? fileNameConvertor(fileName) : fileName;
  }
  function emitFilesAndReportErrors(program, reportDiagnostic, write, reportSummary, writeFile2, cancellationToken, emitOnlyDtsFiles, customTransformers) {
    const isListFilesOnly = !!program.getCompilerOptions().listFilesOnly;
    const allDiagnostics = program.getConfigFileParsingDiagnostics().slice();
    const configFileParsingDiagnosticsLength = allDiagnostics.length;
    addRange(allDiagnostics, program.getSyntacticDiagnostics(
      /*sourceFile*/
      void 0,
      cancellationToken
    ));
    if (allDiagnostics.length === configFileParsingDiagnosticsLength) {
      addRange(allDiagnostics, program.getOptionsDiagnostics(cancellationToken));
      if (!isListFilesOnly) {
        addRange(allDiagnostics, program.getGlobalDiagnostics(cancellationToken));
        if (allDiagnostics.length === configFileParsingDiagnosticsLength) {
          addRange(allDiagnostics, program.getSemanticDiagnostics(
            /*sourceFile*/
            void 0,
            cancellationToken
          ));
        }
      }
    }
    const emitResult = isListFilesOnly ? { emitSkipped: true, diagnostics: emptyArray } : program.emit(
      /*targetSourceFile*/
      void 0,
      writeFile2,
      cancellationToken,
      emitOnlyDtsFiles,
      customTransformers
    );
    const { emittedFiles, diagnostics: emitDiagnostics } = emitResult;
    addRange(allDiagnostics, emitDiagnostics);
    const diagnostics = sortAndDeduplicateDiagnostics(allDiagnostics);
    diagnostics.forEach(reportDiagnostic);
    if (write) {
      const currentDir = program.getCurrentDirectory();
      forEach(emittedFiles, (file) => {
        const filepath = getNormalizedAbsolutePath(file, currentDir);
        write(`TSFILE: ${filepath}`);
      });
      listFiles(program, write);
    }
    if (reportSummary) {
      reportSummary(getErrorCountForSummary(diagnostics), getFilesInErrorForSummary(diagnostics));
    }
    return {
      emitResult,
      diagnostics
    };
  }
  function emitFilesAndReportErrorsAndGetExitStatus(program, reportDiagnostic, write, reportSummary, writeFile2, cancellationToken, emitOnlyDtsFiles, customTransformers) {
    const { emitResult, diagnostics } = emitFilesAndReportErrors(
      program,
      reportDiagnostic,
      write,
      reportSummary,
      writeFile2,
      cancellationToken,
      emitOnlyDtsFiles,
      customTransformers
    );
    if (emitResult.emitSkipped && diagnostics.length > 0) {
      return 1 /* DiagnosticsPresent_OutputsSkipped */;
    } else if (diagnostics.length > 0) {
      return 2 /* DiagnosticsPresent_OutputsGenerated */;
    }
    return 0 /* Success */;
  }
  function createWatchHost(system = sys, reportWatchStatus2) {
    const onWatchStatusChange = reportWatchStatus2 || createWatchStatusReporter(system);
    return {
      onWatchStatusChange,
      watchFile: maybeBind(system, system.watchFile) || returnNoopFileWatcher,
      watchDirectory: maybeBind(system, system.watchDirectory) || returnNoopFileWatcher,
      setTimeout: maybeBind(system, system.setTimeout) || noop,
      clearTimeout: maybeBind(system, system.clearTimeout) || noop
    };
  }
  function createWatchFactory(host, options) {
    const watchLogLevel = host.trace ? options.extendedDiagnostics ? 2 /* Verbose */ : options.diagnostics ? 1 /* TriggerOnly */ : 0 /* None */ : 0 /* None */;
    const writeLog = watchLogLevel !== 0 /* None */ ? (s) => host.trace(s) : noop;
    const result = getWatchFactory(host, watchLogLevel, writeLog);
    result.writeLog = writeLog;
    return result;
  }
  function createCompilerHostFromProgramHost(host, getCompilerOptions, directoryStructureHost = host) {
    const useCaseSensitiveFileNames = host.useCaseSensitiveFileNames();
    const compilerHost = {
      getSourceFile: createGetSourceFile(
        (fileName, encoding) => !encoding ? compilerHost.readFile(fileName) : host.readFile(fileName, encoding),
        getCompilerOptions,
        /*setParentNodes*/
        void 0
      ),
      getDefaultLibLocation: maybeBind(host, host.getDefaultLibLocation),
      getDefaultLibFileName: (options) => host.getDefaultLibFileName(options),
      writeFile: createWriteFileMeasuringIO(
        (path, data, writeByteOrderMark) => host.writeFile(path, data, writeByteOrderMark),
        (path) => host.createDirectory(path),
        (path) => host.directoryExists(path)
      ),
      getCurrentDirectory: memoize(() => host.getCurrentDirectory()),
      useCaseSensitiveFileNames: () => useCaseSensitiveFileNames,
      getCanonicalFileName: createGetCanonicalFileName(useCaseSensitiveFileNames),
      getNewLine: () => getNewLineCharacter(getCompilerOptions()),
      fileExists: (f) => host.fileExists(f),
      readFile: (f) => host.readFile(f),
      trace: maybeBind(host, host.trace),
      directoryExists: maybeBind(directoryStructureHost, directoryStructureHost.directoryExists),
      getDirectories: maybeBind(directoryStructureHost, directoryStructureHost.getDirectories),
      realpath: maybeBind(host, host.realpath),
      getEnvironmentVariable: maybeBind(host, host.getEnvironmentVariable) || (() => ""),
      createHash: maybeBind(host, host.createHash),
      readDirectory: maybeBind(host, host.readDirectory),
      storeFilesChangingSignatureDuringEmit: host.storeFilesChangingSignatureDuringEmit
    };
    return compilerHost;
  }
  function getSourceFileVersionAsHashFromText(host, text) {
    if (text.match(sourceMapCommentRegExpDontCareLineStart)) {
      let lineEnd = text.length;
      let lineStart = lineEnd;
      for (let pos = lineEnd - 1; pos >= 0; pos--) {
        const ch = text.charCodeAt(pos);
        switch (ch) {
          case 10 /* lineFeed */:
            if (pos && text.charCodeAt(pos - 1) === 13 /* carriageReturn */) {
              pos--;
            }
          case 13 /* carriageReturn */:
            break;
          default:
            if (ch < 127 /* maxAsciiCharacter */ || !isLineBreak(ch)) {
              lineStart = pos;
              continue;
            }
            break;
        }
        const line = text.substring(lineStart, lineEnd);
        if (line.match(sourceMapCommentRegExp)) {
          text = text.substring(0, lineStart);
          break;
        } else if (!line.match(whitespaceOrMapCommentRegExp)) {
          break;
        }
        lineEnd = lineStart;
      }
    }
    return (host.createHash || generateDjb2Hash)(text);
  }
  function setGetSourceFileAsHashVersioned(compilerHost) {
    const originalGetSourceFile = compilerHost.getSourceFile;
    compilerHost.getSourceFile = (...args) => {
      const result = originalGetSourceFile.call(compilerHost, ...args);
      if (result) {
        result.version = getSourceFileVersionAsHashFromText(compilerHost, result.text);
      }
      return result;
    };
  }
  function createProgramHost(system, createProgram2) {
    const getDefaultLibLocation = memoize(() => getDirectoryPath(normalizePath(system.getExecutingFilePath())));
    return {
      useCaseSensitiveFileNames: () => system.useCaseSensitiveFileNames,
      getNewLine: () => system.newLine,
      getCurrentDirectory: memoize(() => system.getCurrentDirectory()),
      getDefaultLibLocation,
      getDefaultLibFileName: (options) => combinePaths(getDefaultLibLocation(), getDefaultLibFileName(options)),
      fileExists: (path) => system.fileExists(path),
      readFile: (path, encoding) => system.readFile(path, encoding),
      directoryExists: (path) => system.directoryExists(path),
      getDirectories: (path) => system.getDirectories(path),
      readDirectory: (path, extensions, exclude, include, depth) => system.readDirectory(path, extensions, exclude, include, depth),
      realpath: maybeBind(system, system.realpath),
      getEnvironmentVariable: maybeBind(system, system.getEnvironmentVariable),
      trace: (s) => system.write(s + system.newLine),
      createDirectory: (path) => system.createDirectory(path),
      writeFile: (path, data, writeByteOrderMark) => system.writeFile(path, data, writeByteOrderMark),
      createHash: maybeBind(system, system.createHash),
      createProgram: createProgram2 || createEmitAndSemanticDiagnosticsBuilderProgram,
      storeFilesChangingSignatureDuringEmit: system.storeFilesChangingSignatureDuringEmit,
      now: maybeBind(system, system.now)
    };
  }
  function createWatchCompilerHost(system = sys, createProgram2, reportDiagnostic, reportWatchStatus2) {
    const write = (s) => system.write(s + system.newLine);
    const result = createProgramHost(system, createProgram2);
    copyProperties(result, createWatchHost(system, reportWatchStatus2));
    result.afterProgramCreate = (builderProgram) => {
      const compilerOptions = builderProgram.getCompilerOptions();
      const newLine = getNewLineCharacter(compilerOptions);
      emitFilesAndReportErrors(
        builderProgram,
        reportDiagnostic,
        write,
        (errorCount) => result.onWatchStatusChange(
          createCompilerDiagnostic(getWatchErrorSummaryDiagnosticMessage(errorCount), errorCount),
          newLine,
          compilerOptions,
          errorCount
        )
      );
    };
    return result;
  }
  function reportUnrecoverableDiagnostic(system, reportDiagnostic, diagnostic) {
    reportDiagnostic(diagnostic);
    system.exit(1 /* DiagnosticsPresent_OutputsSkipped */);
  }
  function createWatchCompilerHostOfConfigFile({
    configFileName,
    optionsToExtend,
    watchOptionsToExtend,
    extraFileExtensions,
    system,
    createProgram: createProgram2,
    reportDiagnostic,
    reportWatchStatus: reportWatchStatus2
  }) {
    const diagnosticReporter = reportDiagnostic || createDiagnosticReporter(system);
    const host = createWatchCompilerHost(system, createProgram2, diagnosticReporter, reportWatchStatus2);
    host.onUnRecoverableConfigFileDiagnostic = (diagnostic) => reportUnrecoverableDiagnostic(system, diagnosticReporter, diagnostic);
    host.configFileName = configFileName;
    host.optionsToExtend = optionsToExtend;
    host.watchOptionsToExtend = watchOptionsToExtend;
    host.extraFileExtensions = extraFileExtensions;
    return host;
  }
  function createWatchCompilerHostOfFilesAndCompilerOptions({
    rootFiles,
    options,
    watchOptions,
    projectReferences,
    system,
    createProgram: createProgram2,
    reportDiagnostic,
    reportWatchStatus: reportWatchStatus2
  }) {
    const host = createWatchCompilerHost(system, createProgram2, reportDiagnostic || createDiagnosticReporter(system), reportWatchStatus2);
    host.rootFiles = rootFiles;
    host.options = options;
    host.watchOptions = watchOptions;
    host.projectReferences = projectReferences;
    return host;
  }
  function performIncrementalCompilation(input) {
    const system = input.system || sys;
    const host = input.host || (input.host = createIncrementalCompilerHost(input.options, system));
    const builderProgram = createIncrementalProgram(input);
    const exitStatus = emitFilesAndReportErrorsAndGetExitStatus(
      builderProgram,
      input.reportDiagnostic || createDiagnosticReporter(system),
      (s) => host.trace && host.trace(s),
      input.reportErrorSummary || input.options.pretty ? (errorCount, filesInError) => system.write(getErrorSummaryText(errorCount, filesInError, system.newLine, host)) : void 0
    );
    if (input.afterProgramEmitAndDiagnostics)
      input.afterProgramEmitAndDiagnostics(builderProgram);
    return exitStatus;
  }
  var sysFormatDiagnosticsHost, screenStartingMessageCodes, noopFileWatcher, returnNoopFileWatcher, WatchType;
  var init_watch = __esm({
    "src/compiler/watch.ts"() {
      "use strict";
      init_ts2();
      sysFormatDiagnosticsHost = sys ? {
        getCurrentDirectory: () => sys.getCurrentDirectory(),
        getNewLine: () => sys.newLine,
        getCanonicalFileName: createGetCanonicalFileName(sys.useCaseSensitiveFileNames)
      } : void 0;
      screenStartingMessageCodes = [
        Diagnostics.Starting_compilation_in_watch_mode.code,
        Diagnostics.File_change_detected_Starting_incremental_compilation.code
      ];
      noopFileWatcher = { close: noop };
      returnNoopFileWatcher = () => noopFileWatcher;
      WatchType = {
        ConfigFile: "Config file",
        ExtendedConfigFile: "Extended config file",
        SourceFile: "Source file",
        MissingFile: "Missing file",
        WildcardDirectory: "Wild card directory",
        FailedLookupLocations: "Failed Lookup Locations",
        AffectingFileLocation: "File location affecting resolution",
        TypeRoots: "Type roots",
        ConfigFileOfReferencedProject: "Config file of referened project",
        ExtendedConfigOfReferencedProject: "Extended config file of referenced project",
        WildcardDirectoryOfReferencedProject: "Wild card directory of referenced project",
        PackageJson: "package.json file",
        ClosedScriptInfo: "Closed Script info",
        ConfigFileForInferredRoot: "Config file for the inferred project root",
        NodeModules: "node_modules for closed script infos and package.jsons affecting module specifier cache",
        MissingSourceMapFile: "Missing source map file",
        NoopConfigFileForInferredRoot: "Noop Config file for the inferred project root",
        MissingGeneratedFile: "Missing generated file",
        NodeModulesForModuleSpecifierCache: "node_modules for module specifier cache invalidation",
        TypingInstallerLocationFile: "File location for typing installer",
        TypingInstallerLocationDirectory: "Directory location for typing installer"
      };
    }
  });

  // src/compiler/watchPublic.ts
  function readBuilderProgram(compilerOptions, host) {
    const buildInfoPath = getTsBuildInfoEmitOutputFilePath(compilerOptions);
    if (!buildInfoPath)
      return void 0;
    let buildInfo;
    if (host.getBuildInfo) {
      buildInfo = host.getBuildInfo(buildInfoPath, compilerOptions.configFilePath);
    } else {
      const content = host.readFile(buildInfoPath);
      if (!content)
        return void 0;
      buildInfo = getBuildInfo(buildInfoPath, content);
    }
    if (!buildInfo || buildInfo.version !== version || !buildInfo.program)
      return void 0;
    return createBuilderProgramUsingProgramBuildInfo(buildInfo, buildInfoPath, host);
  }
  function createIncrementalCompilerHost(options, system = sys) {
    const host = createCompilerHostWorker(
      options,
      /*setParentNodes*/
      void 0,
      system
    );
    host.createHash = maybeBind(system, system.createHash);
    host.storeFilesChangingSignatureDuringEmit = system.storeFilesChangingSignatureDuringEmit;
    setGetSourceFileAsHashVersioned(host);
    changeCompilerHostLikeToUseCache(host, (fileName) => toPath(fileName, host.getCurrentDirectory(), host.getCanonicalFileName));
    return host;
  }
  function createIncrementalProgram({
    rootNames,
    options,
    configFileParsingDiagnostics,
    projectReferences,
    host,
    createProgram: createProgram2
  }) {
    host = host || createIncrementalCompilerHost(options);
    createProgram2 = createProgram2 || createEmitAndSemanticDiagnosticsBuilderProgram;
    const oldProgram = readBuilderProgram(options, host);
    return createProgram2(rootNames, options, host, oldProgram, configFileParsingDiagnostics, projectReferences);
  }
  function createWatchCompilerHost2(rootFilesOrConfigFileName, options, system, createProgram2, reportDiagnostic, reportWatchStatus2, projectReferencesOrWatchOptionsToExtend, watchOptionsOrExtraFileExtensions) {
    if (isArray(rootFilesOrConfigFileName)) {
      return createWatchCompilerHostOfFilesAndCompilerOptions({
        rootFiles: rootFilesOrConfigFileName,
        options,
        watchOptions: watchOptionsOrExtraFileExtensions,
        projectReferences: projectReferencesOrWatchOptionsToExtend,
        system,
        createProgram: createProgram2,
        reportDiagnostic,
        reportWatchStatus: reportWatchStatus2
      });
    } else {
      return createWatchCompilerHostOfConfigFile({
        configFileName: rootFilesOrConfigFileName,
        optionsToExtend: options,
        watchOptionsToExtend: projectReferencesOrWatchOptionsToExtend,
        extraFileExtensions: watchOptionsOrExtraFileExtensions,
        system,
        createProgram: createProgram2,
        reportDiagnostic,
        reportWatchStatus: reportWatchStatus2
      });
    }
  }
  function createWatchProgram(host) {
    let builderProgram;
    let reloadLevel;
    let missingFilesMap;
    let watchedWildcardDirectories;
    let timerToUpdateProgram;
    let timerToInvalidateFailedLookupResolutions;
    let parsedConfigs;
    let sharedExtendedConfigFileWatchers;
    let extendedConfigCache = host.extendedConfigCache;
    let reportFileChangeDetectedOnCreateProgram = false;
    const sourceFilesCache = /* @__PURE__ */ new Map();
    let missingFilePathsRequestedForRelease;
    let hasChangedCompilerOptions = false;
    const useCaseSensitiveFileNames = host.useCaseSensitiveFileNames();
    const currentDirectory = host.getCurrentDirectory();
    const { configFileName, optionsToExtend: optionsToExtendForConfigFile = {}, watchOptionsToExtend, extraFileExtensions, createProgram: createProgram2 } = host;
    let { rootFiles: rootFileNames, options: compilerOptions, watchOptions, projectReferences } = host;
    let wildcardDirectories;
    let configFileParsingDiagnostics;
    let canConfigFileJsonReportNoInputFiles = false;
    let hasChangedConfigFileParsingErrors = false;
    const cachedDirectoryStructureHost = configFileName === void 0 ? void 0 : createCachedDirectoryStructureHost(host, currentDirectory, useCaseSensitiveFileNames);
    const directoryStructureHost = cachedDirectoryStructureHost || host;
    const parseConfigFileHost = parseConfigHostFromCompilerHostLike(host, directoryStructureHost);
    let newLine = updateNewLine();
    if (configFileName && host.configFileParsingResult) {
      setConfigFileParsingResult(host.configFileParsingResult);
      newLine = updateNewLine();
    }
    reportWatchDiagnostic(Diagnostics.Starting_compilation_in_watch_mode);
    if (configFileName && !host.configFileParsingResult) {
      newLine = getNewLineCharacter(optionsToExtendForConfigFile);
      Debug.assert(!rootFileNames);
      parseConfigFile2();
      newLine = updateNewLine();
    }
    Debug.assert(compilerOptions);
    Debug.assert(rootFileNames);
    const { watchFile: watchFile2, watchDirectory, writeLog } = createWatchFactory(host, compilerOptions);
    const getCanonicalFileName = createGetCanonicalFileName(useCaseSensitiveFileNames);
    writeLog(`Current directory: ${currentDirectory} CaseSensitiveFileNames: ${useCaseSensitiveFileNames}`);
    let configFileWatcher;
    if (configFileName) {
      configFileWatcher = watchFile2(configFileName, scheduleProgramReload, 2e3 /* High */, watchOptions, WatchType.ConfigFile);
    }
    const compilerHost = createCompilerHostFromProgramHost(host, () => compilerOptions, directoryStructureHost);
    setGetSourceFileAsHashVersioned(compilerHost);
    const getNewSourceFile = compilerHost.getSourceFile;
    compilerHost.getSourceFile = (fileName, ...args) => getVersionedSourceFileByPath(fileName, toPath3(fileName), ...args);
    compilerHost.getSourceFileByPath = getVersionedSourceFileByPath;
    compilerHost.getNewLine = () => newLine;
    compilerHost.fileExists = fileExists;
    compilerHost.onReleaseOldSourceFile = onReleaseOldSourceFile;
    compilerHost.onReleaseParsedCommandLine = onReleaseParsedCommandLine;
    compilerHost.toPath = toPath3;
    compilerHost.getCompilationSettings = () => compilerOptions;
    compilerHost.useSourceOfProjectReferenceRedirect = maybeBind(host, host.useSourceOfProjectReferenceRedirect);
    compilerHost.watchDirectoryOfFailedLookupLocation = (dir, cb, flags) => watchDirectory(dir, cb, flags, watchOptions, WatchType.FailedLookupLocations);
    compilerHost.watchAffectingFileLocation = (file, cb) => watchFile2(file, cb, 2e3 /* High */, watchOptions, WatchType.AffectingFileLocation);
    compilerHost.watchTypeRootsDirectory = (dir, cb, flags) => watchDirectory(dir, cb, flags, watchOptions, WatchType.TypeRoots);
    compilerHost.getCachedDirectoryStructureHost = () => cachedDirectoryStructureHost;
    compilerHost.scheduleInvalidateResolutionsOfFailedLookupLocations = scheduleInvalidateResolutionsOfFailedLookupLocations;
    compilerHost.onInvalidatedResolution = scheduleProgramUpdate;
    compilerHost.onChangedAutomaticTypeDirectiveNames = scheduleProgramUpdate;
    compilerHost.fileIsOpen = returnFalse;
    compilerHost.getCurrentProgram = getCurrentProgram;
    compilerHost.writeLog = writeLog;
    compilerHost.getParsedCommandLine = getParsedCommandLine;
    const resolutionCache = createResolutionCache(
      compilerHost,
      configFileName ? getDirectoryPath(getNormalizedAbsolutePath(configFileName, currentDirectory)) : currentDirectory,
      /*logChangesWhenResolvingModule*/
      false
    );
    compilerHost.resolveModuleNameLiterals = maybeBind(host, host.resolveModuleNameLiterals);
    compilerHost.resolveModuleNames = maybeBind(host, host.resolveModuleNames);
    if (!compilerHost.resolveModuleNameLiterals && !compilerHost.resolveModuleNames) {
      compilerHost.resolveModuleNameLiterals = resolutionCache.resolveModuleNameLiterals.bind(resolutionCache);
    }
    compilerHost.resolveTypeReferenceDirectiveReferences = maybeBind(host, host.resolveTypeReferenceDirectiveReferences);
    compilerHost.resolveTypeReferenceDirectives = maybeBind(host, host.resolveTypeReferenceDirectives);
    if (!compilerHost.resolveTypeReferenceDirectiveReferences && !compilerHost.resolveTypeReferenceDirectives) {
      compilerHost.resolveTypeReferenceDirectiveReferences = resolutionCache.resolveTypeReferenceDirectiveReferences.bind(resolutionCache);
    }
    compilerHost.resolveLibrary = !host.resolveLibrary ? resolutionCache.resolveLibrary.bind(resolutionCache) : host.resolveLibrary.bind(host);
    compilerHost.getModuleResolutionCache = host.resolveModuleNameLiterals || host.resolveModuleNames ? maybeBind(host, host.getModuleResolutionCache) : () => resolutionCache.getModuleResolutionCache();
    const userProvidedResolution = !!host.resolveModuleNameLiterals || !!host.resolveTypeReferenceDirectiveReferences || !!host.resolveModuleNames || !!host.resolveTypeReferenceDirectives;
    const customHasInvalidatedResolutions = userProvidedResolution ? maybeBind(host, host.hasInvalidatedResolutions) || returnTrue : returnFalse;
    const customHasInvalidLibResolutions = host.resolveLibrary ? maybeBind(host, host.hasInvalidatedLibResolutions) || returnTrue : returnFalse;
    builderProgram = readBuilderProgram(compilerOptions, compilerHost);
    synchronizeProgram();
    watchConfigFileWildCardDirectories();
    if (configFileName)
      updateExtendedConfigFilesWatches(toPath3(configFileName), compilerOptions, watchOptions, WatchType.ExtendedConfigFile);
    return configFileName ? { getCurrentProgram: getCurrentBuilderProgram, getProgram: updateProgram, close } : { getCurrentProgram: getCurrentBuilderProgram, getProgram: updateProgram, updateRootFileNames, close };
    function close() {
      clearInvalidateResolutionsOfFailedLookupLocations();
      resolutionCache.clear();
      clearMap(sourceFilesCache, (value) => {
        if (value && value.fileWatcher) {
          value.fileWatcher.close();
          value.fileWatcher = void 0;
        }
      });
      if (configFileWatcher) {
        configFileWatcher.close();
        configFileWatcher = void 0;
      }
      extendedConfigCache == null ? void 0 : extendedConfigCache.clear();
      extendedConfigCache = void 0;
      if (sharedExtendedConfigFileWatchers) {
        clearMap(sharedExtendedConfigFileWatchers, closeFileWatcherOf);
        sharedExtendedConfigFileWatchers = void 0;
      }
      if (watchedWildcardDirectories) {
        clearMap(watchedWildcardDirectories, closeFileWatcherOf);
        watchedWildcardDirectories = void 0;
      }
      if (missingFilesMap) {
        clearMap(missingFilesMap, closeFileWatcher);
        missingFilesMap = void 0;
      }
      if (parsedConfigs) {
        clearMap(parsedConfigs, (config) => {
          var _a;
          (_a = config.watcher) == null ? void 0 : _a.close();
          config.watcher = void 0;
          if (config.watchedDirectories)
            clearMap(config.watchedDirectories, closeFileWatcherOf);
          config.watchedDirectories = void 0;
        });
        parsedConfigs = void 0;
      }
    }
    function getCurrentBuilderProgram() {
      return builderProgram;
    }
    function getCurrentProgram() {
      return builderProgram && builderProgram.getProgramOrUndefined();
    }
    function synchronizeProgram() {
      writeLog(`Synchronizing program`);
      Debug.assert(compilerOptions);
      Debug.assert(rootFileNames);
      clearInvalidateResolutionsOfFailedLookupLocations();
      const program = getCurrentBuilderProgram();
      if (hasChangedCompilerOptions) {
        newLine = updateNewLine();
        if (program && changesAffectModuleResolution(program.getCompilerOptions(), compilerOptions)) {
          debugger;
          resolutionCache.onChangesAffectModuleResolution();
        }
      }
      const { hasInvalidatedResolutions, hasInvalidatedLibResolutions } = resolutionCache.createHasInvalidatedResolutions(customHasInvalidatedResolutions, customHasInvalidLibResolutions);
      const {
        originalReadFile,
        originalFileExists,
        originalDirectoryExists,
        originalCreateDirectory,
        originalWriteFile,
        readFileWithCache
      } = changeCompilerHostLikeToUseCache(compilerHost, toPath3);
      if (isProgramUptoDate(getCurrentProgram(), rootFileNames, compilerOptions, (path) => getSourceVersion(path, readFileWithCache), (fileName) => compilerHost.fileExists(fileName), hasInvalidatedResolutions, hasInvalidatedLibResolutions, hasChangedAutomaticTypeDirectiveNames, getParsedCommandLine, projectReferences)) {
        if (hasChangedConfigFileParsingErrors) {
          if (reportFileChangeDetectedOnCreateProgram) {
            reportWatchDiagnostic(Diagnostics.File_change_detected_Starting_incremental_compilation);
          }
          builderProgram = createProgram2(
            /*rootNames*/
            void 0,
            /*options*/
            void 0,
            compilerHost,
            builderProgram,
            configFileParsingDiagnostics,
            projectReferences
          );
          hasChangedConfigFileParsingErrors = false;
        }
      } else {
        if (reportFileChangeDetectedOnCreateProgram) {
          reportWatchDiagnostic(Diagnostics.File_change_detected_Starting_incremental_compilation);
        }
        createNewProgram(hasInvalidatedResolutions, hasInvalidatedLibResolutions);
      }
      reportFileChangeDetectedOnCreateProgram = false;
      if (host.afterProgramCreate && program !== builderProgram) {
        host.afterProgramCreate(builderProgram);
      }
      compilerHost.readFile = originalReadFile;
      compilerHost.fileExists = originalFileExists;
      compilerHost.directoryExists = originalDirectoryExists;
      compilerHost.createDirectory = originalCreateDirectory;
      compilerHost.writeFile = originalWriteFile;
      return builderProgram;
    }
    function createNewProgram(hasInvalidatedResolutions, hasInvalidatedLibResolutions) {
      writeLog("CreatingProgramWith::");
      writeLog(`  roots: ${JSON.stringify(rootFileNames)}`);
      writeLog(`  options: ${JSON.stringify(compilerOptions)}`);
      if (projectReferences)
        writeLog(`  projectReferences: ${JSON.stringify(projectReferences)}`);
      const needsUpdateInTypeRootWatch = hasChangedCompilerOptions || !getCurrentProgram();
      hasChangedCompilerOptions = false;
      hasChangedConfigFileParsingErrors = false;
      resolutionCache.startCachingPerDirectoryResolution();
      compilerHost.hasInvalidatedResolutions = hasInvalidatedResolutions;
      compilerHost.hasInvalidatedLibResolutions = hasInvalidatedLibResolutions;
      compilerHost.hasChangedAutomaticTypeDirectiveNames = hasChangedAutomaticTypeDirectiveNames;
      const oldProgram = getCurrentProgram();
      builderProgram = createProgram2(rootFileNames, compilerOptions, compilerHost, builderProgram, configFileParsingDiagnostics, projectReferences);
      resolutionCache.finishCachingPerDirectoryResolution(builderProgram.getProgram(), oldProgram);
      updateMissingFilePathsWatch(builderProgram.getProgram(), missingFilesMap || (missingFilesMap = /* @__PURE__ */ new Map()), watchMissingFilePath);
      if (needsUpdateInTypeRootWatch) {
        resolutionCache.updateTypeRootsWatch();
      }
      if (missingFilePathsRequestedForRelease) {
        for (const missingFilePath of missingFilePathsRequestedForRelease) {
          if (!missingFilesMap.has(missingFilePath)) {
            sourceFilesCache.delete(missingFilePath);
          }
        }
        missingFilePathsRequestedForRelease = void 0;
      }
    }
    function updateRootFileNames(files) {
      Debug.assert(!configFileName, "Cannot update root file names with config file watch mode");
      rootFileNames = files;
      scheduleProgramUpdate();
    }
    function updateNewLine() {
      return getNewLineCharacter(compilerOptions || optionsToExtendForConfigFile);
    }
    function toPath3(fileName) {
      return toPath(fileName, currentDirectory, getCanonicalFileName);
    }
    function isFileMissingOnHost(hostSourceFile) {
      return typeof hostSourceFile === "boolean";
    }
    function isFilePresenceUnknownOnHost(hostSourceFile) {
      return typeof hostSourceFile.version === "boolean";
    }
    function fileExists(fileName) {
      const path = toPath3(fileName);
      if (isFileMissingOnHost(sourceFilesCache.get(path))) {
        return false;
      }
      return directoryStructureHost.fileExists(fileName);
    }
    function getVersionedSourceFileByPath(fileName, path, languageVersionOrOptions, onError, shouldCreateNewSourceFile) {
      const hostSourceFile = sourceFilesCache.get(path);
      if (isFileMissingOnHost(hostSourceFile)) {
        return void 0;
      }
      if (hostSourceFile === void 0 || shouldCreateNewSourceFile || isFilePresenceUnknownOnHost(hostSourceFile)) {
        const sourceFile = getNewSourceFile(fileName, languageVersionOrOptions, onError);
        if (hostSourceFile) {
          if (sourceFile) {
            hostSourceFile.sourceFile = sourceFile;
            hostSourceFile.version = sourceFile.version;
            if (!hostSourceFile.fileWatcher) {
              hostSourceFile.fileWatcher = watchFilePath(path, fileName, onSourceFileChange, 250 /* Low */, watchOptions, WatchType.SourceFile);
            }
          } else {
            if (hostSourceFile.fileWatcher) {
              hostSourceFile.fileWatcher.close();
            }
            sourceFilesCache.set(path, false);
          }
        } else {
          if (sourceFile) {
            const fileWatcher = watchFilePath(path, fileName, onSourceFileChange, 250 /* Low */, watchOptions, WatchType.SourceFile);
            sourceFilesCache.set(path, { sourceFile, version: sourceFile.version, fileWatcher });
          } else {
            sourceFilesCache.set(path, false);
          }
        }
        return sourceFile;
      }
      return hostSourceFile.sourceFile;
    }
    function nextSourceFileVersion(path) {
      const hostSourceFile = sourceFilesCache.get(path);
      if (hostSourceFile !== void 0) {
        if (isFileMissingOnHost(hostSourceFile)) {
          sourceFilesCache.set(path, { version: false });
        } else {
          hostSourceFile.version = false;
        }
      }
    }
    function getSourceVersion(path, readFileWithCache) {
      const hostSourceFile = sourceFilesCache.get(path);
      if (!hostSourceFile)
        return void 0;
      if (hostSourceFile.version)
        return hostSourceFile.version;
      const text = readFileWithCache(path);
      return text !== void 0 ? getSourceFileVersionAsHashFromText(compilerHost, text) : void 0;
    }
    function onReleaseOldSourceFile(oldSourceFile, _oldOptions, hasSourceFileByPath) {
      const hostSourceFileInfo = sourceFilesCache.get(oldSourceFile.resolvedPath);
      if (hostSourceFileInfo !== void 0) {
        if (isFileMissingOnHost(hostSourceFileInfo)) {
          (missingFilePathsRequestedForRelease || (missingFilePathsRequestedForRelease = [])).push(oldSourceFile.path);
        } else if (hostSourceFileInfo.sourceFile === oldSourceFile) {
          if (hostSourceFileInfo.fileWatcher) {
            hostSourceFileInfo.fileWatcher.close();
          }
          sourceFilesCache.delete(oldSourceFile.resolvedPath);
          if (!hasSourceFileByPath) {
            resolutionCache.removeResolutionsOfFile(oldSourceFile.path);
          }
        }
      }
    }
    function reportWatchDiagnostic(message) {
      if (host.onWatchStatusChange) {
        host.onWatchStatusChange(createCompilerDiagnostic(message), newLine, compilerOptions || optionsToExtendForConfigFile);
      }
    }
    function hasChangedAutomaticTypeDirectiveNames() {
      return resolutionCache.hasChangedAutomaticTypeDirectiveNames();
    }
    function clearInvalidateResolutionsOfFailedLookupLocations() {
      if (!timerToInvalidateFailedLookupResolutions)
        return false;
      host.clearTimeout(timerToInvalidateFailedLookupResolutions);
      timerToInvalidateFailedLookupResolutions = void 0;
      return true;
    }
    function scheduleInvalidateResolutionsOfFailedLookupLocations() {
      if (!host.setTimeout || !host.clearTimeout) {
        return resolutionCache.invalidateResolutionsOfFailedLookupLocations();
      }
      const pending = clearInvalidateResolutionsOfFailedLookupLocations();
      writeLog(`Scheduling invalidateFailedLookup${pending ? ", Cancelled earlier one" : ""}`);
      timerToInvalidateFailedLookupResolutions = host.setTimeout(invalidateResolutionsOfFailedLookup, 250, "timerToInvalidateFailedLookupResolutions");
    }
    function invalidateResolutionsOfFailedLookup() {
      timerToInvalidateFailedLookupResolutions = void 0;
      if (resolutionCache.invalidateResolutionsOfFailedLookupLocations()) {
        scheduleProgramUpdate();
      }
    }
    function scheduleProgramUpdate() {
      if (!host.setTimeout || !host.clearTimeout) {
        return;
      }
      if (timerToUpdateProgram) {
        host.clearTimeout(timerToUpdateProgram);
      }
      writeLog("Scheduling update");
      timerToUpdateProgram = host.setTimeout(updateProgramWithWatchStatus, 250, "timerToUpdateProgram");
    }
    function scheduleProgramReload() {
      Debug.assert(!!configFileName);
      reloadLevel = 2 /* Full */;
      scheduleProgramUpdate();
    }
    function updateProgramWithWatchStatus() {
      timerToUpdateProgram = void 0;
      reportFileChangeDetectedOnCreateProgram = true;
      updateProgram();
    }
    function updateProgram() {
      var _a, _b, _c, _d;
      switch (reloadLevel) {
        case 1 /* Partial */:
          (_a = perfLogger) == null ? void 0 : _a.logStartUpdateProgram("PartialConfigReload");
          reloadFileNamesFromConfigFile();
          break;
        case 2 /* Full */:
          (_b = perfLogger) == null ? void 0 : _b.logStartUpdateProgram("FullConfigReload");
          reloadConfigFile();
          break;
        default:
          (_c = perfLogger) == null ? void 0 : _c.logStartUpdateProgram("SynchronizeProgram");
          synchronizeProgram();
          break;
      }
      (_d = perfLogger) == null ? void 0 : _d.logStopUpdateProgram("Done");
      return getCurrentBuilderProgram();
    }
    function reloadFileNamesFromConfigFile() {
      writeLog("Reloading new file names and options");
      Debug.assert(compilerOptions);
      Debug.assert(configFileName);
      reloadLevel = 0 /* None */;
      rootFileNames = getFileNamesFromConfigSpecs(compilerOptions.configFile.configFileSpecs, getNormalizedAbsolutePath(getDirectoryPath(configFileName), currentDirectory), compilerOptions, parseConfigFileHost, extraFileExtensions);
      if (updateErrorForNoInputFiles(rootFileNames, getNormalizedAbsolutePath(configFileName, currentDirectory), compilerOptions.configFile.configFileSpecs, configFileParsingDiagnostics, canConfigFileJsonReportNoInputFiles)) {
        hasChangedConfigFileParsingErrors = true;
      }
      synchronizeProgram();
    }
    function reloadConfigFile() {
      Debug.assert(configFileName);
      writeLog(`Reloading config file: ${configFileName}`);
      reloadLevel = 0 /* None */;
      if (cachedDirectoryStructureHost) {
        cachedDirectoryStructureHost.clearCache();
      }
      parseConfigFile2();
      hasChangedCompilerOptions = true;
      synchronizeProgram();
      watchConfigFileWildCardDirectories();
      updateExtendedConfigFilesWatches(toPath3(configFileName), compilerOptions, watchOptions, WatchType.ExtendedConfigFile);
    }
    function parseConfigFile2() {
      Debug.assert(configFileName);
      setConfigFileParsingResult(getParsedCommandLineOfConfigFile(
        configFileName,
        optionsToExtendForConfigFile,
        parseConfigFileHost,
        extendedConfigCache || (extendedConfigCache = /* @__PURE__ */ new Map()),
        watchOptionsToExtend,
        extraFileExtensions
      ));
    }
    function setConfigFileParsingResult(configFileParseResult) {
      rootFileNames = configFileParseResult.fileNames;
      compilerOptions = configFileParseResult.options;
      watchOptions = configFileParseResult.watchOptions;
      projectReferences = configFileParseResult.projectReferences;
      wildcardDirectories = configFileParseResult.wildcardDirectories;
      configFileParsingDiagnostics = getConfigFileParsingDiagnostics(configFileParseResult).slice();
      canConfigFileJsonReportNoInputFiles = canJsonReportNoInputFiles(configFileParseResult.raw);
      hasChangedConfigFileParsingErrors = true;
    }
    function getParsedCommandLine(configFileName2) {
      const configPath = toPath3(configFileName2);
      let config = parsedConfigs == null ? void 0 : parsedConfigs.get(configPath);
      if (config) {
        if (!config.reloadLevel)
          return config.parsedCommandLine;
        if (config.parsedCommandLine && config.reloadLevel === 1 /* Partial */ && !host.getParsedCommandLine) {
          writeLog("Reloading new file names and options");
          Debug.assert(compilerOptions);
          const fileNames = getFileNamesFromConfigSpecs(
            config.parsedCommandLine.options.configFile.configFileSpecs,
            getNormalizedAbsolutePath(getDirectoryPath(configFileName2), currentDirectory),
            compilerOptions,
            parseConfigFileHost
          );
          config.parsedCommandLine = { ...config.parsedCommandLine, fileNames };
          config.reloadLevel = void 0;
          return config.parsedCommandLine;
        }
      }
      writeLog(`Loading config file: ${configFileName2}`);
      const parsedCommandLine = host.getParsedCommandLine ? host.getParsedCommandLine(configFileName2) : getParsedCommandLineFromConfigFileHost(configFileName2);
      if (config) {
        config.parsedCommandLine = parsedCommandLine;
        config.reloadLevel = void 0;
      } else {
        (parsedConfigs || (parsedConfigs = /* @__PURE__ */ new Map())).set(configPath, config = { parsedCommandLine });
      }
      watchReferencedProject(configFileName2, configPath, config);
      return parsedCommandLine;
    }
    function getParsedCommandLineFromConfigFileHost(configFileName2) {
      const onUnRecoverableConfigFileDiagnostic = parseConfigFileHost.onUnRecoverableConfigFileDiagnostic;
      parseConfigFileHost.onUnRecoverableConfigFileDiagnostic = noop;
      const parsedCommandLine = getParsedCommandLineOfConfigFile(
        configFileName2,
        /*optionsToExtend*/
        void 0,
        parseConfigFileHost,
        extendedConfigCache || (extendedConfigCache = /* @__PURE__ */ new Map()),
        watchOptionsToExtend
      );
      parseConfigFileHost.onUnRecoverableConfigFileDiagnostic = onUnRecoverableConfigFileDiagnostic;
      return parsedCommandLine;
    }
    function onReleaseParsedCommandLine(fileName) {
      var _a;
      const path = toPath3(fileName);
      const config = parsedConfigs == null ? void 0 : parsedConfigs.get(path);
      if (!config)
        return;
      parsedConfigs.delete(path);
      if (config.watchedDirectories)
        clearMap(config.watchedDirectories, closeFileWatcherOf);
      (_a = config.watcher) == null ? void 0 : _a.close();
      clearSharedExtendedConfigFileWatcher(path, sharedExtendedConfigFileWatchers);
    }
    function watchFilePath(path, file, callback, pollingInterval, options, watchType) {
      return watchFile2(file, (fileName, eventKind) => callback(fileName, eventKind, path), pollingInterval, options, watchType);
    }
    function onSourceFileChange(fileName, eventKind, path) {
      updateCachedSystemWithFile(fileName, path, eventKind);
      if (eventKind === 2 /* Deleted */ && sourceFilesCache.has(path)) {
        resolutionCache.invalidateResolutionOfFile(path);
      }
      nextSourceFileVersion(path);
      scheduleProgramUpdate();
    }
    function updateCachedSystemWithFile(fileName, path, eventKind) {
      if (cachedDirectoryStructureHost) {
        cachedDirectoryStructureHost.addOrDeleteFile(fileName, path, eventKind);
      }
    }
    function watchMissingFilePath(missingFilePath) {
      return (parsedConfigs == null ? void 0 : parsedConfigs.has(missingFilePath)) ? noopFileWatcher : watchFilePath(missingFilePath, missingFilePath, onMissingFileChange, 500 /* Medium */, watchOptions, WatchType.MissingFile);
    }
    function onMissingFileChange(fileName, eventKind, missingFilePath) {
      updateCachedSystemWithFile(fileName, missingFilePath, eventKind);
      if (eventKind === 0 /* Created */ && missingFilesMap.has(missingFilePath)) {
        missingFilesMap.get(missingFilePath).close();
        missingFilesMap.delete(missingFilePath);
        nextSourceFileVersion(missingFilePath);
        scheduleProgramUpdate();
      }
    }
    function watchConfigFileWildCardDirectories() {
      if (wildcardDirectories) {
        updateWatchingWildcardDirectories(
          watchedWildcardDirectories || (watchedWildcardDirectories = /* @__PURE__ */ new Map()),
          new Map(Object.entries(wildcardDirectories)),
          watchWildcardDirectory
        );
      } else if (watchedWildcardDirectories) {
        clearMap(watchedWildcardDirectories, closeFileWatcherOf);
      }
    }
    function watchWildcardDirectory(directory, flags) {
      return watchDirectory(
        directory,
        (fileOrDirectory) => {
          Debug.assert(configFileName);
          Debug.assert(compilerOptions);
          const fileOrDirectoryPath = toPath3(fileOrDirectory);
          if (cachedDirectoryStructureHost) {
            cachedDirectoryStructureHost.addOrDeleteFileOrDirectory(fileOrDirectory, fileOrDirectoryPath);
          }
          nextSourceFileVersion(fileOrDirectoryPath);
          if (isIgnoredFileFromWildCardWatching({
            watchedDirPath: toPath3(directory),
            fileOrDirectory,
            fileOrDirectoryPath,
            configFileName,
            extraFileExtensions,
            options: compilerOptions,
            program: getCurrentBuilderProgram() || rootFileNames,
            currentDirectory,
            useCaseSensitiveFileNames,
            writeLog,
            toPath: toPath3
          }))
            return;
          if (reloadLevel !== 2 /* Full */) {
            reloadLevel = 1 /* Partial */;
            scheduleProgramUpdate();
          }
        },
        flags,
        watchOptions,
        WatchType.WildcardDirectory
      );
    }
    function updateExtendedConfigFilesWatches(forProjectPath, options, watchOptions2, watchType) {
      updateSharedExtendedConfigFileWatcher(
        forProjectPath,
        options,
        sharedExtendedConfigFileWatchers || (sharedExtendedConfigFileWatchers = /* @__PURE__ */ new Map()),
        (extendedConfigFileName, extendedConfigFilePath) => watchFile2(
          extendedConfigFileName,
          (_fileName, eventKind) => {
            var _a;
            updateCachedSystemWithFile(extendedConfigFileName, extendedConfigFilePath, eventKind);
            if (extendedConfigCache)
              cleanExtendedConfigCache(extendedConfigCache, extendedConfigFilePath, toPath3);
            const projects = (_a = sharedExtendedConfigFileWatchers.get(extendedConfigFilePath)) == null ? void 0 : _a.projects;
            if (!(projects == null ? void 0 : projects.size))
              return;
            projects.forEach((projectPath) => {
              if (configFileName && toPath3(configFileName) === projectPath) {
                reloadLevel = 2 /* Full */;
              } else {
                const config = parsedConfigs == null ? void 0 : parsedConfigs.get(projectPath);
                if (config)
                  config.reloadLevel = 2 /* Full */;
                resolutionCache.removeResolutionsFromProjectReferenceRedirects(projectPath);
              }
              scheduleProgramUpdate();
            });
          },
          2e3 /* High */,
          watchOptions2,
          watchType
        ),
        toPath3
      );
    }
    function watchReferencedProject(configFileName2, configPath, commandLine) {
      var _a, _b, _c, _d, _e;
      commandLine.watcher || (commandLine.watcher = watchFile2(
        configFileName2,
        (_fileName, eventKind) => {
          updateCachedSystemWithFile(configFileName2, configPath, eventKind);
          const config = parsedConfigs == null ? void 0 : parsedConfigs.get(configPath);
          if (config)
            config.reloadLevel = 2 /* Full */;
          resolutionCache.removeResolutionsFromProjectReferenceRedirects(configPath);
          scheduleProgramUpdate();
        },
        2e3 /* High */,
        ((_a = commandLine.parsedCommandLine) == null ? void 0 : _a.watchOptions) || watchOptions,
        WatchType.ConfigFileOfReferencedProject
      ));
      if ((_b = commandLine.parsedCommandLine) == null ? void 0 : _b.wildcardDirectories) {
        updateWatchingWildcardDirectories(
          commandLine.watchedDirectories || (commandLine.watchedDirectories = /* @__PURE__ */ new Map()),
          new Map(Object.entries((_c = commandLine.parsedCommandLine) == null ? void 0 : _c.wildcardDirectories)),
          (directory, flags) => {
            var _a2;
            return watchDirectory(
              directory,
              (fileOrDirectory) => {
                const fileOrDirectoryPath = toPath3(fileOrDirectory);
                if (cachedDirectoryStructureHost) {
                  cachedDirectoryStructureHost.addOrDeleteFileOrDirectory(fileOrDirectory, fileOrDirectoryPath);
                }
                nextSourceFileVersion(fileOrDirectoryPath);
                const config = parsedConfigs == null ? void 0 : parsedConfigs.get(configPath);
                if (!(config == null ? void 0 : config.parsedCommandLine))
                  return;
                if (isIgnoredFileFromWildCardWatching({
                  watchedDirPath: toPath3(directory),
                  fileOrDirectory,
                  fileOrDirectoryPath,
                  configFileName: configFileName2,
                  options: config.parsedCommandLine.options,
                  program: config.parsedCommandLine.fileNames,
                  currentDirectory,
                  useCaseSensitiveFileNames,
                  writeLog,
                  toPath: toPath3
                }))
                  return;
                if (config.reloadLevel !== 2 /* Full */) {
                  config.reloadLevel = 1 /* Partial */;
                  scheduleProgramUpdate();
                }
              },
              flags,
              ((_a2 = commandLine.parsedCommandLine) == null ? void 0 : _a2.watchOptions) || watchOptions,
              WatchType.WildcardDirectoryOfReferencedProject
            );
          }
        );
      } else if (commandLine.watchedDirectories) {
        clearMap(commandLine.watchedDirectories, closeFileWatcherOf);
        commandLine.watchedDirectories = void 0;
      }
      updateExtendedConfigFilesWatches(
        configPath,
        (_d = commandLine.parsedCommandLine) == null ? void 0 : _d.options,
        ((_e = commandLine.parsedCommandLine) == null ? void 0 : _e.watchOptions) || watchOptions,
        WatchType.ExtendedConfigOfReferencedProject
      );
    }
  }
  var init_watchPublic = __esm({
    "src/compiler/watchPublic.ts"() {
      "use strict";
      init_ts2();
    }
  });

  // src/compiler/tsbuild.ts
  function resolveConfigFileProjectName(project) {
    if (fileExtensionIs(project, ".json" /* Json */)) {
      return project;
    }
    return combinePaths(project, "tsconfig.json");
  }
  var UpToDateStatusType;
  var init_tsbuild = __esm({
    "src/compiler/tsbuild.ts"() {
      "use strict";
      init_ts2();
      UpToDateStatusType = /* @__PURE__ */ ((UpToDateStatusType2) => {
        UpToDateStatusType2[UpToDateStatusType2["Unbuildable"] = 0] = "Unbuildable";
        UpToDateStatusType2[UpToDateStatusType2["UpToDate"] = 1] = "UpToDate";
        UpToDateStatusType2[UpToDateStatusType2["UpToDateWithUpstreamTypes"] = 2] = "UpToDateWithUpstreamTypes";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateWithPrepend"] = 3] = "OutOfDateWithPrepend";
        UpToDateStatusType2[UpToDateStatusType2["OutputMissing"] = 4] = "OutputMissing";
        UpToDateStatusType2[UpToDateStatusType2["ErrorReadingFile"] = 5] = "ErrorReadingFile";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateWithSelf"] = 6] = "OutOfDateWithSelf";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateWithUpstream"] = 7] = "OutOfDateWithUpstream";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateBuildInfo"] = 8] = "OutOfDateBuildInfo";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateOptions"] = 9] = "OutOfDateOptions";
        UpToDateStatusType2[UpToDateStatusType2["OutOfDateRoots"] = 10] = "OutOfDateRoots";
        UpToDateStatusType2[UpToDateStatusType2["UpstreamOutOfDate"] = 11] = "UpstreamOutOfDate";
        UpToDateStatusType2[UpToDateStatusType2["UpstreamBlocked"] = 12] = "UpstreamBlocked";
        UpToDateStatusType2[UpToDateStatusType2["ComputingUpstream"] = 13] = "ComputingUpstream";
        UpToDateStatusType2[UpToDateStatusType2["TsVersionOutputOfDate"] = 14] = "TsVersionOutputOfDate";
        UpToDateStatusType2[UpToDateStatusType2["UpToDateWithInputFileText"] = 15] = "UpToDateWithInputFileText";
        UpToDateStatusType2[UpToDateStatusType2["ContainerOnly"] = 16] = "ContainerOnly";
        UpToDateStatusType2[UpToDateStatusType2["ForceBuild"] = 17] = "ForceBuild";
        return UpToDateStatusType2;
      })(UpToDateStatusType || {});
    }
  });

  // src/compiler/tsbuildPublic.ts
  function getOrCreateValueFromConfigFileMap(configFileMap, resolved, createT) {
    const existingValue = configFileMap.get(resolved);
    let newValue;
    if (!existingValue) {
      newValue = createT();
      configFileMap.set(resolved, newValue);
    }
    return existingValue || newValue;
  }
  function getOrCreateValueMapFromConfigFileMap(configFileMap, resolved) {
    return getOrCreateValueFromConfigFileMap(configFileMap, resolved, () => /* @__PURE__ */ new Map());
  }
  function getCurrentTime(host) {
    return host.now ? host.now() : /* @__PURE__ */ new Date();
  }
  function isCircularBuildOrder(buildOrder) {
    return !!buildOrder && !!buildOrder.buildOrder;
  }
  function getBuildOrderFromAnyBuildOrder(anyBuildOrder) {
    return isCircularBuildOrder(anyBuildOrder) ? anyBuildOrder.buildOrder : anyBuildOrder;
  }
  function createBuilderStatusReporter(system, pretty) {
    return (diagnostic) => {
      let output = pretty ? `[${formatColorAndReset(getLocaleTimeString(system), "\x1B[90m" /* Grey */)}] ` : `${getLocaleTimeString(system)} - `;
      output += `${flattenDiagnosticMessageText(diagnostic.messageText, system.newLine)}${system.newLine + system.newLine}`;
      system.write(output);
    };
  }
  function createSolutionBuilderHostBase(system, createProgram2, reportDiagnostic, reportSolutionBuilderStatus) {
    const host = createProgramHost(system, createProgram2);
    host.getModifiedTime = system.getModifiedTime ? (path) => system.getModifiedTime(path) : returnUndefined;
    host.setModifiedTime = system.setModifiedTime ? (path, date) => system.setModifiedTime(path, date) : noop;
    host.deleteFile = system.deleteFile ? (path) => system.deleteFile(path) : noop;
    host.reportDiagnostic = reportDiagnostic || createDiagnosticReporter(system);
    host.reportSolutionBuilderStatus = reportSolutionBuilderStatus || createBuilderStatusReporter(system);
    host.now = maybeBind(system, system.now);
    return host;
  }
  function createSolutionBuilderHost(system = sys, createProgram2, reportDiagnostic, reportSolutionBuilderStatus, reportErrorSummary2) {
    const host = createSolutionBuilderHostBase(system, createProgram2, reportDiagnostic, reportSolutionBuilderStatus);
    host.reportErrorSummary = reportErrorSummary2;
    return host;
  }
  function createSolutionBuilderWithWatchHost(system = sys, createProgram2, reportDiagnostic, reportSolutionBuilderStatus, reportWatchStatus2) {
    const host = createSolutionBuilderHostBase(system, createProgram2, reportDiagnostic, reportSolutionBuilderStatus);
    const watchHost = createWatchHost(system, reportWatchStatus2);
    copyProperties(host, watchHost);
    return host;
  }
  function getCompilerOptionsOfBuildOptions(buildOptions) {
    const result = {};
    commonOptionsWithBuild.forEach((option) => {
      if (hasProperty(buildOptions, option.name))
        result[option.name] = buildOptions[option.name];
    });
    return result;
  }
  function createSolutionBuilder(host, rootNames, defaultOptions) {
    return createSolutionBuilderWorker(
      /*watch*/
      false,
      host,
      rootNames,
      defaultOptions
    );
  }
  function createSolutionBuilderWithWatch(host, rootNames, defaultOptions, baseWatchOptions) {
    return createSolutionBuilderWorker(
      /*watch*/
      true,
      host,
      rootNames,
      defaultOptions,
      baseWatchOptions
    );
  }
  function createSolutionBuilderState(watch, hostOrHostWithWatch, rootNames, options, baseWatchOptions) {
    const host = hostOrHostWithWatch;
    const hostWithWatch = hostOrHostWithWatch;
    const baseCompilerOptions = getCompilerOptionsOfBuildOptions(options);
    const compilerHost = createCompilerHostFromProgramHost(host, () => state.projectCompilerOptions);
    setGetSourceFileAsHashVersioned(compilerHost);
    compilerHost.getParsedCommandLine = (fileName) => parseConfigFile(state, fileName, toResolvedConfigFilePath(state, fileName));
    compilerHost.resolveModuleNameLiterals = maybeBind(host, host.resolveModuleNameLiterals);
    compilerHost.resolveTypeReferenceDirectiveReferences = maybeBind(host, host.resolveTypeReferenceDirectiveReferences);
    compilerHost.resolveLibrary = maybeBind(host, host.resolveLibrary);
    compilerHost.resolveModuleNames = maybeBind(host, host.resolveModuleNames);
    compilerHost.resolveTypeReferenceDirectives = maybeBind(host, host.resolveTypeReferenceDirectives);
    compilerHost.getModuleResolutionCache = maybeBind(host, host.getModuleResolutionCache);
    let moduleResolutionCache, typeReferenceDirectiveResolutionCache;
    if (!compilerHost.resolveModuleNameLiterals && !compilerHost.resolveModuleNames) {
      moduleResolutionCache = createModuleResolutionCache(compilerHost.getCurrentDirectory(), compilerHost.getCanonicalFileName);
      compilerHost.resolveModuleNameLiterals = (moduleNames, containingFile, redirectedReference, options2, containingSourceFile) => loadWithModeAwareCache(
        moduleNames,
        containingFile,
        redirectedReference,
        options2,
        containingSourceFile,
        host,
        moduleResolutionCache,
        createModuleResolutionLoader
      );
      compilerHost.getModuleResolutionCache = () => moduleResolutionCache;
    }
    if (!compilerHost.resolveTypeReferenceDirectiveReferences && !compilerHost.resolveTypeReferenceDirectives) {
      typeReferenceDirectiveResolutionCache = createTypeReferenceDirectiveResolutionCache(
        compilerHost.getCurrentDirectory(),
        compilerHost.getCanonicalFileName,
        /*options*/
        void 0,
        moduleResolutionCache == null ? void 0 : moduleResolutionCache.getPackageJsonInfoCache()
      );
      compilerHost.resolveTypeReferenceDirectiveReferences = (typeDirectiveNames, containingFile, redirectedReference, options2, containingSourceFile) => loadWithModeAwareCache(
        typeDirectiveNames,
        containingFile,
        redirectedReference,
        options2,
        containingSourceFile,
        host,
        typeReferenceDirectiveResolutionCache,
        createTypeReferenceResolutionLoader
      );
    }
    let libraryResolutionCache;
    if (!compilerHost.resolveLibrary) {
      libraryResolutionCache = createModuleResolutionCache(
        compilerHost.getCurrentDirectory(),
        compilerHost.getCanonicalFileName,
        /*options*/
        void 0,
        moduleResolutionCache == null ? void 0 : moduleResolutionCache.getPackageJsonInfoCache()
      );
      compilerHost.resolveLibrary = (libraryName, resolveFrom, options2) => resolveLibrary(
        libraryName,
        resolveFrom,
        options2,
        host,
        libraryResolutionCache
      );
    }
    compilerHost.getBuildInfo = (fileName, configFilePath) => getBuildInfo3(
      state,
      fileName,
      toResolvedConfigFilePath(state, configFilePath),
      /*modifiedTime*/
      void 0
    );
    const { watchFile: watchFile2, watchDirectory, writeLog } = createWatchFactory(hostWithWatch, options);
    const state = {
      host,
      hostWithWatch,
      parseConfigFileHost: parseConfigHostFromCompilerHostLike(host),
      write: maybeBind(host, host.trace),
      // State of solution
      options,
      baseCompilerOptions,
      rootNames,
      baseWatchOptions,
      resolvedConfigFilePaths: /* @__PURE__ */ new Map(),
      configFileCache: /* @__PURE__ */ new Map(),
      projectStatus: /* @__PURE__ */ new Map(),
      extendedConfigCache: /* @__PURE__ */ new Map(),
      buildInfoCache: /* @__PURE__ */ new Map(),
      outputTimeStamps: /* @__PURE__ */ new Map(),
      builderPrograms: /* @__PURE__ */ new Map(),
      diagnostics: /* @__PURE__ */ new Map(),
      projectPendingBuild: /* @__PURE__ */ new Map(),
      projectErrorsReported: /* @__PURE__ */ new Map(),
      compilerHost,
      moduleResolutionCache,
      typeReferenceDirectiveResolutionCache,
      libraryResolutionCache,
      // Mutable state
      buildOrder: void 0,
      readFileWithCache: (f) => host.readFile(f),
      projectCompilerOptions: baseCompilerOptions,
      cache: void 0,
      allProjectBuildPending: true,
      needsSummary: true,
      watchAllProjectsPending: watch,
      // Watch state
      watch,
      allWatchedWildcardDirectories: /* @__PURE__ */ new Map(),
      allWatchedInputFiles: /* @__PURE__ */ new Map(),
      allWatchedConfigFiles: /* @__PURE__ */ new Map(),
      allWatchedExtendedConfigFiles: /* @__PURE__ */ new Map(),
      allWatchedPackageJsonFiles: /* @__PURE__ */ new Map(),
      filesWatched: /* @__PURE__ */ new Map(),
      lastCachedPackageJsonLookups: /* @__PURE__ */ new Map(),
      timerToBuildInvalidatedProject: void 0,
      reportFileChangeDetected: false,
      watchFile: watchFile2,
      watchDirectory,
      writeLog
    };
    return state;
  }
  function toPath2(state, fileName) {
    return toPath(fileName, state.compilerHost.getCurrentDirectory(), state.compilerHost.getCanonicalFileName);
  }
  function toResolvedConfigFilePath(state, fileName) {
    const { resolvedConfigFilePaths } = state;
    const path = resolvedConfigFilePaths.get(fileName);
    if (path !== void 0)
      return path;
    const resolvedPath = toPath2(state, fileName);
    resolvedConfigFilePaths.set(fileName, resolvedPath);
    return resolvedPath;
  }
  function isParsedCommandLine(entry) {
    return !!entry.options;
  }
  function getCachedParsedConfigFile(state, configFilePath) {
    const value = state.configFileCache.get(configFilePath);
    return value && isParsedCommandLine(value) ? value : void 0;
  }
  function parseConfigFile(state, configFileName, configFilePath) {
    const { configFileCache } = state;
    const value = configFileCache.get(configFilePath);
    if (value) {
      return isParsedCommandLine(value) ? value : void 0;
    }
    mark("SolutionBuilder::beforeConfigFileParsing");
    let diagnostic;
    const { parseConfigFileHost, baseCompilerOptions, baseWatchOptions, extendedConfigCache, host } = state;
    let parsed;
    if (host.getParsedCommandLine) {
      parsed = host.getParsedCommandLine(configFileName);
      if (!parsed)
        diagnostic = createCompilerDiagnostic(Diagnostics.File_0_not_found, configFileName);
    } else {
      parseConfigFileHost.onUnRecoverableConfigFileDiagnostic = (d) => diagnostic = d;
      parsed = getParsedCommandLineOfConfigFile(configFileName, baseCompilerOptions, parseConfigFileHost, extendedConfigCache, baseWatchOptions);
      parseConfigFileHost.onUnRecoverableConfigFileDiagnostic = noop;
    }
    configFileCache.set(configFilePath, parsed || diagnostic);
    mark("SolutionBuilder::afterConfigFileParsing");
    measure("SolutionBuilder::Config file parsing", "SolutionBuilder::beforeConfigFileParsing", "SolutionBuilder::afterConfigFileParsing");
    return parsed;
  }
  function resolveProjectName(state, name) {
    return resolveConfigFileProjectName(resolvePath(state.compilerHost.getCurrentDirectory(), name));
  }
  function createBuildOrder(state, roots) {
    const temporaryMarks = /* @__PURE__ */ new Map();
    const permanentMarks = /* @__PURE__ */ new Map();
    const circularityReportStack = [];
    let buildOrder;
    let circularDiagnostics;
    for (const root of roots) {
      visit(root);
    }
    return circularDiagnostics ? { buildOrder: buildOrder || emptyArray, circularDiagnostics } : buildOrder || emptyArray;
    function visit(configFileName, inCircularContext) {
      const projPath = toResolvedConfigFilePath(state, configFileName);
      if (permanentMarks.has(projPath))
        return;
      if (temporaryMarks.has(projPath)) {
        if (!inCircularContext) {
          (circularDiagnostics || (circularDiagnostics = [])).push(
            createCompilerDiagnostic(
              Diagnostics.Project_references_may_not_form_a_circular_graph_Cycle_detected_Colon_0,
              circularityReportStack.join("\r\n")
            )
          );
        }
        return;
      }
      temporaryMarks.set(projPath, true);
      circularityReportStack.push(configFileName);
      const parsed = parseConfigFile(state, configFileName, projPath);
      if (parsed && parsed.projectReferences) {
        for (const ref of parsed.projectReferences) {
          const resolvedRefPath = resolveProjectName(state, ref.path);
          visit(resolvedRefPath, inCircularContext || ref.circular);
        }
      }
      circularityReportStack.pop();
      permanentMarks.set(projPath, true);
      (buildOrder || (buildOrder = [])).push(configFileName);
    }
  }
  function getBuildOrder(state) {
    return state.buildOrder || createStateBuildOrder(state);
  }
  function createStateBuildOrder(state) {
    const buildOrder = createBuildOrder(state, state.rootNames.map((f) => resolveProjectName(state, f)));
    state.resolvedConfigFilePaths.clear();
    const currentProjects = new Map(
      getBuildOrderFromAnyBuildOrder(buildOrder).map(
        (resolved) => [toResolvedConfigFilePath(state, resolved), true]
      )
    );
    const noopOnDelete = { onDeleteValue: noop };
    mutateMapSkippingNewValues(state.configFileCache, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.projectStatus, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.builderPrograms, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.diagnostics, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.projectPendingBuild, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.projectErrorsReported, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.buildInfoCache, currentProjects, noopOnDelete);
    mutateMapSkippingNewValues(state.outputTimeStamps, currentProjects, noopOnDelete);
    if (state.watch) {
      mutateMapSkippingNewValues(
        state.allWatchedConfigFiles,
        currentProjects,
        { onDeleteValue: closeFileWatcher }
      );
      state.allWatchedExtendedConfigFiles.forEach((watcher) => {
        watcher.projects.forEach((project) => {
          if (!currentProjects.has(project)) {
            watcher.projects.delete(project);
          }
        });
        watcher.close();
      });
      mutateMapSkippingNewValues(
        state.allWatchedWildcardDirectories,
        currentProjects,
        { onDeleteValue: (existingMap) => existingMap.forEach(closeFileWatcherOf) }
      );
      mutateMapSkippingNewValues(
        state.allWatchedInputFiles,
        currentProjects,
        { onDeleteValue: (existingMap) => existingMap.forEach(closeFileWatcher) }
      );
      mutateMapSkippingNewValues(
        state.allWatchedPackageJsonFiles,
        currentProjects,
        { onDeleteValue: (existingMap) => existingMap.forEach(closeFileWatcher) }
      );
    }
    return state.buildOrder = buildOrder;
  }
  function getBuildOrderFor(state, project, onlyReferences) {
    const resolvedProject = project && resolveProjectName(state, project);
    const buildOrderFromState = getBuildOrder(state);
    if (isCircularBuildOrder(buildOrderFromState))
      return buildOrderFromState;
    if (resolvedProject) {
      const projectPath = toResolvedConfigFilePath(state, resolvedProject);
      const projectIndex = findIndex(
        buildOrderFromState,
        (configFileName) => toResolvedConfigFilePath(state, configFileName) === projectPath
      );
      if (projectIndex === -1)
        return void 0;
    }
    const buildOrder = resolvedProject ? createBuildOrder(state, [resolvedProject]) : buildOrderFromState;
    Debug.assert(!isCircularBuildOrder(buildOrder));
    Debug.assert(!onlyReferences || resolvedProject !== void 0);
    Debug.assert(!onlyReferences || buildOrder[buildOrder.length - 1] === resolvedProject);
    return onlyReferences ? buildOrder.slice(0, buildOrder.length - 1) : buildOrder;
  }
  function enableCache(state) {
    if (state.cache) {
      disableCache(state);
    }
    const { compilerHost, host } = state;
    const originalReadFileWithCache = state.readFileWithCache;
    const originalGetSourceFile = compilerHost.getSourceFile;
    const {
      originalReadFile,
      originalFileExists,
      originalDirectoryExists,
      originalCreateDirectory,
      originalWriteFile,
      getSourceFileWithCache,
      readFileWithCache
    } = changeCompilerHostLikeToUseCache(
      host,
      (fileName) => toPath2(state, fileName),
      (...args) => originalGetSourceFile.call(compilerHost, ...args)
    );
    state.readFileWithCache = readFileWithCache;
    compilerHost.getSourceFile = getSourceFileWithCache;
    state.cache = {
      originalReadFile,
      originalFileExists,
      originalDirectoryExists,
      originalCreateDirectory,
      originalWriteFile,
      originalReadFileWithCache,
      originalGetSourceFile
    };
  }
  function disableCache(state) {
    if (!state.cache)
      return;
    const { cache, host, compilerHost, extendedConfigCache, moduleResolutionCache, typeReferenceDirectiveResolutionCache, libraryResolutionCache } = state;
    host.readFile = cache.originalReadFile;
    host.fileExists = cache.originalFileExists;
    host.directoryExists = cache.originalDirectoryExists;
    host.createDirectory = cache.originalCreateDirectory;
    host.writeFile = cache.originalWriteFile;
    compilerHost.getSourceFile = cache.originalGetSourceFile;
    state.readFileWithCache = cache.originalReadFileWithCache;
    extendedConfigCache.clear();
    moduleResolutionCache == null ? void 0 : moduleResolutionCache.clear();
    typeReferenceDirectiveResolutionCache == null ? void 0 : typeReferenceDirectiveResolutionCache.clear();
    libraryResolutionCache == null ? void 0 : libraryResolutionCache.clear();
    state.cache = void 0;
  }
  function clearProjectStatus(state, resolved) {
    state.projectStatus.delete(resolved);
    state.diagnostics.delete(resolved);
  }
  function addProjToQueue({ projectPendingBuild }, proj, reloadLevel) {
    const value = projectPendingBuild.get(proj);
    if (value === void 0) {
      projectPendingBuild.set(proj, reloadLevel);
    } else if (value < reloadLevel) {
      projectPendingBuild.set(proj, reloadLevel);
    }
  }
  function setupInitialBuild(state, cancellationToken) {
    if (!state.allProjectBuildPending)
      return;
    state.allProjectBuildPending = false;
    if (state.options.watch)
      reportWatchStatus(state, Diagnostics.Starting_compilation_in_watch_mode);
    enableCache(state);
    const buildOrder = getBuildOrderFromAnyBuildOrder(getBuildOrder(state));
    buildOrder.forEach(
      (configFileName) => state.projectPendingBuild.set(
        toResolvedConfigFilePath(state, configFileName),
        0 /* None */
      )
    );
    if (cancellationToken) {
      cancellationToken.throwIfCancellationRequested();
    }
  }
  function doneInvalidatedProject(state, projectPath) {
    state.projectPendingBuild.delete(projectPath);
    return state.diagnostics.has(projectPath) ? 1 /* DiagnosticsPresent_OutputsSkipped */ : 0 /* Success */;
  }
  function createUpdateOutputFileStampsProject(state, project, projectPath, config, buildOrder) {
    let updateOutputFileStampsPending = true;
    return {
      kind: 2 /* UpdateOutputFileStamps */,
      project,
      projectPath,
      buildOrder,
      getCompilerOptions: () => config.options,
      getCurrentDirectory: () => state.compilerHost.getCurrentDirectory(),
      updateOutputFileStatmps: () => {
        updateOutputTimestamps(state, config, projectPath);
        updateOutputFileStampsPending = false;
      },
      done: () => {
        if (updateOutputFileStampsPending) {
          updateOutputTimestamps(state, config, projectPath);
        }
        mark("SolutionBuilder::Timestamps only updates");
        return doneInvalidatedProject(state, projectPath);
      }
    };
  }
  function createBuildOrUpdateInvalidedProject(kind, state, project, projectPath, projectIndex, config, buildOrder) {
    let step = kind === 0 /* Build */ ? 0 /* CreateProgram */ : 4 /* EmitBundle */;
    let program;
    let buildResult;
    let invalidatedProjectOfBundle;
    return kind === 0 /* Build */ ? {
      kind,
      project,
      projectPath,
      buildOrder,
      getCompilerOptions: () => config.options,
      getCurrentDirectory: () => state.compilerHost.getCurrentDirectory(),
      getBuilderProgram: () => withProgramOrUndefined(identity),
      getProgram: () => withProgramOrUndefined(
        (program2) => program2.getProgramOrUndefined()
      ),
      getSourceFile: (fileName) => withProgramOrUndefined(
        (program2) => program2.getSourceFile(fileName)
      ),
      getSourceFiles: () => withProgramOrEmptyArray(
        (program2) => program2.getSourceFiles()
      ),
      getOptionsDiagnostics: (cancellationToken) => withProgramOrEmptyArray(
        (program2) => program2.getOptionsDiagnostics(cancellationToken)
      ),
      getGlobalDiagnostics: (cancellationToken) => withProgramOrEmptyArray(
        (program2) => program2.getGlobalDiagnostics(cancellationToken)
      ),
      getConfigFileParsingDiagnostics: () => withProgramOrEmptyArray(
        (program2) => program2.getConfigFileParsingDiagnostics()
      ),
      getSyntacticDiagnostics: (sourceFile, cancellationToken) => withProgramOrEmptyArray(
        (program2) => program2.getSyntacticDiagnostics(sourceFile, cancellationToken)
      ),
      getAllDependencies: (sourceFile) => withProgramOrEmptyArray(
        (program2) => program2.getAllDependencies(sourceFile)
      ),
      getSemanticDiagnostics: (sourceFile, cancellationToken) => withProgramOrEmptyArray(
        (program2) => program2.getSemanticDiagnostics(sourceFile, cancellationToken)
      ),
      getSemanticDiagnosticsOfNextAffectedFile: (cancellationToken, ignoreSourceFile) => withProgramOrUndefined(
        (program2) => program2.getSemanticDiagnosticsOfNextAffectedFile && program2.getSemanticDiagnosticsOfNextAffectedFile(cancellationToken, ignoreSourceFile)
      ),
      emit: (targetSourceFile, writeFile2, cancellationToken, emitOnlyDtsFiles, customTransformers) => {
        if (targetSourceFile || emitOnlyDtsFiles) {
          return withProgramOrUndefined(
            (program2) => {
              var _a, _b;
              return program2.emit(targetSourceFile, writeFile2, cancellationToken, emitOnlyDtsFiles, customTransformers || ((_b = (_a = state.host).getCustomTransformers) == null ? void 0 : _b.call(_a, project)));
            }
          );
        }
        executeSteps(2 /* SemanticDiagnostics */, cancellationToken);
        if (step === 5 /* EmitBuildInfo */) {
          return emitBuildInfo(writeFile2, cancellationToken);
        }
        if (step !== 3 /* Emit */)
          return void 0;
        return emit(writeFile2, cancellationToken, customTransformers);
      },
      done
    } : {
      kind,
      project,
      projectPath,
      buildOrder,
      getCompilerOptions: () => config.options,
      getCurrentDirectory: () => state.compilerHost.getCurrentDirectory(),
      emit: (writeFile2, customTransformers) => {
        if (step !== 4 /* EmitBundle */)
          return invalidatedProjectOfBundle;
        return emitBundle(writeFile2, customTransformers);
      },
      done
    };
    function done(cancellationToken, writeFile2, customTransformers) {
      executeSteps(8 /* Done */, cancellationToken, writeFile2, customTransformers);
      if (kind === 0 /* Build */)
        mark("SolutionBuilder::Projects built");
      else
        mark("SolutionBuilder::Bundles updated");
      return doneInvalidatedProject(state, projectPath);
    }
    function withProgramOrUndefined(action) {
      executeSteps(0 /* CreateProgram */);
      return program && action(program);
    }
    function withProgramOrEmptyArray(action) {
      return withProgramOrUndefined(action) || emptyArray;
    }
    function createProgram2() {
      var _a, _b;
      Debug.assert(program === void 0);
      if (state.options.dry) {
        reportStatus(state, Diagnostics.A_non_dry_build_would_build_project_0, project);
        buildResult = 1 /* Success */;
        step = 7 /* QueueReferencingProjects */;
        return;
      }
      if (state.options.verbose)
        reportStatus(state, Diagnostics.Building_project_0, project);
      if (config.fileNames.length === 0) {
        reportAndStoreErrors(state, projectPath, getConfigFileParsingDiagnostics(config));
        buildResult = 0 /* None */;
        step = 7 /* QueueReferencingProjects */;
        return;
      }
      const { host, compilerHost } = state;
      state.projectCompilerOptions = config.options;
      (_a = state.moduleResolutionCache) == null ? void 0 : _a.update(config.options);
      (_b = state.typeReferenceDirectiveResolutionCache) == null ? void 0 : _b.update(config.options);
      program = host.createProgram(
        config.fileNames,
        config.options,
        compilerHost,
        getOldProgram(state, projectPath, config),
        getConfigFileParsingDiagnostics(config),
        config.projectReferences
      );
      if (state.watch) {
        state.lastCachedPackageJsonLookups.set(projectPath, state.moduleResolutionCache && map(
          state.moduleResolutionCache.getPackageJsonInfoCache().entries(),
          ([path, data]) => [state.host.realpath && data ? toPath2(state, state.host.realpath(path)) : path, data]
        ));
        state.builderPrograms.set(projectPath, program);
      }
      step++;
    }
    function handleDiagnostics(diagnostics, errorFlags, errorType) {
      if (diagnostics.length) {
        ({ buildResult, step } = buildErrors(
          state,
          projectPath,
          program,
          config,
          diagnostics,
          errorFlags,
          errorType
        ));
      } else {
        step++;
      }
    }
    function getSyntaxDiagnostics(cancellationToken) {
      Debug.assertIsDefined(program);
      handleDiagnostics(
        [
          ...program.getConfigFileParsingDiagnostics(),
          ...program.getOptionsDiagnostics(cancellationToken),
          ...program.getGlobalDiagnostics(cancellationToken),
          ...program.getSyntacticDiagnostics(
            /*sourceFile*/
            void 0,
            cancellationToken
          )
        ],
        8 /* SyntaxErrors */,
        "Syntactic"
      );
    }
    function getSemanticDiagnostics(cancellationToken) {
      handleDiagnostics(
        Debug.checkDefined(program).getSemanticDiagnostics(
          /*sourceFile*/
          void 0,
          cancellationToken
        ),
        16 /* TypeErrors */,
        "Semantic"
      );
    }
    function emit(writeFileCallback, cancellationToken, customTransformers) {
      var _a, _b, _c;
      Debug.assertIsDefined(program);
      Debug.assert(step === 3 /* Emit */);
      const saved = program.saveEmitState();
      let declDiagnostics;
      const reportDeclarationDiagnostics = (d) => (declDiagnostics || (declDiagnostics = [])).push(d);
      const outputFiles = [];
      const { emitResult } = emitFilesAndReportErrors(
        program,
        reportDeclarationDiagnostics,
        /*write*/
        void 0,
        /*reportSummary*/
        void 0,
        (name, text, writeByteOrderMark, _onError, _sourceFiles, data) => outputFiles.push({ name, text, writeByteOrderMark, data }),
        cancellationToken,
        /*emitOnlyDtsFiles*/
        false,
        customTransformers || ((_b = (_a = state.host).getCustomTransformers) == null ? void 0 : _b.call(_a, project))
      );
      if (declDiagnostics) {
        program.restoreEmitState(saved);
        ({ buildResult, step } = buildErrors(
          state,
          projectPath,
          program,
          config,
          declDiagnostics,
          32 /* DeclarationEmitErrors */,
          "Declaration file"
        ));
        return {
          emitSkipped: true,
          diagnostics: emitResult.diagnostics
        };
      }
      const { host, compilerHost } = state;
      const resultFlags = ((_c = program.hasChangedEmitSignature) == null ? void 0 : _c.call(program)) ? 0 /* None */ : 2 /* DeclarationOutputUnchanged */;
      const emitterDiagnostics = createDiagnosticCollection();
      const emittedOutputs = /* @__PURE__ */ new Map();
      const options = program.getCompilerOptions();
      const isIncremental = isIncrementalCompilation(options);
      let outputTimeStampMap;
      let now;
      outputFiles.forEach(({ name, text, writeByteOrderMark, data }) => {
        const path = toPath2(state, name);
        emittedOutputs.set(toPath2(state, name), name);
        if (data == null ? void 0 : data.buildInfo)
          setBuildInfo(state, data.buildInfo, projectPath, options, resultFlags);
        const modifiedTime = (data == null ? void 0 : data.differsOnlyInMap) ? getModifiedTime(state.host, name) : void 0;
        writeFile(writeFileCallback ? { writeFile: writeFileCallback } : compilerHost, emitterDiagnostics, name, text, writeByteOrderMark);
        if (data == null ? void 0 : data.differsOnlyInMap)
          state.host.setModifiedTime(name, modifiedTime);
        else if (!isIncremental && state.watch) {
          (outputTimeStampMap || (outputTimeStampMap = getOutputTimeStampMap(state, projectPath))).set(path, now || (now = getCurrentTime(state.host)));
        }
      });
      finishEmit(
        emitterDiagnostics,
        emittedOutputs,
        outputFiles.length ? outputFiles[0].name : getFirstProjectOutput(config, !host.useCaseSensitiveFileNames()),
        resultFlags
      );
      return emitResult;
    }
    function emitBuildInfo(writeFileCallback, cancellationToken) {
      Debug.assertIsDefined(program);
      Debug.assert(step === 5 /* EmitBuildInfo */);
      const emitResult = program.emitBuildInfo((name, text, writeByteOrderMark, onError, sourceFiles, data) => {
        if (data == null ? void 0 : data.buildInfo)
          setBuildInfo(state, data.buildInfo, projectPath, program.getCompilerOptions(), 2 /* DeclarationOutputUnchanged */);
        if (writeFileCallback)
          writeFileCallback(name, text, writeByteOrderMark, onError, sourceFiles, data);
        else
          state.compilerHost.writeFile(name, text, writeByteOrderMark, onError, sourceFiles, data);
      }, cancellationToken);
      if (emitResult.diagnostics.length) {
        reportErrors(state, emitResult.diagnostics);
        state.diagnostics.set(projectPath, [...state.diagnostics.get(projectPath), ...emitResult.diagnostics]);
        buildResult = 64 /* EmitErrors */ & buildResult;
      }
      if (emitResult.emittedFiles && state.write) {
        emitResult.emittedFiles.forEach((name) => listEmittedFile(state, config, name));
      }
      afterProgramDone(state, program, config);
      step = 7 /* QueueReferencingProjects */;
      return emitResult;
    }
    function finishEmit(emitterDiagnostics, emittedOutputs, oldestOutputFileName, resultFlags) {
      const emitDiagnostics = emitterDiagnostics.getDiagnostics();
      if (emitDiagnostics.length) {
        ({ buildResult, step } = buildErrors(
          state,
          projectPath,
          program,
          config,
          emitDiagnostics,
          64 /* EmitErrors */,
          "Emit"
        ));
        return emitDiagnostics;
      }
      if (state.write) {
        emittedOutputs.forEach((name) => listEmittedFile(state, config, name));
      }
      updateOutputTimestampsWorker(state, config, projectPath, Diagnostics.Updating_unchanged_output_timestamps_of_project_0, emittedOutputs);
      state.diagnostics.delete(projectPath);
      state.projectStatus.set(projectPath, {
        type: 1 /* UpToDate */,
        oldestOutputFileName
      });
      afterProgramDone(state, program, config);
      step = 7 /* QueueReferencingProjects */;
      buildResult = resultFlags;
      return emitDiagnostics;
    }
    function emitBundle(writeFileCallback, customTransformers) {
      var _a, _b, _c, _d;
      Debug.assert(kind === 1 /* UpdateBundle */);
      if (state.options.dry) {
        reportStatus(state, Diagnostics.A_non_dry_build_would_update_output_of_project_0, project);
        buildResult = 1 /* Success */;
        step = 7 /* QueueReferencingProjects */;
        return void 0;
      }
      if (state.options.verbose)
        reportStatus(state, Diagnostics.Updating_output_of_project_0, project);
      const { compilerHost } = state;
      state.projectCompilerOptions = config.options;
      (_b = (_a = state.host).beforeEmitBundle) == null ? void 0 : _b.call(_a, config);
      const outputFiles = emitUsingBuildInfo(
        config,
        compilerHost,
        (ref) => {
          const refName = resolveProjectName(state, ref.path);
          return parseConfigFile(state, refName, toResolvedConfigFilePath(state, refName));
        },
        customTransformers || ((_d = (_c = state.host).getCustomTransformers) == null ? void 0 : _d.call(_c, project))
      );
      if (isString(outputFiles)) {
        reportStatus(state, Diagnostics.Cannot_update_output_of_project_0_because_there_was_error_reading_file_1, project, relName(state, outputFiles));
        step = 6 /* BuildInvalidatedProjectOfBundle */;
        return invalidatedProjectOfBundle = createBuildOrUpdateInvalidedProject(
          0 /* Build */,
          state,
          project,
          projectPath,
          projectIndex,
          config,
          buildOrder
        );
      }
      Debug.assert(!!outputFiles.length);
      const emitterDiagnostics = createDiagnosticCollection();
      const emittedOutputs = /* @__PURE__ */ new Map();
      let resultFlags = 2 /* DeclarationOutputUnchanged */;
      const existingBuildInfo = state.buildInfoCache.get(projectPath).buildInfo || void 0;
      outputFiles.forEach(({ name, text, writeByteOrderMark, data }) => {
        var _a2, _b2;
        emittedOutputs.set(toPath2(state, name), name);
        if (data == null ? void 0 : data.buildInfo) {
          if (((_a2 = data.buildInfo.program) == null ? void 0 : _a2.outSignature) !== ((_b2 = existingBuildInfo == null ? void 0 : existingBuildInfo.program) == null ? void 0 : _b2.outSignature)) {
            resultFlags &= ~2 /* DeclarationOutputUnchanged */;
          }
          setBuildInfo(state, data.buildInfo, projectPath, config.options, resultFlags);
        }
        writeFile(writeFileCallback ? { writeFile: writeFileCallback } : compilerHost, emitterDiagnostics, name, text, writeByteOrderMark);
      });
      const emitDiagnostics = finishEmit(
        emitterDiagnostics,
        emittedOutputs,
        outputFiles[0].name,
        resultFlags
      );
      return { emitSkipped: false, diagnostics: emitDiagnostics };
    }
    function executeSteps(till, cancellationToken, writeFile2, customTransformers) {
      while (step <= till && step < 8 /* Done */) {
        const currentStep = step;
        switch (step) {
          case 0 /* CreateProgram */:
            createProgram2();
            break;
          case 1 /* SyntaxDiagnostics */:
            getSyntaxDiagnostics(cancellationToken);
            break;
          case 2 /* SemanticDiagnostics */:
            getSemanticDiagnostics(cancellationToken);
            break;
          case 3 /* Emit */:
            emit(writeFile2, cancellationToken, customTransformers);
            break;
          case 5 /* EmitBuildInfo */:
            emitBuildInfo(writeFile2, cancellationToken);
            break;
          case 4 /* EmitBundle */:
            emitBundle(writeFile2, customTransformers);
            break;
          case 6 /* BuildInvalidatedProjectOfBundle */:
            Debug.checkDefined(invalidatedProjectOfBundle).done(cancellationToken, writeFile2, customTransformers);
            step = 8 /* Done */;
            break;
          case 7 /* QueueReferencingProjects */:
            queueReferencingProjects(state, project, projectPath, projectIndex, config, buildOrder, Debug.checkDefined(buildResult));
            step++;
            break;
          case 8 /* Done */:
          default:
            assertType(step);
        }
        Debug.assert(step > currentStep);
      }
    }
  }
  function needsBuild({ options }, status, config) {
    if (status.type !== 3 /* OutOfDateWithPrepend */ || options.force)
      return true;
    return config.fileNames.length === 0 || !!getConfigFileParsingDiagnostics(config).length || !isIncrementalCompilation(config.options);
  }
  function getNextInvalidatedProjectCreateInfo(state, buildOrder, reportQueue) {
    if (!state.projectPendingBuild.size)
      return void 0;
    if (isCircularBuildOrder(buildOrder))
      return void 0;
    const { options, projectPendingBuild } = state;
    for (let projectIndex = 0; projectIndex < buildOrder.length; projectIndex++) {
      const project = buildOrder[projectIndex];
      const projectPath = toResolvedConfigFilePath(state, project);
      const reloadLevel = state.projectPendingBuild.get(projectPath);
      if (reloadLevel === void 0)
        continue;
      if (reportQueue) {
        reportQueue = false;
        reportBuildQueue(state, buildOrder);
      }
      const config = parseConfigFile(state, project, projectPath);
      if (!config) {
        reportParseConfigFileDiagnostic(state, projectPath);
        projectPendingBuild.delete(projectPath);
        continue;
      }
      if (reloadLevel === 2 /* Full */) {
        watchConfigFile(state, project, projectPath, config);
        watchExtendedConfigFiles(state, projectPath, config);
        watchWildCardDirectories(state, project, projectPath, config);
        watchInputFiles(state, project, projectPath, config);
        watchPackageJsonFiles(state, project, projectPath, config);
      } else if (reloadLevel === 1 /* Partial */) {
        config.fileNames = getFileNamesFromConfigSpecs(config.options.configFile.configFileSpecs, getDirectoryPath(project), config.options, state.parseConfigFileHost);
        updateErrorForNoInputFiles(config.fileNames, project, config.options.configFile.configFileSpecs, config.errors, canJsonReportNoInputFiles(config.raw));
        watchInputFiles(state, project, projectPath, config);
        watchPackageJsonFiles(state, project, projectPath, config);
      }
      const status = getUpToDateStatus(state, config, projectPath);
      if (!options.force) {
        if (status.type === 1 /* UpToDate */) {
          verboseReportProjectStatus(state, project, status);
          reportAndStoreErrors(state, projectPath, getConfigFileParsingDiagnostics(config));
          projectPendingBuild.delete(projectPath);
          if (options.dry) {
            reportStatus(state, Diagnostics.Project_0_is_up_to_date, project);
          }
          continue;
        }
        if (status.type === 2 /* UpToDateWithUpstreamTypes */ || status.type === 15 /* UpToDateWithInputFileText */) {
          reportAndStoreErrors(state, projectPath, getConfigFileParsingDiagnostics(config));
          return {
            kind: 2 /* UpdateOutputFileStamps */,
            status,
            project,
            projectPath,
            projectIndex,
            config
          };
        }
      }
      if (status.type === 12 /* UpstreamBlocked */) {
        verboseReportProjectStatus(state, project, status);
        reportAndStoreErrors(state, projectPath, getConfigFileParsingDiagnostics(config));
        projectPendingBuild.delete(projectPath);
        if (options.verbose) {
          reportStatus(
            state,
            status.upstreamProjectBlocked ? Diagnostics.Skipping_build_of_project_0_because_its_dependency_1_was_not_built : Diagnostics.Skipping_build_of_project_0_because_its_dependency_1_has_errors,
            project,
            status.upstreamProjectName
          );
        }
        continue;
      }
      if (status.type === 16 /* ContainerOnly */) {
        verboseReportProjectStatus(state, project, status);
        reportAndStoreErrors(state, projectPath, getConfigFileParsingDiagnostics(config));
        projectPendingBuild.delete(projectPath);
        continue;
      }
      return {
        kind: needsBuild(state, status, config) ? 0 /* Build */ : 1 /* UpdateBundle */,
        status,
        project,
        projectPath,
        projectIndex,
        config
      };
    }
    return void 0;
  }
  function createInvalidatedProjectWithInfo(state, info, buildOrder) {
    verboseReportProjectStatus(state, info.project, info.status);
    return info.kind !== 2 /* UpdateOutputFileStamps */ ? createBuildOrUpdateInvalidedProject(
      info.kind,
      state,
      info.project,
      info.projectPath,
      info.projectIndex,
      info.config,
      buildOrder
    ) : createUpdateOutputFileStampsProject(
      state,
      info.project,
      info.projectPath,
      info.config,
      buildOrder
    );
  }
  function getNextInvalidatedProject(state, buildOrder, reportQueue) {
    const info = getNextInvalidatedProjectCreateInfo(state, buildOrder, reportQueue);
    if (!info)
      return info;
    return createInvalidatedProjectWithInfo(state, info, buildOrder);
  }
  function listEmittedFile({ write }, proj, file) {
    if (write && proj.options.listEmittedFiles) {
      write(`TSFILE: ${file}`);
    }
  }
  function getOldProgram({ options, builderPrograms, compilerHost }, proj, parsed) {
    if (options.force)
      return void 0;
    const value = builderPrograms.get(proj);
    if (value)
      return value;
    return readBuilderProgram(parsed.options, compilerHost);
  }
  function afterProgramDone(state, program, config) {
    if (program) {
      if (state.write)
        listFiles(program, state.write);
      if (state.host.afterProgramEmitAndDiagnostics) {
        state.host.afterProgramEmitAndDiagnostics(program);
      }
      program.releaseProgram();
    } else if (state.host.afterEmitBundle) {
      state.host.afterEmitBundle(config);
    }
    state.projectCompilerOptions = state.baseCompilerOptions;
  }
  function buildErrors(state, resolvedPath, program, config, diagnostics, buildResult, errorType) {
    const canEmitBuildInfo = program && !outFile(program.getCompilerOptions());
    reportAndStoreErrors(state, resolvedPath, diagnostics);
    state.projectStatus.set(resolvedPath, { type: 0 /* Unbuildable */, reason: `${errorType} errors` });
    if (canEmitBuildInfo)
      return { buildResult, step: 5 /* EmitBuildInfo */ };
    afterProgramDone(state, program, config);
    return { buildResult, step: 7 /* QueueReferencingProjects */ };
  }
  function isFileWatcherWithModifiedTime(value) {
    return !!value.watcher;
  }
  function getModifiedTime2(state, fileName) {
    const path = toPath2(state, fileName);
    const existing = state.filesWatched.get(path);
    if (state.watch && !!existing) {
      if (!isFileWatcherWithModifiedTime(existing))
        return existing;
      if (existing.modifiedTime)
        return existing.modifiedTime;
    }
    const result = getModifiedTime(state.host, fileName);
    if (state.watch) {
      if (existing)
        existing.modifiedTime = result;
      else
        state.filesWatched.set(path, result);
    }
    return result;
  }
  function watchFile(state, file, callback, pollingInterval, options, watchType, project) {
    const path = toPath2(state, file);
    const existing = state.filesWatched.get(path);
    if (existing && isFileWatcherWithModifiedTime(existing)) {
      existing.callbacks.push(callback);
    } else {
      const watcher = state.watchFile(
        file,
        (fileName, eventKind, modifiedTime) => {
          const existing2 = Debug.checkDefined(state.filesWatched.get(path));
          Debug.assert(isFileWatcherWithModifiedTime(existing2));
          existing2.modifiedTime = modifiedTime;
          existing2.callbacks.forEach((cb) => cb(fileName, eventKind, modifiedTime));
        },
        pollingInterval,
        options,
        watchType,
        project
      );
      state.filesWatched.set(path, { callbacks: [callback], watcher, modifiedTime: existing });
    }
    return {
      close: () => {
        const existing2 = Debug.checkDefined(state.filesWatched.get(path));
        Debug.assert(isFileWatcherWithModifiedTime(existing2));
        if (existing2.callbacks.length === 1) {
          state.filesWatched.delete(path);
          closeFileWatcherOf(existing2);
        } else {
          unorderedRemoveItem(existing2.callbacks, callback);
        }
      }
    };
  }
  function getOutputTimeStampMap(state, resolvedConfigFilePath) {
    if (!state.watch)
      return void 0;
    let result = state.outputTimeStamps.get(resolvedConfigFilePath);
    if (!result)
      state.outputTimeStamps.set(resolvedConfigFilePath, result = /* @__PURE__ */ new Map());
    return result;
  }
  function setBuildInfo(state, buildInfo, resolvedConfigPath, options, resultFlags) {
    const buildInfoPath = getTsBuildInfoEmitOutputFilePath(options);
    const existing = getBuildInfoCacheEntry(state, buildInfoPath, resolvedConfigPath);
    const modifiedTime = getCurrentTime(state.host);
    if (existing) {
      existing.buildInfo = buildInfo;
      existing.modifiedTime = modifiedTime;
      if (!(resultFlags & 2 /* DeclarationOutputUnchanged */))
        existing.latestChangedDtsTime = modifiedTime;
    } else {
      state.buildInfoCache.set(resolvedConfigPath, {
        path: toPath2(state, buildInfoPath),
        buildInfo,
        modifiedTime,
        latestChangedDtsTime: resultFlags & 2 /* DeclarationOutputUnchanged */ ? void 0 : modifiedTime
      });
    }
  }
  function getBuildInfoCacheEntry(state, buildInfoPath, resolvedConfigPath) {
    const path = toPath2(state, buildInfoPath);
    const existing = state.buildInfoCache.get(resolvedConfigPath);
    return (existing == null ? void 0 : existing.path) === path ? existing : void 0;
  }
  function getBuildInfo3(state, buildInfoPath, resolvedConfigPath, modifiedTime) {
    const path = toPath2(state, buildInfoPath);
    const existing = state.buildInfoCache.get(resolvedConfigPath);
    if (existing !== void 0 && existing.path === path) {
      return existing.buildInfo || void 0;
    }
    const value = state.readFileWithCache(buildInfoPath);
    const buildInfo = value ? getBuildInfo(buildInfoPath, value) : void 0;
    state.buildInfoCache.set(resolvedConfigPath, { path, buildInfo: buildInfo || false, modifiedTime: modifiedTime || missingFileModifiedTime });
    return buildInfo;
  }
  function checkConfigFileUpToDateStatus(state, configFile, oldestOutputFileTime, oldestOutputFileName) {
    const tsconfigTime = getModifiedTime2(state, configFile);
    if (oldestOutputFileTime < tsconfigTime) {
      return {
        type: 6 /* OutOfDateWithSelf */,
        outOfDateOutputFileName: oldestOutputFileName,
        newerInputFileName: configFile
      };
    }
  }
  function getUpToDateStatusWorker(state, project, resolvedPath) {
    var _a, _b;
    if (!project.fileNames.length && !canJsonReportNoInputFiles(project.raw)) {
      return {
        type: 16 /* ContainerOnly */
      };
    }
    let referenceStatuses;
    const force = !!state.options.force;
    if (project.projectReferences) {
      state.projectStatus.set(resolvedPath, { type: 13 /* ComputingUpstream */ });
      for (const ref of project.projectReferences) {
        const resolvedRef = resolveProjectReferencePath(ref);
        const resolvedRefPath = toResolvedConfigFilePath(state, resolvedRef);
        const resolvedConfig = parseConfigFile(state, resolvedRef, resolvedRefPath);
        const refStatus = getUpToDateStatus(state, resolvedConfig, resolvedRefPath);
        if (refStatus.type === 13 /* ComputingUpstream */ || refStatus.type === 16 /* ContainerOnly */) {
          continue;
        }
        if (refStatus.type === 0 /* Unbuildable */ || refStatus.type === 12 /* UpstreamBlocked */) {
          return {
            type: 12 /* UpstreamBlocked */,
            upstreamProjectName: ref.path,
            upstreamProjectBlocked: refStatus.type === 12 /* UpstreamBlocked */
          };
        }
        if (refStatus.type !== 1 /* UpToDate */) {
          return {
            type: 11 /* UpstreamOutOfDate */,
            upstreamProjectName: ref.path
          };
        }
        if (!force)
          (referenceStatuses || (referenceStatuses = [])).push({ ref, refStatus, resolvedRefPath, resolvedConfig });
      }
    }
    if (force)
      return { type: 17 /* ForceBuild */ };
    const { host } = state;
    const buildInfoPath = getTsBuildInfoEmitOutputFilePath(project.options);
    let oldestOutputFileName;
    let oldestOutputFileTime = maximumDate;
    let buildInfoTime;
    let buildInfoProgram;
    let buildInfoVersionMap;
    if (buildInfoPath) {
      const buildInfoCacheEntry2 = getBuildInfoCacheEntry(state, buildInfoPath, resolvedPath);
      buildInfoTime = (buildInfoCacheEntry2 == null ? void 0 : buildInfoCacheEntry2.modifiedTime) || getModifiedTime(host, buildInfoPath);
      if (buildInfoTime === missingFileModifiedTime) {
        if (!buildInfoCacheEntry2) {
          state.buildInfoCache.set(resolvedPath, {
            path: toPath2(state, buildInfoPath),
            buildInfo: false,
            modifiedTime: buildInfoTime
          });
        }
        return {
          type: 4 /* OutputMissing */,
          missingOutputFileName: buildInfoPath
        };
      }
      const buildInfo = getBuildInfo3(state, buildInfoPath, resolvedPath, buildInfoTime);
      if (!buildInfo) {
        return {
          type: 5 /* ErrorReadingFile */,
          fileName: buildInfoPath
        };
      }
      if ((buildInfo.bundle || buildInfo.program) && buildInfo.version !== version) {
        return {
          type: 14 /* TsVersionOutputOfDate */,
          version: buildInfo.version
        };
      }
      if (buildInfo.program) {
        if (((_a = buildInfo.program.changeFileSet) == null ? void 0 : _a.length) || (!project.options.noEmit ? (_b = buildInfo.program.affectedFilesPendingEmit) == null ? void 0 : _b.length : some(buildInfo.program.semanticDiagnosticsPerFile, isArray))) {
          return {
            type: 8 /* OutOfDateBuildInfo */,
            buildInfoFile: buildInfoPath
          };
        }
        if (!project.options.noEmit && getPendingEmitKind(project.options, buildInfo.program.options || {})) {
          return {
            type: 9 /* OutOfDateOptions */,
            buildInfoFile: buildInfoPath
          };
        }
        buildInfoProgram = buildInfo.program;
      }
      oldestOutputFileTime = buildInfoTime;
      oldestOutputFileName = buildInfoPath;
    }
    let newestInputFileName = void 0;
    let newestInputFileTime = minimumDate;
    let pseudoInputUpToDate = false;
    const seenRoots = /* @__PURE__ */ new Set();
    for (const inputFile of project.fileNames) {
      const inputTime = getModifiedTime2(state, inputFile);
      if (inputTime === missingFileModifiedTime) {
        return {
          type: 0 /* Unbuildable */,
          reason: `${inputFile} does not exist`
        };
      }
      if (buildInfoTime && buildInfoTime < inputTime) {
        let version2;
        let currentVersion;
        if (buildInfoProgram) {
          if (!buildInfoVersionMap)
            buildInfoVersionMap = getBuildInfoFileVersionMap(buildInfoProgram, buildInfoPath, host);
          version2 = buildInfoVersionMap.fileInfos.get(toPath2(state, inputFile));
          const text = version2 ? state.readFileWithCache(inputFile) : void 0;
          currentVersion = text !== void 0 ? getSourceFileVersionAsHashFromText(host, text) : void 0;
          if (version2 && version2 === currentVersion)
            pseudoInputUpToDate = true;
        }
        if (!version2 || version2 !== currentVersion) {
          return {
            type: 6 /* OutOfDateWithSelf */,
            outOfDateOutputFileName: buildInfoPath,
            newerInputFileName: inputFile
          };
        }
      }
      if (inputTime > newestInputFileTime) {
        newestInputFileName = inputFile;
        newestInputFileTime = inputTime;
      }
      if (buildInfoProgram)
        seenRoots.add(toPath2(state, inputFile));
    }
    if (buildInfoProgram) {
      if (!buildInfoVersionMap)
        buildInfoVersionMap = getBuildInfoFileVersionMap(buildInfoProgram, buildInfoPath, host);
      for (const existingRoot of buildInfoVersionMap.roots) {
        if (!seenRoots.has(existingRoot)) {
          return {
            type: 10 /* OutOfDateRoots */,
            buildInfoFile: buildInfoPath,
            inputFile: existingRoot
          };
        }
      }
    }
    if (!buildInfoPath) {
      const outputs = getAllProjectOutputs(project, !host.useCaseSensitiveFileNames());
      const outputTimeStampMap = getOutputTimeStampMap(state, resolvedPath);
      for (const output of outputs) {
        const path = toPath2(state, output);
        let outputTime = outputTimeStampMap == null ? void 0 : outputTimeStampMap.get(path);
        if (!outputTime) {
          outputTime = getModifiedTime(state.host, output);
          outputTimeStampMap == null ? void 0 : outputTimeStampMap.set(path, outputTime);
        }
        if (outputTime === missingFileModifiedTime) {
          return {
            type: 4 /* OutputMissing */,
            missingOutputFileName: output
          };
        }
        if (outputTime < newestInputFileTime) {
          return {
            type: 6 /* OutOfDateWithSelf */,
            outOfDateOutputFileName: output,
            newerInputFileName: newestInputFileName
          };
        }
        if (outputTime < oldestOutputFileTime) {
          oldestOutputFileTime = outputTime;
          oldestOutputFileName = output;
        }
      }
    }
    const buildInfoCacheEntry = state.buildInfoCache.get(resolvedPath);
    let pseudoUpToDate = false;
    let usesPrepend = false;
    let upstreamChangedProject;
    if (referenceStatuses) {
      for (const { ref, refStatus, resolvedConfig, resolvedRefPath } of referenceStatuses) {
        usesPrepend = usesPrepend || !!ref.prepend;
        if (refStatus.newestInputFileTime && refStatus.newestInputFileTime <= oldestOutputFileTime) {
          continue;
        }
        if (buildInfoCacheEntry && hasSameBuildInfo(state, buildInfoCacheEntry, resolvedRefPath)) {
          return {
            type: 7 /* OutOfDateWithUpstream */,
            outOfDateOutputFileName: buildInfoPath,
            newerProjectName: ref.path
          };
        }
        const newestDeclarationFileContentChangedTime = getLatestChangedDtsTime(state, resolvedConfig.options, resolvedRefPath);
        if (newestDeclarationFileContentChangedTime && newestDeclarationFileContentChangedTime <= oldestOutputFileTime) {
          pseudoUpToDate = true;
          upstreamChangedProject = ref.path;
          continue;
        }
        Debug.assert(oldestOutputFileName !== void 0, "Should have an oldest output filename here");
        return {
          type: 7 /* OutOfDateWithUpstream */,
          outOfDateOutputFileName: oldestOutputFileName,
          newerProjectName: ref.path
        };
      }
    }
    const configStatus = checkConfigFileUpToDateStatus(state, project.options.configFilePath, oldestOutputFileTime, oldestOutputFileName);
    if (configStatus)
      return configStatus;
    const extendedConfigStatus = forEach(project.options.configFile.extendedSourceFiles || emptyArray, (configFile) => checkConfigFileUpToDateStatus(state, configFile, oldestOutputFileTime, oldestOutputFileName));
    if (extendedConfigStatus)
      return extendedConfigStatus;
    const dependentPackageFileStatus = forEach(
      state.lastCachedPackageJsonLookups.get(resolvedPath) || emptyArray,
      ([path]) => checkConfigFileUpToDateStatus(state, path, oldestOutputFileTime, oldestOutputFileName)
    );
    if (dependentPackageFileStatus)
      return dependentPackageFileStatus;
    if (usesPrepend && pseudoUpToDate) {
      return {
        type: 3 /* OutOfDateWithPrepend */,
        outOfDateOutputFileName: oldestOutputFileName,
        newerProjectName: upstreamChangedProject
      };
    }
    return {
      type: pseudoUpToDate ? 2 /* UpToDateWithUpstreamTypes */ : pseudoInputUpToDate ? 15 /* UpToDateWithInputFileText */ : 1 /* UpToDate */,
      newestInputFileTime,
      newestInputFileName,
      oldestOutputFileName
    };
  }
  function hasSameBuildInfo(state, buildInfoCacheEntry, resolvedRefPath) {
    const refBuildInfo = state.buildInfoCache.get(resolvedRefPath);
    return refBuildInfo.path === buildInfoCacheEntry.path;
  }
  function getUpToDateStatus(state, project, resolvedPath) {
    if (project === void 0) {
      return { type: 0 /* Unbuildable */, reason: "File deleted mid-build" };
    }
    const prior = state.projectStatus.get(resolvedPath);
    if (prior !== void 0) {
      return prior;
    }
    mark("SolutionBuilder::beforeUpToDateCheck");
    const actual = getUpToDateStatusWorker(state, project, resolvedPath);
    mark("SolutionBuilder::afterUpToDateCheck");
    measure("SolutionBuilder::Up-to-date check", "SolutionBuilder::beforeUpToDateCheck", "SolutionBuilder::afterUpToDateCheck");
    state.projectStatus.set(resolvedPath, actual);
    return actual;
  }
  function updateOutputTimestampsWorker(state, proj, projectPath, verboseMessage, skipOutputs) {
    if (proj.options.noEmit)
      return;
    let now;
    const buildInfoPath = getTsBuildInfoEmitOutputFilePath(proj.options);
    if (buildInfoPath) {
      if (!(skipOutputs == null ? void 0 : skipOutputs.has(toPath2(state, buildInfoPath)))) {
        if (!!state.options.verbose)
          reportStatus(state, verboseMessage, proj.options.configFilePath);
        state.host.setModifiedTime(buildInfoPath, now = getCurrentTime(state.host));
        getBuildInfoCacheEntry(state, buildInfoPath, projectPath).modifiedTime = now;
      }
      state.outputTimeStamps.delete(projectPath);
      return;
    }
    const { host } = state;
    const outputs = getAllProjectOutputs(proj, !host.useCaseSensitiveFileNames());
    const outputTimeStampMap = getOutputTimeStampMap(state, projectPath);
    const modifiedOutputs = outputTimeStampMap ? /* @__PURE__ */ new Set() : void 0;
    if (!skipOutputs || outputs.length !== skipOutputs.size) {
      let reportVerbose = !!state.options.verbose;
      for (const file of outputs) {
        const path = toPath2(state, file);
        if (skipOutputs == null ? void 0 : skipOutputs.has(path))
          continue;
        if (reportVerbose) {
          reportVerbose = false;
          reportStatus(state, verboseMessage, proj.options.configFilePath);
        }
        host.setModifiedTime(file, now || (now = getCurrentTime(state.host)));
        if (outputTimeStampMap) {
          outputTimeStampMap.set(path, now);
          modifiedOutputs.add(path);
        }
      }
    }
    outputTimeStampMap == null ? void 0 : outputTimeStampMap.forEach((_value, key) => {
      if (!(skipOutputs == null ? void 0 : skipOutputs.has(key)) && !modifiedOutputs.has(key))
        outputTimeStampMap.delete(key);
    });
  }
  function getLatestChangedDtsTime(state, options, resolvedConfigPath) {
    if (!options.composite)
      return void 0;
    const entry = Debug.checkDefined(state.buildInfoCache.get(resolvedConfigPath));
    if (entry.latestChangedDtsTime !== void 0)
      return entry.latestChangedDtsTime || void 0;
    const latestChangedDtsTime = entry.buildInfo && entry.buildInfo.program && entry.buildInfo.program.latestChangedDtsFile ? state.host.getModifiedTime(getNormalizedAbsolutePath(entry.buildInfo.program.latestChangedDtsFile, getDirectoryPath(entry.path))) : void 0;
    entry.latestChangedDtsTime = latestChangedDtsTime || false;
    return latestChangedDtsTime;
  }
  function updateOutputTimestamps(state, proj, resolvedPath) {
    if (state.options.dry) {
      return reportStatus(state, Diagnostics.A_non_dry_build_would_update_timestamps_for_output_of_project_0, proj.options.configFilePath);
    }
    updateOutputTimestampsWorker(state, proj, resolvedPath, Diagnostics.Updating_output_timestamps_of_project_0);
    state.projectStatus.set(resolvedPath, {
      type: 1 /* UpToDate */,
      oldestOutputFileName: getFirstProjectOutput(proj, !state.host.useCaseSensitiveFileNames())
    });
  }
  function queueReferencingProjects(state, project, projectPath, projectIndex, config, buildOrder, buildResult) {
    if (buildResult & 124 /* AnyErrors */)
      return;
    if (!config.options.composite)
      return;
    for (let index = projectIndex + 1; index < buildOrder.length; index++) {
      const nextProject = buildOrder[index];
      const nextProjectPath = toResolvedConfigFilePath(state, nextProject);
      if (state.projectPendingBuild.has(nextProjectPath))
        continue;
      const nextProjectConfig = parseConfigFile(state, nextProject, nextProjectPath);
      if (!nextProjectConfig || !nextProjectConfig.projectReferences)
        continue;
      for (const ref of nextProjectConfig.projectReferences) {
        const resolvedRefPath = resolveProjectName(state, ref.path);
        if (toResolvedConfigFilePath(state, resolvedRefPath) !== projectPath)
          continue;
        const status = state.projectStatus.get(nextProjectPath);
        if (status) {
          switch (status.type) {
            case 1 /* UpToDate */:
              if (buildResult & 2 /* DeclarationOutputUnchanged */) {
                if (ref.prepend) {
                  state.projectStatus.set(nextProjectPath, {
                    type: 3 /* OutOfDateWithPrepend */,
                    outOfDateOutputFileName: status.oldestOutputFileName,
                    newerProjectName: project
                  });
                } else {
                  status.type = 2 /* UpToDateWithUpstreamTypes */;
                }
                break;
              }
            case 15 /* UpToDateWithInputFileText */:
            case 2 /* UpToDateWithUpstreamTypes */:
            case 3 /* OutOfDateWithPrepend */:
              if (!(buildResult & 2 /* DeclarationOutputUnchanged */)) {
                state.projectStatus.set(nextProjectPath, {
                  type: 7 /* OutOfDateWithUpstream */,
                  outOfDateOutputFileName: status.type === 3 /* OutOfDateWithPrepend */ ? status.outOfDateOutputFileName : status.oldestOutputFileName,
                  newerProjectName: project
                });
              }
              break;
            case 12 /* UpstreamBlocked */:
              if (toResolvedConfigFilePath(state, resolveProjectName(state, status.upstreamProjectName)) === projectPath) {
                clearProjectStatus(state, nextProjectPath);
              }
              break;
          }
        }
        addProjToQueue(state, nextProjectPath, 0 /* None */);
        break;
      }
    }
  }
  function build(state, project, cancellationToken, writeFile2, getCustomTransformers, onlyReferences) {
    mark("SolutionBuilder::beforeBuild");
    const result = buildWorker(state, project, cancellationToken, writeFile2, getCustomTransformers, onlyReferences);
    mark("SolutionBuilder::afterBuild");
    measure("SolutionBuilder::Build", "SolutionBuilder::beforeBuild", "SolutionBuilder::afterBuild");
    return result;
  }
  function buildWorker(state, project, cancellationToken, writeFile2, getCustomTransformers, onlyReferences) {
    const buildOrder = getBuildOrderFor(state, project, onlyReferences);
    if (!buildOrder)
      return 3 /* InvalidProject_OutputsSkipped */;
    setupInitialBuild(state, cancellationToken);
    let reportQueue = true;
    let successfulProjects = 0;
    while (true) {
      const invalidatedProject = getNextInvalidatedProject(state, buildOrder, reportQueue);
      if (!invalidatedProject)
        break;
      reportQueue = false;
      invalidatedProject.done(cancellationToken, writeFile2, getCustomTransformers == null ? void 0 : getCustomTransformers(invalidatedProject.project));
      if (!state.diagnostics.has(invalidatedProject.projectPath))
        successfulProjects++;
    }
    disableCache(state);
    reportErrorSummary(state, buildOrder);
    startWatching(state, buildOrder);
    return isCircularBuildOrder(buildOrder) ? 4 /* ProjectReferenceCycle_OutputsSkipped */ : !buildOrder.some((p) => state.diagnostics.has(toResolvedConfigFilePath(state, p))) ? 0 /* Success */ : successfulProjects ? 2 /* DiagnosticsPresent_OutputsGenerated */ : 1 /* DiagnosticsPresent_OutputsSkipped */;
  }
  function clean(state, project, onlyReferences) {
    mark("SolutionBuilder::beforeClean");
    const result = cleanWorker(state, project, onlyReferences);
    mark("SolutionBuilder::afterClean");
    measure("SolutionBuilder::Clean", "SolutionBuilder::beforeClean", "SolutionBuilder::afterClean");
    return result;
  }
  function cleanWorker(state, project, onlyReferences) {
    const buildOrder = getBuildOrderFor(state, project, onlyReferences);
    if (!buildOrder)
      return 3 /* InvalidProject_OutputsSkipped */;
    if (isCircularBuildOrder(buildOrder)) {
      reportErrors(state, buildOrder.circularDiagnostics);
      return 4 /* ProjectReferenceCycle_OutputsSkipped */;
    }
    const { options, host } = state;
    const filesToDelete = options.dry ? [] : void 0;
    for (const proj of buildOrder) {
      const resolvedPath = toResolvedConfigFilePath(state, proj);
      const parsed = parseConfigFile(state, proj, resolvedPath);
      if (parsed === void 0) {
        reportParseConfigFileDiagnostic(state, resolvedPath);
        continue;
      }
      const outputs = getAllProjectOutputs(parsed, !host.useCaseSensitiveFileNames());
      if (!outputs.length)
        continue;
      const inputFileNames = new Set(parsed.fileNames.map((f) => toPath2(state, f)));
      for (const output of outputs) {
        if (inputFileNames.has(toPath2(state, output)))
          continue;
        if (host.fileExists(output)) {
          if (filesToDelete) {
            filesToDelete.push(output);
          } else {
            host.deleteFile(output);
            invalidateProject(state, resolvedPath, 0 /* None */);
          }
        }
      }
    }
    if (filesToDelete) {
      reportStatus(state, Diagnostics.A_non_dry_build_would_delete_the_following_files_Colon_0, filesToDelete.map((f) => `\r
 * ${f}`).join(""));
    }
    return 0 /* Success */;
  }
  function invalidateProject(state, resolved, reloadLevel) {
    if (state.host.getParsedCommandLine && reloadLevel === 1 /* Partial */) {
      reloadLevel = 2 /* Full */;
    }
    if (reloadLevel === 2 /* Full */) {
      state.configFileCache.delete(resolved);
      state.buildOrder = void 0;
    }
    state.needsSummary = true;
    clearProjectStatus(state, resolved);
    addProjToQueue(state, resolved, reloadLevel);
    enableCache(state);
  }
  function invalidateProjectAndScheduleBuilds(state, resolvedPath, reloadLevel) {
    state.reportFileChangeDetected = true;
    invalidateProject(state, resolvedPath, reloadLevel);
    scheduleBuildInvalidatedProject(
      state,
      250,
      /*changeDetected*/
      true
    );
  }
  function scheduleBuildInvalidatedProject(state, time, changeDetected) {
    const { hostWithWatch } = state;
    if (!hostWithWatch.setTimeout || !hostWithWatch.clearTimeout) {
      return;
    }
    if (state.timerToBuildInvalidatedProject) {
      hostWithWatch.clearTimeout(state.timerToBuildInvalidatedProject);
    }
    state.timerToBuildInvalidatedProject = hostWithWatch.setTimeout(buildNextInvalidatedProject, time, "timerToBuildInvalidatedProject", state, changeDetected);
  }
  function buildNextInvalidatedProject(_timeoutType, state, changeDetected) {
    mark("SolutionBuilder::beforeBuild");
    const buildOrder = buildNextInvalidatedProjectWorker(state, changeDetected);
    mark("SolutionBuilder::afterBuild");
    measure("SolutionBuilder::Build", "SolutionBuilder::beforeBuild", "SolutionBuilder::afterBuild");
    if (buildOrder)
      reportErrorSummary(state, buildOrder);
  }
  function buildNextInvalidatedProjectWorker(state, changeDetected) {
    state.timerToBuildInvalidatedProject = void 0;
    if (state.reportFileChangeDetected) {
      state.reportFileChangeDetected = false;
      state.projectErrorsReported.clear();
      reportWatchStatus(state, Diagnostics.File_change_detected_Starting_incremental_compilation);
    }
    let projectsBuilt = 0;
    const buildOrder = getBuildOrder(state);
    const invalidatedProject = getNextInvalidatedProject(
      state,
      buildOrder,
      /*reportQueue*/
      false
    );
    if (invalidatedProject) {
      invalidatedProject.done();
      projectsBuilt++;
      while (state.projectPendingBuild.size) {
        if (state.timerToBuildInvalidatedProject)
          return;
        const info = getNextInvalidatedProjectCreateInfo(
          state,
          buildOrder,
          /*reportQueue*/
          false
        );
        if (!info)
          break;
        if (info.kind !== 2 /* UpdateOutputFileStamps */ && (changeDetected || projectsBuilt === 5)) {
          scheduleBuildInvalidatedProject(
            state,
            100,
            /*changeDetected*/
            false
          );
          return;
        }
        const project = createInvalidatedProjectWithInfo(state, info, buildOrder);
        project.done();
        if (info.kind !== 2 /* UpdateOutputFileStamps */)
          projectsBuilt++;
      }
    }
    disableCache(state);
    return buildOrder;
  }
  function watchConfigFile(state, resolved, resolvedPath, parsed) {
    if (!state.watch || state.allWatchedConfigFiles.has(resolvedPath))
      return;
    state.allWatchedConfigFiles.set(resolvedPath, watchFile(
      state,
      resolved,
      () => invalidateProjectAndScheduleBuilds(state, resolvedPath, 2 /* Full */),
      2e3 /* High */,
      parsed == null ? void 0 : parsed.watchOptions,
      WatchType.ConfigFile,
      resolved
    ));
  }
  function watchExtendedConfigFiles(state, resolvedPath, parsed) {
    updateSharedExtendedConfigFileWatcher(
      resolvedPath,
      parsed == null ? void 0 : parsed.options,
      state.allWatchedExtendedConfigFiles,
      (extendedConfigFileName, extendedConfigFilePath) => watchFile(
        state,
        extendedConfigFileName,
        () => {
          var _a;
          return (_a = state.allWatchedExtendedConfigFiles.get(extendedConfigFilePath)) == null ? void 0 : _a.projects.forEach((projectConfigFilePath) => invalidateProjectAndScheduleBuilds(state, projectConfigFilePath, 2 /* Full */));
        },
        2e3 /* High */,
        parsed == null ? void 0 : parsed.watchOptions,
        WatchType.ExtendedConfigFile
      ),
      (fileName) => toPath2(state, fileName)
    );
  }
  function watchWildCardDirectories(state, resolved, resolvedPath, parsed) {
    if (!state.watch)
      return;
    updateWatchingWildcardDirectories(
      getOrCreateValueMapFromConfigFileMap(state.allWatchedWildcardDirectories, resolvedPath),
      new Map(Object.entries(parsed.wildcardDirectories)),
      (dir, flags) => state.watchDirectory(
        dir,
        (fileOrDirectory) => {
          var _a;
          if (isIgnoredFileFromWildCardWatching({
            watchedDirPath: toPath2(state, dir),
            fileOrDirectory,
            fileOrDirectoryPath: toPath2(state, fileOrDirectory),
            configFileName: resolved,
            currentDirectory: state.compilerHost.getCurrentDirectory(),
            options: parsed.options,
            program: state.builderPrograms.get(resolvedPath) || ((_a = getCachedParsedConfigFile(state, resolvedPath)) == null ? void 0 : _a.fileNames),
            useCaseSensitiveFileNames: state.parseConfigFileHost.useCaseSensitiveFileNames,
            writeLog: (s) => state.writeLog(s),
            toPath: (fileName) => toPath2(state, fileName)
          }))
            return;
          invalidateProjectAndScheduleBuilds(state, resolvedPath, 1 /* Partial */);
        },
        flags,
        parsed == null ? void 0 : parsed.watchOptions,
        WatchType.WildcardDirectory,
        resolved
      )
    );
  }
  function watchInputFiles(state, resolved, resolvedPath, parsed) {
    if (!state.watch)
      return;
    mutateMap(
      getOrCreateValueMapFromConfigFileMap(state.allWatchedInputFiles, resolvedPath),
      arrayToMap(parsed.fileNames, (fileName) => toPath2(state, fileName)),
      {
        createNewValue: (_path, input) => watchFile(
          state,
          input,
          () => invalidateProjectAndScheduleBuilds(state, resolvedPath, 0 /* None */),
          250 /* Low */,
          parsed == null ? void 0 : parsed.watchOptions,
          WatchType.SourceFile,
          resolved
        ),
        onDeleteValue: closeFileWatcher
      }
    );
  }
  function watchPackageJsonFiles(state, resolved, resolvedPath, parsed) {
    if (!state.watch || !state.lastCachedPackageJsonLookups)
      return;
    mutateMap(
      getOrCreateValueMapFromConfigFileMap(state.allWatchedPackageJsonFiles, resolvedPath),
      new Map(state.lastCachedPackageJsonLookups.get(resolvedPath)),
      {
        createNewValue: (path, _input) => watchFile(
          state,
          path,
          () => invalidateProjectAndScheduleBuilds(state, resolvedPath, 0 /* None */),
          2e3 /* High */,
          parsed == null ? void 0 : parsed.watchOptions,
          WatchType.PackageJson,
          resolved
        ),
        onDeleteValue: closeFileWatcher
      }
    );
  }
  function startWatching(state, buildOrder) {
    if (!state.watchAllProjectsPending)
      return;
    mark("SolutionBuilder::beforeWatcherCreation");
    state.watchAllProjectsPending = false;
    for (const resolved of getBuildOrderFromAnyBuildOrder(buildOrder)) {
      const resolvedPath = toResolvedConfigFilePath(state, resolved);
      const cfg = parseConfigFile(state, resolved, resolvedPath);
      watchConfigFile(state, resolved, resolvedPath, cfg);
      watchExtendedConfigFiles(state, resolvedPath, cfg);
      if (cfg) {
        watchWildCardDirectories(state, resolved, resolvedPath, cfg);
        watchInputFiles(state, resolved, resolvedPath, cfg);
        watchPackageJsonFiles(state, resolved, resolvedPath, cfg);
      }
    }
    mark("SolutionBuilder::afterWatcherCreation");
    measure("SolutionBuilder::Watcher creation", "SolutionBuilder::beforeWatcherCreation", "SolutionBuilder::afterWatcherCreation");
  }
  function stopWatching(state) {
    clearMap(state.allWatchedConfigFiles, closeFileWatcher);
    clearMap(state.allWatchedExtendedConfigFiles, closeFileWatcherOf);
    clearMap(state.allWatchedWildcardDirectories, (watchedWildcardDirectories) => clearMap(watchedWildcardDirectories, closeFileWatcherOf));
    clearMap(state.allWatchedInputFiles, (watchedWildcardDirectories) => clearMap(watchedWildcardDirectories, closeFileWatcher));
    clearMap(state.allWatchedPackageJsonFiles, (watchedPacageJsonFiles) => clearMap(watchedPacageJsonFiles, closeFileWatcher));
  }
  function createSolutionBuilderWorker(watch, hostOrHostWithWatch, rootNames, options, baseWatchOptions) {
    const state = createSolutionBuilderState(watch, hostOrHostWithWatch, rootNames, options, baseWatchOptions);
    return {
      build: (project, cancellationToken, writeFile2, getCustomTransformers) => build(state, project, cancellationToken, writeFile2, getCustomTransformers),
      clean: (project) => clean(state, project),
      buildReferences: (project, cancellationToken, writeFile2, getCustomTransformers) => build(
        state,
        project,
        cancellationToken,
        writeFile2,
        getCustomTransformers,
        /*onlyReferences*/
        true
      ),
      cleanReferences: (project) => clean(
        state,
        project,
        /*onlyReferences*/
        true
      ),
      getNextInvalidatedProject: (cancellationToken) => {
        setupInitialBuild(state, cancellationToken);
        return getNextInvalidatedProject(
          state,
          getBuildOrder(state),
          /*reportQueue*/
          false
        );
      },
      getBuildOrder: () => getBuildOrder(state),
      getUpToDateStatusOfProject: (project) => {
        const configFileName = resolveProjectName(state, project);
        const configFilePath = toResolvedConfigFilePath(state, configFileName);
        return getUpToDateStatus(state, parseConfigFile(state, configFileName, configFilePath), configFilePath);
      },
      invalidateProject: (configFilePath, reloadLevel) => invalidateProject(state, configFilePath, reloadLevel || 0 /* None */),
      close: () => stopWatching(state)
    };
  }
  function relName(state, path) {
    return convertToRelativePath(path, state.compilerHost.getCurrentDirectory(), state.compilerHost.getCanonicalFileName);
  }
  function reportStatus(state, message, ...args) {
    state.host.reportSolutionBuilderStatus(createCompilerDiagnostic(message, ...args));
  }
  function reportWatchStatus(state, message, ...args) {
    var _a, _b;
    (_b = (_a = state.hostWithWatch).onWatchStatusChange) == null ? void 0 : _b.call(_a, createCompilerDiagnostic(message, ...args), state.host.getNewLine(), state.baseCompilerOptions);
  }
  function reportErrors({ host }, errors) {
    errors.forEach((err) => host.reportDiagnostic(err));
  }
  function reportAndStoreErrors(state, proj, errors) {
    reportErrors(state, errors);
    state.projectErrorsReported.set(proj, true);
    if (errors.length) {
      state.diagnostics.set(proj, errors);
    }
  }
  function reportParseConfigFileDiagnostic(state, proj) {
    reportAndStoreErrors(state, proj, [state.configFileCache.get(proj)]);
  }
  function reportErrorSummary(state, buildOrder) {
    if (!state.needsSummary)
      return;
    state.needsSummary = false;
    const canReportSummary = state.watch || !!state.host.reportErrorSummary;
    const { diagnostics } = state;
    let totalErrors = 0;
    let filesInError = [];
    if (isCircularBuildOrder(buildOrder)) {
      reportBuildQueue(state, buildOrder.buildOrder);
      reportErrors(state, buildOrder.circularDiagnostics);
      if (canReportSummary)
        totalErrors += getErrorCountForSummary(buildOrder.circularDiagnostics);
      if (canReportSummary)
        filesInError = [...filesInError, ...getFilesInErrorForSummary(buildOrder.circularDiagnostics)];
    } else {
      buildOrder.forEach((project) => {
        const projectPath = toResolvedConfigFilePath(state, project);
        if (!state.projectErrorsReported.has(projectPath)) {
          reportErrors(state, diagnostics.get(projectPath) || emptyArray);
        }
      });
      if (canReportSummary)
        diagnostics.forEach((singleProjectErrors) => totalErrors += getErrorCountForSummary(singleProjectErrors));
      if (canReportSummary)
        diagnostics.forEach((singleProjectErrors) => [...filesInError, ...getFilesInErrorForSummary(singleProjectErrors)]);
    }
    if (state.watch) {
      reportWatchStatus(state, getWatchErrorSummaryDiagnosticMessage(totalErrors), totalErrors);
    } else if (state.host.reportErrorSummary) {
      state.host.reportErrorSummary(totalErrors, filesInError);
    }
  }
  function reportBuildQueue(state, buildQueue) {
    if (state.options.verbose) {
      reportStatus(state, Diagnostics.Projects_in_this_build_Colon_0, buildQueue.map((s) => "\r\n    * " + relName(state, s)).join(""));
    }
  }
  function reportUpToDateStatus(state, configFileName, status) {
    switch (status.type) {
      case 6 /* OutOfDateWithSelf */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_output_1_is_older_than_input_2,
          relName(state, configFileName),
          relName(state, status.outOfDateOutputFileName),
          relName(state, status.newerInputFileName)
        );
      case 7 /* OutOfDateWithUpstream */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_output_1_is_older_than_input_2,
          relName(state, configFileName),
          relName(state, status.outOfDateOutputFileName),
          relName(state, status.newerProjectName)
        );
      case 4 /* OutputMissing */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_output_file_1_does_not_exist,
          relName(state, configFileName),
          relName(state, status.missingOutputFileName)
        );
      case 5 /* ErrorReadingFile */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_there_was_error_reading_file_1,
          relName(state, configFileName),
          relName(state, status.fileName)
        );
      case 8 /* OutOfDateBuildInfo */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_buildinfo_file_1_indicates_that_some_of_the_changes_were_not_emitted,
          relName(state, configFileName),
          relName(state, status.buildInfoFile)
        );
      case 9 /* OutOfDateOptions */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_buildinfo_file_1_indicates_there_is_change_in_compilerOptions,
          relName(state, configFileName),
          relName(state, status.buildInfoFile)
        );
      case 10 /* OutOfDateRoots */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_buildinfo_file_1_indicates_that_file_2_was_root_file_of_compilation_but_not_any_more,
          relName(state, configFileName),
          relName(state, status.buildInfoFile),
          relName(state, status.inputFile)
        );
      case 1 /* UpToDate */:
        if (status.newestInputFileTime !== void 0) {
          return reportStatus(
            state,
            Diagnostics.Project_0_is_up_to_date_because_newest_input_1_is_older_than_output_2,
            relName(state, configFileName),
            relName(state, status.newestInputFileName || ""),
            relName(state, status.oldestOutputFileName || "")
          );
        }
        break;
      case 3 /* OutOfDateWithPrepend */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_output_of_its_dependency_1_has_changed,
          relName(state, configFileName),
          relName(state, status.newerProjectName)
        );
      case 2 /* UpToDateWithUpstreamTypes */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_up_to_date_with_d_ts_files_from_its_dependencies,
          relName(state, configFileName)
        );
      case 15 /* UpToDateWithInputFileText */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_up_to_date_but_needs_to_update_timestamps_of_output_files_that_are_older_than_input_files,
          relName(state, configFileName)
        );
      case 11 /* UpstreamOutOfDate */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_its_dependency_1_is_out_of_date,
          relName(state, configFileName),
          relName(state, status.upstreamProjectName)
        );
      case 12 /* UpstreamBlocked */:
        return reportStatus(
          state,
          status.upstreamProjectBlocked ? Diagnostics.Project_0_can_t_be_built_because_its_dependency_1_was_not_built : Diagnostics.Project_0_can_t_be_built_because_its_dependency_1_has_errors,
          relName(state, configFileName),
          relName(state, status.upstreamProjectName)
        );
      case 0 /* Unbuildable */:
        return reportStatus(
          state,
          Diagnostics.Failed_to_parse_file_0_Colon_1,
          relName(state, configFileName),
          status.reason
        );
      case 14 /* TsVersionOutputOfDate */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_out_of_date_because_output_for_it_was_generated_with_version_1_that_differs_with_current_version_2,
          relName(state, configFileName),
          status.version,
          version
        );
      case 17 /* ForceBuild */:
        return reportStatus(
          state,
          Diagnostics.Project_0_is_being_forcibly_rebuilt,
          relName(state, configFileName)
        );
      case 16 /* ContainerOnly */:
      case 13 /* ComputingUpstream */:
        break;
      default:
        assertType(status);
    }
  }
  function verboseReportProjectStatus(state, configFileName, status) {
    if (state.options.verbose) {
      reportUpToDateStatus(state, configFileName, status);
    }
  }
  var minimumDate, maximumDate, InvalidatedProjectKind;
  var init_tsbuildPublic = __esm({
    "src/compiler/tsbuildPublic.ts"() {
      "use strict";
      init_ts2();
      init_ts_performance();
      minimumDate = /* @__PURE__ */ new Date(-864e13);
      maximumDate = /* @__PURE__ */ new Date(864e13);
      InvalidatedProjectKind = /* @__PURE__ */ ((InvalidatedProjectKind2) => {
        InvalidatedProjectKind2[InvalidatedProjectKind2["Build"] = 0] = "Build";
        InvalidatedProjectKind2[InvalidatedProjectKind2["UpdateBundle"] = 1] = "UpdateBundle";
        InvalidatedProjectKind2[InvalidatedProjectKind2["UpdateOutputFileStamps"] = 2] = "UpdateOutputFileStamps";
        return InvalidatedProjectKind2;
      })(InvalidatedProjectKind || {});
    }
  });

  // src/compiler/_namespaces/ts.ts
  var init_ts2 = __esm({
    "src/compiler/_namespaces/ts.ts"() {
      "use strict";
      init_corePublic();
      init_core();
      init_debug();
      init_semver();
      init_performanceCore();
      init_perfLogger();
      init_tracing();
      init_types();
      init_sys();
      init_path();
      init_diagnosticInformationMap_generated();
      init_scanner();
      init_utilitiesPublic();
      init_utilities();
      init_baseNodeFactory();
      init_parenthesizerRules();
      init_nodeConverters();
      init_nodeFactory();
      init_emitNode();
      init_emitHelpers();
      init_nodeTests();
      init_utilities2();
      init_utilitiesPublic2();
      init_parser();
      init_commandLineParser();
      init_moduleNameResolver();
      init_binder();
      init_symbolWalker();
      init_checker();
      init_visitorPublic();
      init_sourcemap();
      init_utilities3();
      init_destructuring();
      init_taggedTemplate();
      init_ts();
      init_classFields();
      init_typeSerializer();
      init_legacyDecorators();
      init_esDecorators();
      init_es2017();
      init_es2018();
      init_es2019();
      init_es2020();
      init_es2021();
      init_esnext();
      init_jsx();
      init_es2016();
      init_es2015();
      init_es5();
      init_generators();
      init_module();
      init_system();
      init_esnextAnd2015();
      init_node();
      init_diagnostics();
      init_declarations();
      init_transformer();
      init_emitter();
      init_watchUtilities();
      init_program();
      init_builderStatePublic();
      init_builderState();
      init_builder();
      init_builderPublic();
      init_resolutionCache();
      init_watch();
      init_watchPublic();
      init_tsbuild();
      init_tsbuildPublic();
      init_ts_moduleSpecifiers();
      init_ts_performance();
    }
  });

  // src/jsTyping/jsTyping.ts
  function isTypingUpToDate(cachedTyping, availableTypingVersions) {
    const availableVersion = new Version(getProperty(availableTypingVersions, `ts${versionMajorMinor}`) || getProperty(availableTypingVersions, "latest"));
    return availableVersion.compareTo(cachedTyping.version) <= 0;
  }
  function nonRelativeModuleNameForTypingCache(moduleName) {
    return nodeCoreModules.has(moduleName) ? "node" : moduleName;
  }
  function loadSafeList(host, safeListPath) {
    const result = readConfigFile(safeListPath, (path) => host.readFile(path));
    return new Map(Object.entries(result.config));
  }
  function loadTypesMap(host, typesMapPath) {
    var _a;
    const result = readConfigFile(typesMapPath, (path) => host.readFile(path));
    if ((_a = result.config) == null ? void 0 : _a.simpleMap) {
      return new Map(Object.entries(result.config.simpleMap));
    }
    return void 0;
  }
  function discoverTypings(host, log, fileNames, projectRootPath, safeList, packageNameToTypingLocation, typeAcquisition, unresolvedImports, typesRegistry, compilerOptions) {
    if (!typeAcquisition || !typeAcquisition.enable) {
      return { cachedTypingPaths: [], newTypingNames: [], filesToWatch: [] };
    }
    const inferredTypings = /* @__PURE__ */ new Map();
    fileNames = mapDefined(fileNames, (fileName) => {
      const path = normalizePath(fileName);
      if (hasJSFileExtension(path)) {
        return path;
      }
    });
    const filesToWatch = [];
    if (typeAcquisition.include)
      addInferredTypings(typeAcquisition.include, "Explicitly included types");
    const exclude = typeAcquisition.exclude || [];
    if (!compilerOptions.types) {
      const possibleSearchDirs = new Set(fileNames.map(getDirectoryPath));
      possibleSearchDirs.add(projectRootPath);
      possibleSearchDirs.forEach((searchDir) => {
        getTypingNames(searchDir, "bower.json", "bower_components", filesToWatch);
        getTypingNames(searchDir, "package.json", "node_modules", filesToWatch);
      });
    }
    if (!typeAcquisition.disableFilenameBasedTypeAcquisition) {
      getTypingNamesFromSourceFileNames(fileNames);
    }
    if (unresolvedImports) {
      const module2 = deduplicate(
        unresolvedImports.map(nonRelativeModuleNameForTypingCache),
        equateStringsCaseSensitive,
        compareStringsCaseSensitive
      );
      addInferredTypings(module2, "Inferred typings from unresolved imports");
    }
    packageNameToTypingLocation.forEach((typing, name) => {
      const registryEntry = typesRegistry.get(name);
      if (inferredTypings.has(name) && inferredTypings.get(name) === void 0 && registryEntry !== void 0 && isTypingUpToDate(typing, registryEntry)) {
        inferredTypings.set(name, typing.typingLocation);
      }
    });
    for (const excludeTypingName of exclude) {
      const didDelete = inferredTypings.delete(excludeTypingName);
      if (didDelete && log)
        log(`Typing for ${excludeTypingName} is in exclude list, will be ignored.`);
    }
    const newTypingNames = [];
    const cachedTypingPaths = [];
    inferredTypings.forEach((inferred, typing) => {
      if (inferred !== void 0) {
        cachedTypingPaths.push(inferred);
      } else {
        newTypingNames.push(typing);
      }
    });
    const result = { cachedTypingPaths, newTypingNames, filesToWatch };
    if (log)
      log(`Result: ${JSON.stringify(result)}`);
    return result;
    function addInferredTyping(typingName) {
      if (!inferredTypings.has(typingName)) {
        inferredTypings.set(typingName, void 0);
      }
    }
    function addInferredTypings(typingNames, message) {
      if (log)
        log(`${message}: ${JSON.stringify(typingNames)}`);
      forEach(typingNames, addInferredTyping);
    }
    function getTypingNames(projectRootPath2, manifestName, modulesDirName, filesToWatch2) {
      const manifestPath = combinePaths(projectRootPath2, manifestName);
      let manifest;
      let manifestTypingNames;
      if (host.fileExists(manifestPath)) {
        filesToWatch2.push(manifestPath);
        manifest = readConfigFile(manifestPath, (path) => host.readFile(path)).config;
        manifestTypingNames = flatMap([manifest.dependencies, manifest.devDependencies, manifest.optionalDependencies, manifest.peerDependencies], getOwnKeys);
        addInferredTypings(manifestTypingNames, `Typing names in '${manifestPath}' dependencies`);
      }
      const packagesFolderPath = combinePaths(projectRootPath2, modulesDirName);
      filesToWatch2.push(packagesFolderPath);
      if (!host.directoryExists(packagesFolderPath)) {
        return;
      }
      const packageNames = [];
      const dependencyManifestNames = manifestTypingNames ? manifestTypingNames.map((typingName) => combinePaths(packagesFolderPath, typingName, manifestName)) : host.readDirectory(
        packagesFolderPath,
        [".json" /* Json */],
        /*excludes*/
        void 0,
        /*includes*/
        void 0,
        /*depth*/
        3
      ).filter((manifestPath2) => {
        if (getBaseFileName(manifestPath2) !== manifestName) {
          return false;
        }
        const pathComponents2 = getPathComponents(normalizePath(manifestPath2));
        const isScoped = pathComponents2[pathComponents2.length - 3][0] === "@";
        return isScoped && toFileNameLowerCase(pathComponents2[pathComponents2.length - 4]) === modulesDirName || // `node_modules/@foo/bar`
        !isScoped && toFileNameLowerCase(pathComponents2[pathComponents2.length - 3]) === modulesDirName;
      });
      if (log)
        log(`Searching for typing names in ${packagesFolderPath}; all files: ${JSON.stringify(dependencyManifestNames)}`);
      for (const manifestPath2 of dependencyManifestNames) {
        const normalizedFileName = normalizePath(manifestPath2);
        const result2 = readConfigFile(normalizedFileName, (path) => host.readFile(path));
        const manifest2 = result2.config;
        if (!manifest2.name) {
          continue;
        }
        const ownTypes = manifest2.types || manifest2.typings;
        if (ownTypes) {
          const absolutePath = getNormalizedAbsolutePath(ownTypes, getDirectoryPath(normalizedFileName));
          if (host.fileExists(absolutePath)) {
            if (log)
              log(`    Package '${manifest2.name}' provides its own types.`);
            inferredTypings.set(manifest2.name, absolutePath);
          } else {
            if (log)
              log(`    Package '${manifest2.name}' provides its own types but they are missing.`);
          }
        } else {
          packageNames.push(manifest2.name);
        }
      }
      addInferredTypings(packageNames, "    Found package names");
    }
    function getTypingNamesFromSourceFileNames(fileNames2) {
      const fromFileNames = mapDefined(fileNames2, (j) => {
        if (!hasJSFileExtension(j))
          return void 0;
        const inferredTypingName = removeFileExtension(toFileNameLowerCase(getBaseFileName(j)));
        const cleanedTypingName = removeMinAndVersionNumbers(inferredTypingName);
        return safeList.get(cleanedTypingName);
      });
      if (fromFileNames.length) {
        addInferredTypings(fromFileNames, "Inferred typings from file names");
      }
      const hasJsxFile = some(fileNames2, (f) => fileExtensionIs(f, ".jsx" /* Jsx */));
      if (hasJsxFile) {
        if (log)
          log(`Inferred 'react' typings due to presence of '.jsx' extension`);
        addInferredTyping("react");
      }
    }
  }
  function validatePackageName(packageName) {
    return validatePackageNameWorker(
      packageName,
      /*supportScopedPackage*/
      true
    );
  }
  function validatePackageNameWorker(packageName, supportScopedPackage) {
    if (!packageName) {
      return 1 /* EmptyName */;
    }
    if (packageName.length > maxPackageNameLength) {
      return 2 /* NameTooLong */;
    }
    if (packageName.charCodeAt(0) === 46 /* dot */) {
      return 3 /* NameStartsWithDot */;
    }
    if (packageName.charCodeAt(0) === 95 /* _ */) {
      return 4 /* NameStartsWithUnderscore */;
    }
    if (supportScopedPackage) {
      const matches = /^@([^/]+)\/([^/]+)$/.exec(packageName);
      if (matches) {
        const scopeResult = validatePackageNameWorker(
          matches[1],
          /*supportScopedPackage*/
          false
        );
        if (scopeResult !== 0 /* Ok */) {
          return { name: matches[1], isScopeName: true, result: scopeResult };
        }
        const packageResult = validatePackageNameWorker(
          matches[2],
          /*supportScopedPackage*/
          false
        );
        if (packageResult !== 0 /* Ok */) {
          return { name: matches[2], isScopeName: false, result: packageResult };
        }
        return 0 /* Ok */;
      }
    }
    if (encodeURIComponent(packageName) !== packageName) {
      return 5 /* NameContainsNonURISafeCharacters */;
    }
    return 0 /* Ok */;
  }
  function renderPackageNameValidationFailure(result, typing) {
    return typeof result === "object" ? renderPackageNameValidationFailureWorker(typing, result.result, result.name, result.isScopeName) : renderPackageNameValidationFailureWorker(
      typing,
      result,
      typing,
      /*isScopeName*/
      false
    );
  }
  function renderPackageNameValidationFailureWorker(typing, result, name, isScopeName) {
    const kind = isScopeName ? "Scope" : "Package";
    switch (result) {
      case 1 /* EmptyName */:
        return `'${typing}':: ${kind} name '${name}' cannot be empty`;
      case 2 /* NameTooLong */:
        return `'${typing}':: ${kind} name '${name}' should be less than ${maxPackageNameLength} characters`;
      case 3 /* NameStartsWithDot */:
        return `'${typing}':: ${kind} name '${name}' cannot start with '.'`;
      case 4 /* NameStartsWithUnderscore */:
        return `'${typing}':: ${kind} name '${name}' cannot start with '_'`;
      case 5 /* NameContainsNonURISafeCharacters */:
        return `'${typing}':: ${kind} name '${name}' contains non URI safe characters`;
      case 0 /* Ok */:
        return Debug.fail();
      default:
        Debug.assertNever(result);
    }
  }
  var unprefixedNodeCoreModuleList, prefixedNodeCoreModuleList, nodeCoreModuleList, nodeCoreModules, NameValidationResult, maxPackageNameLength;
  var init_jsTyping = __esm({
    "src/jsTyping/jsTyping.ts"() {
      "use strict";
      init_ts3();
      unprefixedNodeCoreModuleList = [
        "assert",
        "assert/strict",
        "async_hooks",
        "buffer",
        "child_process",
        "cluster",
        "console",
        "constants",
        "crypto",
        "dgram",
        "diagnostics_channel",
        "dns",
        "dns/promises",
        "domain",
        "events",
        "fs",
        "fs/promises",
        "http",
        "https",
        "http2",
        "inspector",
        "module",
        "net",
        "os",
        "path",
        "perf_hooks",
        "process",
        "punycode",
        "querystring",
        "readline",
        "repl",
        "stream",
        "stream/promises",
        "string_decoder",
        "timers",
        "timers/promises",
        "tls",
        "trace_events",
        "tty",
        "url",
        "util",
        "util/types",
        "v8",
        "vm",
        "wasi",
        "worker_threads",
        "zlib"
      ];
      prefixedNodeCoreModuleList = unprefixedNodeCoreModuleList.map((name) => `node:${name}`);
      nodeCoreModuleList = [...unprefixedNodeCoreModuleList, ...prefixedNodeCoreModuleList];
      nodeCoreModules = new Set(nodeCoreModuleList);
      NameValidationResult = /* @__PURE__ */ ((NameValidationResult2) => {
        NameValidationResult2[NameValidationResult2["Ok"] = 0] = "Ok";
        NameValidationResult2[NameValidationResult2["EmptyName"] = 1] = "EmptyName";
        NameValidationResult2[NameValidationResult2["NameTooLong"] = 2] = "NameTooLong";
        NameValidationResult2[NameValidationResult2["NameStartsWithDot"] = 3] = "NameStartsWithDot";
        NameValidationResult2[NameValidationResult2["NameStartsWithUnderscore"] = 4] = "NameStartsWithUnderscore";
        NameValidationResult2[NameValidationResult2["NameContainsNonURISafeCharacters"] = 5] = "NameContainsNonURISafeCharacters";
        return NameValidationResult2;
      })(NameValidationResult || {});
      maxPackageNameLength = 214;
    }
  });

  // src/jsTyping/_namespaces/ts.JsTyping.ts
  var ts_JsTyping_exports = {};
  __export(ts_JsTyping_exports, {
    NameValidationResult: () => NameValidationResult,
    discoverTypings: () => discoverTypings,
    isTypingUpToDate: () => isTypingUpToDate,
    loadSafeList: () => loadSafeList,
    loadTypesMap: () => loadTypesMap,
    nodeCoreModuleList: () => nodeCoreModuleList,
    nodeCoreModules: () => nodeCoreModules,
    nonRelativeModuleNameForTypingCache: () => nonRelativeModuleNameForTypingCache,
    prefixedNodeCoreModuleList: () => prefixedNodeCoreModuleList,
    renderPackageNameValidationFailure: () => renderPackageNameValidationFailure,
    validatePackageName: () => validatePackageName
  });
  var init_ts_JsTyping = __esm({
    "src/jsTyping/_namespaces/ts.JsTyping.ts"() {
      "use strict";
      init_jsTyping();
    }
  });

  // src/jsTyping/shared.ts
  function hasArgument(argumentName) {
    return sys.args.indexOf(argumentName) >= 0;
  }
  function findArgument(argumentName) {
    const index = sys.args.indexOf(argumentName);
    return index >= 0 && index < sys.args.length - 1 ? sys.args[index + 1] : void 0;
  }
  function nowString() {
    const d = /* @__PURE__ */ new Date();
    return `${padLeft(d.getHours().toString(), 2, "0")}:${padLeft(d.getMinutes().toString(), 2, "0")}:${padLeft(d.getSeconds().toString(), 2, "0")}.${padLeft(d.getMilliseconds().toString(), 3, "0")}`;
  }
  var ActionSet, ActionInvalidate, ActionPackageInstalled, EventTypesRegistry, EventBeginInstallTypes, EventEndInstallTypes, EventInitializationFailed, ActionWatchTypingLocations, Arguments;
  var init_shared = __esm({
    "src/jsTyping/shared.ts"() {
      "use strict";
      init_ts3();
      ActionSet = "action::set";
      ActionInvalidate = "action::invalidate";
      ActionPackageInstalled = "action::packageInstalled";
      EventTypesRegistry = "event::typesRegistry";
      EventBeginInstallTypes = "event::beginInstallTypes";
      EventEndInstallTypes = "event::endInstallTypes";
      EventInitializationFailed = "event::initializationFailed";
      ActionWatchTypingLocations = "action::watchTypingLocations";
      ((Arguments2) => {
        Arguments2.GlobalCacheLocation = "--globalTypingsCacheLocation";
        Arguments2.LogFile = "--logFile";
        Arguments2.EnableTelemetry = "--enableTelemetry";
        Arguments2.TypingSafeListLocation = "--typingSafeListLocation";
        Arguments2.TypesMapLocation = "--typesMapLocation";
        Arguments2.NpmLocation = "--npmLocation";
        Arguments2.ValidateDefaultNpmLocation = "--validateDefaultNpmLocation";
      })(Arguments || (Arguments = {}));
    }
  });

  // src/jsTyping/types.ts
  var init_types2 = __esm({
    "src/jsTyping/types.ts"() {
      "use strict";
    }
  });

  // src/jsTyping/_namespaces/ts.server.ts
  var init_ts_server = __esm({
    "src/jsTyping/_namespaces/ts.server.ts"() {
      "use strict";
      init_shared();
      init_types2();
    }
  });

  // src/jsTyping/_namespaces/ts.ts
  var init_ts3 = __esm({
    "src/jsTyping/_namespaces/ts.ts"() {
      "use strict";
      init_ts2();
      init_ts_JsTyping();
      init_ts_server();
    }
  });

  // src/services/types.ts
  function getDefaultFormatCodeSettings(newLineCharacter) {
    return {
      indentSize: 4,
      tabSize: 4,
      newLineCharacter: newLineCharacter || "\n",
      convertTabsToSpaces: true,
      indentStyle: 2 /* Smart */,
      insertSpaceAfterConstructor: false,
      insertSpaceAfterCommaDelimiter: true,
      insertSpaceAfterSemicolonInForStatements: true,
      insertSpaceBeforeAndAfterBinaryOperators: true,
      insertSpaceAfterKeywordsInControlFlowStatements: true,
      insertSpaceAfterFunctionKeywordForAnonymousFunctions: false,
      insertSpaceAfterOpeningAndBeforeClosingNonemptyParenthesis: false,
      insertSpaceAfterOpeningAndBeforeClosingNonemptyBrackets: false,
      insertSpaceAfterOpeningAndBeforeClosingNonemptyBraces: true,
      insertSpaceAfterOpeningAndBeforeClosingTemplateStringBraces: false,
      insertSpaceAfterOpeningAndBeforeClosingJsxExpressionBraces: false,
      insertSpaceBeforeFunctionParenthesis: false,
      placeOpenBraceOnNewLineForFunctions: false,
      placeOpenBraceOnNewLineForControlBlocks: false,
      semicolons: "ignore" /* Ignore */,
      trimTrailingWhitespace: true,
      indentSwitchCase: true
    };
  }
  var ScriptSnapshot, PackageJsonDependencyGroup, PackageJsonAutoImportPreference, LanguageServiceMode, emptyOptions, SemanticClassificationFormat, OrganizeImportsMode, CompletionTriggerKind, InlayHintKind, HighlightSpanKind, IndentStyle, SemicolonPreference, testFormatSettings, SymbolDisplayPartKind, CompletionInfoFlags, OutliningSpanKind, OutputFileType, EndOfLineState, TokenClass, ScriptElementKind, ScriptElementKindModifier, ClassificationTypeNames, ClassificationType;
  var init_types3 = __esm({
    "src/services/types.ts"() {
      "use strict";
      ((ScriptSnapshot2) => {
        class StringScriptSnapshot {
          constructor(text) {
            this.text = text;
          }
          getText(start, end) {
            return start === 0 && end === this.text.length ? this.text : this.text.substring(start, end);
          }
          getLength() {
            return this.text.length;
          }
          getChangeRange() {
            return void 0;
          }
        }
        function fromString(text) {
          return new StringScriptSnapshot(text);
        }
        ScriptSnapshot2.fromString = fromString;
      })(ScriptSnapshot || (ScriptSnapshot = {}));
      PackageJsonDependencyGroup = /* @__PURE__ */ ((PackageJsonDependencyGroup2) => {
        PackageJsonDependencyGroup2[PackageJsonDependencyGroup2["Dependencies"] = 1] = "Dependencies";
        PackageJsonDependencyGroup2[PackageJsonDependencyGroup2["DevDependencies"] = 2] = "DevDependencies";
        PackageJsonDependencyGroup2[PackageJsonDependencyGroup2["PeerDependencies"] = 4] = "PeerDependencies";
        PackageJsonDependencyGroup2[PackageJsonDependencyGroup2["OptionalDependencies"] = 8] = "OptionalDependencies";
        PackageJsonDependencyGroup2[PackageJsonDependencyGroup2["All"] = 15] = "All";
        return PackageJsonDependencyGroup2;
      })(PackageJsonDependencyGroup || {});
      PackageJsonAutoImportPreference = /* @__PURE__ */ ((PackageJsonAutoImportPreference2) => {
        PackageJsonAutoImportPreference2[PackageJsonAutoImportPreference2["Off"] = 0] = "Off";
        PackageJsonAutoImportPreference2[PackageJsonAutoImportPreference2["On"] = 1] = "On";
        PackageJsonAutoImportPreference2[PackageJsonAutoImportPreference2["Auto"] = 2] = "Auto";
        return PackageJsonAutoImportPreference2;
      })(PackageJsonAutoImportPreference || {});
      LanguageServiceMode = /* @__PURE__ */ ((LanguageServiceMode2) => {
        LanguageServiceMode2[LanguageServiceMode2["Semantic"] = 0] = "Semantic";
        LanguageServiceMode2[LanguageServiceMode2["PartialSemantic"] = 1] = "PartialSemantic";
        LanguageServiceMode2[LanguageServiceMode2["Syntactic"] = 2] = "Syntactic";
        return LanguageServiceMode2;
      })(LanguageServiceMode || {});
      emptyOptions = {};
      SemanticClassificationFormat = /* @__PURE__ */ ((SemanticClassificationFormat3) => {
        SemanticClassificationFormat3["Original"] = "original";
        SemanticClassificationFormat3["TwentyTwenty"] = "2020";
        return SemanticClassificationFormat3;
      })(SemanticClassificationFormat || {});
      OrganizeImportsMode = /* @__PURE__ */ ((OrganizeImportsMode3) => {
        OrganizeImportsMode3["All"] = "All";
        OrganizeImportsMode3["SortAndCombine"] = "SortAndCombine";
        OrganizeImportsMode3["RemoveUnused"] = "RemoveUnused";
        return OrganizeImportsMode3;
      })(OrganizeImportsMode || {});
      CompletionTriggerKind = /* @__PURE__ */ ((CompletionTriggerKind4) => {
        CompletionTriggerKind4[CompletionTriggerKind4["Invoked"] = 1] = "Invoked";
        CompletionTriggerKind4[CompletionTriggerKind4["TriggerCharacter"] = 2] = "TriggerCharacter";
        CompletionTriggerKind4[CompletionTriggerKind4["TriggerForIncompleteCompletions"] = 3] = "TriggerForIncompleteCompletions";
        return CompletionTriggerKind4;
      })(CompletionTriggerKind || {});
      InlayHintKind = /* @__PURE__ */ ((InlayHintKind2) => {
        InlayHintKind2["Type"] = "Type";
        InlayHintKind2["Parameter"] = "Parameter";
        InlayHintKind2["Enum"] = "Enum";
        return InlayHintKind2;
      })(InlayHintKind || {});
      HighlightSpanKind = /* @__PURE__ */ ((HighlightSpanKind2) => {
        HighlightSpanKind2["none"] = "none";
        HighlightSpanKind2["definition"] = "definition";
        HighlightSpanKind2["reference"] = "reference";
        HighlightSpanKind2["writtenReference"] = "writtenReference";
        return HighlightSpanKind2;
      })(HighlightSpanKind || {});
      IndentStyle = /* @__PURE__ */ ((IndentStyle3) => {
        IndentStyle3[IndentStyle3["None"] = 0] = "None";
        IndentStyle3[IndentStyle3["Block"] = 1] = "Block";
        IndentStyle3[IndentStyle3["Smart"] = 2] = "Smart";
        return IndentStyle3;
      })(IndentStyle || {});
      SemicolonPreference = /* @__PURE__ */ ((SemicolonPreference3) => {
        SemicolonPreference3["Ignore"] = "ignore";
        SemicolonPreference3["Insert"] = "insert";
        SemicolonPreference3["Remove"] = "remove";
        return SemicolonPreference3;
      })(SemicolonPreference || {});
      testFormatSettings = getDefaultFormatCodeSettings("\n");
      SymbolDisplayPartKind = /* @__PURE__ */ ((SymbolDisplayPartKind2) => {
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["aliasName"] = 0] = "aliasName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["className"] = 1] = "className";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["enumName"] = 2] = "enumName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["fieldName"] = 3] = "fieldName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["interfaceName"] = 4] = "interfaceName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["keyword"] = 5] = "keyword";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["lineBreak"] = 6] = "lineBreak";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["numericLiteral"] = 7] = "numericLiteral";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["stringLiteral"] = 8] = "stringLiteral";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["localName"] = 9] = "localName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["methodName"] = 10] = "methodName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["moduleName"] = 11] = "moduleName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["operator"] = 12] = "operator";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["parameterName"] = 13] = "parameterName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["propertyName"] = 14] = "propertyName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["punctuation"] = 15] = "punctuation";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["space"] = 16] = "space";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["text"] = 17] = "text";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["typeParameterName"] = 18] = "typeParameterName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["enumMemberName"] = 19] = "enumMemberName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["functionName"] = 20] = "functionName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["regularExpressionLiteral"] = 21] = "regularExpressionLiteral";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["link"] = 22] = "link";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["linkName"] = 23] = "linkName";
        SymbolDisplayPartKind2[SymbolDisplayPartKind2["linkText"] = 24] = "linkText";
        return SymbolDisplayPartKind2;
      })(SymbolDisplayPartKind || {});
      CompletionInfoFlags = /* @__PURE__ */ ((CompletionInfoFlags2) => {
        CompletionInfoFlags2[CompletionInfoFlags2["None"] = 0] = "None";
        CompletionInfoFlags2[CompletionInfoFlags2["MayIncludeAutoImports"] = 1] = "MayIncludeAutoImports";
        CompletionInfoFlags2[CompletionInfoFlags2["IsImportStatementCompletion"] = 2] = "IsImportStatementCompletion";
        CompletionInfoFlags2[CompletionInfoFlags2["IsContinuation"] = 4] = "IsContinuation";
        CompletionInfoFlags2[CompletionInfoFlags2["ResolvedModuleSpecifiers"] = 8] = "ResolvedModuleSpecifiers";
        CompletionInfoFlags2[CompletionInfoFlags2["ResolvedModuleSpecifiersBeyondLimit"] = 16] = "ResolvedModuleSpecifiersBeyondLimit";
        CompletionInfoFlags2[CompletionInfoFlags2["MayIncludeMethodSnippets"] = 32] = "MayIncludeMethodSnippets";
        return CompletionInfoFlags2;
      })(CompletionInfoFlags || {});
      OutliningSpanKind = /* @__PURE__ */ ((OutliningSpanKind2) => {
        OutliningSpanKind2["Comment"] = "comment";
        OutliningSpanKind2["Region"] = "region";
        OutliningSpanKind2["Code"] = "code";
        OutliningSpanKind2["Imports"] = "imports";
        return OutliningSpanKind2;
      })(OutliningSpanKind || {});
      OutputFileType = /* @__PURE__ */ ((OutputFileType2) => {
        OutputFileType2[OutputFileType2["JavaScript"] = 0] = "JavaScript";
        OutputFileType2[OutputFileType2["SourceMap"] = 1] = "SourceMap";
        OutputFileType2[OutputFileType2["Declaration"] = 2] = "Declaration";
        return OutputFileType2;
      })(OutputFileType || {});
      EndOfLineState = /* @__PURE__ */ ((EndOfLineState3) => {
        EndOfLineState3[EndOfLineState3["None"] = 0] = "None";
        EndOfLineState3[EndOfLineState3["InMultiLineCommentTrivia"] = 1] = "InMultiLineCommentTrivia";
        EndOfLineState3[EndOfLineState3["InSingleQuoteStringLiteral"] = 2] = "InSingleQuoteStringLiteral";
        EndOfLineState3[EndOfLineState3["InDoubleQuoteStringLiteral"] = 3] = "InDoubleQuoteStringLiteral";
        EndOfLineState3[EndOfLineState3["InTemplateHeadOrNoSubstitutionTemplate"] = 4] = "InTemplateHeadOrNoSubstitutionTemplate";
        EndOfLineState3[EndOfLineState3["InTemplateMiddleOrTail"] = 5] = "InTemplateMiddleOrTail";
        EndOfLineState3[EndOfLineState3["InTemplateSubstitutionPosition"] = 6] = "InTemplateSubstitutionPosition";
        return EndOfLineState3;
      })(EndOfLineState || {});
      TokenClass = /* @__PURE__ */ ((TokenClass2) => {
        TokenClass2[TokenClass2["Punctuation"] = 0] = "Punctuation";
        TokenClass2[TokenClass2["Keyword"] = 1] = "Keyword";
        TokenClass2[TokenClass2["Operator"] = 2] = "Operator";
        TokenClass2[TokenClass2["Comment"] = 3] = "Comment";
        TokenClass2[TokenClass2["Whitespace"] = 4] = "Whitespace";
        TokenClass2[TokenClass2["Identifier"] = 5] = "Identifier";
        TokenClass2[TokenClass2["NumberLiteral"] = 6] = "NumberLiteral";
        TokenClass2[TokenClass2["BigIntLiteral"] = 7] = "BigIntLiteral";
        TokenClass2[TokenClass2["StringLiteral"] = 8] = "StringLiteral";
        TokenClass2[TokenClass2["RegExpLiteral"] = 9] = "RegExpLiteral";
        return TokenClass2;
      })(TokenClass || {});
      ScriptElementKind = /* @__PURE__ */ ((ScriptElementKind2) => {
        ScriptElementKind2["unknown"] = "";
        ScriptElementKind2["warning"] = "warning";
        ScriptElementKind2["keyword"] = "keyword";
        ScriptElementKind2["scriptElement"] = "script";
        ScriptElementKind2["moduleElement"] = "module";
        ScriptElementKind2["classElement"] = "class";
        ScriptElementKind2["localClassElement"] = "local class";
        ScriptElementKind2["interfaceElement"] = "interface";
        ScriptElementKind2["typeElement"] = "type";
        ScriptElementKind2["enumElement"] = "enum";
        ScriptElementKind2["enumMemberElement"] = "enum member";
        ScriptElementKind2["variableElement"] = "var";
        ScriptElementKind2["localVariableElement"] = "local var";
        ScriptElementKind2["functionElement"] = "function";
        ScriptElementKind2["localFunctionElement"] = "local function";
        ScriptElementKind2["memberFunctionElement"] = "method";
        ScriptElementKind2["memberGetAccessorElement"] = "getter";
        ScriptElementKind2["memberSetAccessorElement"] = "setter";
        ScriptElementKind2["memberVariableElement"] = "property";
        ScriptElementKind2["memberAccessorVariableElement"] = "accessor";
        ScriptElementKind2["constructorImplementationElement"] = "constructor";
        ScriptElementKind2["callSignatureElement"] = "call";
        ScriptElementKind2["indexSignatureElement"] = "index";
        ScriptElementKind2["constructSignatureElement"] = "construct";
        ScriptElementKind2["parameterElement"] = "parameter";
        ScriptElementKind2["typeParameterElement"] = "type parameter";
        ScriptElementKind2["primitiveType"] = "primitive type";
        ScriptElementKind2["label"] = "label";
        ScriptElementKind2["alias"] = "alias";
        ScriptElementKind2["constElement"] = "const";
        ScriptElementKind2["letElement"] = "let";
        ScriptElementKind2["directory"] = "directory";
        ScriptElementKind2["externalModuleName"] = "external module name";
        ScriptElementKind2["jsxAttribute"] = "JSX attribute";
        ScriptElementKind2["string"] = "string";
        ScriptElementKind2["link"] = "link";
        ScriptElementKind2["linkName"] = "link name";
        ScriptElementKind2["linkText"] = "link text";
        return ScriptElementKind2;
      })(ScriptElementKind || {});
      ScriptElementKindModifier = /* @__PURE__ */ ((ScriptElementKindModifier2) => {
        ScriptElementKindModifier2["none"] = "";
        ScriptElementKindModifier2["publicMemberModifier"] = "public";
        ScriptElementKindModifier2["privateMemberModifier"] = "private";
        ScriptElementKindModifier2["protectedMemberModifier"] = "protected";
        ScriptElementKindModifier2["exportedModifier"] = "export";
        ScriptElementKindModifier2["ambientModifier"] = "declare";
        ScriptElementKindModifier2["staticModifier"] = "static";
        ScriptElementKindModifier2["abstractModifier"] = "abstract";
        ScriptElementKindModifier2["optionalModifier"] = "optional";
        ScriptElementKindModifier2["deprecatedModifier"] = "deprecated";
        ScriptElementKindModifier2["dtsModifier"] = ".d.ts";
        ScriptElementKindModifier2["tsModifier"] = ".ts";
        ScriptElementKindModifier2["tsxModifier"] = ".tsx";
        ScriptElementKindModifier2["jsModifier"] = ".js";
        ScriptElementKindModifier2["jsxModifier"] = ".jsx";
        ScriptElementKindModifier2["jsonModifier"] = ".json";
        ScriptElementKindModifier2["dmtsModifier"] = ".d.mts";
        ScriptElementKindModifier2["mtsModifier"] = ".mts";
        ScriptElementKindModifier2["mjsModifier"] = ".mjs";
        ScriptElementKindModifier2["dctsModifier"] = ".d.cts";
        ScriptElementKindModifier2["ctsModifier"] = ".cts";
        ScriptElementKindModifier2["cjsModifier"] = ".cjs";
        return ScriptElementKindModifier2;
      })(ScriptElementKindModifier || {});
      ClassificationTypeNames = /* @__PURE__ */ ((ClassificationTypeNames2) => {
        ClassificationTypeNames2["comment"] = "comment";
        ClassificationTypeNames2["identifier"] = "identifier";
        ClassificationTypeNames2["keyword"] = "keyword";
        ClassificationTypeNames2["numericLiteral"] = "number";
        ClassificationTypeNames2["bigintLiteral"] = "bigint";
        ClassificationTypeNames2["operator"] = "operator";
        ClassificationTypeNames2["stringLiteral"] = "string";
        ClassificationTypeNames2["whiteSpace"] = "whitespace";
        ClassificationTypeNames2["text"] = "text";
        ClassificationTypeNames2["punctuation"] = "punctuation";
        ClassificationTypeNames2["className"] = "class name";
        ClassificationTypeNames2["enumName"] = "enum name";
        ClassificationTypeNames2["interfaceName"] = "interface name";
        ClassificationTypeNames2["moduleName"] = "module name";
        ClassificationTypeNames2["typeParameterName"] = "type parameter name";
        ClassificationTypeNames2["typeAliasName"] = "type alias name";
        ClassificationTypeNames2["parameterName"] = "parameter name";
        ClassificationTypeNames2["docCommentTagName"] = "doc comment tag name";
        ClassificationTypeNames2["jsxOpenTagName"] = "jsx open tag name";
        ClassificationTypeNames2["jsxCloseTagName"] = "jsx close tag name";
        ClassificationTypeNames2["jsxSelfClosingTagName"] = "jsx self closing tag name";
        ClassificationTypeNames2["jsxAttribute"] = "jsx attribute";
        ClassificationTypeNames2["jsxText"] = "jsx text";
        ClassificationTypeNames2["jsxAttributeStringLiteralValue"] = "jsx attribute string literal value";
        return ClassificationTypeNames2;
      })(ClassificationTypeNames || {});
      ClassificationType = /* @__PURE__ */ ((ClassificationType3) => {
        ClassificationType3[ClassificationType3["comment"] = 1] = "comment";
        ClassificationType3[ClassificationType3["identifier"] = 2] = "identifier";
        ClassificationType3[ClassificationType3["keyword"] = 3] = "keyword";
        ClassificationType3[ClassificationType3["numericLiteral"] = 4] = "numericLiteral";
        ClassificationType3[ClassificationType3["operator"] = 5] = "operator";
        ClassificationType3[ClassificationType3["stringLiteral"] = 6] = "stringLiteral";
        ClassificationType3[ClassificationType3["regularExpressionLiteral"] = 7] = "regularExpressionLiteral";
        ClassificationType3[ClassificationType3["whiteSpace"] = 8] = "whiteSpace";
        ClassificationType3[ClassificationType3["text"] = 9] = "text";
        ClassificationType3[ClassificationType3["punctuation"] = 10] = "punctuation";
        ClassificationType3[ClassificationType3["className"] = 11] = "className";
        ClassificationType3[ClassificationType3["enumName"] = 12] = "enumName";
        ClassificationType3[ClassificationType3["interfaceName"] = 13] = "interfaceName";
        ClassificationType3[ClassificationType3["moduleName"] = 14] = "moduleName";
        ClassificationType3[ClassificationType3["typeParameterName"] = 15] = "typeParameterName";
        ClassificationType3[ClassificationType3["typeAliasName"] = 16] = "typeAliasName";
        ClassificationType3[ClassificationType3["parameterName"] = 17] = "parameterName";
        ClassificationType3[ClassificationType3["docCommentTagName"] = 18] = "docCommentTagName";
        ClassificationType3[ClassificationType3["jsxOpenTagName"] = 19] = "jsxOpenTagName";
        ClassificationType3[ClassificationType3["jsxCloseTagName"] = 20] = "jsxCloseTagName";
        ClassificationType3[ClassificationType3["jsxSelfClosingTagName"] = 21] = "jsxSelfClosingTagName";
        ClassificationType3[ClassificationType3["jsxAttribute"] = 22] = "jsxAttribute";
        ClassificationType3[ClassificationType3["jsxText"] = 23] = "jsxText";
        ClassificationType3[ClassificationType3["jsxAttributeStringLiteralValue"] = 24] = "jsxAttributeStringLiteralValue";
        ClassificationType3[ClassificationType3["bigintLiteral"] = 25] = "bigintLiteral";
        return ClassificationType3;
      })(ClassificationType || {});
    }
  });

  // src/services/utilities.ts
  function getMeaningFromDeclaration(node) {
    switch (node.kind) {
      case 259 /* VariableDeclaration */:
        return isInJSFile(node) && getJSDocEnumTag(node) ? 7 /* All */ : 1 /* Value */;
      case 168 /* Parameter */:
      case 207 /* BindingElement */:
      case 171 /* PropertyDeclaration */:
      case 170 /* PropertySignature */:
      case 302 /* PropertyAssignment */:
      case 303 /* ShorthandPropertyAssignment */:
      case 173 /* MethodDeclaration */:
      case 172 /* MethodSignature */:
      case 175 /* Constructor */:
      case 176 /* GetAccessor */:
      case 177 /* SetAccessor */:
      case 261 /* FunctionDeclaration */:
      case 217 /* FunctionExpression */:
      case 218 /* ArrowFunction */:
      case 298 /* CatchClause */:
      case 290 /* JsxAttribute */:
        return 1 /* Value */;
      case 167 /* TypeParameter */:
      case 263 /* InterfaceDeclaration */:
      case 264 /* TypeAliasDeclaration */:
      case 186 /* TypeLiteral */:
        return 2 /* Type */;
      case 352 /* JSDocTypedefTag */:
        return node.name === void 0 ? 1 /* Value */ | 2 /* Type */ : 2 /* Type */;
      case 305 /* EnumMember */:
      case 262 /* ClassDeclaration */:
        return 1 /* Value */ | 2 /* Type */;
      case 266 /* ModuleDeclaration */:
        if (isAmbientModule(node)) {
          return 4 /* Namespace */ | 1 /* Value */;
        } else if (getModuleInstanceState(node) === 1 /* Instantiated */) {
          return 4 /* Namespace */ | 1 /* Value */;
        } else {
          return 4 /* Namespace */;
        }
      case 265 /* EnumDeclaration */:
      case 274 /* NamedImports */:
      case 275 /* ImportSpecifier */:
      case 270 /* ImportEqualsDeclaration */:
      case 271 /* ImportDeclaration */:
      case 276 /* ExportAssignment */:
      case 277 /* ExportDeclaration */:
        return 7 /* All */;
      case 311 /* SourceFile */:
        return 4 /* Namespace */ | 1 /* Value */;
    }
    return 7 /* All */;
  }
  function getMeaningFromLocation(node) {
    node = getAdjustedReferenceLocation(node);
    const parent2 = node.parent;
    if (node.kind === 311 /* SourceFile */) {
      return 1 /* Value */;
    } else if (isExportAssignment(parent2) || isExportSpecifier(parent2) || isExternalModuleReference(parent2) || isImportSpecifier(parent2) || isImportClause(parent2) || isImportEqualsDeclaration(parent2) && node === parent2.name) {
      return 7 /* All */;
    } else if (isInRightSideOfInternalImportEqualsDeclaration(node)) {
      return getMeaningFromRightHandSideOfImportEquals(node);
    } else if (isDeclarationName(node)) {
      return getMeaningFromDeclaration(parent2);
    } else if (isEntityName(node) && findAncestor(node, or(isJSDocNameReference, isJSDocLinkLike, isJSDocMemberName))) {
      return 7 /* All */;
    } else if (isTypeReference(node)) {
      return 2 /* Type */;
    } else if (isNamespaceReference(node)) {
      return 4 /* Namespace */;
    } else if (isTypeParameterDeclaration(parent2)) {
      Debug.assert(isJSDocTemplateTag(parent2.parent));
      return 2 /* Type */;
    } else if (isLiteralTypeNode(parent2)) {
      return 2 /* Type */ | 1 /* Value */;
    } else {
      return 1 /* Value */;
    }
  }
  function getMeaningFromRightHandSideOfImportEquals(node) {
    const name = node.kind === 165 /* QualifiedName */ ? node : isQualifiedName(node.parent) && node.parent.right === node ? node.parent : void 0;
    return name && name.parent.kind === 270 /* ImportEqualsDeclaration */ ? 7 /* All */ : 4 /* Namespace */;
  }
  function isInRightSideOfInternalImportEqualsDeclaration(node) {
    while (node.parent.kind === 165 /* QualifiedName */) {
      node = node.parent;
    }
    return isInternalModuleImportEqualsDeclaration(node.parent) && node.parent.moduleReference === node;
  }
  function isNamespaceReference(node) {
    return isQualifiedNameNamespaceReference(node) || isPropertyAccessNamespaceReference(node);
  }
  function isQualifiedNameNamespaceReference(node) {
    let root = node;
    let isLastClause = true;
    if (root.parent.kind === 165 /* QualifiedName */) {
      while (root.parent && root.parent.kind === 165 /* QualifiedName */) {
        root = root.parent;
      }
      isLastClause = root.right === node;
    }
    return root.parent.kind === 182 /* TypeReference */ && !isLastClause;
  }
  function isPropertyAccessNamespaceReference(node) {
    let root = node;
    let isLastClause = true;
    if (root.parent.kind === 210 /* PropertyAccessExpression */) {
      while (root.parent && root.parent.kind === 210 /* PropertyAccessExpression */) {
        root = root.parent;
      }
      isLastClause = root.name === node;
    }
    if (!isLastClause && root.parent.kind === 232 /* ExpressionWithTypeArguments */ && root.parent.parent.kind === 297 /* HeritageClause */) {
      const decl = root.parent.parent.parent;
      return decl.kind === 262 /* ClassDeclaration */ && root.parent.parent.token === 119 /* ImplementsKeyword */ || decl.kind === 263 /* InterfaceDeclaration */ && root.parent.parent.token === 96 /* ExtendsKeyword */;
    }
    return false;
  }
  function isTypeReference(node) {
    if (isRightSideOfQualifiedNameOrPropertyAccess(node)) {
      node = node.parent;
    }
    switch (node.kind) {
      case 110 /* ThisKeyword */:
        return !isExpressionNode(node);
      case 196 /* ThisType */:
        return true;
    }
    switch (node.parent.kind) {
      case 182 /* TypeReference */:
        return true;
      case 204 /* ImportType */:
        return !node.parent.isTypeOf;
      case 232 /* ExpressionWithTypeArguments */:
        return isPartOfTypeNode(node.parent);
    }
    return false;
  }
  function isCallExpressionTarget(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isCallExpression, selectExpressionOfCallOrNewExpressionOrDecorator, includeElementAccess, skipPastOuterExpressions);
  }
  function isNewExpressionTarget(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isNewExpression, selectExpressionOfCallOrNewExpressionOrDecorator, includeElementAccess, skipPastOuterExpressions);
  }
  function isCallOrNewExpressionTarget(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isCallOrNewExpression, selectExpressionOfCallOrNewExpressionOrDecorator, includeElementAccess, skipPastOuterExpressions);
  }
  function isTaggedTemplateTag(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isTaggedTemplateExpression, selectTagOfTaggedTemplateExpression, includeElementAccess, skipPastOuterExpressions);
  }
  function isDecoratorTarget(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isDecorator, selectExpressionOfCallOrNewExpressionOrDecorator, includeElementAccess, skipPastOuterExpressions);
  }
  function isJsxOpeningLikeElementTagName(node, includeElementAccess = false, skipPastOuterExpressions = false) {
    return isCalleeWorker(node, isJsxOpeningLikeElement, selectTagNameOfJsxOpeningLikeElement, includeElementAccess, skipPastOuterExpressions);
  }
  function selectExpressionOfCallOrNewExpressionOrDecorator(node) {
    return node.expression;
  }
  function selectTagOfTaggedTemplateExpression(node) {
    return node.tag;
  }
  function selectTagNameOfJsxOpeningLikeElement(node) {
    return node.tagName;
  }
  function isCalleeWorker(node, pred, calleeSelector, includeElementAccess, skipPastOuterExpressions) {
    let target = includeElementAccess ? climbPastPropertyOrElementAccess(node) : climbPastPropertyAccess(node);
    if (skipPastOuterExpressions) {
      target = skipOuterExpressions(target);
    }
    return !!target && !!target.parent && pred(target.parent) && calleeSelector(target.parent) === target;
  }
  function climbPastPropertyAccess(node) {
    return isRightSideOfPropertyAccess(node) ? node.parent : node;
  }
  function climbPastPropertyOrElementAccess(node) {
    return isRightSideOfPropertyAccess(node) || isArgumentExpressionOfElementAccess(node) ? node.parent : node;
  }
  function getTargetLabel(referenceNode, labelName) {
    while (referenceNode) {
      if (referenceNode.kind === 255 /* LabeledStatement */ && referenceNode.label.escapedText === labelName) {
        return referenceNode.label;
      }
      referenceNode = referenceNode.parent;
    }
    return void 0;
  }
  function hasPropertyAccessExpressionWithName(node, funcName) {
    if (!isPropertyAccessExpression(node.expression)) {
      return false;
    }
    return node.expression.name.text === funcName;
  }
  function isJumpStatementTarget(node) {
    var _a;
    return isIdentifier(node) && ((_a = tryCast(node.parent, isBreakOrContinueStatement)) == null ? void 0 : _a.label) === node;
  }
  function isLabelOfLabeledStatement(node) {
    var _a;
    return isIdentifier(node) && ((_a = tryCast(node.parent, isLabeledStatement)) == null ? void 0 : _a.label) === node;
  }
  function isLabelName(node) {
    return isLabelOfLabeledStatement(node) || isJumpStatementTarget(node);
  }
  function isTagName(node) {
    var _a;
    return ((_a = tryCast(node.parent, isJSDocTag)) == null ? void 0 : _a.tagName) === node;
  }
  function isRightSideOfQualifiedName(node) {
    var _a;
    return ((_a = tryCast(node.parent, isQualifiedName)) == null ? void 0 : _a.right) === node;
  }
  function isRightSideOfPropertyAccess(node) {
    var _a;
    return ((_a = tryCast(node.parent, isPropertyAccessExpression)) == null ? void 0 : _a.name) === node;
  }
  function isArgumentExpressionOfElementAccess(node) {
    var _a;
    return ((_a = tryCast(node.parent, isElementAccessExpression)) == null ? void 0 : _a.argumentExpression) === node;
  }
  function isNameOfModuleDeclaration(node) {
    var _a;
    return ((_a = tryCast(node.parent, isModuleDeclaration)) == null ? void 0 : _a.name) === node;
  }
  function isNameOfFunctionDeclaration(node) {
    var _a;
    return isIdentifier(node) && ((_a = tryCast(node.parent, isFunctionLike)) == null ? void 0 : _a.name) === node;
  }
  function isLiteralNameOfPropertyDeclarationOrIndexAccess(node) {
    switch (node.parent.kind) {
      case 171 /* PropertyDeclaration */:
      case 170 /* PropertySignature */:
      case 302 /* PropertyAssignment */:
      case 305 /* EnumMember */:
      case 173 /* MethodDeclaration */:
      case 172 /* MethodSignature */:
      case 176 /* GetAccessor */:
      case 177 /* SetAccessor */:
      case 266 /* ModuleDeclaration */:
        return getNameOfDeclaration(node.parent) === node;
      case 211 /* ElementAccessExpression */:
        return node.parent.argumentExpression === node;
      case 166 /* ComputedPropertyName */:
        return true;
      case 200 /* LiteralType */:
        return node.parent.parent.kind === 198 /* IndexedAccessType */;
      default:
        return false;
    }
  }
  function isExpressionOfExternalModuleImportEqualsDeclaration(node) {
    return isExternalModuleImportEqualsDeclaration(node.parent.parent) && getExternalModuleImportEqualsDeclarationExpression(node.parent.parent) === node;
  }
  function getContainerNode(node) {
    if (isJSDocTypeAlias(node)) {
      node = node.parent.parent;
    }
    while (true) {
      node = node.parent;
      if (!node) {
        return void 0;
      }
      switch (node.kind) {
        case 311 /* SourceFile */:
        case 173 /* MethodDeclaration */:
        case 172 /* MethodSignature */:
        case 261 /* FunctionDeclaration */:
        case 217 /* FunctionExpression */:
        case 176 /* GetAccessor */:
        case 177 /* SetAccessor */:
        case 262 /* ClassDeclaration */:
        case 263 /* InterfaceDeclaration */:
        case 265 /* EnumDeclaration */:
        case 266 /* ModuleDeclaration */:
          return node;
      }
    }
  }
  function getNodeKind(node) {
    switch (node.kind) {
      case 311 /* SourceFile */:
        return isExternalModule(node) ? "module" /* moduleElement */ : "script" /* scriptElement */;
      case 266 /* ModuleDeclaration */:
        return "module" /* moduleElement */;
      case 262 /* ClassDeclaration */:
      case 230 /* ClassExpression */:
        return "class" /* classElement */;
      case 263 /* InterfaceDeclaration */:
        return "interface" /* interfaceElement */;
      case 264 /* TypeAliasDeclaration */:
      case 344 /* JSDocCallbackTag */:
      case 352 /* JSDocTypedefTag */:
        return "type" /* typeElement */;
      case 265 /* EnumDeclaration */:
        return "enum" /* enumElement */;
      case 259 /* VariableDeclaration */:
        return getKindOfVariableDeclaration(node);
      case 207 /* BindingElement */:
        return getKindOfVariableDeclaration(getRootDeclaration(node));
      case 218 /* ArrowFunction */:
      case 261 /* FunctionDeclaration */:
      case 217 /* FunctionExpression */:
        return "function" /* functionElement */;
      case 176 /* GetAccessor */:
        return "getter" /* memberGetAccessorElement */;
      case 177 /* SetAccessor */:
        return "setter" /* memberSetAccessorElement */;
      case 173 /* MethodDeclaration */:
      case 172 /* MethodSignature */:
        return "method" /* memberFunctionElement */;
      case 302 /* PropertyAssignment */:
        const { initializer } = node;
        return isFunctionLike(initializer) ? "method" /* memberFunctionElement */ : "property" /* memberVariableElement */;
      case 171 /* PropertyDeclaration */:
      case 170 /* PropertySignature */:
      case 303 /* ShorthandPropertyAssignment */:
      case 304 /* SpreadAssignment */:
        return "property" /* memberVariableElement */;
      case 180 /* IndexSignature */:
        return "index" /* indexSignatureElement */;
      case 179 /* ConstructSignature */:
        return "construct" /* constructSignatureElement */;
      case 178 /* CallSignature */:
        return "call" /* callSignatureElement */;
      case 175 /* Constructor */:
      case 174 /* ClassStaticBlockDeclaration */:
        return "constructor" /* constructorImplementationElement */;
      case 167 /* TypeParameter */:
        return "type parameter" /* typeParameterElement */;
      case 305 /* EnumMember */:
        return "enum member" /* enumMemberElement */;
      case 168 /* Parameter */:
        return hasSyntacticModifier(node, 16476 /* ParameterPropertyModifier */) ? "property" /* memberVariableElement */ : "parameter" /* parameterElement */;
      case 270 /* ImportEqualsDeclaration */:
      case 275 /* ImportSpecifier */:
      case 280 /* ExportSpecifier */:
      case 273 /* NamespaceImport */:
      case 279 /* NamespaceExport */:
        return "alias" /* alias */;
      case 225 /* BinaryExpression */:
        const kind = getAssignmentDeclarationKind(node);
        const { right } = node;
        switch (kind) {
          case 7 /* ObjectDefinePropertyValue */:
          case 8 /* ObjectDefinePropertyExports */:
          case 9 /* ObjectDefinePrototypeProperty */:
          case 0 /* None */:
            return "" /* unknown */;
          case 1 /* ExportsProperty */:
          case 2 /* ModuleExports */:
            const rightKind = getNodeKind(right);
            return rightKind === "" /* unknown */ ? "const" /* constElement */ : rightKind;
          case 3 /* PrototypeProperty */:
            return isFunctionExpression(right) ? "method" /* memberFunctionElement */ : "property" /* memberVariableElement */;
          case 4 /* ThisProperty */:
            return "property" /* memberVariableElement */;
          case 5 /* Property */:
            return isFunctionExpression(right) ? "method" /* memberFunctionElement */ : "property" /* memberVariableElement */;
          case 6 /* Prototype */:
            return "local class" /* localClassElement */;
          default: {
            assertType(kind);
            return "" /* unknown */;
          }
        }
      case 80 /* Identifier */:
        return isImportClause(node.parent) ? "alias" /* alias */ : "" /* unknown */;
      case 276 /* ExportAssignment */:
        const scriptKind = getNodeKind(node.expression);
        return scriptKind === "" /* unknown */ ? "const" /* constElement */ : scriptKind;
      default:
        return "" /* unknown */;
    }
    function getKindOfVariableDeclaration(v) {
      return isVarConst(v) ? "const" /* constElement */ : isLet(v) ? "let" /* letElement */ : "var" /* variableElement */;
    }
  }
  function isThis(node) {
    switch (node.kind) {
      case 110 /* ThisKeyword */:
        return true;
      case 80 /* Identifier */:
        return identifierIsThisKeyword(node) && node.parent.kind === 168 /* Parameter */;
      default:
        return false;
    }
  }
  function getLineStartPositionForPosition(position, sourceFile) {
    const lineStarts = getLineStarts(sourceFile);
    const line = sourceFile.getLineAndCharacterOfPosition(position).line;
    return lineStarts[line];
  }
  function rangeContainsRange(r1, r2) {
    return startEndContainsRange(r1.pos, r1.end, r2);
  }
  function rangeContainsRangeExclusive(r1, r2) {
    return rangeContainsPositionExclusive(r1, r2.pos) && rangeContainsPositionExclusive(r1, r2.end);
  }
  function rangeContainsPosition(r, pos) {
    return r.pos <= pos && pos <= r.end;
  }
  function rangeContainsPositionExclusive(r, pos) {
    return r.pos < pos && pos < r.end;
  }
  function startEndContainsRange(start, end, range) {
    return start <= range.pos && end >= range.end;
  }
  function rangeContainsStartEnd(range, start, end) {
    return range.pos <= start && range.end >= end;
  }
  function rangeOverlapsWithStartEnd(r1, start, end) {
    return startEndOverlapsWithStartEnd(r1.pos, r1.end, start, end);
  }
  function nodeOverlapsWithStartEnd(node, sourceFile, start, end) {
    return startEndOverlapsWithStartEnd(node.getStart(sourceFile), node.end, start, end);
  }
  function startEndOverlapsWithStartEnd(start1, end1, start2, end2) {
    const start = Math.max(start1, start2);
    const end = Math.min(end1, end2);
    return start < end;
  }
  function positionBelongsToNode(candidate, position, sourceFile) {
    Debug.assert(candidate.pos <= position);
    return position < candidate.end || !isCompletedNode(candidate, sourceFile);
  }
  function isCompletedNode(n, sourceFile) {
    if (n === void 0 || nodeIsMissing(n)) {
      return false;
    }
    switch (n.kind) {
      case 262 /* ClassDeclaration */:
      case 263 /* InterfaceDeclaration */:
      case 265 /* EnumDeclaration */:
      case 209 /* ObjectLiteralExpression */:
      case 205 /* ObjectBindingPattern */:
      case 186 /* TypeLiteral */:
      case 240 /* Block */:
      case 267 /* ModuleBlock */:
      case 268 /* CaseBlock */:
      case 274 /* NamedImports */:
      case 278 /* NamedExports */:
        return nodeEndsWith(n, 20 /* CloseBraceToken */, sourceFile);
      case 298 /* CatchClause */:
        return isCompletedNode(n.block, sourceFile);
      case 213 /* NewExpression */:
        if (!n.arguments) {
          return true;
        }
      case 212 /* CallExpression */:
      case 216 /* ParenthesizedExpression */:
      case 195 /* ParenthesizedType */:
        return nodeEndsWith(n, 22 /* CloseParenToken */, sourceFile);
      case 183 /* FunctionType */:
      case 184 /* ConstructorType */:
        return isCompletedNode(n.type, sourceFile);
      case 175 /* Constructor */:
      case 176 /* GetAccessor */:
      case 177 /* SetAccessor */:
      case 261 /* FunctionDeclaration */:
      case 217 /* FunctionExpression */:
      case 173 /* MethodDeclaration */:
      case 172 /* MethodSignature */:
      case 179 /* ConstructSignature */:
      case 178 /* CallSignature */:
      case 218 /* ArrowFunction */:
        if (n.body) {
          return isCompletedNode(n.body, sourceFile);
        }
        if (n.type) {
          return isCompletedNode(n.type, sourceFile);
        }
        return hasChildOfKind(n, 22 /* CloseParenToken */, sourceFile);
      case 266 /* ModuleDeclaration */:
        return !!n.body && isCompletedNode(n.body, sourceFile);
      case 244 /* IfStatement */:
        if (n.elseStatement) {
          return isCompletedNode(n.elseStatement, sourceFile);
        }
        return isCompletedNode(n.thenStatement, sourceFile);
      case 243 /* ExpressionStatement */:
        return isCompletedNode(n.expression, sourceFile) || hasChildOfKind(n, 27 /* SemicolonToken */, sourceFile);
      case 208 /* ArrayLiteralExpression */:
      case 206 /* ArrayBindingPattern */:
      case 211 /* ElementAccessExpression */:
      case 166 /* ComputedPropertyName */:
      case 188 /* TupleType */:
        return nodeEndsWith(n, 24 /* CloseBracketToken */, sourceFile);
      case 180 /* IndexSignature */:
        if (n.type) {
          return isCompletedNode(n.type, sourceFile);
        }
        return hasChildOfKind(n, 24 /* CloseBracketToken */, sourceFile);
      case 295 /* CaseClause */:
      case 296 /* DefaultClause */:
        return false;
      case 247 /* ForStatement */:
      case 248 /* ForInStatement */:
      case 249 /* ForOfStatement */:
      case 246 /* WhileStatement */:
        return isCompletedNode(n.statement, sourceFile);
      case 245 /* DoStatement */:
        return hasChildOfKind(n, 117 /* WhileKeyword */, sourceFile) ? nodeEndsWith(n, 22 /* CloseParenToken */, sourceFile) : isCompletedNode(n.statement, sourceFile);
      case 185 /* TypeQuery */:
        return isCompletedNode(n.exprName, sourceFile);
      case 220 /* TypeOfExpression */:
      case 219 /* DeleteExpression */:
      case 221 /* VoidExpression */:
      case 228 /* YieldExpression */:
      case 229 /* SpreadElement */:
        const unaryWordExpression = n;
        return isCompletedNode(unaryWordExpression.expression, sourceFile);
      case 214 /* TaggedTemplateExpression */:
        return isCompletedNode(n.template, sourceFile);
      case 227 /* TemplateExpression */:
        const lastSpan = lastOrUndefined(n.templateSpans);
        return isCompletedNode(lastSpan, sourceFile);
      case 238 /* TemplateSpan */:
        return nodeIsPresent(n.literal);
      case 277 /* ExportDeclaration */:
      case 271 /* ImportDeclaration */:
        return nodeIsPresent(n.moduleSpecifier);
      case 223 /* PrefixUnaryExpression */:
        return isCompletedNode(n.operand, sourceFile);
      case 225 /* BinaryExpression */:
        return isCompletedNode(n.right, sourceFile);
      case 226 /* ConditionalExpression */:
        return isCompletedNode(n.whenFalse, sourceFile);
      default:
        return true;
    }
  }
  function nodeEndsWith(n, expectedLastToken, sourceFile) {
    const children = n.getChildren(sourceFile);
    if (children.length) {
      const lastChild = last(children);
      if (lastChild.kind === expectedLastToken) {
        return true;
      } else if (lastChild.kind === 27 /* SemicolonToken */ && children.length !== 1) {
        return children[children.length - 2].kind === expectedLastToken;
      }
    }
    return false;
  }
  function findListItemInfo(node) {
    const list = findContainingList(node);
    if (!list) {
      return void 0;
    }
    const children = list.getChildren();
    const listItemIndex = indexOfNode(children, node);
    return {
      listItemIndex,
      list
    };
  }
  function hasChildOfKind(n, kind, sourceFile) {
    return !!findChildOfKind(n, kind, sourceFile);
  }
  function findChildOfKind(n, kind, sourceFile) {
    return find(n.getChildren(sourceFile), (c) => c.kind === kind);
  }
  function findContainingList(node) {
    const syntaxList = find(node.parent.getChildren(), (c) => isSyntaxList(c) && rangeContainsRange(c, node));
    Debug.assert(!syntaxList || contains(syntaxList.getChildren(), node));
    return syntaxList;
  }
  function isDefaultModifier2(node) {
    return node.kind === 90 /* DefaultKeyword */;
  }
  function isClassKeyword(node) {
    return node.kind === 86 /* ClassKeyword */;
  }
  function isFunctionKeyword(node) {
    return node.kind === 100 /* FunctionKeyword */;
  }
  function getAdjustedLocationForClass(node) {
    if (isNamedDeclaration(node)) {
      return node.name;
    }
    if (isClassDeclaration(node)) {
      const defaultModifier = node.modifiers && find(node.modifiers, isDefaultModifier2);
      if (defaultModifier)
        return defaultModifier;
    }
    if (isClassExpression(node)) {
      const classKeyword = find(node.getChildren(), isClassKeyword);
      if (classKeyword)
        return classKeyword;
    }
  }
  function getAdjustedLocationForFunction(node) {
    if (isNamedDeclaration(node)) {
      return node.name;
    }
    if (isFunctionDeclaration(node)) {
      const defaultModifier = find(node.modifiers, isDefaultModifier2);
      if (defaultModifier)
        return defaultModifier;
    }
    if (isFunctionExpression(node)) {
      const functionKeyword = find(node.getChildren(), isFunctionKeyword);
      if (functionKeyword)
        return functionKeyword;
    }
  }
  function getAncestorTypeNode(node) {
    let lastTypeNode;
    findAncestor(node, (a) => {
      if (isTypeNode(a)) {
        lastTypeNode = a;
      }
      return !isQualifiedName(a.parent) && !isTypeNode(a.parent) && !isTypeElement(a.parent);
    });
    return lastTypeNode;
  }
  function getContextualTypeFromParentOrAncestorTypeNode(node, checker) {
    if (node.flags & (8388608 /* JSDoc */ & ~262144 /* JavaScriptFile */))
      return void 0;
    const contextualType = getContextualTypeFromParent(node, checker);
    if (contextualType)
      return contextualType;
    const ancestorTypeNode = getAncestorTypeNode(node);
    return ancestorTypeNode && checker.getTypeAtLocation(ancestorTypeNode);
  }
  function getAdjustedLocationForDeclaration(node, forRename) {
    if (!forRename) {
      switch (node.kind) {
        case 262 /* ClassDeclaration */:
        case 230 /* ClassExpression */:
          return getAdjustedLocationForClass(node);
        case 261 /* FunctionDeclaration */:
        case 217 /* FunctionExpression */:
          return getAdjustedLocationForFunction(node);
        case 175 /* Constructor */:
          return node;
      }
    }
    if (isNamedDeclaration(node)) {
      return node.name;
    }
  }
  function getAdjustedLocationForImportDeclaration(node, forRename) {
    if (node.importClause) {
      if (node.importClause.name && node.importClause.namedBindings) {
        return;
      }
      if (node.importClause.name) {
        return node.importClause.name;
      }
      if (node.importClause.namedBindings) {
        if (isNamedImports(node.importClause.namedBindings)) {
          const onlyBinding = singleOrUndefined(node.importClause.namedBindings.elements);
          if (!onlyBinding) {
            return;
          }
          return onlyBinding.name;
        } else if (isNamespaceImport(node.importClause.namedBindings)) {
          return node.importClause.namedBindings.name;
        }
      }
    }
    if (!forRename) {
      return node.moduleSpecifier;
    }
  }
  function getAdjustedLocationForExportDeclaration(node, forRename) {
    if (node.exportClause) {
      if (isNamedExports(node.exportClause)) {
        const onlyBinding = singleOrUndefined(node.exportClause.elements);
        if (!onlyBinding) {
          return;
        }
        return node.exportClause.elements[0].name;
      } else if (isNamespaceExport(node.exportClause)) {
        return node.exportClause.name;
      }
    }
    if (!forRename) {
      return node.moduleSpecifier;
    }
  }
  function getAdjustedLocationForHeritageClause(node) {
    if (node.types.length === 1) {
      return node.types[0].expression;
    }
  }
  function getAdjustedLocation(node, forRename) {
    const { parent: parent2 } = node;
    if (isModifier(node) && (forRename || node.kind !== 90 /* DefaultKeyword */) ? canHaveModifiers(parent2) && contains(parent2.modifiers, node) : node.kind === 86 /* ClassKeyword */ ? isClassDeclaration(parent2) || isClassExpression(node) : node.kind === 100 /* FunctionKeyword */ ? isFunctionDeclaration(parent2) || isFunctionExpression(node) : node.kind === 120 /* InterfaceKeyword */ ? isInterfaceDeclaration(parent2) : node.kind === 94 /* EnumKeyword */ ? isEnumDeclaration(parent2) : node.kind === 156 /* TypeKeyword */ ? isTypeAliasDeclaration(parent2) : node.kind === 145 /* NamespaceKeyword */ || node.kind === 144 /* ModuleKeyword */ ? isModuleDeclaration(parent2) : node.kind === 102 /* ImportKeyword */ ? isImportEqualsDeclaration(parent2) : node.kind === 139 /* GetKeyword */ ? isGetAccessorDeclaration(parent2) : node.kind === 153 /* SetKeyword */ && isSetAccessorDeclaration(parent2)) {
      const location = getAdjustedLocationForDeclaration(parent2, forRename);
      if (location) {
        return location;
      }
    }
    if ((node.kind === 115 /* VarKeyword */ || node.kind === 87 /* ConstKeyword */ || node.kind === 121 /* LetKeyword */) && isVariableDeclarationList(parent2) && parent2.declarations.length === 1) {
      const decl = parent2.declarations[0];
      if (isIdentifier(decl.name)) {
        return decl.name;
      }
    }
    if (node.kind === 156 /* TypeKeyword */) {
      if (isImportClause(parent2) && parent2.isTypeOnly) {
        const location = getAdjustedLocationForImportDeclaration(parent2.parent, forRename);
        if (location) {
          return location;
        }
      }
      if (isExportDeclaration(parent2) && parent2.isTypeOnly) {
        const location = getAdjustedLocationForExportDeclaration(parent2, forRename);
        if (location) {
          return location;
        }
      }
    }
    if (node.kind === 130 /* AsKeyword */) {
      if (isImportSpecifier(parent2) && parent2.propertyName || isExportSpecifier(parent2) && parent2.propertyName || isNamespaceImport(parent2) || isNamespaceExport(parent2)) {
        return parent2.name;
      }
      if (isExportDeclaration(parent2) && parent2.exportClause && isNamespaceExport(parent2.exportClause)) {
        return parent2.exportClause.name;
      }
    }
    if (node.kind === 102 /* ImportKeyword */ && isImportDeclaration(parent2)) {
      const location = getAdjustedLocationForImportDeclaration(parent2, forRename);
      if (location) {
        return location;
      }
    }
    if (node.kind === 95 /* ExportKeyword */) {
      if (isExportDeclaration(parent2)) {
        const location = getAdjustedLocationForExportDeclaration(parent2, forRename);
        if (location) {
          return location;
        }
      }
      if (isExportAssignment(parent2)) {
        return skipOuterExpressions(parent2.expression);
      }
    }
    if (node.kind === 149 /* RequireKeyword */ && isExternalModuleReference(parent2)) {
      return parent2.expression;
    }
    if (node.kind === 160 /* FromKeyword */ && (isImportDeclaration(parent2) || isExportDeclaration(parent2)) && parent2.moduleSpecifier) {
      return parent2.moduleSpecifier;
    }
    if ((node.kind === 96 /* ExtendsKeyword */ || node.kind === 119 /* ImplementsKeyword */) && isHeritageClause(parent2) && parent2.token === node.kind) {
      const location = getAdjustedLocationForHeritageClause(parent2);
      if (location) {
        return location;
      }
    }
    if (node.kind === 96 /* ExtendsKeyword */) {
      if (isTypeParameterDeclaration(parent2) && parent2.constraint && isTypeReferenceNode(parent2.constraint)) {
        return parent2.constraint.typeName;
      }
      if (isConditionalTypeNode(parent2) && isTypeReferenceNode(parent2.extendsType)) {
        return parent2.extendsType.typeName;
      }
    }
    if (node.kind === 140 /* InferKeyword */ && isInferTypeNode(parent2)) {
      return parent2.typeParameter.name;
    }
    if (node.kind === 103 /* InKeyword */ && isTypeParameterDeclaration(parent2) && isMappedTypeNode(parent2.parent)) {
      return parent2.name;
    }
    if (node.kind === 143 /* KeyOfKeyword */ && isTypeOperatorNode(parent2) && parent2.operator === 143 /* KeyOfKeyword */ && isTypeReferenceNode(parent2.type)) {
      return parent2.type.typeName;
    }
    if (node.kind === 148 /* ReadonlyKeyword */ && isTypeOperatorNode(parent2) && parent2.operator === 148 /* ReadonlyKeyword */ && isArrayTypeNode(parent2.type) && isTypeReferenceNode(parent2.type.elementType)) {
      return parent2.type.elementType.typeName;
    }
    if (!forRename) {
      if (node.kind === 105 /* NewKeyword */ && isNewExpression(parent2) || node.kind === 116 /* VoidKeyword */ && isVoidExpression(parent2) || node.kind === 114 /* TypeOfKeyword */ && isTypeOfExpression(parent2) || node.kind === 135 /* AwaitKeyword */ && isAwaitExpression(parent2) || node.kind === 127 /* YieldKeyword */ && isYieldExpression(parent2) || node.kind === 91 /* DeleteKeyword */ && isDeleteExpression(parent2)) {
        if (parent2.expression) {
          return skipOuterExpressions(parent2.expression);
        }
      }
      if ((node.kind === 103 /* InKeyword */ || node.kind === 104 /* InstanceOfKeyword */) && isBinaryExpression(parent2) && parent2.operatorToken === node) {
        return skipOuterExpressions(parent2.right);
      }
      if (node.kind === 130 /* AsKeyword */ && isAsExpression(parent2) && isTypeReferenceNode(parent2.type)) {
        return parent2.type.typeName;
      }
      if (node.kind === 103 /* InKeyword */ && isForInStatement(parent2) || node.kind === 164 /* OfKeyword */ && isForOfStatement(parent2)) {
        return skipOuterExpressions(parent2.expression);
      }
    }
    return node;
  }
  function getAdjustedReferenceLocation(node) {
    return getAdjustedLocation(
      node,
      /*forRename*/
      false
    );
  }
  function getAdjustedRenameLocation(node) {
    return getAdjustedLocation(
      node,
      /*forRename*/
      true
    );
  }
  function getTouchingPropertyName(sourceFile, position) {
    return getTouchingToken(sourceFile, position, (n) => isPropertyNameLiteral(n) || isKeyword(n.kind) || isPrivateIdentifier(n));
  }
  function getTouchingToken(sourceFile, position, includePrecedingTokenAtEndPosition) {
    return getTokenAtPositionWorker(
      sourceFile,
      position,
      /*allowPositionInLeadingTrivia*/
      false,
      includePrecedingTokenAtEndPosition,
      /*includeEndPosition*/
      false
    );
  }
  function getTokenAtPosition(sourceFile, position) {
    return getTokenAtPositionWorker(
      sourceFile,
      position,
      /*allowPositionInLeadingTrivia*/
      true,
      /*includePrecedingTokenAtEndPosition*/
      void 0,
      /*includeEndPosition*/
      false
    );
  }
  function getTokenAtPositionWorker(sourceFile, position, allowPositionInLeadingTrivia, includePrecedingTokenAtEndPosition, includeEndPosition) {
    let current = sourceFile;
    let foundToken;
    outer:
      while (true) {
        const children = current.getChildren(sourceFile);
        const i = binarySearchKey(children, position, (_, i2) => i2, (middle, _) => {
          const end = children[middle].getEnd();
          if (end < position) {
            return -1 /* LessThan */;
          }
          const start = allowPositionInLeadingTrivia ? children[middle].getFullStart() : children[middle].getStart(
            sourceFile,
            /*includeJsDocComment*/
            true
          );
          if (start > position) {
            return 1 /* GreaterThan */;
          }
          if (nodeContainsPosition(children[middle], start, end)) {
            if (children[middle - 1]) {
              if (nodeContainsPosition(children[middle - 1])) {
                return 1 /* GreaterThan */;
              }
            }
            return 0 /* EqualTo */;
          }
          if (includePrecedingTokenAtEndPosition && start === position && children[middle - 1] && children[middle - 1].getEnd() === position && nodeContainsPosition(children[middle - 1])) {
            return 1 /* GreaterThan */;
          }
          return -1 /* LessThan */;
        });
        if (foundToken) {
          return foundToken;
        }
        if (i >= 0 && children[i]) {
          current = children[i];
          continue outer;
        }
        return current;
      }
    function nodeContainsPosition(node, start, end) {
      end ?? (end = node.getEnd());
      if (end < position) {
        return false;
      }
      start ?? (start = allowPositionInLeadingTrivia ? node.getFullStart() : node.getStart(
        sourceFile,
        /*includeJsDocComment*/
        true
      ));
      if (start > position) {
        return false;
      }
      if (position < end || position === end && (node.kind === 1 /* EndOfFileToken */ || includeEndPosition)) {
        return true;
      } else if (includePrecedingTokenAtEndPosition && end === position) {
        const previousToken = findPrecedingToken(position, sourceFile, node);
        if (previousToken && includePrecedingTokenAtEndPosition(previousToken)) {
          foundToken = previousToken;
          return true;
        }
      }
      return false;
    }
  }
  function findFirstNonJsxWhitespaceToken(sourceFile, position) {
    let tokenAtPosition = getTokenAtPosition(sourceFile, position);
    while (isWhiteSpaceOnlyJsxText(tokenAtPosition)) {
      const nextToken = findNextToken(tokenAtPosition, tokenAtPosition.parent, sourceFile);
      if (!nextToken)
        return;
      tokenAtPosition = nextToken;
    }
    return tokenAtPosition;
  }
  function findTokenOnLeftOfPosition(file, position) {
    const tokenAtPosition = getTokenAtPosition(file, position);
    if (isToken(tokenAtPosition) && position > tokenAtPosition.getStart(file) && position < tokenAtPosition.getEnd()) {
      return tokenAtPosition;
    }
    return findPrecedingToken(position, file);
  }
  function findNextToken(previousToken, parent2, sourceFile) {
    return find2(parent2);
    function find2(n) {
      if (isToken(n) && n.pos === previousToken.end) {
        return n;
      }
      return firstDefined(n.getChildren(sourceFile), (child) => {
        const shouldDiveInChildNode = (
          // previous token is enclosed somewhere in the child
          child.pos <= previousToken.pos && child.end > previousToken.end || // previous token ends exactly at the beginning of child
          child.pos === previousToken.end
        );
        return shouldDiveInChildNode && nodeHasTokens(child, sourceFile) ? find2(child) : void 0;
      });
    }
  }
  function findPrecedingToken(position, sourceFile, startNode2, excludeJsdoc) {
    const result = find2(startNode2 || sourceFile);
    Debug.assert(!(result && isWhiteSpaceOnlyJsxText(result)));
    return result;
    function find2(n) {
      if (isNonWhitespaceToken(n) && n.kind !== 1 /* EndOfFileToken */) {
        return n;
      }
      const children = n.getChildren(sourceFile);
      const i = binarySearchKey(children, position, (_, i2) => i2, (middle, _) => {
        if (position < children[middle].end) {
          if (!children[middle - 1] || position >= children[middle - 1].end) {
            return 0 /* EqualTo */;
          }
          return 1 /* GreaterThan */;
        }
        return -1 /* LessThan */;
      });
      if (i >= 0 && children[i]) {
        const child = children[i];
        if (position < child.end) {
          const start = child.getStart(
            sourceFile,
            /*includeJsDoc*/
            !excludeJsdoc
          );
          const lookInPreviousChild = start >= position || // cursor in the leading trivia
          !nodeHasTokens(child, sourceFile) || isWhiteSpaceOnlyJsxText(child);
          if (lookInPreviousChild) {
            const candidate2 = findRightmostChildNodeWithTokens(
              children,
              /*exclusiveStartPosition*/
              i,
              sourceFile,
              n.kind
            );
            if (candidate2) {
              if (!excludeJsdoc && isJSDocCommentContainingNode(candidate2) && candidate2.getChildren(sourceFile).length) {
                return find2(candidate2);
              }
              return findRightmostToken(candidate2, sourceFile);
            }
            return void 0;
          } else {
            return find2(child);
          }
        }
      }
      Debug.assert(startNode2 !== void 0 || n.kind === 311 /* SourceFile */ || n.kind === 1 /* EndOfFileToken */ || isJSDocCommentContainingNode(n));
      const candidate = findRightmostChildNodeWithTokens(
        children,
        /*exclusiveStartPosition*/
        children.length,
        sourceFile,
        n.kind
      );
      return candidate && findRightmostToken(candidate, sourceFile);
    }
  }
  function isNonWhitespaceToken(n) {
    return isToken(n) && !isWhiteSpaceOnlyJsxText(n);
  }
  function findRightmostToken(n, sourceFile) {
    if (isNonWhitespaceToken(n)) {
      return n;
    }
    const children = n.getChildren(sourceFile);
    if (children.length === 0) {
      return n;
    }
    const candidate = findRightmostChildNodeWithTokens(
      children,
      /*exclusiveStartPosition*/
      children.length,
      sourceFile,
      n.kind
    );
    return candidate && findRightmostToken(candidate, sourceFile);
  }
  function findRightmostChildNodeWithTokens(children, exclusiveStartPosition, sourceFile, parentKind) {
    for (let i = exclusiveStartPosition - 1; i >= 0; i--) {
      const child = children[i];
      if (isWhiteSpaceOnlyJsxText(child)) {
        if (i === 0 && (parentKind === 12 /* JsxText */ || parentKind === 284 /* JsxSelfClosingElement */)) {
          Debug.fail("`JsxText` tokens should not be the first child of `JsxElement | JsxSelfClosingElement`");
        }
      } else if (nodeHasTokens(children[i], sourceFile)) {
        return children[i];
      }
    }
  }
  function isInString(sourceFile, position, previousToken = findPrecedingToken(position, sourceFile)) {
    if (previousToken && isStringTextContainingNode(previousToken)) {
      const start = previousToken.getStart(sourceFile);
      const end = previousToken.getEnd();
      if (start < position && position < end) {
        return true;
      }
      if (position === end) {
        return !!previousToken.isUnterminated;
      }
    }
    return false;
  }
  function isInsideJsxElementOrAttribute(sourceFile, position) {
    const token = getTokenAtPosition(sourceFile, position);
    if (!token) {
      return false;
    }
    if (token.kind === 12 /* JsxText */) {
      return true;
    }
    if (token.kind === 30 /* LessThanToken */ && token.parent.kind === 12 /* JsxText */) {
      return true;
    }
    if (token.kind === 30 /* LessThanToken */ && token.parent.kind === 293 /* JsxExpression */) {
      return true;
    }
    if (token && token.kind === 20 /* CloseBraceToken */ && token.parent.kind === 293 /* JsxExpression */) {
      return true;
    }
    if (token.kind === 30 /* LessThanToken */ && token.parent.kind === 286 /* JsxClosingElement */) {
      return true;
    }
    return false;
  }
  function isWhiteSpaceOnlyJsxText(node) {
    return isJsxText(node) && node.containsOnlyTriviaWhiteSpaces;
  }
  function isInTemplateString(sourceFile, position) {
    const token = getTokenAtPosition(sourceFile, position);
    return isTemplateLiteralKind(token.kind) && position > token.getStart(sourceFile);
  }
  function isInJSXText(sourceFile, position) {
    const token = getTokenAtPosition(sourceFile, position);
    if (isJsxText(token)) {
      return true;
    }
    if (token.kind === 19 /* OpenBraceToken */ && isJsxExpression(token.parent) && isJsxElement(token.parent.parent)) {
      return true;
    }
    if (token.kind === 30 /* LessThanToken */ && isJsxOpeningLikeElement(token.parent) && isJsxElement(token.parent.parent)) {
      return true;
    }
    return false;
  }
  function isInsideJsxElement(sourceFile, position) {
    function isInsideJsxElementTraversal(node) {
      while (node) {
        if (node.kind >= 284 /* JsxSelfClosingElement */ && node.kind <= 293 /* JsxExpression */ || node.kind === 12 /* JsxText */ || node.kind === 30 /* LessThanToken */ || node.kind === 32 /* GreaterThanToken */ || node.kind === 80 /* Identifier */ || node.kind === 20 /* CloseBraceToken */ || node.kind === 19 /* OpenBraceToken */ || node.kind === 44 /* SlashToken */) {
          node = node.parent;
        } else if (node.kind === 283 /* JsxElement */) {
          if (position > node.getStart(sourceFile))
            return true;
          node = node.parent;
        } else {
          return false;
        }
      }
      return false;
    }
    return isInsideJsxElementTraversal(getTokenAtPosition(sourceFile, position));
  }
  function findPrecedingMatchingToken(token, matchingTokenKind, sourceFile) {
    const closeTokenText = tokenToString(token.kind);
    const matchingTokenText = tokenToString(matchingTokenKind);
    const tokenFullStart = token.getFullStart();
    const bestGuessIndex = sourceFile.text.lastIndexOf(matchingTokenText, tokenFullStart);
    if (bestGuessIndex === -1) {
      return void 0;
    }
    if (sourceFile.text.lastIndexOf(closeTokenText, tokenFullStart - 1) < bestGuessIndex) {
      const nodeAtGuess = findPrecedingToken(bestGuessIndex + 1, sourceFile);
      if (nodeAtGuess && nodeAtGuess.kind === matchingTokenKind) {
        return nodeAtGuess;
      }
    }
    const tokenKind = token.kind;
    let remainingMatchingTokens = 0;
    while (true) {
      const preceding = findPrecedingToken(token.getFullStart(), sourceFile);
      if (!preceding) {
        return void 0;
      }
      token = preceding;
      if (token.kind === matchingTokenKind) {
        if (remainingMatchingTokens === 0) {
          return token;
        }
        remainingMatchingTokens--;
      } else if (token.kind === tokenKind) {
        remainingMatchingTokens++;
      }
    }
  }
  function removeOptionality(type, isOptionalExpression, isOptionalChain2) {
    return isOptionalExpression ? type.getNonNullableType() : isOptionalChain2 ? type.getNonOptionalType() : type;
  }
  function isPossiblyTypeArgumentPosition(token, sourceFile, checker) {
    const info = getPossibleTypeArgumentsInfo(token, sourceFile);
    return info !== void 0 && (isPartOfTypeNode(info.called) || getPossibleGenericSignatures(info.called, info.nTypeArguments, checker).length !== 0 || isPossiblyTypeArgumentPosition(info.called, sourceFile, checker));
  }
  function getPossibleGenericSignatures(called, typeArgumentCount, checker) {
    let type = checker.getTypeAtLocation(called);
    if (isOptionalChain(called.parent)) {
      type = removeOptionality(
        type,
        isOptionalChainRoot(called.parent),
        /*isOptionalChain*/
        true
      );
    }
    const signatures = isNewExpression(called.parent) ? type.getConstructSignatures() : type.getCallSignatures();
    return signatures.filter((candidate) => !!candidate.typeParameters && candidate.typeParameters.length >= typeArgumentCount);
  }
  function getPossibleTypeArgumentsInfo(tokenIn, sourceFile) {
    if (sourceFile.text.lastIndexOf("<", tokenIn ? tokenIn.pos : sourceFile.text.length) === -1) {
      return void 0;
    }
    let token = tokenIn;
    let remainingLessThanTokens = 0;
    let nTypeArguments = 0;
    while (token) {
      switch (token.kind) {
        case 30 /* LessThanToken */:
          token = findPrecedingToken(token.getFullStart(), sourceFile);
          if (token && token.kind === 29 /* QuestionDotToken */) {
            token = findPrecedingToken(token.getFullStart(), sourceFile);
          }
          if (!token || !isIdentifier(token))
            return void 0;
          if (!remainingLessThanTokens) {
            return isDeclarationName(token) ? void 0 : { called: token, nTypeArguments };
          }
          remainingLessThanTokens--;
          break;
        case 50 /* GreaterThanGreaterThanGreaterThanToken */:
          remainingLessThanTokens = 3;
          break;
        case 49 /* GreaterThanGreaterThanToken */:
          remainingLessThanTokens = 2;
          break;
        case 32 /* GreaterThanToken */:
          remainingLessThanTokens++;
          break;
        case 20 /* CloseBraceToken */:
          token = findPrecedingMatchingToken(token, 19 /* OpenBraceToken */, sourceFile);
          if (!token)
            return void 0;
          break;
        case 22 /* CloseParenToken */:
          token = findPrecedingMatchingToken(token, 21 /* OpenParenToken */, sourceFile);
          if (!token)
            return void 0;
          break;
        case 24 /* CloseBracketToken */:
          token = findPrecedingMatchingToken(token, 23 /* OpenBracketToken */, sourceFile);
          if (!token)
            return void 0;
          break;
        case 28 /* CommaToken */:
          nTypeArguments++;
          break;
        case 39 /* EqualsGreaterThanToken */:
        case 80 /* Identifier */:
        case 11 /* StringLiteral */:
        case 9 /* NumericLiteral */:
        case 10 /* BigIntLiteral */:
        case 112 /* TrueKeyword */:
        case 97 /* FalseKeyword */:
        case 114 /* TypeOfKeyword */:
        case 96 /* ExtendsKeyword */:
        case 143 /* KeyOfKeyword */:
        case 25 /* DotToken */:
        case 52 /* BarToken */:
        case 58 /* QuestionToken */:
        case 59 /* ColonToken */:
          break;
        default:
          if (isTypeNode(token)) {
            break;
          }
          return void 0;
      }
      token = findPrecedingToken(token.getFullStart(), sourceFile);
    }
    return void 0;
  }
  function isInComment(sourceFile, position, tokenAtPosition) {
    return ts_formatting_exports.getRangeOfEnclosingComment(
      sourceFile,
      position,
      /*precedingToken*/
      void 0,
      tokenAtPosition
    );
  }
  function hasDocComment(sourceFile, position) {
    const token = getTokenAtPosition(sourceFile, position);
    return !!findAncestor(token, isJSDoc);
  }
  function nodeHasTokens(n, sourceFile) {
    return n.kind === 1 /* EndOfFileToken */ ? !!n.jsDoc : n.getWidth(sourceFile) !== 0;
  }
  function getNodeModifiers(node, excludeFlags = 0 /* None */) {
    const result = [];
    const flags = isDeclaration(node) ? getCombinedNodeFlagsAlwaysIncludeJSDoc(node) & ~excludeFlags : 0 /* None */;
    if (flags & 8 /* Private */)
      result.push("private" /* privateMemberModifier */);
    if (flags & 16 /* Protected */)
      result.push("protected" /* protectedMemberModifier */);
    if (flags & 4 /* Public */)
      result.push("public" /* publicMemberModifier */);
    if (flags & 32 /* Static */ || isClassStaticBlockDeclaration(node))
      result.push("static" /* staticModifier */);
    if (flags & 256 /* Abstract */)
      result.push("abstract" /* abstractModifier */);
    if (flags & 1 /* Export */)
      result.push("export" /* exportedModifier */);
    if (flags & 8192 /* Deprecated */)
      result.push("deprecated" /* deprecatedModifier */);
    if (node.flags & 16777216 /* Ambient */)
      result.push("declare" /* ambientModifier */);
    if (node.kind === 276 /* ExportAssignment */)
      result.push("export" /* exportedModifier */);
    return result.length > 0 ? result.join(",") : "" /* none */;
  }
  function getTypeArgumentOrTypeParameterList(node) {
    if (node.kind === 182 /* TypeReference */ || node.kind === 212 /* CallExpression */) {
      return node.typeArguments;
    }
    if (isFunctionLike(node) || node.kind === 262 /* ClassDeclaration */ || node.kind === 263 /* InterfaceDeclaration */) {
      return node.typeParameters;
    }
    return void 0;
  }
  function isComment(kind) {
    return kind === 2 /* SingleLineCommentTrivia */ || kind === 3 /* MultiLineCommentTrivia */;
  }
  function isStringOrRegularExpressionOrTemplateLiteral(kind) {
    if (kind === 11 /* StringLiteral */ || kind === 14 /* RegularExpressionLiteral */ || isTemplateLiteralKind(kind)) {
      return true;
    }
    return false;
  }
  function areIntersectedTypesAvoidingStringReduction(checker, t1, t2) {
    return !!(t1.flags & 4 /* String */) && checker.isEmptyAnonymousObjectType(t2);
  }
  function isStringAndEmptyAnonymousObjectIntersection(type) {
    if (!type.isIntersection()) {
      return false;
    }
    const { types, checker } = type;
    return types.length === 2 && (areIntersectedTypesAvoidingStringReduction(checker, types[0], types[1]) || areIntersectedTypesAvoidingStringReduction(checker, types[1], types[0]));
  }
  function isInsideTemplateLiteral(node, position, sourceFile) {
    return isTemplateLiteralKind(node.kind) && (node.getStart(sourceFile) < position && position < node.end) || !!node.isUnterminated && position === node.end;
  }
  function isAccessibilityModifier(kind) {
    switch (kind) {
      case 125 /* PublicKeyword */:
      case 123 /* PrivateKeyword */:
      case 124 /* ProtectedKeyword */:
        return true;
    }
    return false;
  }
  function cloneCompilerOptions(options) {
    const result = clone(options);
    setConfigFileInOptions(result, options && options.configFile);
    return result;
  }
  function isArrayLiteralOrObjectLiteralDestructuringPattern(node) {
    if (node.kind === 208 /* ArrayLiteralExpression */ || node.kind === 209 /* ObjectLiteralExpression */) {
      if (node.parent.kind === 225 /* BinaryExpression */ && node.parent.left === node && node.parent.operatorToken.kind === 64 /* EqualsToken */) {
        return true;
      }
      if (node.parent.kind === 249 /* ForOfStatement */ && node.parent.initializer === node) {
        return true;
      }
      if (isArrayLiteralOrObjectLiteralDestructuringPattern(node.parent.kind === 302 /* PropertyAssignment */ ? node.parent.parent : node.parent)) {
        return true;
      }
    }
    return false;
  }
  function isInReferenceComment(sourceFile, position) {
    return isInReferenceCommentWorker(
      sourceFile,
      position,
      /*shouldBeReference*/
      true
    );
  }
  function isInNonReferenceComment(sourceFile, position) {
    return isInReferenceCommentWorker(
      sourceFile,
      position,
      /*shouldBeReference*/
      false
    );
  }
  function isInReferenceCommentWorker(sourceFile, position, shouldBeReference) {
    const range = isInComment(
      sourceFile,
      position,
      /*tokenAtPosition*/
      void 0
    );
    return !!range && shouldBeReference === tripleSlashDirectivePrefixRegex.test(sourceFile.text.substring(range.pos, range.end));
  }
  function getReplacementSpanForContextToken(contextToken) {
    if (!contextToken)
      return void 0;
    switch (contextToken.kind) {
      case 11 /* StringLiteral */:
      case 15 /* NoSubstitutionTemplateLiteral */:
        return createTextSpanFromStringLiteralLikeContent(contextToken);
      default:
        return createTextSpanFromNode(contextToken);
    }
  }
  function createTextSpanFromNode(node, sourceFile, endNode2) {
    return createTextSpanFromBounds(node.getStart(sourceFile), (endNode2 || node).getEnd());
  }
  function createTextSpanFromStringLiteralLikeContent(node) {
    if (node.isUnterminated)
      return void 0;
    return createTextSpanFromBounds(node.getStart() + 1, node.getEnd() - 1);
  }
  function createTextRangeFromNode(node, sourceFile) {
    return createRange(node.getStart(sourceFile), node.end);
  }
  function createTextSpanFromRange(range) {
    return createTextSpanFromBounds(range.pos, range.end);
  }
  function createTextRangeFromSpan(span) {
    return createRange(span.start, span.start + span.length);
  }
  function createTextChangeFromStartLength(start, length2, newText) {
    return createTextChange(createTextSpan(start, length2), newText);
  }
  function createTextChange(span, newText) {
    return { span, newText };
  }
  function isTypeKeyword(kind) {
    return contains(typeKeywords, kind);
  }
  function isTypeKeywordToken(node) {
    return node.kind === 156 /* TypeKeyword */;
  }
  function isTypeKeywordTokenOrIdentifier(node) {
    return isTypeKeywordToken(node) || isIdentifier(node) && node.text === "type";
  }
  function isExternalModuleSymbol(moduleSymbol) {
    return !!(moduleSymbol.flags & 1536 /* Module */) && moduleSymbol.name.charCodeAt(0) === 34 /* doubleQuote */;
  }
  function nodeSeenTracker() {
    const seen = [];
    return (node) => {
      const id = getNodeId(node);
      return !seen[id] && (seen[id] = true);
    };
  }
  function getSnapshotText(snap) {
    return snap.getText(0, snap.getLength());
  }
  function repeatString(str, count) {
    let result = "";
    for (let i = 0; i < count; i++) {
      result += str;
    }
    return result;
  }
  function skipConstraint(type) {
    return type.isTypeParameter() ? type.getConstraint() || type : type;
  }
  function getNameFromPropertyName(name) {
    return name.kind === 166 /* ComputedPropertyName */ ? isStringOrNumericLiteralLike(name.expression) ? name.expression.text : void 0 : isPrivateIdentifier(name) ? idText(name) : getTextOfIdentifierOrLiteral(name);
  }
  function programContainsModules(program) {
    return program.getSourceFiles().some((s) => !s.isDeclarationFile && !program.isSourceFileFromExternalLibrary(s) && !!(s.externalModuleIndicator || s.commonJsModuleIndicator));
  }
  function programContainsEsModules(program) {
    return program.getSourceFiles().some((s) => !s.isDeclarationFile && !program.isSourceFileFromExternalLibrary(s) && !!s.externalModuleIndicator);
  }
  function compilerOptionsIndicateEsModules(compilerOptions) {
    return !!compilerOptions.module || getEmitScriptTarget(compilerOptions) >= 2 /* ES2015 */ || !!compilerOptions.noEmit;
  }
  function createModuleSpecifierResolutionHost(program, host) {
    return {
      fileExists: (fileName) => program.fileExists(fileName),
      getCurrentDirectory: () => host.getCurrentDirectory(),
      readFile: maybeBind(host, host.readFile),
      useCaseSensitiveFileNames: maybeBind(host, host.useCaseSensitiveFileNames),
      getSymlinkCache: maybeBind(host, host.getSymlinkCache) || program.getSymlinkCache,
      getModuleSpecifierCache: maybeBind(host, host.getModuleSpecifierCache),
      getPackageJsonInfoCache: () => {
        var _a;
        return (_a = program.getModuleResolutionCache()) == null ? void 0 : _a.getPackageJsonInfoCache();
      },
      getGlobalTypingsCacheLocation: maybeBind(host, host.getGlobalTypingsCacheLocation),
      redirectTargetsMap: program.redirectTargetsMap,
      getProjectReferenceRedirect: (fileName) => program.getProjectReferenceRedirect(fileName),
      isSourceOfProjectReferenceRedirect: (fileName) => program.isSourceOfProjectReferenceRedirect(fileName),
      getNearestAncestorDirectoryWithPackageJson: maybeBind(host, host.getNearestAncestorDirectoryWithPackageJson),
      getFileIncludeReasons: () => program.getFileIncludeReasons()
    };
  }
  function getModuleSpecifierResolverHost(program, host) {
    return {
      ...createModuleSpecifierResolutionHost(program, host),
      getCommonSourceDirectory: () => program.getCommonSourceDirectory()
    };
  }
  function moduleResolutionUsesNodeModules(moduleResolution) {
    return moduleResolution === 2 /* Node10 */ || moduleResolution >= 3 /* Node16 */ && moduleResolution <= 99 /* NodeNext */ || moduleResolution === 100 /* Bundler */;
  }
  function makeImportIfNecessary(defaultImport, namedImports, moduleSpecifier, quotePreference) {
    return defaultImport || namedImports && namedImports.length ? makeImport(defaultImport, namedImports, moduleSpecifier, quotePreference) : void 0;
  }
  function makeImport(defaultImport, namedImports, moduleSpecifier, quotePreference, isTypeOnly) {
    return factory.createImportDeclaration(
      /*modifiers*/
      void 0,
      defaultImport || namedImports ? factory.createImportClause(!!isTypeOnly, defaultImport, namedImports && namedImports.length ? factory.createNamedImports(namedImports) : void 0) : void 0,
      typeof moduleSpecifier === "string" ? makeStringLiteral(moduleSpecifier, quotePreference) : moduleSpecifier,
      /*assertClause*/
      void 0
    );
  }
  function makeStringLiteral(text, quotePreference) {
    return factory.createStringLiteral(text, quotePreference === 0 /* Single */);
  }
  function quotePreferenceFromString(str, sourceFile) {
    return isStringDoubleQuoted(str, sourceFile) ? 1 /* Double */ : 0 /* Single */;
  }
  function getQuotePreference(sourceFile, preferences) {
    if (preferences.quotePreference && preferences.quotePreference !== "auto") {
      return preferences.quotePreference === "single" ? 0 /* Single */ : 1 /* Double */;
    } else {
      const firstModuleSpecifier = sourceFile.imports && find(sourceFile.imports, (n) => isStringLiteral(n) && !nodeIsSynthesized(n.parent));
      return firstModuleSpecifier ? quotePreferenceFromString(firstModuleSpecifier, sourceFile) : 1 /* Double */;
    }
  }
  function getQuoteFromPreference(qp) {
    switch (qp) {
      case 0 /* Single */:
        return "'";
      case 1 /* Double */:
        return '"';
      default:
        return Debug.assertNever(qp);
    }
  }
  function symbolNameNoDefault(symbol) {
    const escaped = symbolEscapedNameNoDefault(symbol);
    return escaped === void 0 ? void 0 : unescapeLeadingUnderscores(escaped);
  }
  function symbolEscapedNameNoDefault(symbol) {
    if (symbol.escapedName !== "default" /* Default */) {
      return symbol.escapedName;
    }
    return firstDefined(symbol.declarations, (decl) => {
      const name = getNameOfDeclaration(decl);
      return name && name.kind === 80 /* Identifier */ ? name.escapedText : void 0;
    });
  }
  function isModuleSpecifierLike(node) {
    return isStringLiteralLike(node) && (isExternalModuleReference(node.parent) || isImportDeclaration(node.parent) || isRequireCall(
      node.parent,
      /*requireStringLiteralLikeArgument*/
      false
    ) && node.parent.arguments[0] === node || isImportCall(node.parent) && node.parent.arguments[0] === node);
  }
  function isObjectBindingElementWithoutPropertyName(bindingElement) {
    return isBindingElement(bindingElement) && isObjectBindingPattern(bindingElement.parent) && isIdentifier(bindingElement.name) && !bindingElement.propertyName;
  }
  function getPropertySymbolFromBindingElement(checker, bindingElement) {
    const typeOfPattern = checker.getTypeAtLocation(bindingElement.parent);
    return typeOfPattern && checker.getPropertyOfType(typeOfPattern, bindingElement.name.text);
  }
  function getParentNodeInSpan(node, file, span) {
    if (!node)
      return void 0;
    while (node.parent) {
      if (isSourceFile(node.parent) || !spanContainsNode(span, node.parent, file)) {
        return node;
      }
      node = node.parent;
    }
  }
  function spanContainsNode(span, node, file) {
    return textSpanContainsPosition(span, node.getStart(file)) && node.getEnd() <= textSpanEnd(span);
  }
  function findModifier(node, kind) {
    return canHaveModifiers(node) ? find(node.modifiers, (m) => m.kind === kind) : void 0;
  }
  function insertImports(changes, sourceFile, imports, blankLineBetween, preferences) {
    const decl = isArray(imports) ? imports[0] : imports;
    const importKindPredicate = decl.kind === 242 /* VariableStatement */ ? isRequireVariableStatement : isAnyImportSyntax;
    const existingImportStatements = filter(sourceFile.statements, importKindPredicate);
    let sortKind = isArray(imports) ? ts_OrganizeImports_exports.detectImportDeclarationSorting(imports, preferences) : 3 /* Both */;
    const comparer = ts_OrganizeImports_exports.getOrganizeImportsComparer(preferences, sortKind === 2 /* CaseInsensitive */);
    const sortedNewImports = isArray(imports) ? stableSort(imports, (a, b) => ts_OrganizeImports_exports.compareImportsOrRequireStatements(a, b, comparer)) : [imports];
    if (!existingImportStatements.length) {
      changes.insertNodesAtTopOfFile(sourceFile, sortedNewImports, blankLineBetween);
    } else if (existingImportStatements && (sortKind = ts_OrganizeImports_exports.detectImportDeclarationSorting(existingImportStatements, preferences))) {
      const comparer2 = ts_OrganizeImports_exports.getOrganizeImportsComparer(preferences, sortKind === 2 /* CaseInsensitive */);
      for (const newImport of sortedNewImports) {
        const insertionIndex = ts_OrganizeImports_exports.getImportDeclarationInsertionIndex(existingImportStatements, newImport, comparer2);
        if (insertionIndex === 0) {
          const options = existingImportStatements[0] === sourceFile.statements[0] ? { leadingTriviaOption: ts_textChanges_exports.LeadingTriviaOption.Exclude } : {};
          changes.insertNodeBefore(
            sourceFile,
            existingImportStatements[0],
            newImport,
            /*blankLineBetween*/
            false,
            options
          );
        } else {
          const prevImport = existingImportStatements[insertionIndex - 1];
          changes.insertNodeAfter(sourceFile, prevImport, newImport);
        }
      }
    } else {
      const lastExistingImport = lastOrUndefined(existingImportStatements);
      if (lastExistingImport) {
        changes.insertNodesAfter(sourceFile, lastExistingImport, sortedNewImports);
      } else {
        changes.insertNodesAtTopOfFile(sourceFile, sortedNewImports, blankLineBetween);
      }
    }
  }
  function getTypeKeywordOfTypeOnlyImport(importClause, sourceFile) {
    Debug.assert(importClause.isTypeOnly);
    return cast(importClause.getChildAt(0, sourceFile), isTypeKeywordToken);
  }
  function textSpansEqual(a, b) {
    return !!a && !!b && a.start === b.start && a.length === b.length;
  }
  function documentSpansEqual(a, b) {
    return a.fileName === b.fileName && textSpansEqual(a.textSpan, b.textSpan);
  }
  function forEachUnique(array, callback) {
    if (array) {
      for (let i = 0; i < array.length; i++) {
        if (array.indexOf(array[i]) === i) {
          const result = callback(array[i], i);
          if (result) {
            return result;
          }
        }
      }
    }
    return void 0;
  }
  function isTextWhiteSpaceLike(text, startPos, endPos) {
    for (let i = startPos; i < endPos; i++) {
      if (!isWhiteSpaceLike(text.charCodeAt(i))) {
        return false;
      }
    }
    return true;
  }
  function getMappedLocation(location, sourceMapper, fileExists) {
    const mapsTo = sourceMapper.tryGetSourcePosition(location);
    return mapsTo && (!fileExists || fileExists(normalizePath(mapsTo.fileName)) ? mapsTo : void 0);
  }
  function getMappedDocumentSpan(documentSpan, sourceMapper, fileExists) {
    const { fileName, textSpan } = documentSpan;
    const newPosition = getMappedLocation({ fileName, pos: textSpan.start }, sourceMapper, fileExists);
    if (!newPosition)
      return void 0;
    const newEndPosition = getMappedLocation({ fileName, pos: textSpan.start + textSpan.length }, sourceMapper, fileExists);
    const newLength = newEndPosition ? newEndPosition.pos - newPosition.pos : textSpan.length;
    return {
      fileName: newPosition.fileName,
      textSpan: {
        start: newPosition.pos,
        length: newLength
      },
      originalFileName: documentSpan.fileName,
      originalTextSpan: documentSpan.textSpan,
      contextSpan: getMappedContextSpan(documentSpan, sourceMapper, fileExists),
      originalContextSpan: documentSpan.contextSpan
    };
  }
  function getMappedContextSpan(documentSpan, sourceMapper, fileExists) {
    const contextSpanStart = documentSpan.contextSpan && getMappedLocation(
      { fileName: documentSpan.fileName, pos: documentSpan.contextSpan.start },
      sourceMapper,
      fileExists
    );
    const contextSpanEnd = documentSpan.contextSpan && getMappedLocation(
      { fileName: documentSpan.fileName, pos: documentSpan.contextSpan.start + documentSpan.contextSpan.length },
      sourceMapper,
      fileExists
    );
    return contextSpanStart && contextSpanEnd ? { start: contextSpanStart.pos, length: contextSpanEnd.pos - contextSpanStart.pos } : void 0;
  }
  function isFirstDeclarationOfSymbolParameter(symbol) {
    const declaration = symbol.declarations ? firstOrUndefined(symbol.declarations) : void 0;
    return !!findAncestor(declaration, (n) => isParameter(n) ? true : isBindingElement(n) || isObjectBindingPattern(n) || isArrayBindingPattern(n) ? false : "quit");
  }
  function getDisplayPartWriter() {
    const absoluteMaximumLength = defaultMaximumTruncationLength * 10;
    let displayParts;
    let lineStart;
    let indent3;
    let length2;
    resetWriter();
    const unknownWrite = (text) => writeKind(text, 17 /* text */);
    return {
      displayParts: () => {
        const finalText = displayParts.length && displayParts[displayParts.length - 1].text;
        if (length2 > absoluteMaximumLength && finalText && finalText !== "...") {
          if (!isWhiteSpaceLike(finalText.charCodeAt(finalText.length - 1))) {
            displayParts.push(displayPart(" ", 16 /* space */));
          }
          displayParts.push(displayPart("...", 15 /* punctuation */));
        }
        return displayParts;
      },
      writeKeyword: (text) => writeKind(text, 5 /* keyword */),
      writeOperator: (text) => writeKind(text, 12 /* operator */),
      writePunctuation: (text) => writeKind(text, 15 /* punctuation */),
      writeTrailingSemicolon: (text) => writeKind(text, 15 /* punctuation */),
      writeSpace: (text) => writeKind(text, 16 /* space */),
      writeStringLiteral: (text) => writeKind(text, 8 /* stringLiteral */),
      writeParameter: (text) => writeKind(text, 13 /* parameterName */),
      writeProperty: (text) => writeKind(text, 14 /* propertyName */),
      writeLiteral: (text) => writeKind(text, 8 /* stringLiteral */),
      writeSymbol,
      writeLine,
      write: unknownWrite,
      writeComment: unknownWrite,
      getText: () => "",
      getTextPos: () => 0,
      getColumn: () => 0,
      getLine: () => 0,
      isAtStartOfLine: () => false,
      hasTrailingWhitespace: () => false,
      hasTrailingComment: () => false,
      rawWrite: notImplemented,
      getIndent: () => indent3,
      increaseIndent: () => {
        indent3++;
      },
      decreaseIndent: () => {
        indent3--;
      },
      clear: resetWriter
    };
    function writeIndent() {
      if (length2 > absoluteMaximumLength)
        return;
      if (lineStart) {
        const indentString = getIndentString(indent3);
        if (indentString) {
          length2 += indentString.length;
          displayParts.push(displayPart(indentString, 16 /* space */));
        }
        lineStart = false;
      }
    }
    function writeKind(text, kind) {
      if (length2 > absoluteMaximumLength)
        return;
      writeIndent();
      length2 += text.length;
      displayParts.push(displayPart(text, kind));
    }
    function writeSymbol(text, symbol) {
      if (length2 > absoluteMaximumLength)
        return;
      writeIndent();
      length2 += text.length;
      displayParts.push(symbolPart(text, symbol));
    }
    function writeLine() {
      if (length2 > absoluteMaximumLength)
        return;
      length2 += 1;
      displayParts.push(lineBreakPart());
      lineStart = true;
    }
    function resetWriter() {
      displayParts = [];
      lineStart = true;
      indent3 = 0;
      length2 = 0;
    }
  }
  function symbolPart(text, symbol) {
    return displayPart(text, displayPartKind(symbol));
    function displayPartKind(symbol2) {
      const flags = symbol2.flags;
      if (flags & 3 /* Variable */) {
        return isFirstDeclarationOfSymbolParameter(symbol2) ? 13 /* parameterName */ : 9 /* localName */;
      }
      if (flags & 4 /* Property */)
        return 14 /* propertyName */;
      if (flags & 32768 /* GetAccessor */)
        return 14 /* propertyName */;
      if (flags & 65536 /* SetAccessor */)
        return 14 /* propertyName */;
      if (flags & 8 /* EnumMember */)
        return 19 /* enumMemberName */;
      if (flags & 16 /* Function */)
        return 20 /* functionName */;
      if (flags & 32 /* Class */)
        return 1 /* className */;
      if (flags & 64 /* Interface */)
        return 4 /* interfaceName */;
      if (flags & 384 /* Enum */)
        return 2 /* enumName */;
      if (flags & 1536 /* Module */)
        return 11 /* moduleName */;
      if (flags & 8192 /* Method */)
        return 10 /* methodName */;
      if (flags & 262144 /* TypeParameter */)
        return 18 /* typeParameterName */;
      if (flags & 524288 /* TypeAlias */)
        return 0 /* aliasName */;
      if (flags & 2097152 /* Alias */)
        return 0 /* aliasName */;
      return 17 /* text */;
    }
  }
  function displayPart(text, kind) {
    return { text, kind: SymbolDisplayPartKind[kind] };
  }
  function spacePart() {
    return displayPart(" ", 16 /* space */);
  }
  function keywordPart(kind) {
    return displayPart(tokenToString(kind), 5 /* keyword */);
  }
  function punctuationPart(kind) {
    return displayPart(tokenToString(kind), 15 /* punctuation */);
  }
  function operatorPart(kind) {
    return displayPart(tokenToString(kind), 12 /* operator */);
  }
  function parameterNamePart(text) {
    return displayPart(text, 13 /* parameterName */);
  }
  function propertyNamePart(text) {
    return displayPart(text, 14 /* propertyName */);
  }
  function textOrKeywordPart(text) {
    const kind = stringToToken(text);
    return kind === void 0 ? textPart(text) : keywordPart(kind);
  }
  function textPart(text) {
    return displayPart(text, 17 /* text */);
  }
  function typeAliasNamePart(text) {
    return displayPart(text, 0 /* aliasName */);
  }
  function typeParameterNamePart(text) {
    return displayPart(text, 18 /* typeParameterName */);
  }
  function linkTextPart(text) {
    return displayPart(text, 24 /* linkText */);
  }
  function linkNamePart(text, target) {
    return {
      text,
      kind: SymbolDisplayPartKind[23 /* linkName */],
      target: {
        fileName: getSourceFileOfNode(target).fileName,
        textSpan: createTextSpanFromNode(target)
      }
    };
  }
  function linkPart(text) {
    return displayPart(text, 22 /* link */);
  }
  function buildLinkParts(link, checker) {
    var _a;
    const prefix = isJSDocLink(link) ? "link" : isJSDocLinkCode(link) ? "linkcode" : "linkplain";
    const parts = [linkPart(`{@${prefix} `)];
    if (!link.name) {
      if (link.text) {
        parts.push(linkTextPart(link.text));
      }
    } else {
      const symbol = checker == null ? void 0 : checker.getSymbolAtLocation(link.name);
      const suffix = findLinkNameEnd(link.text);
      const name = getTextOfNode(link.name) + link.text.slice(0, suffix);
      const text = skipSeparatorFromLinkText(link.text.slice(suffix));
      const decl = (symbol == null ? void 0 : symbol.valueDeclaration) || ((_a = symbol == null ? void 0 : symbol.declarations) == null ? void 0 : _a[0]);
      if (decl) {
        parts.push(linkNamePart(name, decl));
        if (text)
          parts.push(linkTextPart(text));
      } else {
        parts.push(linkTextPart(name + (suffix ? "" : " ") + text));
      }
    }
    parts.push(linkPart("}"));
    return parts;
  }
  function skipSeparatorFromLinkText(text) {
    let pos = 0;
    if (text.charCodeAt(pos++) === 124 /* bar */) {
      while (pos < text.length && text.charCodeAt(pos) === 32 /* space */)
        pos++;
      return text.slice(pos);
    }
    return text;
  }
  function findLinkNameEnd(text) {
    let pos = text.indexOf("://");
    if (pos === 0) {
      while (pos < text.length && text.charCodeAt(pos) !== 124 /* bar */)
        pos++;
      return pos;
    }
    if (text.indexOf("()") === 0)
      return 2;
    if (text.charAt(0) === "<") {
      let brackets2 = 0;
      let i = 0;
      while (i < text.length) {
        if (text[i] === "<")
          brackets2++;
        if (text[i] === ">")
          brackets2--;
        i++;
        if (!brackets2)
          return i;
      }
    }
    return 0;
  }
  function getNewLineOrDefaultFromHost(host, formatSettings) {
    var _a;
    return (formatSettings == null ? void 0 : formatSettings.newLineCharacter) || ((_a = host.getNewLine) == null ? void 0 : _a.call(host)) || lineFeed2;
  }
  function lineBreakPart() {
    return displayPart("\n", 6 /* lineBreak */);
  }
  function mapToDisplayParts(writeDisplayParts) {
    try {
      writeDisplayParts(displayPartWriter);
      return displayPartWriter.displayParts();
    } finally {
      displayPartWriter.clear();
    }
  }
  function typeToDisplayParts(typechecker, type, enclosingDeclaration, flags = 0 /* None */) {
    return mapToDisplayParts((writer) => {
      typechecker.writeType(type, enclosingDeclaration, flags | 1024 /* MultilineObjectLiterals */ | 16384 /* UseAliasDefinedOutsideCurrentScope */, writer);
    });
  }
  function symbolToDisplayParts(typeChecker, symbol, enclosingDeclaration, meaning, flags = 0 /* None */) {
    return mapToDisplayParts((writer) => {
      typeChecker.writeSymbol(symbol, enclosingDeclaration, meaning, flags | 8 /* UseAliasDefinedOutsideCurrentScope */, writer);
    });
  }
  function signatureToDisplayParts(typechecker, signature, enclosingDeclaration, flags = 0 /* None */) {
    flags |= 16384 /* UseAliasDefinedOutsideCurrentScope */ | 1024 /* MultilineObjectLiterals */ | 32 /* WriteTypeArgumentsOfSignature */ | 8192 /* OmitParameterModifiers */;
    return mapToDisplayParts((writer) => {
      typechecker.writeSignature(
        signature,
        enclosingDeclaration,
        flags,
        /*kind*/
        void 0,
        writer
      );
    });
  }
  function nodeToDisplayParts(node, enclosingDeclaration) {
    const file = enclosingDeclaration.getSourceFile();
    return mapToDisplayParts((writer) => {
      const printer = createPrinterWithRemoveCommentsOmitTrailingSemicolon();
      printer.writeNode(4 /* Unspecified */, node, file, writer);
    });
  }
  function isImportOrExportSpecifierName(location) {
    return !!location.parent && isImportOrExportSpecifier(location.parent) && location.parent.propertyName === location;
  }
  function getScriptKind(fileName, host) {
    return ensureScriptKind(fileName, host.getScriptKind && host.getScriptKind(fileName));
  }
  function getSymbolTarget(symbol, checker) {
    let next = symbol;
    while (isAliasSymbol(next) || isTransientSymbol(next) && next.links.target) {
      if (isTransientSymbol(next) && next.links.target) {
        next = next.links.target;
      } else {
        next = skipAlias(next, checker);
      }
    }
    return next;
  }
  function isAliasSymbol(symbol) {
    return (symbol.flags & 2097152 /* Alias */) !== 0;
  }
  function getUniqueSymbolId(symbol, checker) {
    return getSymbolId(skipAlias(symbol, checker));
  }
  function getFirstNonSpaceCharacterPosition(text, position) {
    while (isWhiteSpaceLike(text.charCodeAt(position))) {
      position += 1;
    }
    return position;
  }
  function getPrecedingNonSpaceCharacterPosition(text, position) {
    while (position > -1 && isWhiteSpaceSingleLine(text.charCodeAt(position))) {
      position -= 1;
    }
    return position + 1;
  }
  function getSynthesizedDeepClone(node, includeTrivia = true) {
    const clone2 = node && getSynthesizedDeepCloneWorker(node);
    if (clone2 && !includeTrivia)
      suppressLeadingAndTrailingTrivia(clone2);
    return clone2;
  }
  function getSynthesizedDeepCloneWithReplacements(node, includeTrivia, replaceNode) {
    let clone2 = replaceNode(node);
    if (clone2) {
      setOriginalNode(clone2, node);
    } else {
      clone2 = getSynthesizedDeepCloneWorker(node, replaceNode);
    }
    if (clone2 && !includeTrivia)
      suppressLeadingAndTrailingTrivia(clone2);
    return clone2;
  }
  function getSynthesizedDeepCloneWorker(node, replaceNode) {
    const nodeClone = replaceNode ? (n) => getSynthesizedDeepCloneWithReplacements(
      n,
      /*includeTrivia*/
      true,
      replaceNode
    ) : getSynthesizedDeepClone;
    const nodesClone = replaceNode ? (ns) => ns && getSynthesizedDeepClonesWithReplacements(
      ns,
      /*includeTrivia*/
      true,
      replaceNode
    ) : (ns) => ns && getSynthesizedDeepClones(ns);
    const visited = visitEachChild(node, nodeClone, nullTransformationContext, nodesClone, nodeClone);
    if (visited === node) {
      const clone2 = isStringLiteral(node) ? setOriginalNode(factory.createStringLiteralFromNode(node), node) : isNumericLiteral(node) ? setOriginalNode(factory.createNumericLiteral(node.text, node.numericLiteralFlags), node) : factory.cloneNode(node);
      return setTextRange(clone2, node);
    }
    visited.parent = void 0;
    return visited;
  }
  function getSynthesizedDeepClones(nodes, includeTrivia = true) {
    if (nodes) {
      const cloned = factory.createNodeArray(nodes.map((n) => getSynthesizedDeepClone(n, includeTrivia)), nodes.hasTrailingComma);
      setTextRange(cloned, nodes);
      return cloned;
    }
    return nodes;
  }
  function getSynthesizedDeepClonesWithReplacements(nodes, includeTrivia, replaceNode) {
    return factory.createNodeArray(nodes.map((n) => getSynthesizedDeepCloneWithReplacements(n, includeTrivia, replaceNode)), nodes.hasTrailingComma);
  }
  function suppressLeadingAndTrailingTrivia(node) {
    suppressLeadingTrivia(node);
    suppressTrailingTrivia(node);
  }
  function suppressLeadingTrivia(node) {
    addEmitFlagsRecursively(node, 1024 /* NoLeadingComments */, getFirstChild);
  }
  function suppressTrailingTrivia(node) {
    addEmitFlagsRecursively(node, 2048 /* NoTrailingComments */, getLastChild);
  }
  function copyComments(sourceNode, targetNode) {
    const sourceFile = sourceNode.getSourceFile();
    const text = sourceFile.text;
    if (hasLeadingLineBreak(sourceNode, text)) {
      copyLeadingComments(sourceNode, targetNode, sourceFile);
    } else {
      copyTrailingAsLeadingComments(sourceNode, targetNode, sourceFile);
    }
    copyTrailingComments(sourceNode, targetNode, sourceFile);
  }
  function hasLeadingLineBreak(node, text) {
    const start = node.getFullStart();
    const end = node.getStart();
    for (let i = start; i < end; i++) {
      if (text.charCodeAt(i) === 10 /* lineFeed */)
        return true;
    }
    return false;
  }
  function addEmitFlagsRecursively(node, flag, getChild) {
    addEmitFlags(node, flag);
    const child = getChild(node);
    if (child)
      addEmitFlagsRecursively(child, flag, getChild);
  }
  function getFirstChild(node) {
    return node.forEachChild((child) => child);
  }
  function getUniqueName(baseName, sourceFile) {
    let nameText = baseName;
    for (let i = 1; !isFileLevelUniqueName(sourceFile, nameText); i++) {
      nameText = `${baseName}_${i}`;
    }
    return nameText;
  }
  function getRenameLocation(edits, renameFilename, name, preferLastLocation) {
    let delta = 0;
    let lastPos = -1;
    for (const { fileName, textChanges: textChanges2 } of edits) {
      Debug.assert(fileName === renameFilename);
      for (const change of textChanges2) {
        const { span, newText } = change;
        const index = indexInTextChange(newText, escapeString(name));
        if (index !== -1) {
          lastPos = span.start + delta + index;
          if (!preferLastLocation) {
            return lastPos;
          }
        }
        delta += newText.length - span.length;
      }
    }
    Debug.assert(preferLastLocation);
    Debug.assert(lastPos >= 0);
    return lastPos;
  }
  function copyLeadingComments(sourceNode, targetNode, sourceFile, commentKind, hasTrailingNewLine) {
    forEachLeadingCommentRange(sourceFile.text, sourceNode.pos, getAddCommentsFunction(targetNode, sourceFile, commentKind, hasTrailingNewLine, addSyntheticLeadingComment));
  }
  function copyTrailingComments(sourceNode, targetNode, sourceFile, commentKind, hasTrailingNewLine) {
    forEachTrailingCommentRange(sourceFile.text, sourceNode.end, getAddCommentsFunction(targetNode, sourceFile, commentKind, hasTrailingNewLine, addSyntheticTrailingComment));
  }
  function copyTrailingAsLeadingComments(sourceNode, targetNode, sourceFile, commentKind, hasTrailingNewLine) {
    forEachTrailingCommentRange(sourceFile.text, sourceNode.pos, getAddCommentsFunction(targetNode, sourceFile, commentKind, hasTrailingNewLine, addSyntheticLeadingComment));
  }
  function getAddCommentsFunction(targetNode, sourceFile, commentKind, hasTrailingNewLine, cb) {
    return (pos, end, kind, htnl) => {
      if (kind === 3 /* MultiLineCommentTrivia */) {
        pos += 2;
        end -= 2;
      } else {
        pos += 2;
      }
      cb(targetNode, commentKind || kind, sourceFile.text.slice(pos, end), hasTrailingNewLine !== void 0 ? hasTrailingNewLine : htnl);
    };
  }
  function indexInTextChange(change, name) {
    if (startsWith(change, name))
      return 0;
    let idx = change.indexOf(" " + name);
    if (idx === -1)
      idx = change.indexOf("." + name);
    if (idx === -1)
      idx = change.indexOf('"' + name);
    return idx === -1 ? -1 : idx + 1;
  }
  function needsParentheses(expression) {
    return isBinaryExpression(expression) && expression.operatorToken.kind === 28 /* CommaToken */ || isObjectLiteralExpression(expression) || isAsExpression(expression) && isObjectLiteralExpression(expression.expression);
  }
  function getContextualTypeFromParent(node, checker, contextFlags) {
    const parent2 = walkUpParenthesizedExpressions(node.parent);
    switch (parent2.kind) {
      case 213 /* NewExpression */:
        return checker.getContextualType(parent2, contextFlags);
      case 225 /* BinaryExpression */: {
        const { left, operatorToken, right } = parent2;
        return isEqualityOperatorKind(operatorToken.kind) ? checker.getTypeAtLocation(node === right ? left : right) : checker.getContextualType(node, contextFlags);
      }
      case 295 /* CaseClause */:
        return getSwitchedType(parent2, checker);
      default:
        return checker.getContextualType(node, contextFlags);
    }
  }
  function quote(sourceFile, preferences, text) {
    const quotePreference = getQuotePreference(sourceFile, preferences);
    const quoted = JSON.stringify(text);
    return quotePreference === 0 /* Single */ ? `'${stripQuotes(quoted).replace(/'/g, "\\'").replace(/\\"/g, '"')}'` : quoted;
  }
  function isEqualityOperatorKind(kind) {
    switch (kind) {
      case 37 /* EqualsEqualsEqualsToken */:
      case 35 /* EqualsEqualsToken */:
      case 38 /* ExclamationEqualsEqualsToken */:
      case 36 /* ExclamationEqualsToken */:
        return true;
      default:
        return false;
    }
  }
  function isStringLiteralOrTemplate(node) {
    switch (node.kind) {
      case 11 /* StringLiteral */:
      case 15 /* NoSubstitutionTemplateLiteral */:
      case 227 /* TemplateExpression */:
      case 214 /* TaggedTemplateExpression */:
        return true;
      default:
        return false;
    }
  }
  function hasIndexSignature(type) {
    return !!type.getStringIndexType() || !!type.getNumberIndexType();
  }
  function getSwitchedType(caseClause, checker) {
    return checker.getTypeAtLocation(caseClause.parent.parent.expression);
  }
  function getTypeNodeIfAccessible(type, enclosingScope, program, host) {
    const checker = program.getTypeChecker();
    let typeIsAccessible = true;
    const notAccessible = () => typeIsAccessible = false;
    const res = checker.typeToTypeNode(type, enclosingScope, 1 /* NoTruncation */, {
      trackSymbol: (symbol, declaration, meaning) => {
        typeIsAccessible = typeIsAccessible && checker.isSymbolAccessible(
          symbol,
          declaration,
          meaning,
          /*shouldComputeAliasToMarkVisible*/
          false
        ).accessibility === 0 /* Accessible */;
        return !typeIsAccessible;
      },
      reportInaccessibleThisError: notAccessible,
      reportPrivateInBaseOfClassExpression: notAccessible,
      reportInaccessibleUniqueSymbolError: notAccessible,
      moduleResolverHost: getModuleSpecifierResolverHost(program, host)
    });
    return typeIsAccessible ? res : void 0;
  }
  function syntaxRequiresTrailingCommaOrSemicolonOrASI(kind) {
    return kind === 178 /* CallSignature */ || kind === 179 /* ConstructSignature */ || kind === 180 /* IndexSignature */ || kind === 170 /* PropertySignature */ || kind === 172 /* MethodSignature */;
  }
  function syntaxRequiresTrailingFunctionBlockOrSemicolonOrASI(kind) {
    return kind === 261 /* FunctionDeclaration */ || kind === 175 /* Constructor */ || kind === 173 /* MethodDeclaration */ || kind === 176 /* GetAccessor */ || kind === 177 /* SetAccessor */;
  }
  function syntaxRequiresTrailingModuleBlockOrSemicolonOrASI(kind) {
    return kind === 266 /* ModuleDeclaration */;
  }
  function syntaxRequiresTrailingSemicolonOrASI(kind) {
    return kind === 242 /* VariableStatement */ || kind === 243 /* ExpressionStatement */ || kind === 245 /* DoStatement */ || kind === 250 /* ContinueStatement */ || kind === 251 /* BreakStatement */ || kind === 252 /* ReturnStatement */ || kind === 256 /* ThrowStatement */ || kind === 258 /* DebuggerStatement */ || kind === 171 /* PropertyDeclaration */ || kind === 264 /* TypeAliasDeclaration */ || kind === 271 /* ImportDeclaration */ || kind === 270 /* ImportEqualsDeclaration */ || kind === 277 /* ExportDeclaration */ || kind === 269 /* NamespaceExportDeclaration */ || kind === 276 /* ExportAssignment */;
  }
  function nodeIsASICandidate(node, sourceFile) {
    const lastToken = node.getLastToken(sourceFile);
    if (lastToken && lastToken.kind === 27 /* SemicolonToken */) {
      return false;
    }
    if (syntaxRequiresTrailingCommaOrSemicolonOrASI(node.kind)) {
      if (lastToken && lastToken.kind === 28 /* CommaToken */) {
        return false;
      }
    } else if (syntaxRequiresTrailingModuleBlockOrSemicolonOrASI(node.kind)) {
      const lastChild = last(node.getChildren(sourceFile));
      if (lastChild && isModuleBlock(lastChild)) {
        return false;
      }
    } else if (syntaxRequiresTrailingFunctionBlockOrSemicolonOrASI(node.kind)) {
      const lastChild = last(node.getChildren(sourceFile));
      if (lastChild && isFunctionBlock(lastChild)) {
        return false;
      }
    } else if (!syntaxRequiresTrailingSemicolonOrASI(node.kind)) {
      return false;
    }
    if (node.kind === 245 /* DoStatement */) {
      return true;
    }
    const topNode = findAncestor(node, (ancestor) => !ancestor.parent);
    const nextToken = findNextToken(node, topNode, sourceFile);
    if (!nextToken || nextToken.kind === 20 /* CloseBraceToken */) {
      return true;
    }
    const startLine = sourceFile.getLineAndCharacterOfPosition(node.getEnd()).line;
    const endLine = sourceFile.getLineAndCharacterOfPosition(nextToken.getStart(sourceFile)).line;
    return startLine !== endLine;
  }
  function positionIsASICandidate(pos, context, sourceFile) {
    const contextAncestor = findAncestor(context, (ancestor) => {
      if (ancestor.end !== pos) {
        return "quit";
      }
      return syntaxMayBeASICandidate(ancestor.kind);
    });
    return !!contextAncestor && nodeIsASICandidate(contextAncestor, sourceFile);
  }
  function probablyUsesSemicolons(sourceFile) {
    let withSemicolon = 0;
    let withoutSemicolon = 0;
    const nStatementsToObserve = 5;
    forEachChild(sourceFile, function visit(node) {
      if (syntaxRequiresTrailingSemicolonOrASI(node.kind)) {
        const lastToken = node.getLastToken(sourceFile);
        if ((lastToken == null ? void 0 : lastToken.kind) === 27 /* SemicolonToken */) {
          withSemicolon++;
        } else {
          withoutSemicolon++;
        }
      } else if (syntaxRequiresTrailingCommaOrSemicolonOrASI(node.kind)) {
        const lastToken = node.getLastToken(sourceFile);
        if ((lastToken == null ? void 0 : lastToken.kind) === 27 /* SemicolonToken */) {
          withSemicolon++;
        } else if (lastToken && lastToken.kind !== 28 /* CommaToken */) {
          const lastTokenLine = getLineAndCharacterOfPosition(sourceFile, lastToken.getStart(sourceFile)).line;
          const nextTokenLine = getLineAndCharacterOfPosition(sourceFile, getSpanOfTokenAtPosition(sourceFile, lastToken.end).start).line;
          if (lastTokenLine !== nextTokenLine) {
            withoutSemicolon++;
          }
        }
      }
      if (withSemicolon + withoutSemicolon >= nStatementsToObserve) {
        return true;
      }
      return forEachChild(node, visit);
    });
    if (withSemicolon === 0 && withoutSemicolon <= 1) {
      return true;
    }
    return withSemicolon / withoutSemicolon > 1 / nStatementsToObserve;
  }
  function tryGetDirectories(host, directoryName) {
    return tryIOAndConsumeErrors(host, host.getDirectories, directoryName) || [];
  }
  function tryReadDirectory(host, path, extensions, exclude, include) {
    return tryIOAndConsumeErrors(host, host.readDirectory, path, extensions, exclude, include) || emptyArray;
  }
  function tryFileExists(host, path) {
    return tryIOAndConsumeErrors(host, host.fileExists, path);
  }
  function tryDirectoryExists(host, path) {
    return tryAndIgnoreErrors(() => directoryProbablyExists(path, host)) || false;
  }
  function tryAndIgnoreErrors(cb) {
    try {
      return cb();
    } catch {
      return void 0;
    }
  }
  function tryIOAndConsumeErrors(host, toApply, ...args) {
    return tryAndIgnoreErrors(() => toApply && toApply.apply(host, args));
  }
  function findPackageJsons(startDirectory, host, stopDirectory) {
    const paths = [];
    forEachAncestorDirectory(startDirectory, (ancestor) => {
      if (ancestor === stopDirectory) {
        return true;
      }
      const currentConfigPath = combinePaths(ancestor, "package.json");
      if (tryFileExists(host, currentConfigPath)) {
        paths.push(currentConfigPath);
      }
    });
    return paths;
  }
  function findPackageJson(directory, host) {
    let packageJson;
    forEachAncestorDirectory(directory, (ancestor) => {
      if (ancestor === "node_modules")
        return true;
      packageJson = findConfigFile(ancestor, (f) => tryFileExists(host, f), "package.json");
      if (packageJson) {
        return true;
      }
    });
    return packageJson;
  }
  function getPackageJsonsVisibleToFile(fileName, host) {
    if (!host.fileExists) {
      return [];
    }
    const packageJsons = [];
    forEachAncestorDirectory(getDirectoryPath(fileName), (ancestor) => {
      const packageJsonFileName = combinePaths(ancestor, "package.json");
      if (host.fileExists(packageJsonFileName)) {
        const info = createPackageJsonInfo(packageJsonFileName, host);
        if (info) {
          packageJsons.push(info);
        }
      }
    });
    return packageJsons;
  }
  function createPackageJsonInfo(fileName, host) {
    if (!host.readFile) {
      return void 0;
    }
    const dependencyKeys = ["dependencies", "devDependencies", "optionalDependencies", "peerDependencies"];
    const stringContent = host.readFile(fileName) || "";
    const content = tryParseJson(stringContent);
    const info = {};
    if (content) {
      for (const key of dependencyKeys) {
        const dependencies = content[key];
        if (!dependencies) {
          continue;
        }
        const dependencyMap = /* @__PURE__ */ new Map();
        for (const packageName in dependencies) {
          dependencyMap.set(packageName, dependencies[packageName]);
        }
        info[key] = dependencyMap;
      }
    }
    const dependencyGroups = [
      [1 /* Dependencies */, info.dependencies],
      [2 /* DevDependencies */, info.devDependencies],
      [8 /* OptionalDependencies */, info.optionalDependencies],
      [4 /* PeerDependencies */, info.peerDependencies]
    ];
    return {
      ...info,
      parseable: !!content,
      fileName,
      get,
      has(dependencyName, inGroups) {
        return !!get(dependencyName, inGroups);
      }
    };
    function get(dependencyName, inGroups = 15 /* All */) {
      for (const [group2, deps] of dependencyGroups) {
        if (deps && inGroups & group2) {
          const dep = deps.get(dependencyName);
          if (dep !== void 0) {
            return dep;
          }
        }
      }
    }
  }
  function createPackageJsonImportFilter(fromFile, preferences, host) {
    const packageJsons = (host.getPackageJsonsVisibleToFile && host.getPackageJsonsVisibleToFile(fromFile.fileName) || getPackageJsonsVisibleToFile(fromFile.fileName, host)).filter((p) => p.parseable);
    let usesNodeCoreModules;
    let ambientModuleCache;
    let sourceFileCache;
    return {
      allowsImportingAmbientModule,
      allowsImportingSourceFile,
      allowsImportingSpecifier
    };
    function moduleSpecifierIsCoveredByPackageJson(specifier) {
      const packageName = getNodeModuleRootSpecifier(specifier);
      for (const packageJson of packageJsons) {
        if (packageJson.has(packageName) || packageJson.has(getTypesPackageName(packageName))) {
          return true;
        }
      }
      return false;
    }
    function allowsImportingAmbientModule(moduleSymbol, moduleSpecifierResolutionHost) {
      if (!packageJsons.length || !moduleSymbol.valueDeclaration) {
        return true;
      }
      if (!ambientModuleCache) {
        ambientModuleCache = /* @__PURE__ */ new Map();
      } else {
        const cached = ambientModuleCache.get(moduleSymbol);
        if (cached !== void 0) {
          return cached;
        }
      }
      const declaredModuleSpecifier = stripQuotes(moduleSymbol.getName());
      if (isAllowedCoreNodeModulesImport(declaredModuleSpecifier)) {
        ambientModuleCache.set(moduleSymbol, true);
        return true;
      }
      const declaringSourceFile = moduleSymbol.valueDeclaration.getSourceFile();
      const declaringNodeModuleName = getNodeModulesPackageNameFromFileName(declaringSourceFile.fileName, moduleSpecifierResolutionHost);
      if (typeof declaringNodeModuleName === "undefined") {
        ambientModuleCache.set(moduleSymbol, true);
        return true;
      }
      const result = moduleSpecifierIsCoveredByPackageJson(declaringNodeModuleName) || moduleSpecifierIsCoveredByPackageJson(declaredModuleSpecifier);
      ambientModuleCache.set(moduleSymbol, result);
      return result;
    }
    function allowsImportingSourceFile(sourceFile, moduleSpecifierResolutionHost) {
      if (!packageJsons.length) {
        return true;
      }
      if (!sourceFileCache) {
        sourceFileCache = /* @__PURE__ */ new Map();
      } else {
        const cached = sourceFileCache.get(sourceFile);
        if (cached !== void 0) {
          return cached;
        }
      }
      const moduleSpecifier = getNodeModulesPackageNameFromFileName(sourceFile.fileName, moduleSpecifierResolutionHost);
      if (!moduleSpecifier) {
        sourceFileCache.set(sourceFile, true);
        return true;
      }
      const result = moduleSpecifierIsCoveredByPackageJson(moduleSpecifier);
      sourceFileCache.set(sourceFile, result);
      return result;
    }
    function allowsImportingSpecifier(moduleSpecifier) {
      if (!packageJsons.length || isAllowedCoreNodeModulesImport(moduleSpecifier)) {
        return true;
      }
      if (pathIsRelative(moduleSpecifier) || isRootedDiskPath(moduleSpecifier)) {
        return true;
      }
      return moduleSpecifierIsCoveredByPackageJson(moduleSpecifier);
    }
    function isAllowedCoreNodeModulesImport(moduleSpecifier) {
      if (isSourceFileJS(fromFile) && ts_JsTyping_exports.nodeCoreModules.has(moduleSpecifier)) {
        if (usesNodeCoreModules === void 0) {
          usesNodeCoreModules = consumesNodeCoreModules(fromFile);
        }
        if (usesNodeCoreModules) {
          return true;
        }
      }
      return false;
    }
    function getNodeModulesPackageNameFromFileName(importedFileName, moduleSpecifierResolutionHost) {
      if (!stringContains(importedFileName, "node_modules")) {
        return void 0;
      }
      const specifier = ts_moduleSpecifiers_exports.getNodeModulesPackageName(
        host.getCompilationSettings(),
        fromFile,
        importedFileName,
        moduleSpecifierResolutionHost,
        preferences
      );
      if (!specifier) {
        return void 0;
      }
      if (!pathIsRelative(specifier) && !isRootedDiskPath(specifier)) {
        return getNodeModuleRootSpecifier(specifier);
      }
    }
    function getNodeModuleRootSpecifier(fullSpecifier) {
      const components = getPathComponents(getPackageNameFromTypesPackageName(fullSpecifier)).slice(1);
      if (startsWith(components[0], "@")) {
        return `${components[0]}/${components[1]}`;
      }
      return components[0];
    }
  }
  function tryParseJson(text) {
    try {
      return JSON.parse(text);
    } catch {
      return void 0;
    }
  }
  function consumesNodeCoreModules(sourceFile) {
    return some(sourceFile.imports, ({ text }) => ts_JsTyping_exports.nodeCoreModules.has(text));
  }
  function isInsideNodeModules(fileOrDirectory) {
    return contains(getPathComponents(fileOrDirectory), "node_modules");
  }
  function isDiagnosticWithLocation(diagnostic) {
    return diagnostic.file !== void 0 && diagnostic.start !== void 0 && diagnostic.length !== void 0;
  }
  function findDiagnosticForNode(node, sortedFileDiagnostics) {
    const span = createTextSpanFromNode(node);
    const index = binarySearchKey(sortedFileDiagnostics, span, identity, compareTextSpans);
    if (index >= 0) {
      const diagnostic = sortedFileDiagnostics[index];
      Debug.assertEqual(diagnostic.file, node.getSourceFile(), "Diagnostics proided to 'findDiagnosticForNode' must be from a single SourceFile");
      return cast(diagnostic, isDiagnosticWithLocation);
    }
  }
  function getDiagnosticsWithinSpan(span, sortedFileDiagnostics) {
    var _a;
    let index = binarySearchKey(sortedFileDiagnostics, span.start, (diag2) => diag2.start, compareValues);
    if (index < 0) {
      index = ~index;
    }
    while (((_a = sortedFileDiagnostics[index - 1]) == null ? void 0 : _a.start) === span.start) {
      index--;
    }
    const result = [];
    const end = textSpanEnd(span);
    while (true) {
      const diagnostic = tryCast(sortedFileDiagnostics[index], isDiagnosticWithLocation);
      if (!diagnostic || diagnostic.start > end) {
        break;
      }
      if (textSpanContainsTextSpan(span, diagnostic)) {
        result.push(diagnostic);
      }
      index++;
    }
    return result;
  }
  function getRefactorContextSpan({ startPosition, endPosition }) {
    return createTextSpanFromBounds(startPosition, endPosition === void 0 ? startPosition : endPosition);
  }
  function getFixableErrorSpanExpression(sourceFile, span) {
    const token = getTokenAtPosition(sourceFile, span.start);
    const expression = findAncestor(token, (node) => {
      if (node.getStart(sourceFile) < span.start || node.getEnd() > textSpanEnd(span)) {
        return "quit";
      }
      return isExpression(node) && textSpansEqual(span, createTextSpanFromNode(node, sourceFile));
    });
    return expression;
  }
  function mapOneOrMany(valueOrArray, f, resultSelector = identity) {
    return valueOrArray ? isArray(valueOrArray) ? resultSelector(map(valueOrArray, f)) : f(valueOrArray, 0) : void 0;
  }
  function firstOrOnly(valueOrArray) {
    return isArray(valueOrArray) ? first(valueOrArray) : valueOrArray;
  }
  function getNamesForExportedSymbol(symbol, scriptTarget) {
    if (needsNameFromDeclaration(symbol)) {
      const fromDeclaration = getDefaultLikeExportNameFromDeclaration(symbol);
      if (fromDeclaration)
        return fromDeclaration;
      const fileNameCase = ts_codefix_exports.moduleSymbolToValidIdentifier(
        getSymbolParentOrFail(symbol),
        scriptTarget,
        /*forceCapitalize*/
        false
      );
      const capitalized = ts_codefix_exports.moduleSymbolToValidIdentifier(
        getSymbolParentOrFail(symbol),
        scriptTarget,
        /*forceCapitalize*/
        true
      );
      if (fileNameCase === capitalized)
        return fileNameCase;
      return [fileNameCase, capitalized];
    }
    return symbol.name;
  }
  function getNameForExportedSymbol(symbol, scriptTarget, preferCapitalized) {
    if (needsNameFromDeclaration(symbol)) {
      return getDefaultLikeExportNameFromDeclaration(symbol) || ts_codefix_exports.moduleSymbolToValidIdentifier(getSymbolParentOrFail(symbol), scriptTarget, !!preferCapitalized);
    }
    return symbol.name;
  }
  function needsNameFromDeclaration(symbol) {
    return !(symbol.flags & 33554432 /* Transient */) && (symbol.escapedName === "export=" /* ExportEquals */ || symbol.escapedName === "default" /* Default */);
  }
  function getDefaultLikeExportNameFromDeclaration(symbol) {
    return firstDefined(
      symbol.declarations,
      (d) => {
        var _a, _b;
        return isExportAssignment(d) ? (_a = tryCast(skipOuterExpressions(d.expression), isIdentifier)) == null ? void 0 : _a.text : (_b = tryCast(getNameOfDeclaration(d), isIdentifier)) == null ? void 0 : _b.text;
      }
    );
  }
  function getSymbolParentOrFail(symbol) {
    var _a;
    return Debug.checkDefined(
      symbol.parent,
      `Symbol parent was undefined. Flags: ${Debug.formatSymbolFlags(symbol.flags)}. Declarations: ${(_a = symbol.declarations) == null ? void 0 : _a.map((d) => {
        const kind = Debug.formatSyntaxKind(d.kind);
        const inJS = isInJSFile(d);
        const { expression } = d;
