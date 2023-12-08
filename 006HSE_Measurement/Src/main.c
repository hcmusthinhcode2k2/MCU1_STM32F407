     * may be cached.
     * Returns NULL if an error has occurred.
     * Target must be a java.awt.Component (should be a Canvas
     * or Window for native rendering).
     * FreeDrawingSurface() must be called when finished with the
     * returned JAWT_DrawingSurface.
     */
    JAWT_DrawingSurface* (JNICALL *GetDrawingSurface)
        (JNIEnv* env, jobject target);
    /*
     * Free the drawing surface allocated in GetDrawingSurface.
     */
    void (JNICALL *FreeDrawingSurface)
        (JAWT_DrawingSurface* ds);
    /*
     * Since 1.4
     * Locks the entire AWT for synchronization purposes
     */
    void (JNICALL *Lock)(JNIEnv* env);
    /*
     * Since 1.4
     * Unlocks the entire AWT for synchronization purposes
     */
    void (JNICALL *Unlock)(JNIEnv* env);
    /*
     * Since 1.4
     * Returns a reference to a java.awt.Component from a native
     * platform handle.  On Windows, this corresponds to an HWND;
     * on Solaris and Linux, this is a Drawable.  For other platforms,
     * see the appropriate machine-dependent header file for a description.
     * The reference returned by this function is a local
     * reference that is only valid in this environment.
     * This function returns a NULL reference if no component could be
     * found with matching platform information.
     */
    jobject (JNICALL *GetComponent)(JNIEnv* env, void* platformInfo);

    /**
     * Since 9
     * Creates a java.awt.Frame placed in a native container. Container is
     * referenced by the native platform handle. For example on Windows this
     * corresponds to an HWND. For other platforms, see the appropriate
     * machine-dependent header file for a description. The reference returned
     * by this function is a local reference that is only valid in this
     * environment. This function returns a NULL reference if no frame could be
     * created with matching platform information.
     */
    jobject (JNICALL *CreateEmbeddedFrame) (JNIEnv *env, void* platformInfo);

    /**
     * Since 9
     * Moves and resizes the embedded frame. The new location of the top-left
     * corner is specified by x and y parameters relative to the nati