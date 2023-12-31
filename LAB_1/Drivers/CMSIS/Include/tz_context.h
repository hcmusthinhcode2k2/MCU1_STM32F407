e);
typedef void (*AccessBridge_PropertySelectionChangeFP) (long vmID, JOBJECT64 event, JOBJECT64 source);
typedef void (*AccessBridge_PropertyTextChangeFP) (long vmID, JOBJECT64 event, JOBJECT64 source);
typedef void (*AccessBridge_PropertyCaretChangeFP) (long vmID, JOBJECT64 event, JOBJECT64 source,
                                                                                                int oldPosition, int newPosition);
typedef void (*AccessBridge_PropertyVisibleDataChangeFP)  (long vmID, JOBJECT64 event, JOBJECT64 source);
typedef void (*AccessBridge_PropertyChildChangeFP) (long vmID, JOBJECT64 event, JOBJECT64 source,
                                                                                                JOBJECT64 oldChild, JOBJECT64 newChild);
typedef void (*AccessBridge_PropertyActiveDescendentChangeFP) (long vmID, JOBJECT64 event,
                                                               JOBJECT64 source,
                                                               JOBJECT64 oldActiveDescendent,
                                                               JOBJECT64 newActiveDescendent);

typedef void (*AccessBridge_PropertyTableModelChangeFP) (long vmID, JOBJECT64 event, JOBJECT64 src,
                                                                                                             wchar_t *oldValue, wchar_t *newValue);

#ifdef __cplusplus
}
#endif

#endif
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       