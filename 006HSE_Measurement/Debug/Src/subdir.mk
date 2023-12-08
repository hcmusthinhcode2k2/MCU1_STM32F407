faceInfo*)dsi->platformInfo;
 *
 *     //////////////////////////////
 *     // !!! DO PAINTING HERE !!! //
 *     //////////////////////////////
 *
 *     // Free the drawing surface info
 *     ds->FreeDrawingSurfaceInfo(dsi);
 *
 *     // Unlock the drawing surface
 *     ds->Unlock(ds);
 *
 *     // Free the drawing surface
 *     awt.FreeDrawingSurface(ds);
 * }
 *
 */

/*
 * JAWT_Rectangle
 * Structure for a native rectangle.
 */
typedef struct jawt_Rectangle {
    jint x;
    jint y;
    jint width;
    jint height;
} JAWT_Rectangle;

struct jawt_DrawingSurface;

/*
 * JAWT_DrawingSurfaceInfo
 * Structure for containing the underlying drawing information of a component.
 */
typedef struct jawt_DrawingSurfaceInfo {
    /*
     * Pointer to the platform-specific information.  This can be safely
     * cast to a JAWT_Win32DrawingSurfaceInfo on Windows or a
     * JAWT_X11DrawingSurfaceInfo on Linux and Solaris. On Mac OS X this is a
     * pointer to a NSObject that conforms to the JAWT_SurfaceLayers
     * protocol. See jawt_md.h for details.
     */
    void* platformInfo;
    /* Cached pointer to the underlying drawing surface */
    struct jawt_DrawingSurface* ds;
    /* Bounding rectangle of the drawi