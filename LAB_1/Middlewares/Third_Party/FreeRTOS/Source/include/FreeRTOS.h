{
    "": {
      "execute": 87,
      "engine": 5,
      "connect": 3
    },
    ":c": {
      "engine": 60,
      "dialect": 40
    },
    ":i": {
      "execute": 100
    },
    "dialect": {
      "execute": 87
    },
    "dialect,dialect": {
      "execute": 100
    },
    "dialect,execute:c": {
      "dialect": 100
    },
    "engine": {
      "execute": 100
    },
    "engine:c": {
      "engine": 100
    },
    "execute": {
      "execute": 100
    },
    "execute,dialect:c": {
      "dialect": 100
    },
    "execute,execute": {
      "execute": 93,
      "scalar": 4
    },
    "execute,execute:i": {
      "execute": 100
    },
    "execute,scalar": {
      "execute": 100
    },
    "execute:i": {
      "execute": 100
    },
    "scalar": {
      "execute": 100
    },
    "scalar,execute": {
      "execute": 100
    }
  },
  "alembic.operations": {
    "": {
      "ops": 92,
      "schemaobj": 3,
      "Operations": 2
    },
    "ops": {
      "ops": 100
    },
    "ops,ops": {
      "ops": 100
    },
    "schemaobj": {
      "ops": 100
    }
  },
  "alembic.testing": {
    "": {
      "config": 52,
      "mock": 21,
      "exclusions": 19,
      "provision": 2,
      "assertions": 2
    },
    ":c": {
      "config": 66
    },
    "config": {
      "config": 100
    },
    "exclusions": {
      "exclusions": 85
    },
    "mock": {
      "mock": 100
    },
    "mock,mock": {
      "mock": 100
    }
  },
  "alembic.util": {
    "": {
      "CommandError": 41,
      "rev_id": 20,
      "compat": 7,
      "sqla_110": 2
    },
    ":c": {
      "sqla_08": 50
    },
    "CommandError": {
      "CommandError": 50,
      "err": 35
    },
    "compat": {
      "compat": 100
    },
    "rev_id": {
      "rev_id": 88
    },
    "rev_id,rev_id": {
      "rev_id": 100
    },
    "sqla_08,sqla_08:c": {
      "sqla_08": 100
    }
  }
}PK          �<3
�  �  '   merged_full_v5_splitted/asn1crypto.json{
  "asn1crypto": {
    "": {
      "core": 29,
      "keys": 16,
      "x509": 16,
      "cms": 9,
      "util": 7,
      "pem": 4,
      "algos": 4,
      "parser": 3,
      "csr": 2,
      "pkcs12": 2
    },
    ":c": {
      "keys": 54,
      "x509": 36
    },
    "cms": {
      "util": 70
    },
    "cms,util": {
      "util": 100
    },
    "core": {
      "core": 100
    },
    "core,core": {
      "core": 100
    },
    "keys": {
      "keys": 76
    },
    "keys,keys": {
      "keys": 83,
      "core": 11
    },
    "parser,parser": {
      "parser": 100
    },
    "util": {
      "util": 100
    },
    "util,util": {
      "util": 99
    },
    "x509": {
      "x509": 93
    },
    "x509,x509": {
      "x509": 92
    }
  }
}PK          �Cv��"  �"      merged_full_v5_splitted/kae.json{
  "kae": {
    "": {
      "typeUnicodeText": 5,
      "formAbsolutePosition": 4,
      "typeType": 4,
      "typeEnumeration": 4,
      "typeNull": 4,
      "typeLongDateTime": 4,
      "typeAbsoluteOrdinal": 2,
      "cProperty": 2,
      "typeCompDescriptor": 2,
      "kAENOT": 2,
      "typeChar": 2,
      "typeWildCard": 2
    },
    ":i": {
      "keyAERangeStart": 100
    },
    "formAbsolutePosition": {
      "kAEAll": 100
    },
    "formAbsolutePosition,formName:c": {
      "formUniqueID": 100
    },
    "formAbsolutePosition,kAEAll": {
      "kAEFirst": 100
    },
    "formName,formAbsolutePosition:c": {
      "kAEAll": 100
    },
    "formName,formUniqueID": {
      "keyAEDesiredClass": 100
    },
    "formPropertyID,formAbsolutePosition:c": {
      "formName": 50,
      "kAEAll": 50
    },
    "formPropertyID,formRelativePosition:c": {
      "kAEPrevious": 100
    },
    "formRelativePosition,kAEPrevious:c": {
      "kAENext": 100
    },
    "formUniqueID,formRange:c": {
      "formTest": 100
    },
    "formUniqueID,keyAEDesiredClass": {
      "typeType": 100
    },
    "kAEAND,kAEOR": {
      "kAENOT": 100
    },
    "kAEAfter,kAEBeginning": {
      "kAEEnd": 100
    },
    "kAEAfter,kAEPrevious": {
      "kAENext": 100
    },
    "kAEAll,kAEFirst": {
      "kAELast": 100
    },
    "kAEAny,formName:c": {
      "formUniqueID": 100
    },
    "kAEAny,formUniqueID:c": {
      "formRange": 100
    },
    "kAEBefore,kAEAfter": {
      "kAEPrevious": 50,
      "kAEBeginning": 50
    },
    "kAEBeginning": {
      "kAEEnd": 100
    },
    "kAEBeginning,kAEEnd": {
      "kAEBefore": 50,
      "kAEGreaterThan": 50
    },
    "kAEBeginsWith,kAEEndsWith": {
      "kAEContains": 100
    },
    "kAEContains,kAEAND": {
      "kAEOR": 100
    },
    "kAEEnd,kAEBefore": {
      "kAEAfter": 100
    },
    "kAEEnd,kAEGreaterThan": {
      "kAEGreaterThanEquals": 100
    },
    "kAEEndsWith,kAEContains": {
      "kAEAND": 100
    },
    "kAEEquals,kAELessThan": {
      "kAELessThanEquals": 100
    },
    "kAEFirst": {
      "kAEMiddle": 100
    },
    "kAEFirst,kAELast": {
      "kAEMiddle": 100
    },
    "kAEFirst,kAEMiddle": {
      "kAELast": 100
    },
    "kAEGreaterThan,kAEGreaterThanEquals": {
      "kAEEquals": 100
    },
    "kAEGreaterThanEquals,kAEEquals": {
      "kAELessThan": 100
    },
    "kAELast,kAEMiddle": {
      "kAEAny": 100
    },
    "kAELessThan,kAELessThanEquals": {
      "kAEBeginsWith": 100
    },
    "kAELessThanEquals,kAEBeginsWith": {
      "kAEEndsWith": 100
    },
    "kAEMiddle,kAEAny:c": {
      "formUniqueID": 50,
      "formName": 50
    },
    "kAEMiddle,kAELast": {
      "kAEAny": 100
    },
    "kAENext,formName:c": {
      "formAbsolutePosition": 100
    },
    "kAEPrevious,kAENext:c": {
      "formName": 100
    },
    "keyAECompOperator": {
      "typeEnumeration": 100
    },
    "keyAECompOperator,typeEnumeration": {
      "keyAEObject1": 100
    },
    "keyAEContainer,typeWildCard:c": {
      "formPropertyID": 100
    },
    "keyAEDesiredClass": {
      "typeType": 100
    },
    "keyAEDesiredClass,keyAEKeyForm": {
      "keyAEKeyData": 100
    },
    "keyAEDesiredClass,typeType": {
      "keyAEKeyForm": 50,
      "keyAEKeyData": 50
    },
    "keyAEKeyData,typeWildCard": {
      "keyAEContainer": 100
    },
    "keyAEKeyForm": {
      "typeEnumeration": 100
    },
    "keyAEKeyForm,keyAEKeyData": {
      "keyAEContainer": 100
    },
    "keyAEKeyForm,typeEnumeration": {
      "keyAEKeyData": 100
    },
    "keyAEKeyForm,typeEnumeration:c": {
      "formPropertyID": 100
    },
    "keyAELogicalOperator": {
      "typeEnumeration": 100
    },
    "keyAELogicalOperator,typeEnumeration": {
      "keyAELogicalTerms": 100
    },
    "keyAEObject": {
      "typeWildCard": 100
    },
    "keyAEObject,typeWildCard": {
      "keyAEPosition": 100
    },
    "keyAEObject1,keyAECompOperator": {
      "keyAEObject2": 100
    },
    "keyAEObject1,typeWildCard": {
      "keyAEObject2": 100
    },
    "keyAERangeStart": {
      "typeWildCard": 100
    },
    "keyAERangeStart,keyAERangeStop": {
      "typeRangeDescriptor": 100
    },
    "keyAERangeStart,typeWildCard": {
      "keyAERangeStop": 100
    },
    "keyAERangeStart:i": {
      "keyAERangeStop": 100
    },
    "type128BitFloatingPoint,typeChar": {
      "typeIntlText": 100
    },
    "typeAEList,typeAERecord": {
      "typeVersion": 100
    },
    "typeAERecord,typeVersion": {
      "typeAlias": 100
    },
    "typeAbsoluteOrdinal,typeCompDescriptor": {
      "typeLogicalDescriptor": 100
    },
    "typeAlias,typeFSS": {
      "typeFSRef": 100
    },
    "typeBoolean,typeFalse": {
      "typeTrue": 100
    },
    "typeChar,typeIntlText": {
      "typeUTF8Text": 100
    },
    "typeCompDescriptor": {
      "keyAEObject1": 100
    },
    "typeCompDescriptor,keyAEObject1": {
      "keyAECompOperator": 100
    },
    "typeCompDescriptor,typeLogicalDescriptor": {
      "typeRangeDescriptor": 100
    },
    "typeEnumeration,formPropertyID:c": {
      "formAbsolutePosition": 100
    },
    "typeEnumeration,keyAEKeyData": {
      "typeWildCard": 100
    },
    "typeEnumeration,keyAELogicalTerms": {
      "typeAEList": 100
    },
    "typeEnumeration,keyAEObject1": {
      "typeWildCard": 100
    },
    "typeEnumeration,typeProperty": {
      "typeKeyword": 100
    },
    "typeFSRef,typeFileURL": {
      "typeQDPoint": 100
    },
    "typeFSS,typeFSRef": {
      "typeFileURL": 100
    },
    "typeFalse,kAEBefore": {
      "kAEAfter": 100
    },
    "typeFalse,typeTrue": {
      "typeSInt16": 100
    },
    "typeFileURL,typeQDPoint": {
      "typeQDRectangle": 100
    },
    "typeIEEE32BitFloatingPoint,typeIEEE64BitFloatingPoint": {
      "type128BitFloatingPoint": 100
    },
    "typeIEEE64BitFloatingPoint,type128BitFloatingPoint": {
      "typeChar": 100
    },
    "typeInsertionLoc": {
      "keyAEObject": 100
    },
    "typeInsertionLoc,keyAEObject": {
      "keyAEPosition": 100
    },
    "typeInsertionLoc,typeObjectSpecifier": {
      "typeAbsoluteOrdinal": 100
    },
    "typeIntlText,typeUTF8Text": {
      "typeUTF16ExternalRepresentation": 100
    },
    "typeKeyword,typeInsertionLoc": {
      "typeObjectSpecifier": 100
    },
    "typeLogicalDescriptor": {
      "keyAELogicalOperator": 100
    },
    "typeLogicalDescriptor,keyAELogicalOperator": {
      "keyAELogicalTerms": 100
    },
    "typeLogicalDescriptor,typeRangeDescriptor": {
      "typeCurrentContainer": 100
    },
    "typeLongDateTime,typeAEList": {
      "typeAERecord": 100
    },
    "typeNull": {
      "typeBoolean": 50,
      "typeTrue": 50
    },
    "typeNull,typeBoolean": {
      "typeFalse": 100
    },
    "typeNull,typeTrue": {
      "typeFalse": 100
    },
    "typeObjectSpecifier": {
      "keyAEDesiredClass": 100
    },
    "typeObjectSpecifier,keyAEDesiredClass": {
      "keyAEKeyForm": 100
    },
    "typeObjectSpecifier,typeAbsoluteOrdinal": {
      "typeCompDescriptor": 100
    },
    "typeProperty,typeKeyword": {
      "typeInsertionLoc": 100
    },
    "typeQDPoint,typeQDRectangle": {
      "typeRGBColor": 100
    },
    "typeQDRectangle,typeRGBColor": {
      "typeType": 100
    },
    "typeRGBColor,typeType": {
      "typeEnumeration": 100
    },
    "typeRangeDescriptor,typeCurrentContainer": {
      "typeObjectBeingExamined": 100
    },
    "typeSInt16,typeUInt16": {
      "typeSInt32": 100
    },
    "typeSInt32": {
      "typeSInt64": 100
    },
    "typeSInt32,typeUInt32": {
      "typeSInt64": 100
    },
    "typeSInt64,typeUInt64": {
      "typeIEEE32BitFloatingPoint": 100
    },
    "typeStyledText,typeUnicodeText": {
      "typeLongDateTime": 100
    },
    "typeTrue,typeFalse": {
      "kAEBefore": 100
    },
    "typeTrue,typeSInt16": {
      "typeUInt16": 100
    },
    "typeType,keyAEKeyData": {
      "typeWildCard": 100
    },
    "typeType,keyAEKeyForm": {
      "typeEnumeration": 100
    },
    "typeType,typeEnumeration": {
      "typeProperty": 100
    },
    "typeUInt16,typeSInt32": {
      "typeUInt32": 100
    },
    "typeUInt32,typeSInt64": {
      "typeUInt64": 100
    },
    "typeUInt64,typeIEEE32BitFloatingPoint": {
      "typeIEEE64BitFloatingPoint": 100
    },
    "typeUTF16ExternalRepresentation,typeStyledText": {
      "typeUnicodeText": 100
    },
    "typeUTF8Text,typeUTF16ExternalRepresentation": {
      "typeStyledText": 100
    },
    "typeUnicodeText,typeLongDateTime": {
      "typeAEList": 100
    },
    "typeVersion,typeAlias": {
      "typeFSS": 100
    },
    "typeWildCard,formPropertyID:c": {
      "formRelativePosition": 50,
      "formAbsolutePosition": 50
    },
    "typeWildCard,keyAEContainer": {
      "typeWildCard": 100
    },
    "typeWildCard,keyAEObject2": {
      "typeWildCard": 100
    },
    "typeWildCard,keyAEPosition": {
      "typeEnumeration": 100
    },
    "typeWildCard,keyAERangeStop": {
      "typeWildCard": 100
    }
  }
}PK          U���  �  $   merged_full_v5_splitted/mammoth.json{
  "mammoth": {
    "": {
      "documents": 47,
      "convert_to_html": 11,
      "document_matchers": 10,
      "html": 7,
      "docx": 7,
      "html_paths": 4,
      "results": 2
    },
    "document_matchers": {
      "document_matchers": 66
    },
    "documents": {
      "documents": 89,
      "transforms": 6
    },
    "documents,documents": {
      "documents": 100
    },
    "documents,transforms": {
      "documents": 100
    },
    "docx": {
      "documents": 44
    },
    "docx,docx": {
      "docx": 100
    },
    "html": {
      "html": 100
    },
    "html,html": {
      "html": 100
    },
    "html_paths": {
      "html_paths": 100
    },
    "transforms,documents": {
      "documents": 100
    }
  },
  "mammoth.documents": {
    "": {
      "run": 18,
      "paragraph": 16,
      "table": 12,
      "Image": 6,
      "hyperlink": 6,
      "numbering_level": 4,
      "document": 3,
      "tab": 3,
      "text": 3
    },
    "document": {
      "paragraph": 100
    },
    "document,paragraph": {
      "run": 85
    },
    "hyperlink": {
      "run": 57
    },
    "run": {
      "text": 73
    },
    "table": {
      "table_row": 92
    },
    "table,table_row": {
      "table_cell": 100
    },
    "table_cell,table_cell": {
      "table_row": 66
    },
    "table_cell,table_row": {
      "table_cell": 88
    },
    "table_row,table_cell": {
      "table_cell": 52,
      "table_row": 35
    }
  }
}PK          ��/s  s  '   merged_full_v5_splitted/hyperkitty.json{
  "hyperkitty": {
    "": {
      "models": 75,
      "lib": 23
    },
    ":c": {
      "models": 100
    },
    "api,api": {
      "api": 100
    },
    "lib": {
      "lib": 100
    },
    "lib,lib": {
      "lib": 100
    },
    "models": {
      "models": 96
    },
    "models,models": {
      "models": 93
    },
    "models:i": {
      "models": 100
    }
  }
}PK          ���  �  $   merged_full_v5_splitted/filecmp.json{
  "filecmp": {
    "": {
      "cmp": 73,
      "dircmp": 13,
      "cmpfiles": 9
    },
    ":c": {
      "cmp": 100
    },
    "clear_cache": {
      "cmp": 100
    },
    "cmp": {
      "cmp": 100
    },
    "cmp,cmp": {
      "cmp": 96
    },
    "cmp:c": {
      "cmp": 100
    },
    "cmpfiles": {
      "cmpfiles": 100
    },
    "cmpfiles,cmpfiles": {
      "cmpfiles": 100
    },
    "dircmp": {
      "dircmp": 93
    },
    "dircmp,dircmp": {
      "dircmp": 100
    }
  },
  "filecmp.dircmp": {
    "": {
      "left_list": 53,
      "left": 10,
      "left_only": 10,
      "diff_files": 8
    },
    ":c": {
      "left_only": 77
    },
    "common,left_only": {
      "right_only": 100
    },
    "diff_files,left": {
      "right": 100
    },
    "diff_files,left_list": {
      "right_list": 100
    },
    "diff_files,report": {
      "left": 66
    },
    "diff_files,same_files": {
      "diff_files": 100
    },
    "left": {
      "right": 100
    },
    "left,right": {
      "left_list": 100
    },
    "left,right:i": {
      "subdirs": 100
    },
    "left_list": {
      "right_list": 100
    },
    "left_list,right_list": {
      "common": 67,
      "left_list": 32
    },
    "left_only": {
      "left_only": 55,
      "right_only": 44
    },
    "left_only,left_only:c": {
      "right_only": 83
    },
    "left_only,right_only": {
      "same_files": 86,
      "right_only": 6
    },
    "report,left": {
      "right": 100
    },
    "right,left_list": {
      "right_list": 100
    },
    "right,subdirs": {
      "subdirs": 100
    },
    "right_list,common": {
      "left_only": 100
    },
    "right_list,left_list": {
      "right_list": 100
    },
    "right_only,diff_files": {
      "left": 100
    },
    "right_only,right_only:i": {
      "diff_files": 100
    },
    "right_only,same_files": {
      "diff_files": 100
    },
    "same_files,diff_files": {
      "same_files": 40,
      "left_list": 37,
      "report": 18
    }
  }
}PK          G:��  �  "   merged_full_v5_splitted/titus.json{
  "titus": {
    "": {
      "genpy": 46,
      "util": 11
    },
    "errors": {
      "errors": 100
    },
    "errors,errors": {
      "errors": 100
    },
    "genpy": {
      "genpy": 100
    },
    "genpy,genpy": {
      "genpy": 100
    },
    "lib,lib": {
      "lib": 100
    },
    "pfaast": {
      "pfaast": 90
    },
    "pfaast,pfaast": {
      "pfaast": 97
    },
    "pfaast,pfaast:c": {
      "pfaast": 100
    },
    "pmml,pmml": {
      "pmml": 100
    },
    "prettypfa": {
      "genpy": 88
    },
    "producer": {
      "producer": 100
    },
    "producer,producer": {
      "producer": 100
    },
    "util": {
      "util": 100
    },
    "util,util": {
      "util": 100
    }
  },
  "titus.P": {
    "": {
      "Array": 29,
      "Double": 25,
      "String": 10,
      "Map": 8,
      "Int": 5,
      "Wildcard": 5,
      "WildRecord": 2
    },
    ":c": {
      "Null": 100
    },
    "Array": {
      "Wildcard": 61,
      "Double": 21,
      "Array": 11,
      "Boolean": 3
    },
    "Array,Array": {
      "Double": 70,
      "Wildcard": 11,
      "Int": 9
    },
    "Array,Boolean": {
      "Array": 40,
      "Double": 40
    },
    "Array,Double": {
      "Array": 45,
      "Double": 19,
      "Map": 16,
      "WildRecord": 4,
      "Wildcard": 4,
      "Fcn": 2,
      "Int": 2,
      "Null": 2
    },
    "Array,Float": {
      "Null": 66
    },
    "Array,Int": {
      "Null": 46,
      "Bytes": 38
    },
    "Array,Long": {
      "Null": 66
    },
    "Array,String": {
      "Boolean": 33,
      "Map": 26,
      "Bytes": 26
    },
    "Array,Union": {
      "Null": 100
    },
    "Array,WildRecord": {
      "Double": 50,
      "Array": 29
    },
    "Array,Wildcard": {
      "Array": 31,
      "Wildcard": 26,
      "Fcn": 20,
      "Int": 15,
      "Boolean": 3
    },
    "Boolean": {
      "Boolean": 80
    },
    "Boolean,Array": {
      "Wildcard": 40,
      "Boolean": 20,
      "Int": 13
    },
    "Boolean,Int:c": {
      "Long": 100
    },
    "Boolean,Map": {
      "Wildcard": 80
    },
    "Boolean,Null": {
      "Union": 100
    },
    "Bytes,Array": {
      "Array": 44
    },
    "Bytes,Bytes": {
      "Array": 47,
      "Bytes": 31
    },
    "Double": {
      "Double": 61,
      "String": 15,
      "Int": 15,
      "Array": 5
    },
    "Double,Array": {
      "Double": 53,
      "Array": 20,
      "WildRecord": 13,
      "Union": 7,
      "Wildcard": 3
    },
    "Double,Double": {
      "Double": 59,
      "Array": 14,
      "WildRecord": 7,
      "Map": 6,
      "Boolean": 5,
      "Int": 2
    },
    "Double,Fcn": {
      "Array": 37,
      "Double": 31,
      "Wildcard": 31
    },
    "Double,Int": {
      "Double": 54,
      "Wildcard": 21,
      "Int": 15
    },
    "Double,Map": {
      "Double": 65,
      "Map": 32
    },
    "Double,Null": {
      "Array": 30,
      "Map": 30
    },
    "Double,String": {
      "Int": 44,
      "Double": 38
    },
    "Double,Union": {
      "Null": 75
    },
    "Double,WildRecord": {
      "Double": 51,
      "Array": 21,
      "Map": 21
    },
    "Fcn": {
      "Wildcard": 83
    },
    "Fcn,Array": {
      "Double": 71
    },
    "Fcn,Double": {
      "Double": 100
    },
    "Fcn,Int": {
      "Wildcard": 88
    },
    "Fcn,String": {
      "Wildcard": 88
    },
    "Fcn,Wildcard": {
      "Wildcard": 73,
      "Boolean": 18
    },
    "Float,Double:c": {
      "Bytes": 66
    },
    "Float,Null": {
      "Array": 28,
      "Map": 28
    },
    "Int": {
      "Int": 46,
      "Double": 15,
      "Array": 15
    },
    "Int,Array": {
      "Wildcard": 64
    },
    "Int,Boolean": {
      "Array": 62
    },
    "Int,Bytes": {
      "Bytes": 88
    },
    "Int,Double": {
      "Double": 82
    },
    "Int,Fcn": {
      "Wildcard": 87
    },
    "Int,Int": {
      "Int": 46,
      "Double": 14,
      "Boolean": 8,
      "Long": 8,
      "Array": 7,
      "String": 7
    },
    "Int,Long": {
      "Long": 83
    },
    "Int,Long:c": {
      "Float": 85
    },
    "Int,Null": {
      "Map": 23,
      "Array": 15,
      "Union": 15
    },
    "Int,Wildcard": {
      "Array": 38,
      "Wildcard": 27
    },
    "Long,Float:c": {
      "Double": 85
    },
    "Long,Long": {
      "Long": 60
    },
    "Long,Null": {
      "Array": 25,
      "Map": 25
    },
    "Map": {
      "Wildcard": 100
    },
    "Map,Double": {
      "Map": 55,
      "Double": 25,
      "WildRecord": 7,
      "Null": 4
    },
    "Map,Float": {
      "Null": 100
    },
    "Map,Int": {
      "Null": 100
    },
    "Map,Long": {
      "Null": 100
    },
    "Map,Map": {
      "Double": 97
    },
    "Map,Wildcard": {
      "Map": 45,
      "Fcn": 26,
      "Array": 8,
      "Int": 6,
      "String": 6
    },
    "Null,Array": {
      "Int": 28,
      "Double": 23,
      "Long": 19,
      "Float": 19
    },
    "Null,Boolean:c": {
      "Int": 100
    },
    "Null,Double": {
      "Null": 50,
      "Fcn": 33
    },
    "Null,Enum": {
      "Null": 100
    },
    "Null,Fixed": {
      "Null": 100
    },
    "Null,Float": {
      "Null": 100
    },
    "Null,Int": {
      "Null": 100
    },
    "Null,Long": {
      "Null": 100
    },
    "Null,Map": {
      "Int": 30,
      "Long": 20,
      "Float": 20,
      "Double": 20
    },
    "Null,Record": {
      "Int": 100
    },
    "Null,Union": {
      "Boolean": 55,
      "Int": 44
    },
    "Null,Wildcard": {
      "Wildcard": 44,
      "Array": 38,
      "Double": 16
    },
    "Null:c": {
      "Boolean": 100
    },
    "Record,Int": {
      "Null": 100
    },
    "String": {
      "String": 74,
      "Int": 13
    },
    "String,Array": {
      "String": 52,
      "Array": 23
    },
    "String,Boolean": {
      "Array": 62
    },
    "String,Bytes": {
      "Bytes": 100
    },
    "String,Double": {
      "Double": 70
    },
    "String,Int": {
      "Int": 50
    },
    "String,String": {
      "String": 45,
      "Array": 23,
      "Int": 11,
      "Boolean": 9
    },
    "String,Wildcard": {
      "Wildcard": 38
    },
    "Union,Boolean": {
      "Null": 100
    },
    "Union,Int": {
      "Null": 100
    },
    "Union,Null": {
      "Wildcard": 68,
      "Double": 17
    },
    "Union,WildRecord": {
      "Wildcard": 100
    },
    "Union,Wildcard": {
      "Null": 100
    },
    "WildEnum": {
      "Array": 62
    },
    "WildRecord": {
      "Double": 38,
      "WildRecord": 38
    },
    "WildRecord,Array": {
      "Double": 50,
      "Array": 31
    },
    "WildRecord,Double": {
      "Double": 45,
      "Int": 27,
      "Wildcard": 13,
      "Array": 13
    },
    "WildRecord,Map": {
      "Double": 50,
      "Map": 50
    },
    "WildRecord,Wildcard": {
      "Fcn": 40,
      "Union": 40
    },
    "Wildcard": {
      "Wildcard": 87
    },
    "Wildcard,Array": {
      "Wildcard": 78,
      "Union": 8,
      "Double": 5,
      "WildRecord": 3
    },
    "Wildcard,Boolean": {
      "Array": 43,
      "Boolean": 24,
      "Int": 13
    },
    "Wildcard,Double": {
      "Array": 56,
      "Fcn": 20
    },
    "Wildcard,Fcn": {
      "Wildcard": 67,
      "String": 14,
      "Int": 12
    },
    "Wildcard,Int": {
      "Array": 51,
      "Fcn": 25,
      "Int": 12
    },
    "Wildcard,Map": {
      "Wildcard": 94
    },
    "Wildcard,Null": {
      "Wildcard": 80
    },
    "Wildcard,Union": {
      "WildRecord": 45,
      "Wildcard": 36
    },
    "Wildcard,Wildcard": {
      "Wildcard": 37,
      "Array": 20,
      "Boolean": 16,
      "Null": 8,
      "Double": 8,
      "Map": 4,
      "Int": 2
    }
  },
  "titus.genpy": {
    "": {
      "PFAEngine": 100
    },
    "PFAEngine": {
      "PFAEngine": 100
    },
    "PFAEngine,PFAEngine": {
      "PFAEngine": 100
    }
  },
  "titus.genpy.PFAEngine": {
    "": {
      "fromYaml": 96,
      "fromJson": 2
    },
    "fromJson": {
      "fromJson": 100
    },
    "fromYaml": {
      "fromYaml": 100
    },
    "fromYaml,fromYaml": {
      "fromYaml": 100
    }
  },
  "titus.util": {
    "": {
      "case": 72,
      "flatten": 23
    },
    "flatten": {
      "flatten": 100
    },
    "flatten,flatten": {
      "flatten": 100
    }
  }
}PK          -�Mu  Mu  $   merged_full_v5_splitted/inspect.json{
  "inspect": {
    "": {
      "stack": 16,
      "getargspec": 12,
      "getfile": 9,
      "currentframe": 7,
      "getmembers": 6,
      "signature": 5,
      "getsource": 3,
      "getmodule": 3,
      "getsourcefile": 3,
      "getdoc": 3,
      "isclass": 2,
      "getfullargspec": 2
    },
    ":c": {
      "isclass": 36,
      "isfunction": 13,
      "ismodule": 12,
      "ismethod": 10,
      "getargspec": 3,
      "isgeneratorfunction": 3,
      "isgenerator": 3
    },
    ":i": {
      "getmembers": 74,
      "getmro": 10,
      "stack": 5,
      "getargspec": 2,
      "classify_class_attrs": 2
    },
    "ArgSpec": {
      "getargspec": 85
    },
    "Attribute": {
      "classify_class_attrs": 80
    },
    "BlockFinder": {
      "EndOfBlock": 100
    },
    "ClosureVars": {
      "getclosurevars": 100
    },
    "ClosureVars,getclosurevars": {
      "getclosurevars": 100
    },
    "GEN_RUNNING": {
      "GEN_RUNNING": 100
    },
    "Parameter": {
      "Parameter": 72,
      "signature": 18,
      "Signature": 7
    },
    "Parameter,Parameter": {
      "Parameter": 92,
      "Signature": 5
    },
    "Parameter,Parameter:c": {
      "Parameter": 93
    },
    "Parameter,Signature": {
      "signature": 77
    },
    "Parameter,signature": {
      "signature": 100
    },
    "Parameter:c": {
      "Parameter": 83
    },
    "Signature": {
      "Parameter": 73,
      "Signature": 15
    },
    "Signature,Parameter": {
      "Parameter": 70,
      "signature": 30
    },
    "Signature,Signature": {
      "Signature": 66
    },
    "_signature_get_user_defined_method,isclass": {
      "signature": 100
    },
    "_signature_get_user_defined_method:c": {
      "isclass": 100
    },
    "classify_class_attrs:c": {
      "isdatadescriptor": 92
    },
    "cleandoc": {
      "getdoc": 70
    },
    "currentframe": {
      "getouterframes": 33,
      "getframeinfo": 30,
      "getargvalues": 10,
      "stack": 8,
      "currentframe": 7,
      "getmodule": 6
    },
    "currentframe,getfile": {
      "currentframe": 90
    },
    "findsource": {
      "getsource": 85
    },
    "findsource,getsource": {
      "findsource": 100
    },
    "findsource,isframe:c": {
      "ismodule": 100
    },
    "findsource:c": {
      "isframe": 100
    },
    "formatargspec": {
      "getargspec": 42,
      "formatargspec": 35,
      "getfullargspec": 20
    },
    "formatargspec,formatargspec": {
      "formatargspec": 100
    },
    "formatargspec,getargspec": {
      "formatargspec": 60,
      "getdoc": 25
    },
    "formatargspec,isfunction": {
      "getfullargspec": 88
    },
    "getabsfile": {
      "getmembers": 48,
      "currentframe": 20,
      "getabsfile": 20
    },
    "getabsfile,getmembers": {
      "ismodule": 100
    },
    "getargspec": {
      "getargspec": 43,
      "formatargspec": 23,
      "signature": 14,
      "getfullargspec": 7
    },
    "getargspec,formatargspec": {
      "formatargspec": 76,
      "getargspec": 10
    },
    "getargspec,getargspec": {
      "getargspec": 53,
      "formatargspec": 16,
      "signature": 16
    },
    "getargspec,getargspec:c": {
      "getargspec": 50
    },
    "getargspec,getdoc": {
      "getdoc": 66
    },
    "getargspec,isclass:c": {
      "getargspec": 46,
      "ismodule": 38
    },
    "getargspec,isfunction": {
      "getargspec": 50,
      "isfunction": 25
    },
    "getargspec,isfunction:c": {
      "ismethod": 66,
      "isfunction": 26
    },
    "getargspec,ismethod": {
      "formatargspec": 50,
      "getargspec": 37
    },
    "getargspec,ismethod:c": {
      "isfunction": 75
    },
    "getargspec,signature": {
      "Parameter": 100
    },
    "getargspec,signature:c": {
      "Parameter": 100
    },
    "getargspec:c": {
      "ismethod": 50,
      "isfunction": 22,
      "getargspec": 16,
      "getfullargspec": 5
    },
    "getargvalues": {
      "formatargvalues": 78,
      "currentframe": 12
    },
    "getattr_static": {
      "getattr_static": 97
    },
    "getattr_static,getattr_static": {
      "getattr_static": 100
    },
    "getcallargs": {
      "getcallargs": 55
    },
    "getclosurevars": {
      "getclosurevars": 100
    },
    "getclosurevars,getclosurevars": {
      "getclosurevars": 100
    },
    "getcomments": {
      "getcomments": 100
    },
    "getdoc": {
      "getargspec": 32,
      "getdoc": 22,
      "getcomments": 13,
      "cleandoc": 12,
      "getfullargspec": 8,
      "signature": 4,
      "getsource": 3
    },
    "getdoc,formatargspec": {
      "getargspec": 100
    },
    "getdoc,getargspec": {
      "formatargspec": 90
    },
    "getdoc,getdoc": {
      "getdoc": 97
    },
    "getdoc,getdoc:c": {
      "ismethod": 93
    },
    "getdoc,getfullargspec": {
      "getargspec": 85
    },
    "getdoc,isclass": {
      "getdoc": 87
    },
    "getdoc,ismethod": {
      "getdoc": 92
    },
    "getdoc,ismethod:c": {
      "isbuiltin": 83
    },
    "getdoc:c": {
      "ismethod": 62
    },
    "getfile": {
      "currentframe": 96
    },
    "getfile,currentframe": {
      "getfile": 100
    },
    "getframeinfo": {
      "currentframe": 76
    },
    "getframeinfo:i": {
      "currentframe": 100
    },
    "getfullargspec": {
      "getargspec": 79,
      "formatargspec": 12,
      "getfullargspec": 4
    },
    "getfullargspec,formatargspec": {
      "formatannotationrelativeto": 89
    },
    "getfullargspec,formatargspec:c": {
      "isfunction": 100
    },
    "getfullargspec,getargspec": {
      "formatargspec": 93
    },
    "getfullargspec,isfunction": {
      "getfullargspec": 100
    },
    "getgeneratorlocals": {
      "getgeneratorlocals": 100
    },
    "getgeneratorlocals,getgeneratorlocals": {
      "getgeneratorlocals": 100
    },
    "getgeneratorstate,GEN_SUSPENDED": {
      "getgeneratorstate": 100
    },
    "getinnerframes": {
      "getargvalues": 100
    },
    "getinnerframes,getargvalues": {
      "formatargvalues": 100
    },
    "getmembers": {
      "isclass": 30,
      "getmembers": 21,
      "ismethod": 19,
      "isfunction": 14,
      "isroutine": 5,
      "isgetsetdescriptor": 2
    },
    "getmembers,getmembers": {
      "getmembers": 77,
      "ismethod": 19
    },
    "getmembers,getmembers:i": {
      "ismodule": 100
    },
    "getmembers,isbuiltin:c": {
      "isfunction": 100
    },
    "getmembers,isclass": {
      "getmembers": 44,
      "getclasstree": 31
    },
    "getmembers,isclass:c": {
      "getmodule": 70,
      "getmembers": 11,
      "isfunction": 11
    },
    "getmembers,isclass:i": {
      "getmembers": 91
    },
    "getmembers,isfunction": {
      "ismethod": 52
    },
    "getmembers,isfunction:c": {
      "isclass": 92
    },
    "getmembers,isfunction:i": {
      "getmembers": 100
    },
    "getmembers,ismethod": {
      "getmembers": 31,
      "isfunction": 27,
      "getargspec": 20,
      "getdoc": 9
    },
    "getmembers,ismethod:c": {
      "isfunction": 71
    },
    "getmembers,ismethod:i": {
      "getmembers": 66
    },
    "getmembers,ismodule": {
      "getclasstree": 70,
      "getmembers": 23
    },
    "getmembers,ismodule:i": {
      "getmembers": 100
    },
    "getmembers,isroutine:c": {
      "isbuiltin": 92
    },
    "getmembers:c": {
      "isclass": 67,
      "ismethod": 11,
      "isfunction": 10,
      "ismodule": 7,
      "isbuiltin": 2
    },
    "getmembers:i": {
      "isclass": 49,
      "ismethod": 31,
      "isfunction": 9,
      "getmembers": 4
    },
    "getmodule": {
      "getmodule": 43,
      "getsourcefile": 35,
      "stack": 7,
      "currentframe": 5,
      "getsourcelines": 4
    },
    "getmodule,getmembers:i": {
      "isroutine": 48,
      "isfunction": 28,
      "getmembers": 23
    },
    "getmodule,getmodule": {
      "getmodule": 83
    },
    "getmodule,getmodule:c": {
      "isfunction": 88
    },
    "getmodule,getsourcefile": {
      "getfile": 100
    },
    "getmodule,getsourcefile:c": {
      "ismethod": 100
    },
    "getmodule,isfunction:c": {
      "isclass": 48,
      "ismethoddescriptor": 25,
      "getmodule": 14
    },
    "getmodule,isfunction:i": {
      "getmembers": 100
    },
    "getmodule,ismodule:c": {
      "isclass": 100
    },
    "getmodule:c": {
      "ismodule": 54,
      "isfunction": 29
    },
    "getmodule:i": {
      "getmembers": 100
    },
    "getmodulename": {
      "getmodulename": 85
    },
    "getmro": {
      "getmro": 45
    },
    "getmro,isfunction": {
      "getmodule": 100
    },
    "getmro:i": {
      "getmro": 57
    },
    "getouterframes": {
      "currentframe": 63,
      "getframeinfo": 36
    },
    "getouterframes:i": {
      "currentframe": 80
    },
    "getsource": {
      "getsource": 58,
      "findsource": 14
    },
    "getsource,findsource": {
      "getsource": 100
    },
    "getsource,getsource": {
      "getsource": 100
    },
    "getsourcefile": {
      "getsourcefile": 39,
      "getsourcelines": 27,
      "getsource": 12,
      "getfile": 11,
      "getmodule": 4,
      "findsource": 4
    },
    "getsourcefile,getsourcefile": {
      "getsourcefile": 53,
      "getsourcelines": 35
    },
    "getsourcefile:c": {
      "ismodule": 100
    },
    "getsourcelines": {
      "getsourcefile": 63,
      "getblock": 13,
      "getsourcelines": 13,
      "getfile": 6
    },
    "getsourcelines,isfunction:c": {
      "isfunction": 100
    },
    "isabstract": {
      "isabstract": 77
    },
    "isabstract,isabstract": {
      "isabstract": 100
    },
    "isawaitable,isawaitable": {
      "isawaitable": 100
    },
    "isbuiltin": {
      "isclass": 36,
      "isbuiltin": 26
    },
    "isbuiltin,getmodule:c": {
      "isfunction": 100
    },
    "isbuiltin,getmodule:i": {
      "getmembers": 100
    },
    "isbuiltin,isbuiltin": {
      "iscode": 100
    },
    "isbuiltin,isclass": {
      "iscode": 100
    },
    "isbuiltin,isclass:c": {
      "ismethod": 69,
      "isclass": 23
    },
    "isbuiltin,iscode": {
      "isframe": 100
    },
    "isbuiltin,isfunction:c": {
      "ismethod": 54,
      "isroutine": 32,
      "isfunction": 12
    },
    "isbuiltin,isgetsetdescriptor:c": {
      "ismemberdescriptor": 100
    },
    "isbuiltin,ismethod": {
      "ismethoddescriptor": 100
    },
    "isbuiltin,ismethod:c": {
      "ismethoddescriptor": 88
    },
    "isbuiltin,isroutine": {
      "isabstract": 100
    },
    "isbuiltin:c": {
      "isfunction": 41,
      "isclass": 32,
      "isroutine": 10,
      "ismethoddescriptor": 8
    },
    "isclass": {
      "isclass": 29,
      "getmro": 14,
      "ismodule": 11,
      "getargspec": 9,
      "getmodule": 6,
      "getmembers": 6,
      "getfullargspec": 6
    },
    "isclass,getargspec": {
      "getargspec": 100
    },
    "isclass,getclasstree": {
      "getclasstree": 100
    },
    "isclass,getdoc": {
      "getdoc": 93
    },
    "isclass,getfullargspec:c": {
      "isfunction": 100
    },
    "isclass,getmembers": {
      "isfunction": 50,
      "isclass": 28
    },
    "isclass,getmembers:c": {
      "isclass": 66
    },
    "isclass,getmembers:i": {
      "ismethod": 62
    },
    "isclass,getmodule": {
      "getmodule": 100
    },
    "isclass,getmodule:i": {
      "getmembers": 100
    },
    "isclass,getmro": {
      "getmro": 93
    },
    "isclass,getsourcelines": {
      "getsourcelines": 100
    },
    "isclass,isclass": {
      "getmro": 56,
      "isclass": 19,
      "getsourcelines": 17
    },
    "isclass,isclass:c": {
      "isclass": 52,
      "ismodule": 38
    },
    "isclass,iscode": {
      "isframe": 100
    },
    "isclass,isfunction:c": {
      "isclass": 54,
      "ismethod": 38,
      "isbuiltin": 5
    },
    "isclass,ismethod": {
      "isfunction": 95
    },
    "isclass,ismethod:c": {
      "isfunction": 52,
      "ismodule": 26,
      "getmodule": 19
    },
    "isclass,ismodule": {
      "isbuiltin": 75
    },
    "isclass,ismodule:c": {
      "isbuiltin": 36,
      "isfunction": 32,
      "isclass": 10,
      "isroutine": 9,
      "ismethod": 9
    },
    "isclass,isroutine": {
      "isframe": 92
    },
    "isclass,isroutine:c": {
      "isgetsetdescriptor": 52,
      "isclass": 30
    },
    "isclass,signature:c": {
      "ismethoddescriptor": 100
    },
    "isclass:c": {
      "ismodule": 33,
      "isfunction": 26,
      "isclass": 25,
      "ismethod": 5,
      "isroutine": 5
    },
    "isclass:i": {
      "getmro": 70
    },
    "iscode,isbuiltin": {
      "isroutine": 100
    },
    "iscode,isframe": {
      "isfunction": 64,
      "istraceback": 35
    },
    "iscoroutine": {
      "iscoroutinefunction": 100
    },
    "isdatadescriptor,getmembers": {
      "getmembers": 100
    },
    "isdatadescriptor,isgenerator": {
      "isgeneratorfunction": 100
    },
    "isframe": {
      "getframeinfo": 100
    },
    "isframe,iscode": {
      "isbuiltin": 95
    },
    "isframe,isfunction": {
      "ismethod": 100
    },
    "isframe,ismodule": {
      "getblock": 100
    },
    "isframe,istraceback": {
      "iscode": 70,
      "isgetsetdescriptor": 29
    },
    "isfunction": {
      "ismethod": 30,
      "getargspec": 23,
      "formatargspec": 14,
      "getdoc": 8,
      "isclass": 5,
      "getmodule": 3,
      "isfunction": 3,
      "getsource": 2
    },
    "isfunction,getargspec": {
      "formatargspec": 41,
      "getargspec": 36,
      "getdoc": 16
    },
    "isfunction,getargspec:c": {
      "ismethod": 70,
      "isclass": 25
    },
    "isfunction,getdoc:c": {
      "isclass": 100
    },
    "isfunction,getfullargspec": {
      "formatargspec": 84,
      "getfullargspec": 15
    },
    "isfunction,getmembers": {
      "getclasstree": 70
    },
    "isfunction,getmembers:i": {
      "isclass": 100
    },
    "isfunction,getsourcelines:c": {
      "isfunction": 100
    },
    "isfunction,isbuiltin:c": {
      "isclass": 70,
      "ismethod": 19
    },
    "isfunction,isclass:c": {
      "ismethod": 28,
      "ismodule": 25,
      "getmodule": 20,
      "isclass": 12,
      "isfunction": 11
    },
    "isfunction,isfunction": {
      "ismethod": 64,
      "getsourcelines": 28
    },
    "isfunction,isfunction:c": {
      "ismodule": 44
    },
    "isfunction,isgeneratorfunction": {
      "isgenerator": 95
    },
    "isfunction,ismethod": {
      "getargspec": 26,
      "isbuiltin": 23,
      "ismodule": 21,
      "ismethod": 17
    },
    "isfunction,ismethod:c": {
      "isclass": 46,
      "isfunction": 29
    },
    "isfunction,ismethod:i": {
      "getmembers": 80
    },
    "isfunction,ismethoddescriptor:c": {
      "isclass": 100
    },
    "isfunction,ismodule:c": {
      "ismodule": 100
    },
    "isfunction,isroutine": {
      "getargspec": 100
    },
    "isfunction,isroutine:c": {
      "isclass": 100
    },
    "isfunction,istraceback:c": {
      "isframe": 100
    },
    "isfunction:c": {
      "ismethod": 42,
      "isclass": 34,
      "isbuiltin": 13,
      "getargspec": 5
    },
    "isgenerator": {
      "isgenerator": 40,
      "iscoroutine": 32,
      "getcallargs": 24
    },
    "isgenerator,isgenerator": {
      "isgenerator": 100
    },
    "isgenerator,isgeneratorfunction": {
      "ismemberdescriptor": 44
    },
    "isgenerator,istraceback": {
      "isframe": 100
    },
    "isgeneratorfunction": {
      "isgenerator": 52,
      "signature": 21
    },
    "isgeneratorfunction,isfunction:c": {
      "isclass": 100
    },
    "isgeneratorfunction,isgenerator": {
      "istraceback": 95
    },
    "isgeneratorfunction,ismemberdescriptor": {
      "ismemberdescriptor": 100
    },
    "isgeneratorfunction:c": {
      "isfunction": 50
    },
    "isgetsetdescriptor,isfunction": {
      "isfunction": 100
    },
    "isgetsetdescriptor,isgetsetdescriptor": {
      "isfunction": 71
    },
    "isgetsetdescriptor,ismemberdescriptor:c": {
      "ismodule": 50,
      "isclass": 50
    },
    "isgetsetdescriptor:c": {
      "ismemberdescriptor": 100
    },
    "ismemberdescriptor,isclass:c": {
      "isfunction": 100
    },
    "ismemberdescriptor,ismodule:c": {
      "isclass": 100
    },
    "ismethod": {
      "isfunction": 26,
      "getargspec": 21,
      "getfullargspec": 20,
      "getargs": 11,
      "signature": 10
    },
    "ismethod,formatargspec": {
      "getargspec": 100
    },
    "ismethod,getargs": {
      "getargs": 80
    },
    "ismethod,getargspec": {
      "getargspec": 42,
      "formatargspec": 28
    },
    "ismethod,getargspec:c": {
      "isfunction": 81
    },
    "ismethod,getdoc": {
      "getdoc": 93
    },
    "ismethod,getfullargspec": {
      "formatargspec": 100
    },
    "ismethod,getmembers": {
      "getmembers": 84
    },
    "ismethod,getmodule": {
      "getmodule": 100
    },
    "ismethod,getmro:c": {
      "isfunction": 83
    },
    "ismethod,isbuiltin": {
      "ismethoddescriptor": 63,
      "ismodule": 21
    },
    "ismethod,isbuiltin:c": {
      "isfunction": 100
    },
    "ismethod,isclass:c": {
      "ismethod": 80
    },
    "ismethod,isfunction": {
      "getargspec": 31,
      "isgeneratorfunction": 25,
      "getfullargspec": 22,
      "getmembers": 6,
      "getsource": 5
    },
    "ismethod,isfunction:c": {
      "istraceback": 50,
      "ismethod": 14,
      "isbuiltin": 14,
      "isclass": 13
    },
    "ismethod,ismethoddescriptor": {
      "iscode": 85
    },
    "ismethod,ismethoddescriptor:c": {
      "isfunction": 69
    },
    "ismethod,ismodule": {
      "istraceback": 64,
      "isdatadescriptor": 35
    },
    "ismethod,ismodule:c": {
      "isclass": 96
    },
    "ismethod,signature": {
      "getargspec": 80
    },
    "ismethod:c": {
      "isfunction": 80,
      "ismethod": 7,
      "isbuiltin": 5,
      "isclass": 3
    },
    "ismethod:i": {
      "getmro": 100
    },
    "ismethoddescriptor": {
      "isdatadescriptor": 100
    },
    "ismethoddescriptor,iscode": {
      "isgenerator": 100
    },
    "ismethoddescriptor,isdatadescriptor": {
      "getmembers": 83
    },
    "ismodule": {
      "isclass": 71,
      "getfile": 12
    },
    "ismodule,getclasstree": {
      "getabsfile": 100
    },
    "ismodule,getmembers:i": {
      "isclass": 87
    },
    "ismodule,isbuiltin": {
      "ismethod": 100
    },
    "ismodule,isbuiltin:c": {
      "ismethod": 69,
      "isgetsetdescriptor": 30
    },
    "ismodule,isclass": {
      "ismethod": 42,
      "getdoc": 28,
      "isroutine": 24
    },
    "ismodule,isclass:c": {
      "ismethod": 29,
      "isroutine": 24,
      "isfunction": 22,
      "isclass": 22
    },
    "ismodule,isdatadescriptor": {
      "isgenerator": 100
    },
    "ismodule,isfunction:c": {
      "isclass": 100
    },
    "ismodule,ismethod:c": {
      "isbuiltin": 71
    },
    "ismodule,ismodule:c": {
      "isclass": 57,
      "isfunction": 30
    },
    "ismodule,isroutine:c": {
      "isclass": 85
    },
    "ismodule,istraceback": {
      "isgenerator": 77
    },
    "ismodule:c": {
      "isclass": 51,
      "isfunction": 17,
      "ismodule": 17,
      "isbuiltin": 8,
      "isroutine": 4
    },
    "isroutine": {
      "signature": 53,
      "isroutine": 46
    },
    "isroutine,getargspec:c": {
      "isclass": 100
    },
    "isroutine,isbuiltin:c": {
      "getmodule": 100
    },
    "isroutine,isclass:c": {
      "ismodule": 85
    },
    "isroutine,isframe": {
      "istraceback": 100
    },
    "isroutine,isgetsetdescriptor:c": {
      "ismemberdescriptor": 100
    },
    "isroutine:c": {
      "isclass": 100
    },
    "istraceback": {
      "isframe": 100
    },
    "istraceback,isframe": {
      "iscode": 100
    },
    "istraceback,isframe:c": {
      "iscode": 100
    },
    "istraceback,isgenerator": {
      "isgeneratorfunction": 100
    },
    "istraceback,isgetsetdescriptor": {
      "isgetsetdescriptor": 100
    },
    "signature": {
      "signature": 38,
      "getargspec": 28,
      "Parameter": 16,
      "Signature": 7
    },
    "signature,Parameter": {
      "Parameter": 93
    },
    "signature,Parameter:c": {
      "Parameter": 96
    },
    "signature,getargspec": {
      "signat