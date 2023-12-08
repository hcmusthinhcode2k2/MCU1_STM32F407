ients.ActiveSync.TransportLayer.EASProvisionDoc.RequireEncryptedSMIMEMessages">
            <summary>
            Specifies whether the client sends encrypted email messages.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.RequireSignedSMIMEAlgorithm">
            <summary>
            Specifies the algorithm used when signing S/MIME messages.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.RequireEncryptionSMIMEAlgorithm">
            <summary>
            Specifies the algorithm used when encrypting S/MIME messages.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowSMIMEEncryptionAlgorithmNegotiation">
            <summary>
            Controls the negotiation of the encryption algorithm.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowSMIMESoftCerts">
            <summary>
            Specifies whether the client can use soft certificates to sign outgoing messages.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowBrowser">
            <summary>
            Specifies whether the device allows the use of a web browser.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowConsumerEmail">
            <summary>
            Specifies whether the device allows the user to configure a personal email account.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowRemoteDesktop">
            <summary>
            Specifies whether the device allows the use of Remote Desktop.
            This property SHOULD be ignored if the client does not support connecting remotely to a personal computer.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowInternetSharing">
            <summary>
            Specifies whether the device allows the use of Internet Sharing.
            This property SHOULD be ignored if the client does not support sharing its internet connection with other devices.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.UnapprovedInROMApplicationList">
            <summary>
            Specifies a list of in-ROM applications that are not approved for execution. 
            Only applications that are preinstalled in ROM are affected by the entries in this property. 
            This property does not apply to applications that are installed in-memory.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.ApprovedApplicationList">
            <summary>
            Specifies a list of in-memory applications that are approved for execution. 
            Only in-memory applications are affected by this property. 
            This property does not apply to in-ROM applications. 
            If non empty, the client MUST only allow the in-memory applications specified by this property to execute.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.EmptyFolderContentsRequest">
            <summary>
            Contains request about deleting the contents of a folder.
            EmptyFolderContents supports a single child element of the Options element, the DeleteSubFolders, which determines whether subfolders contained in the folder are deleted. 
            If the DeleteSubFolders option is not included in the request, the subfolders of the specified CollectionId are not deleted.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EmptyFolderContentsRequest.CollectionId">
            <summary>
            Specifies the folder to be emptied.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EmptyFolderContentsRequest.Options">
            <summary>
            Contains the options for the ItemOperations.EmptyFolderContents operation
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm">
            <summary>
            Specifies the algorithm used when encrypting S/MIME messages.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm.TripleDES">
            <summary>
            Triple DES algorithm
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm.DES">
            <summary>
            DES algorithm
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm.RC2128bit">
            <summary>
            RC2 128 bit algorithm
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm.RC264bit">
            <summary>
            RC2 64 bit algorithm
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.EncryptionSMIMEAlgorithm.RC240bit">
            <summary>
            RC2 40 bit algorithm
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass">
            <summary>
            Specifies the content class of the folder to be monitored.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass.Email">
            <summary>
            Folder contains Email items
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass.Calendar">
            <summary>
            Folder contains Calendar items
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass.Contacts">
            <summary>
            Folder contains Contacts items
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass.Tasks">
            <summary>
            Folder contains Tasks items
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass.Notes">
            <summary>
            Folder contains Notes items
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo">
            <summary>
            FolderInfo class contains folder information 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.ServerId">
            <summary>
            Specifies the server ID of of the folder on the server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.ParentId">
            <summary>
            Specifies the server ID of the parent folder of the folder on the server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.DisplayName">
            <summary>
            Specifies the user-friendly name of the folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.Type">
            <summary>
            Specifies the type of the folder.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.#ctor(System.String,System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes)">
            <summary>
            Initializes a new instance of the FolderInfo class.
            </summary>
            <param name="serverId">Specifies the server ID of of the folder on the server</param>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the user-friendly name of the folder.</param>
            <param name="type">Specifies the type of the folder.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult">
            <summary>
            Contains changes to the folder hierarchy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult.Added">
            <summary>
            Contains array of added folders.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult.Updated">
            <summary>
            Contains array of modified folders.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult.Deleted">
            <summary>
            Contains array of deleted folders.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo[],Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo[],Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo[])">
            <summary>
            Initializes a new instance of the FolderSyncResult class.
            </summary>
            <param name="added">Contains array of added folders.</param>
            <param name="updated">Contains array of modified folders.</param>
            <param name="deleted">Contains array of deleted folders.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderSyncResult.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes">
            <summary>
            Specifies the type of the folder that was updated (renamed or moved) or added on the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedFolder">
            <summary>
            User-created folder (generic)
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultInboxFolder">
            <summary>
            Default Inbox folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultDraftsFolder">
            <summary>
            Default Drafts folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultDeletedItemsFolder">
            <summary>
            Default Deleted Items folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultSentItemsFolder">
            <summary>
            Default Sent Items folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultOutboxFolder">
            <summary>
            Default Outbox folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultTasksFolder">
            <summary>
            Default Tasks folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultCalendarFolder">
            <summary>
            Default Calendar folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultContactsFolder">
            <summary>
            Default Contacts folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultNotesFolder">
            <summary>
            Default Notes folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.DefaultJournalFolder">
            <summary>
            Default Journal folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedMailFolder">
            <summary>
            User-created Mail folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedCalendarFolder">
            <summary>
            User-created Calendar folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedContactsFolder">
            <summary>
            User-created Contacts folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedTasksFolder">
            <summary>
            User-created Tasks folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedJournalFolder">
            <summary>
            User-created journal folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UserCreatedNoteFolder">
            <summary>
            User-created Notes folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.UnknownFolderType">
            <summary>
            Unknown folder type
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderTypes.RecipientInformationCache">
            <summary>
            Recipient information cache
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens">
            <summary>
            The following token codes are common across all document types and are present in all code spaces and all code pages. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.SWITCH_PAGE">
            <summary>
            Change the code page for the current token state. Followed by a single u_int8 indicating the new code page number. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.END">
            <summary>
            Indicates the end of an attribute list or the end of an element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.ENTITY">
            <summary>
            A character entity. Followed by a mb_u_int32 encoding the character entity number.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.STR_I">
            <summary>
            Inline string. Followed by a termstr.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.LITERAL">
            <summary>
            An unknown tag or attribute name. Followed by an mb_u_int32 that encodes an offset into the string table.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_I_0">
            <summary>
            	Inline string document-type-specific extension token. Token is followed by a termstr.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_I_1">
            <summary>
            Inline string document-type-specific extension token. Token is followed by a termstr.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_I_2">
            <summary>
            Inline string document-type-specific extension token. Token is followed by a termstr.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.PI">
            <summary>
            Processing instruction.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.LITERAL_C">
            <summary>
            Unknown tag, with content.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_T_0">
            <summary>
            Inline integer document-type-specific extension token. Token is followed by a mb_uint_32.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_T_1">
            <summary>
            Inline integer document-type-specific extension token. Token is followed by a mb_uint_32.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_T_2">
            <summary>
            Inline integer document-type-specific extension token. Token is followed by a mb_uint_32.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.STR_T">
            <summary>
            String table reference. Followed by a mb_u_int32 encoding a byte offset from the beginning of the string table.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.LITERAL_A">
            <summary>
            Unknown tag, with attributes.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_0">
            <summary>
            Single-byte document-type-specific extension token.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_1">
            <summary>
            Single-byte document-type-specific extension token.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.EXT_2">
            <summary>
            Single-byte document-type-specific extension token.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.OPAQUE">
            <summary>
            Opaque document-type-specific data.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GlobalTokens.LITERAL_AC">
            <summary>
            Unknown tag, with content and attributes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient">
            <summary>
            ActiveSync client interface
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FoldersSyncKey">
            <summary>
            Used by the server to track the current state of the client.
            For operations with folders only
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ResetFoldersSyncKey">
            <summary>
            Reset SyncKey for operations with folders
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.AirSyncKeys">
            <summary>
            Contains a values that is used by the server to mark the synchronization state of a every synchronized collection.
            Where dictionary key is server Id and dictionary value is SyncKey.  
            For GetItemEstimate and Sync commands.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ResetAirSyncKey(System.String)">
            <summary>
            Reset SyncKey for GetItemEstimate and Sync operations for defined collection.
            </summary>
            <param name="serverId">Server Id of the collection.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ResetAirSyncKey">
            <summary>
            Reset SyncKeys for GetItemEstimate and Sync operations for all collections.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.HeartbeatInterval">
            <summary>
            The HeartbeatInterval element is a child element of the Ping element in Ping command requests and responses. 
            In Ping command requests, it specifies the length of time, in seconds, that the server SHOULD wait 
            before sending a response if no new items are added to the specified set of folders, as specified in section 3.1.5.6. 
            The HeartbeatInterval element is also returned by the server with a status code of 5 
            and specifies either the minimum or maximum interval 
            that is allowed when the client has requested a heartbeat interval that is outside the acceptable range.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderSync">
            <summary>
            The FolderSync synchronizes the collection hierarchy but does not synchronize the items in the collections themselves.
            </summary>
            <returns>Returns changes to the folder hierarchy.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderSync(System.Boolean)">
            <summary>
            The FolderSync synchronizes the collection hierarchy but does not synchronize the items in the collections themselves.
            </summary>
            <param name="resetSyncKey">Indicates if SyncKey for operations with folders has to be reseted or not.</param>
            <returns>Returns changes to the folder hierarchy.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderCreate(System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes)">
            <summary>
            The FolderCreate creates a new folder as a child folder of the specified parent folder.
            </summary>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the name of the folder that is shown to the user.</param>
            <param name="type">Specifies the type of the folder to be created.</param>
            <returns>Returns folder information of the created folder</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderDelete(System.String)">
            <summary>
            Deletes the collection with the matching identifier. 
            </summary>
            <param name="serverId">Identifies a folder on a server.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderUpdate(System.String,System.String,System.String)">
            <summary>
            The FolderUpdate command moves a folder from one location to another on the server. 
            The command is also used to rename a folder.
            </summary>
            <param name="serverId">Specifies the server ID of the folder on the server</param>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the user-friendly name of the folder.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.FolderUpdate(Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo)">
            <summary>
            The FolderUpdate command moves a folder from one location to another on the server. 
            The command is also used to rename a folder.
            </summary>
            <param name="folder">Folder information</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass)">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="serverId">
            The Id element is a required child element of the Folder element in Ping command requests that specifies the server ID of the folder to be monitored. 
            </param>
            <param name="fClass">
            The Class element is a required child element of the Folder element in Ping command requests that specifies the content class of the folder to be monitored.
            </param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(System.Int32,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass)">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait before sending a response if no new items are added to the specified set of folders. 
            </param>
            <param name="serverId">
            The Id element is a required child element of the Folder element in Ping command requests that specifies the server ID of the folder to be monitored. 
            </param>
            <param name="fClass">
            The Class element is a required child element of the Folder element in Ping command requests that specifies the content class of the folder to be monitored.
            </param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter[])">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(System.Int32,Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter[])">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait before sending a response if no new items are added to the specified set of folders. 
            </param>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter})">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Ping(System.Int32,System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter})">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait before sending a response if no new items are added to the specified set of folders. 
            </param>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.GetItemEstimate(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest)">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">ItemEstimate request parameters</param>
            <returns>Estimate on the requested folder</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.GetItemEstimate(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest[])">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">Array with ItemEstimate request parameters</param>
            <returns>Contains array with estimates on the requested folders</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.GetItemEstimate(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest})">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">Enumeration with ItemEstimate request parameters</param>
            <returns>Contains array with estimates on the requested folders</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SendMail(System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SendMail(System.String,System.Boolean)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Sync(Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            The Sync synchronizes changes in a collection between the client and the server.
            </summary>
            <param name="request">Sync request parameters</param>
            <returns>Returns list of responses for Sync operations such as Add, Fetch, Change </returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ItemOperations(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest)">
            <summary>
            The ItemOperations provides batched online handling of the Fetch, the EmptyFolderContents, and the Move operations.
            </summary>
            <param name="request">ItemOperations request.</param>
            <returns>Returns ItemOperations result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MoveItem(System.String,System.String,System.String)">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
            <param name="srcMsgId">
            Specifies the server ID of the item that was moved. 
            The SrcMsgId element value can be up to 64 characters in length.
            </param>
            <param name="srcFldId">
            Specifies the server ID of the source folder (that is, the folder that contains the items to be moved).
            The SrcFldId element value can be up to 64 characters in length
            </param>
            <param name="dstFldId">
            Specifies the server ID of the destination folder (that is, the folder to which the items are moved).
            The DstFldId property value can be up to 64 characters in length.
            </param>
            <returns>Returns information that describe the moved item.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MoveItems(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData})">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
            <param name="request">Enumeration of the items that has to be moved</param>
            <returns>Returns array of objects that describe the moved item.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MoveItems(Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData[])">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
            <param name="request">Array of the items that has to be moved</param>
            <returns>Returns array of objects that describe the moved item.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.GetAttachment(System.String)">
            <summary>
            The GetAttachment retrieves an email attachment from the server.
            The GetAttachment is not supported when the protocol version is 14.0 or 14.1. 
            Use the Fetch element of the ItemOperations command instead.
            </summary>
            <param name="attachmentName">The name of the attachment to be retrieved.</param>
            <returns>Returns attachment data</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse,System.String,System.String)">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="userResponse">Indicates whether the meeting is being accepted, tentatively accepted, or declined.</param>
            <param name="collectionId">
            Specifies the folder that contains the meeting request.
            Optional if LongId is included.
            The CollectionId value can be up to 64 characters in length.
            </param>
            <param name="requestId">
            Specifies the server ID of the meeting request message item.
            Optional if LongId is included.
            The RequestId value can be up to 64 characters in length.
            </param>
            <returns>Returns MeetingResponseResult object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse,System.String,System.String,System.String,System.String)">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="userResponse">Indicates whether the meeting is being accepted, tentatively accepted, or declined.</param>
            <param name="collectionId">
            Specifies the folder that contains the meeting request.
            Optional if LongId is included.
            The CollectionId value can be up to 64 characters in length.
            </param>
            <param name="requestId">
            Specifies the server ID of the meeting request message item.
            Optional if LongId is included.
            The RequestId value can be up to 64 characters in length.
            </param>
            <param name="longId">
            Specifies the long ID for the source meeting request, which is returned in the Search command response message. 
            If the LongId is present, the CollectionId, InstanceId, and RequestId are not present. 
            The LongId value can be up to 256 characters in length.
            </param>
            <param name="instanceId">
            Specifies the instance of the recurring meeting to be modified.
            The InstanceId is not supported when the protocol version is 12.1 or 14.0. 
            A Status value of 2 is returned if the InstanceId element is included in requests in which the protocol version is 12.1 or 14.0.
            The InstanceId contains the start time of the appointment or meeting instance to be modified. 
            If the InstanceId is not included in the MeetingResponse request, then the action is to be taken on every instance of the recurring item. 
            The InstanceId can specify the start time of an exception to a recurring appointment or meeting. 
            The InstanceId can be used with the LongId to identify a calendar item, or it can be used with the CollectionId and RequestId to identify a calendar item.
            The format of the InstanceId value is a string in dateTime format with the punctuation separators, for example, 2010-04-08T18:16:00.000Z. 
            If the InstanceId value specified is not in the proper format, the server responds with a Status element value of 104. 
            If the InstanceId value specifies a non-recurring meeting, the server responds with a Status element value of 146.
            </param>
            <returns>Returns MeetingResponseResult object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest[])">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="request">Array of MeetingResponseRequest objects</param>
            <returns>Returns array of MeetingResponseResult objects.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.MeetingResponse(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest})">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="request">Enumeration of MeetingResponseRequest objects</param>
            <returns>Returns array of MeetingResponseResult objects.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Settings(Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            The Settings supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
            <param name="request">Settings operation parameters</param>
            <returns>Returns settings operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ResolveRecipients(Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            The ResolveRecipients is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
            <param name="request">ResolveRecipients operation parameters</param>
            <returns>Returns ResolveRecipients operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Provision(Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
            <param name="request">Provision operation parameters</param>
            <returns>Returns Provision operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SmartReply(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartReply operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.SmartForward(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartForward operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.Search(Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            The Search is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
            <param name="request">Search operation parameters</param>
            <returns>Returns Search operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate)">
            <summary>
            The ValidateCert command is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean)">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <param name="checkCrl">
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            The revocation status of a certificate cannot be verified when the certificate revocation lists (CRLs) cannot be retrieved.
            When the CheckCRL value is set to TRUE, the server MUST NOT ignore an unverifiable revocation status. 
            When the CheckCRL value is set to FALSE, the server SHOULD ignore an unverifiable revocation status. 
            The default value is FALSE.
            </param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <param name="certificateChains">List of certificates to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <param name="certificateChains">List of certificates that have to be validated.</param>
            <param name="checkCrl">
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            The revocation status of a certificate cannot be verified when the certificate revocation lists (CRLs) cannot be retrieved.
            When the CheckCRL value is set to TRUE, the server MUST NOT ignore an unverifiable revocation status. 
            When the CheckCRL value is set to FALSE, the server SHOULD ignore an unverifiable revocation status. 
            The default value is FALSE.
            </param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <param name="checkCrl">
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            The revocation status of a certificate cannot be verified when the certificate revocation lists (CRLs) cannot be retrieved.
            When the CheckCRL value is set to TRUE, the server MUST NOT ignore an unverifiable revocation status. 
            When the CheckCRL value is set to FALSE, the server SHOULD ignore an unverifiable revocation status. 
            The default value is FALSE.
            </param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <param name="certificateChains">Enumeration of certificates that have to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <param name="certificateChains">Enumeration of certificates that have to be validated.</param>
            <param name="checkCrl">
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            The revocation status of a certificate cannot be verified when the certificate revocation lists (CRLs) cannot be retrieved.
            When the CheckCRL value is set to TRUE, the server MUST NOT ignore an unverifiable revocation status. 
            When the CheckCRL value is set to FALSE, the server SHOULD ignore an unverifiable revocation status. 
            The default value is FALSE.
            </param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient">
            <summary>
            Base ActiveSync client interface
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Uri">
            <summary>
            Gets the server uri
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.AutodiscoverUri">
            <summary>
            Gets the autodiscover uri
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Credentials">
            <summary>
            User's credentials for Exchange server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Proxy">
            <summary>
            Gets or sets the proxy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.DeviceID">
            <summary>
            A GUID that identifies the device.
            The device ID is specified by the device-id-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-id ABNF rule, is a string that specifies the device. 
            Each device MUST have a unique device ID string. 
            Each request from the device MUST include the same device ID string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.PolicyState">
            <summary>
            An unsigned integer that indicates the state of policy settings on the client device, 
            as specified in [MS-ASPROV] section 2.2.2.41.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.DeviceType">
            <summary>
            The device type is specified by the device-type-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-type ABNF rule, is any string that specifies a device type. 
            "SP" specifies a SmartPhone and "PPC" specifies a PocketPC. 
            Other client devices send unique strings for their specific device type. 
            Each request from a client device MUST include the same device type string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.UserAgent">
            <summary>
            The User-Agent request-header field contains information about the user agent originating the request. 
            This is for statistical purposes, the tracing of protocol violations, and automated recognition of user agents 
            for the sake of tailoring responses to avoid particular user agent limitations. 
            User agents SHOULD include this field with requests. 
            The field can contain multiple product tokens (section 3.8) and comments 
            identifying the agent and any subproducts which form a significant part of the user agent. 
            By convention, the product tokens are listed in order of their significance for identifying the application.
            Example: 
            User-Agent: CERN-LineMode/2.15 libwww/2.17b3
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.SupportedServerProtocols">
            <summary>
            Gets the versions of ActiveSync protocols which are server supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.SupportedServerCommands">
            <summary>
            Gets the versions of ActiveSync commands which are server supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Version">
            <summary>
            Gets the version of the protocol which is used in ActiveSync client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Timeout">
            <summary>
            Gets or sets the number of milliseconds to wait before the operation times out.
            The default value is 100,000 milliseconds (100 seconds).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.AuthenticationType">
            <summary>
            Gets or sets the type of authentication is used by the ActiveSync client.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient.Autodiscover(System.String)">
            <summary>
            The Autodiscover command facilitates the discovery of core account configuration information by using the user's Simple Mail Transfer Protocol (SMTP) address as the primary input. 
            </summary>
            <param name="emailAddress">The email address is a required child element of the autodiscover request</param>
            <returns>Result of the Autodiscover operation</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate">
            <summary>
            Contains an assessment on the requested folder
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.CollectionId">
            <summary>
            Specifies the server ID of the collection from which the item estimate is being obtained.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.Estimate">
            <summary>
            Specifies the estimated number of items in the collection or folder that have to be synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.Status">
            <summary>
            Indicates the result of an operation. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.Status)">
            <summary>
            Initializes a new instance of the ItemEstimate class.
            </summary>
            <param name="status">Indicates the result of an operation. </param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.Status,System.String,System.Int32)">
            <summary>
            Initializes a new instance of the ItemEstimate class.
            </summary>
            <param name="status">Indicates the result of an operation. </param>
            <param name="collectionId">Specifies the server ID of the collection from which the item estimate is being obtained.</param>
            <param name="estimate">Specifies the estimated number of items in the collection or folder that have to be synchronized.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimate.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions">
            <summary>
            Contains elements that filter the results of the GetItemEstimate operation.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions.#ctor">
            <summary>
            Initializes a new instance of the ItemEstimateOptions class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions.#ctor(System.Nullable{Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass},System.Nullable{Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType},System.Nullable{System.Int32})">
            <summary>
            Initializes a new instance of the ItemEstimateOptions class.
            </summary>
            <param name="airClass">Identifies the class of the item.</param>
            <param name="filterType">Specifies an optional time window for the objects </param>
            <param name="maxItems">Specifies the maximum number of items to include in the response.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions.Class">
            <summary>
            Identifies the class of the item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions.FilterType">
            <summary>
            Specifies an optional time window for the objects 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions.MaxItems">
            <summary>
            Specifies the maximum number of items to include in the response.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest">
            <summary>
            Contains ItemEstimate request parameters
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.#ctor">
            <summary>
            Initializes a new instance of the ItemEstimateRequest class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.#ctor(System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateOptions[],System.Nullable{System.Boolean})">
            <summary>
            Initializes a new instance of the ItemEstimateRequest class.
            </summary>
            <param name="syncKey">Represents the current state of a collection.</param>
            <param name="collectionId">Specifies the server ID of the collection from which the item estimate is being obtained.</param>
            <param name="options">Contains array of elements that filter the results of the GetItemEstimate operation.</param>
            <param name="conversationMode">Specifies whether to include items that are included within the conversation modality within the results of the GetItemEstimate command response.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.#ctor(System.String,System.String,System.Nullable{Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType})">
            <summary>
            Initializes a new instance of the ItemEstimateRequest class.
            </summary>
            <param name="syncKey">Represents the current state of a collection.</param>
            <param name="collectionId">Specifies the server ID of the collection from which the item estimate is being obtained.</param>
            <param name="filterType">Specifies an optional time window for the objects </param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.SyncKey">
            <summary>
            Represents the current state of a collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.CollectionId">
            <summary>
            Specifies the server ID of the collection from which the item estimate is being obtained.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.FilterType">
            <summary>
            Specifies an optional time window for the objects 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.Options">
            <summary>
            Contains array of elements that filter the results of the GetItemEstimate operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest.ConversationMode">
            <summary>
            Specifies whether to include items that are included within the conversation modality within the results of the GetItemEstimate command response. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsEmptFldrCntntsResponce">
            <summary>
            Identifies the body of the response as containing the operation that deletes the contents of a folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsEmptFldrCntntsResponce.Status">
            <summary>
            Contains a code and description that indicates the success or failure of the ItemOperations operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsEmptFldrCntntsResponce.CollectionId">
            <summary>
            Specifies the folder that has to be emptied.
            Contains ServerId of a folder.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties">
            <summary>
            Contains the properties that are returned for item(s) in the response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Range">
            <summary>
            Specifies the range of bytes that the client can receive in response to the Fetch operation for a document library item.
            The Range element contains a string value in the format m-n, where m less than n, and m is the minimum value and n is the maximum value.
            The byte range is zero-indexed; the first byte is indicated by a 0 (zero).
            If the Range element is omitted in the Fetch request, the whole item is fetched.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Total">
            <summary>
            Specifies the total size of an item on the server, in bytes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Data">
            <summary>
            Contains the item content for inline content responses.
            The content of the Data element is a base64 encoding of the binary document, attachment, or body data. 
            The size of the data (in bytes) that is contained within the Data element is indicated by the Range property. 
            The total size of the item (in bytes) is indicated by the Total element.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Part">
            <summary>
            Specifies an integer index into the metadata of the multipart response.
            The Part element is present only in a multipart ItemOperations response. 
            It presents in Properties if the item being fetched is located in a document library.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Version">
            <summary>
            Specifies the time at which a document item was last modified.
            The Version element is present only when the ItemOperations command is used to access a Windows SharePoint Services or UNC resource.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.RightsManagementLicense">
            <summary>
            Contains the rights policy template settings for the template applied to the e-mail message being synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.Body">
            <summary>
            Specifies a free-form, variable-length data field associated with a stored item on the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.BodyPart">
            <summary>
            Specifies details about the message part of an e-mail in a response. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchProperties.DataContainer">
            <summary>
            Contains data elements from the content classes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest">
            <summary>
            Contains request about retrieving an item from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.Store">
            <summary>
            Specifies the name of the store to which the parent operation applies.
            The following values are valid for the Store element:
             - Document Library (Microsoft SharePoint Server and UNC links)
             - Mailbox (items and attachments)
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.LinkId">
            <summary>
            Specifies a Uniform Resource Identifier (URI) that is assigned by the server to certain resources, such as Windows SharePoint Services or UNC documents.
            LinkId can be used to refer to the location of an item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.LongId">
            <summary>
            Specifies a unique identifier that was assigned by the server to each result returned by a previous Search response.
            The LongId value can be up to 256 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.CollectionId">
            <summary>
            Identifies the folder that was fetched.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.ServerId">
            <summary>
            Specifies a unique identifier that is assigned by the server to each object that have an item operation applied to it.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.FileReference">
            <summary>
            Specifies a unique identifier that is assigned by the server to each attachment.
            In an ItemOperations request, only one FileReference identifier can exist per Fetch. 
            Violation of this constraint results in a Status element value of 2 being returned from the server. 
            The client can, however, retrieve multiple attachments by using one Fetch node per attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.RemoveRightsManagementProtection">
            <summary>
            If present or true, it indicates that the client is removing the IRM protection from the e-mail.
            IRM protection can only be removed from e-mail messages when the ExportAllowed element is set to TRUE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchRequest.Options">
            <summary>
            Contains the options for the ItemOperations.Fetch operation.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce">
            <summary>
            Contains responce about retrieving an items from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.Status">
            <summary>
            Contains a code and description that indicates the success or failure of the ItemOperations operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.CollectionId">
            <summary>
            Specifies the folder that has to be fetched.
            Contains ServerId of a folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.ServerId">
            <summary>
            Specifies a unique identifier that is assigned by the server to each object that can be synchronized or have an item operation applied to it.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.LongId">
            <summary>
            Specifies a unique identifier that was assigned by the server to each result returned by a previous Search response. 
            The LongId element value can be up to 256 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.Class">
            <summary>
            Identifies the class of the item.
            The valid Class element values are:
              - Email
              - Contacts
              - Calendar
              - Tasks
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.LinkId">
            <summary>
            Specifies a Uniform Resource Identifier (URI) that is assigned by the server to certain resources, such as Windows SharePoint Services or UNC documents.
            Can be used by the Fetch element to refer to the location of an item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsFetchResponce.Properties">
            <summary>
            Contains the properties that are returned for item(s) in the response.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveRequest">
            <summary>
            Contains request about moving a conversation to specific folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveRequest.ConversationId">
            <summary>
            Specifies the conversation to be moved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveRequest.DstFldId">
            <summary>
            Specifies the server ID of the destination folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveRequest.Options">
            <summary>
            Contains the options for the ItemOperations.Move operation.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveResponce">
            <summary>
            Identifies the body of the response as containing the operation that moves a given conversation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveResponce.Status">
            <summary>
            Contains a code and description that indicates the success or failure of the ItemOperations operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsMoveResponce.ConversationId">
            <summary>
            Specifies the conversation that has to be moved.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest">
            <summary>
            Contains ItemOperations request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest.EmptyFolderContents">
            <summary>
            Contains requests about deleting the contents of a folder.
            EmptyFolderContents supports a single child element of the Options element, the DeleteSubFolders, which determines whether subfolders contained in the folder are deleted. 
            If the DeleteSubFolders option is not included in the request, the subfolders of the specified CollectionId are not deleted.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest.Fetch">
            <summary>
            Contains requests about retrieving an items from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest.Move">
            <summary>
            Contains requests about moving a conversations to specific folders.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsResponse">
            <summary>
            Contains ItemOperations response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsResponse.Move">
            <summary>
            Identifies the body of the response as containing the operation that moves a given conversation.
            The Move element is not supported when the protocol version is 12.1.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsResponse.EmptyFolderContents">
            <summary>
            Identifies the body of the response as containing the operation that deletes the contents of a folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsResponse.Fetch">
            <summary>
            Contains responce about retrieving an items from the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpEmpFldCntOptions">
            <summary>
            Contains the options for the ItemOperations.EmptyFolderContents operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpEmpFldCntOptions.DeleteSubFolders">
            <summary>
            Indicates whether to delete the subfolders of the specified folder.
            If the DeleteSubFolders option is not included in the request, the subfolders of the specified CollectionId are not deleted.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions">
            <summary>
            Contains the options for the ItemOperations.Fetch operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.Schema">
            <summary>
            Specifies the schema of the item to be fetched.
            The Schema is supported within options for PIM Fetch (section 2.2.3.63.1) requests. 
            It is not supported when the client is retrieving items from a document library or retrieving an attachment.
            If the Schema element is not specified, the server allows all properties to be retrieved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.Range">
            <summary>
            Specifies the range of bytes that the client can receive in response to the Fetch operation for a document library item. 
            The Range element is an optional field.
            The Range element contains a string value in the format M-N, where M is less than N, and M is the minimum value and N is the maximum value. 
            The byte range is zero-indexed; the first byte is indicated by a 0 (zero).
            If the Range is omitted in the Fetch request, the whole item is fetched.
            If the FileReference is present in the request, then the Range element is the only valid child element of the Options element.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.UserName">
            <summary>
            Specifies the username of the account leveraged to fetch the desired item.
            The UserName value can be up to 100 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.Password">
            <summary>
            Specifies the password for the given UserName.
            The server accepts password values up to 256 characters in length. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.MIMESupport">
            <summary>
            Enables MIME support for email items that are sent from the server to the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.BodyPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.BodyPartPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching a message part.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpFetchOptions.RightsManagementSupport">
            <summary>
            Specifies how the server returns rights-managed email messages to the client.
            If the value of this element is TRUE, the server will decompress and decrypt rights-managed email messages before sending them to the client, as specified in section 3.2.4.3. 
            If the value is FALSE (0), the server will not decompress or decrypt rights-managed email messages before sending them to the client. 
            If the RightsManagementSupport element is not defined, a default value of FALSE is assumed.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpMoveOptions">
            <summary>
            Contains the options for the ItemOperations.Move operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ItOpMoveOptions.MoveAlways">
            <summary>
            Indicates whether to always move the specified conversation, including all future emails in the conversation, to the folder specified by the DstFldId.
            The MoveAlways MUST be set in an ItemOperations request when performing a move operation on a conversation. 
            A Status element value of 155 is returned if the MoveAlways element is not set in the ItemOperations request for a move operation.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup">
            <summary>
            Lookup class allows to implement quick search WBXML inside code page defined for this lookup.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup.Namespace">
            <summary>
            WBXML code page name
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup.Prefix">
            <summary>
            XML namespace for defined code page 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup.Add(System.Byte,System.String)">
            <summary>
            Adds pair of code and name for element of code page to lookup
            </summary>
            <param name="token">Contains digital value of code page element</param>
            <param name="tag">Contains name of code page element</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup.GetToken(System.String)">
            <summary>
            Gets digital value of code page element by name
            </summary>
            <param name="tag">Name of code page element</param>
            <returns>Returns digital value of code page element by name</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Lookup.GetTag(System.Byte)">
            <summary>
            Gets name of code page element by digital value
            </summary>
            <param name="token">digital value of code page element</param>
            <returns>Returns name of code page element by digital value</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter">
            <summary>
            Specifies the maximum number of calendar days that can be synchronized.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.All">
            <summary>
            Defines all days for synchronization. Filter is disabled.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.OneDay">
            <summary>
            Defines  1 day for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.ThreeDays">
            <summary>
            Defines 3 days for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.OneWeek">
            <summary>
            Defines 1 week for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.TwoWeeks">
            <summary>
            Defines 2 weeks for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.OneMonth">
            <summary>
            Defines 1 month for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.ThreeMonths">
            <summary>
            Defines 3 months for synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MaxAgeFilter.SixMonths">
            <summary>
            Defines 6 months for synchronization.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest">
            <summary>
            Specifies the meeting request that is being responded to, the response to that meeting request, and the folder on the server that the meeting request is located in.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.#ctor">
            <summary>
            Initializes a new instance of the MeetingResponseRequest class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse,System.String,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the MeetingResponseRequest class.
            </summary>
            <param name="userResponse">Indicates whether the meeting is being accepted, tentatively accepted, or declined.</param>
            <param name="collectionId">Specifies the folder that contains the meeting request.</param>
            <param name="requestId">Specifies the server ID of the meeting request message item.</param>
            <param name="longId">Specifies the long ID for the source meeting request, which is returned in the Search command response message. </param>
            <param name="instanceId">Specifies the instance of the recurring meeting to be modified.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.UserResponse">
            <summary>
            Indicates whether the meeting is being accepted, tentatively accepted, or declined.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.CollectionId">
            <summary>
            Specifies the folder that contains the meeting request.
            Optional if LongId is included.
            The CollectionId value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.RequestId">
            <summary>
            Specifies the server ID of the meeting request message item.
            Optional if LongId is included.
            The RequestId value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.LongId">
            <summary>
            Specifies the long ID for the source meeting request, which is returned in the Search command response message. 
            If the LongId is present, the CollectionId, InstanceId, and RequestId are not present. 
            The LongId value can be up to 256 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest.InstanceId">
            <summary>
            Specifies the instance of the recurring meeting to be modified.
            The InstanceId is not supported when the protocol version is 12.1 or 14.0. 
            A Status value of 2 is returned if the InstanceId element is included in requests in which the protocol version is 12.1 or 14.0.
            The InstanceId contains the start time of the appointment or meeting instance to be modified. 
            If the InstanceId is not included in the MeetingResponse request, then the action is to be taken on every instance of the recurring item. 
            The InstanceId can specify the start time of an exception to a recurring appointment or meeting. 
            The InstanceId can be used with the LongId to identify a calendar item, or it can be used with the CollectionId and RequestId to identify a calendar item.
            The format of the InstanceId value is a string in dateTime format with the punctuation separators, for example, 2010-04-08T18:16:00.000Z. 
            If the InstanceId value specified is not in the proper format, the server responds with a Status element value of 104. 
            If the InstanceId value specifies a non-recurring meeting, the server responds with a Status element value of 146.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseResult">
            <summary>
            Meeting response result object
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseResult.RequestId">
            <summary>
            Specifies the server ID of the meeting request message item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseResult.Status">
            <summary>
            Indicates the success or failure of the operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseResult.CalendarId">
            <summary>
            Specifies the server ID of the calendar item. 
            The CalendarId element value can be up to 64 characters in length.
            The CalendarId element is included in the MeetingResponse command response that is sent to the client if the meeting request was not declined. 
            If the meeting is accepted or tentatively accepted, the server adds a new item to the calendar and returns its server ID in the CalendarId element in the response. 
            If the client created a tentative meeting calendar item, the client updates that item with the new server ID. 
            The client also changes the busy status from tentative to busy. 
            When a meeting is accepted, the server also creates a new calendar item with the same server ID. 
            This means there is a conflict that will be resolved the next time the calendar is synchronized.
            If the meeting is declined, the response does not contain a CalendarId element.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy">
            <summary>
            Specifies the free/busy information for the users or distribution list.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy.Free">
            <summary>
            User is free.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy.Tentative">
            <summary>
            Timesheet is indeterminate
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy.Busy">
            <summary>
            User is busy.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy.OutOfOffice">
            <summary>
            User is out of office.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MergedFreeBusy.NoData">
            <summary>
            Information is absent
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMESupport">
            <summary>
            Enables MIME support for email items that are sent from the server to the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMESupport.NeverSend">
            <summary>
            Never send MIME data.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMESupport.SendForSecureMIMEonly">
            <summary>
            Send MIME data for S/MIME messages only. Send regular body for all other messages.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMESupport.SendForAll">
            <summary>
            Send MIME data for all messages. This flag could be used by clients to build a more rich and complete Inbox solution.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation">
            <summary>
            Specifies whether the MIME data of the email item SHOULD be truncated when it is sent from the server to the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateAllBodyText">
            <summary>
            Truncate all body text.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver4096">
            <summary>
            Truncate text over 4,096 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver5120">
            <summary>
            Truncate text over 5,120 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver7168">
            <summary>
            Truncate text over 7,168 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver10240">
            <summary>
            Truncate text over 10,240 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver20480">
            <summary>
            Truncate text over 20,480 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver51200">
            <summary>
            Truncate text over 51,200 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.TruncateOver102400">
            <summary>
            Truncate text over 102,400 characters.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MIMETruncation.DoNotTruncate">
            <summary>
            Do not truncate; send complete MIME data.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MinDevicePasswordComplexCharacters">
            <summary>
            Specifies the required level of complexity of the client password.
            For example: 
            If the value of MinDevicePasswordComplexCharacters is 2, a password with both upper case and lower case alphabetical characters would be sufficient, 
            as would a password with lower case alphabetical characters and numbers.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MinDevicePasswordComplexCharacters.LowerCase">
            <summary>
            Lower case alphabetical characters
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MinDevicePasswordComplexCharacters.LowerUpperCase">
            <summary>
            Lower case and Upper case alphabetical characters
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MinDevicePasswordComplexCharacters.LowerUpperCaseNumbers">
            <summary>
            Lower case, Upper case alphabetical characters and Numbers
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.MinDevicePasswordComplexCharacters.LowerUpperCaseNumbersNonAlphanumeric">
            <summary>
            Lower case and Upper case alphabetical characters, Numbers and Non-alphanumeric characters
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData">
            <summary>
            Contains information about moving items
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData.#ctor">
            <summary>
            Initializes a new instance of the MoveItemData class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData.#ctor(System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the MoveItemData class.
            </summary>
            <param name="srcMsgId">Specifies the server ID of the item that was moved. </param>
            <param name="srcFldId">Specifies the server ID of the source folder (that is, the folder that contains the items to be moved).</param>
            <param name="dstFldId">Specifies the server ID of the destination folder (that is, the folder to which the items are moved).</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData.SrcMsgId">
            <summary>
            Specifies the server ID of the item that was moved. 
            The SrcMsgId element value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData.SrcFldId">
            <summary>
            Specifies the server ID of the source folder (that is, the folder that contains the items to be moved).
            The SrcFldId element value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData.DstFldId">
            <summary>
            Specifies the server ID of the destination folder (that is, the folder to which the items are moved).
            The DstFldId property value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse">
            <summary>
            Contains information  that describe the moved items.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse.#ctor">
            <summary>
            Initializes a new instance of the MoveItemResponse class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.Status,System.String,System.String)">
            <summary>
            Initializes a new instance of the MoveItemResponse class.
            </summary>
            <param name="status">Indicates the success or failure the MoveItems command request.</param>
            <param name="srcMsgId">Specifies the server ID of the item to be moved.</param>
            <param name="dstMsgId">Specifies the new server ID of the item after the item is moved to the destination folder.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse.Status">
            <summary>
            Indicates the success or failure the MoveItems command request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse.SrcMsgId">
            <summary>
            Specifies the server ID of the item to be moved.
            The SrcMsgId element value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemResponse.DstMsgId">
            <summary>
            Specifies the new server ID of the item after the item is moved to the destination folder.
            The DstMsgId element value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync">
            <summary>
            AirSync namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Sync">
            <summary>
            The Sync element is a required element in Sync command requests and responses that identifies the body of the HTTP POST as containing a Sync command (section 2.2.2.19). It is the top-level element in the XML stream.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Responses">
            <summary>
            Contains responses to operations that are processed by the server. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Add">
            <summary>
            Creates a new object in a collection on the client or on the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Change">
            <summary>
            Modifies properties of an existing object on the client device or the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Delete">
            <summary>
            Deletes an object on the client device or the server. The object is identified by its ServerId element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Fetch">
            <summary>
            Used to request the application data of an item that was truncated in a synchronization response from the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.SyncKey">
            <summary>
            Contains a value that is used by the server to mark the synchronization state of a collection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.ClientId">
            <summary>
            Contains a unique identifier (typically an integer) that is generated by the client to temporarily identify a new object that is being created by using the Add element. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.ServerId">
            <summary>
            It represents a unique identifier that is assigned by the server to each object that can be synchronized.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Status">
            <summary>
            Indicates the reason for the failure of a command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Collection">
            <summary>
            Contains commands and options that apply to a particular collection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.CollectionId">
            <summary>
            Specifies the server ID of the folder to be synchronized.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.GetChanges">
            <summary>
            Requests that the server include in its response any pending changes to the collection that is specified by the ServerId element (section 2.2.3.151.6).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.MoreAvailable">
            <summary>
            Indicates there are more changes than the number that are requested in the WindowSize element (section 2.2.3.183).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.WindowSize">
            <summary>
            Specifies a maximum number of changed items in a collection or a request that SHOULD be included in the synchronization response.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Commands">
            <summary>
            Contains operations that apply to a collection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Options">
            <summary>
            Contains elements that control certain aspects of how the synchronization is performed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.FilterType">
            <summary>
            Specifies an optional time window for the objects that are sent from the server to the client. It applies to email and calendar collections.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Conflict">
            <summary>
            Specifies how to resolve the conflict that occurs when an object has been changed on both the client and the server. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Collections">
            <summary>
            Serves as a container for the Collection element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.ApplicationData">
            <summary>
            Contains data for a particular object, such as a contact, email message, calendar appointment, or task item.
            Can be used to change items, add items, or fetch items on the client device or server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.DeletesAsMoves">
            <summary>
            Indicates that any deleted items SHOULD be moved to the Deleted Items folder.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Supported">
            <summary>
            Specifies which contact and calendar elements in a Sync request are managed by the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.SoftDelete">
            <summary>
            Deletes an object from the client when it falls outside the FilterType (section 2.2.3.64.2) results or it is no longer included as part of the SyncOptions (section 2.2.3.115.5) instructions.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.MIMESupport">
            <summary>
            Enables MIME support for email items that are sent from the server to the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.MIMETruncation">
            <summary>
            Specifies whether the MIME data of the email item SHOULD be truncated when it is sent from the server to the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Wait">
            <summary>
            Specifies the number of minutes that the server SHOULD delay a response if no new items are added to the included folders, as specified in section 3.1.5.4.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Limit">
            <summary>
            Specifies either the maximum number of collections that can be synchronized or the maximum/minimum value that is allowed for the Wait interval (section 2.2.3.182) or HeartbeatInterval interval (section 2.2.3.79.2).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.Partial">
            <summary>
            Indicates to the server that the client sent a partial list of collections, 
            in which case the server obtains the rest of the collections from its cache.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.ConversationMode">
            <summary>
            Specifies whether to include items that are included within the conversation modality within the results of the Sync response.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.MaxItems">
            <summary>
            Specifies the maximum number of recipients (that is, the top N most frequently used recipients) to keep synchronized from within the recipient information cache.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSync.HeartbeatInterval">
            <summary>
            Specifies the number of seconds that the server SHOULD delay a response if no new items are added to the included folders, as specified in section 3.1.5.4.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase">
            <summary>
            AirSyncBase namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.BodyPreference">
            <summary>
            A collection of elements that sets the preference information related to the type and size of information that is returned from searching, synchronizing, or fetching.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Type">
            <summary>
            The preferred format type of the body content of the item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.TruncationSize">
            <summary>
            Specifies the size, in bytes, of the content that the client wants to search, synchronize, or fetch.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.AllOrNone">
            <summary>
            Specifies whether to search, synchronize, or retrieve all or none of the content based on the TruncationSize element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Body">
            <summary>
            A collection of elements that specifies a free-form, variable-length data field associated with a stored item on the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Data">
            <summary>
            The body of the calendar item, contact, document, e-mail, or task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.EstimatedDataSize">
            <summary>
            An informational estimate of the size of the data associated with the item's Body element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Truncated">
            <summary>
            Specifies whether the body of the item has been truncated according to the BodyPartPreference element indicated by the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Attachments">
            <summary>
            A collection of elements that contains one or more attachment items.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Attachment">
            <summary>
            Specifies the attachment information for a single attachment item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.DisplayName">
            <summary>
            The display name of the attachment.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.FileReference">
            <summary>
            A unique identifier that is assigned by the server to each attachment to a message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Method">
            <summary>
            Identifies the method in which the attachment was attached.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.ContentId">
            <summary>
            Contains the unique object ID for an attachment.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.ContentLocation">
            <summary>
            Contains the relative URI for an attachment, which is used to match a reference to an inline attachment in an HTML message to the attachment in the attachments table.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.IsInline">
            <summary>
            Specifies whether the attachment is embedded in the message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.NativeBodyType">
            <summary>
            The original format type of the item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.ContentType">
            <summary>
            Type of the content
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Preview">
            <summary>
            The preferred length of the message preview to be returned to the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.BodyPartPreference">
            <summary>
            A collection of elements that sets the preference information related to the type and size of information that is returned from searching, synchronizing, or fetching a BodyPart.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.BodyPart">
            <summary>
            A collection of elements that contains the message part of the body of an e-mail.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirSyncBase.Status">
            <summary>
            The status of the Data element within the BodyPart response.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar">
            <summary>
            Calendar namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.TimeZone">
            <summary>
            The time zone of the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.AllDayEvent">
            <summary>
            Specifies whether the event represented by the calendar item or exception item runs for the entire day.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Attendees">
            <summary>
            The collection of attendees for the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Attendee">
            <summary>
            An attendee who is invited to the event.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Email">
            <summary>
            The e-mail address of the attendee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Name">
            <summary>
            The name of the attendee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.BusyStatus">
            <summary>
            Specifies whether the recipient is busy at the specified time.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Categories">
            <summary>
            The collection of categories for the calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Category">
            <summary>
            A category that is assigned to the calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.DtStamp">
            <summary>
            The date and time at which the calendar item was created or modified, or the date and time at which the exception item was created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.EndTime">
            <summary>
            The end time of the calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Exception">
            <summary>
            An exception to the calendar item's recurrence pattern.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Exceptions">
            <summary>
            A collection of exceptions to the recurrence pattern of the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Deleted">
            <summary>
            Specifies whether the exception has been deleted.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.ExceptionStartTime">
            <summary>
            The start time of the original recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Location">
            <summary>
            The place where the event specified by the calendar item or exception item occurs.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.MeetingStatus">
            <summary>
            The status of the meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.OrganizerEmail">
            <summary>
            The e-mail address of the user who created the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.OrganizerName">
            <summary>
            The name of the user who created the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Recurrence">
            <summary>
            The recurrence information for the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Type">
            <summary>
            The type of the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Until">
            <summary>
            The end date and time of the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Occurrences">
            <summary>
            The number of recurrences.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Interval">
            <summary>
            The interval between recurrences.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.DayOfWeek">
            <summary>
            The day of the week for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.DayOfMonth">
            <summary>
            The day of the month of the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.WeekOfMonth">
            <summary>
            The week of the month for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.MonthOfYear">
            <summary>
            The month of the year for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Reminder">
            <summary>
            The number of minutes before the calendar item's start time to display a reminder notice.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Sensitivity">
            <summary>
            The recommended privacy policy for this calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.Subject">
            <summary>
            The subject of the calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.StartTime">
            <summary>
            The start time of the calendar item or exception item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.UID">
            <summary>
            A unique, 300 digit hexadecimal ID generated by the client when the calendar item is created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.AttendeeStatus">
            <summary>
            The attendee's acceptance status.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.AttendeeType">
            <summary>
            Specifies whether the attendee is required, optional, or a resource.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.DisallowNewTimeProposal">
            <summary>
            Specifies whether recipients of the meeting request can propose a new time for the meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.ResponseRequested">
            <summary>
            Specifies whether a response to the meeting request is required.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.AppointmentReplyTime">
            <summary>
            The date and time that the user responded to the meeting request or to the meeting exception request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.ResponseType">
            <summary>
            The type of response made by the user to a meeting request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.CalendarType">
            <summary>
            The calendar system used by the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.IsLeapMonth">
            <summary>
            Specifies whether the recurrence of the appointment is to take place on the embolismic (leap) month.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.FirstDayOfWeek">
            <summary>
            Specifies which day is considered the first day of the calendar week for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.OnlineMeetingConfLink">
            <summary>
            A Globally Routable User Agent URI (GRUU) ([MS-SIPRE]) for an online meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Calendar.OnlineMeetingExternalLink">
            <summary>
            A Uniform Resource Locator (URL) for an online meeting.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail">
            <summary>
            ComposeMail namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.SendMail">
            <summary>
            The SendMail element is a required element in SendMail command requests and responses that identifies the body of the HTTP POST as containing a SendMail command (section 2.2.2.15). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.SmartForward">
            <summary>
            The SmartForward element is a required element in SmartForward command requests and responses that identifies the body of the HTTP POST as containing a SmartForward command (section 2.2.2.17).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.SmartReply">
            <summary>
            The SmartReply element is a required element in SmartReply command requests and responses that identifies the body of the HTTP POST as containing a SmartReply command (section 2.2.2.18). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.SaveInSentItems">
            <summary>
            SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.ReplaceMime">
            <summary>
            Specifies whether the client is sending the entire message. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.Source">
            <summary>
            Contains information about the source message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.FolderId">
            <summary>
            Specifies the folder ID for the source message, which is returned in the FolderSync command response message (section 2.2.2.4.2). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.ItemId">
            <summary>
            Specifies the item ID for the source message, which is returned in the Sync command response message (section 2.2.2.19.2). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.LongId">
            <summary>
            This element specifies the long ID for the source meeting request, which is returned in the Search command response message (section 2.2.2.14.2). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.InstanceId">
            <summary>
            The InstanceId element is an optional child element of the Source element in SmartForward command requests and SmartReply command requests that specifies the instance of a recurrence for the source item. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.Mime">
            <summary>
            Contains the MIME-encoded message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.ClientId">
            <summary>
            Specifies the client's unique message ID (MID).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.Status">
            <summary>
            Indicates the reason for the failure of a command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ComposeMail.AccountId">
            <summary>
            Identifies the account from which an email is sent.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts">
            <summary>
            Contacts namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Anniversary">
            <summary>
            The wedding anniversary date for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.AssistantName">
            <summary>
            The name of the contact's assistant.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.AssistantPhoneNumber">
            <summary>
            The phone number of the contact's assistant.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Birthday">
            <summary>
            The birth date of the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Business2PhoneNumber">
            <summary>
            The second business telephone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessAddressCity">
            <summary>
            The business city of the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessAddressCountry">
            <summary>
            The business country/region for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessAddressPostalCode">
            <summary>
            The business postal code for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessAddressState">
            <summary>
            The business state for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessAddressStreet">
            <summary>
            The business street address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessFaxNumber">
            <summary>
            The business fax number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.BusinessPhoneNumber">
            <summary>
            The business telephone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.CarPhoneNumber">
            <summary>
            The car telephone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Categories">
            <summary>
            A collection of user labels assigned to the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Category">
            <summary>
            A category that is assigned to the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Children">
            <summary>
            A collection of the contact's children.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Child">
            <summary>
            One of the contact‚Äôs children.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.CompanyName">
            <summary>
            The company name for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Department">
            <summary>
            The department name for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Email1Address">
            <summary>
            The first e-mail address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Email2Address">
            <summary>
            The second e-mail address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Email3Address">
            <summary>
            The third e-mail address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.FileAs">
            <summary>
            The filing string for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.FirstName">
            <summary>
            The contact's first name.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Home2PhoneNumber">
            <summary>
            The second home phone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeAddressCity">
            <summary>
            The home city for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeAddressCountry">
            <summary>
            The home country/region for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeAddressPostalCode">
            <summary>
            The home postal code for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeAddressState">
            <summary>
            The home state for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeAddressStreet">
            <summary>
            The home street address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomeFaxNumber">
            <summary>
            The home fax number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.HomePhoneNumber">
            <summary>
            The home phone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.JobTitle">
            <summary>
            The contact's job title.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.LastName">
            <summary>
            The contact's last name.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.MiddleName">
            <summary>
            The contact's middle name.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.MobilePhoneNumber">
            <summary>
            The mobile phone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OfficeLocation">
            <summary>
            The office location for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OtherAddressCity">
            <summary>
            The city of the contact's alternative address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OtherAddressCountry">
            <summary>
            The country/region of the contact's alternative address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OtherAddressPostalCode">
            <summary>
            The postal code of the contact's alternative address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OtherAddressState">
            <summary>
            The state of the contact's alternative address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.OtherAddressStreet">
            <summary>
            The street address of the contact's alternative address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.PagerNumber">
            <summary>
            The pager number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.RadioPhoneNumber">
            <summary>
            The radio telephone number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Spouse">
            <summary>
            The name of the contact's spouse/partner.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Suffix">
            <summary>
            The suffix for the contact's name.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Title">
            <summary>
            The contact's business title.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.WebPage">
            <summary>
            The Web site or personal Web page for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.YomiCompanyName">
            <summary>
            The Japanese phonetic rendering of the company name for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.YomiFirstName">
            <summary>
            The Japanese phonetic rendering of the first name of the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.YomiLastName">
            <summary>
            The Japanese phonetic rendering of the last name of the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Picture">
            <summary>
            The file, which is encoded with base64 encoding, containing the picture of the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.Alias">
            <summary>
            The user's alias.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts.WeightedRank">
            <summary>
            The rank this entry possesses in the recipient information cache.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2">
            <summary>
            Contacts2 namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.CustomerId">
            <summary>
            The customer identifier (ID) for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.GovernmentId">
            <summary>
            The government-assigned identifier (ID) for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.IMAddress">
            <summary>
            The instant messaging address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.IMAddress2">
            <summary>
            The alternative instant messaging address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.IMAddress3">
            <summary>
            The tertiary instant messaging address for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.ManagerName">
            <summary>
            The distinguished name (DN) of the manager for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.CompanyMainPhone">
            <summary>
            The main telephone number for the contact's company.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.AccountName">
            <summary>
            The account name and/or number for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.NickName">
            <summary>
            The nickname for the contact.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Contacts2.MMS">
            <summary>
            The Multimedia Messaging Service (MMS) address for the contact.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary">
            <summary>
            DocumentLibrary namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.LinkId">
            <summary>
            The link to the document, specified as a Uniform Resource Identifier (URI).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.DisplayName">
            <summary>
            The name of the document, as displayed by the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.IsFolder">
            <summary>
            Specifies whether the item is a folder or a document.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.CreationDate">
            <summary>
            The date and time when the document was first created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.LastModifiedDate">
            <summary>
            The date and time when the document or its properties was last modified.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.IsHidden">
            <summary>
            Specifies whether this is a hidden object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.ContentLength">
            <summary>
            The estimated size of the document, in bytes.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.DocumentLibrary.ContentType">
            <summary>
            The Multipurpose Internet Mail Extensions (MIME) type of the binary-encoded content or content encoded with base64 encoding.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Email">
            <summary>
            Email namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DateReceived">
            <summary>
            Specifies the date and time that the message was received on the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DisplayTo">
            <summary>
            Specifies the names of the primary recipients of the message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Importance">
            <summary>
            Specifies the importance of the message, as determined by the sender.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.MessageClass">
            <summary>
            Specifies the message class of this e-mail message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Subject">
            <summary>
            Specifies the subject of the e-mail message or the subject of the flag as it would appear in a task list.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Read">
            <summary>
            Specifies whether the message has been read.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.To">
            <summary>
            Specifies the list of recipients
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Cc">
            <summary>
            Specifies the list of secondary recipients.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.From">
            <summary>
            Specifies the e-mail address of the message sender.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.ReplyTo">
            <summary>
            Specifies the e-mail address to which replies will be addressed by default.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.AllDayEvent">
            <summary>
            Specifies whether the calendar item is an all-day event.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Categories">
            <summary>
            Specifies the user-selected categories for this message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Category">
            <summary>
            Specifies the category for this e-mail item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DtStamp">
            <summary>
            Specifies the date and time that the calendar item was created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.EndTime">
            <summary>
            Specifies the date and time that the meeting ends.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.InstanceType">
            <summary>
            Specifies the type of calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.BusyStatus">
            <summary>
            Specifies the intended busy status for the meeting request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Location">
            <summary>
            Specifies the location for the calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.MeetingRequest">
            <summary>
            Specifies a meeting request accompanying an e-mail message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Organizer">
            <summary>
            Specifies the e-mail alias of the meeting organizer.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.RecurrenceId">
            <summary>
            Specifies a specific instance of a recurring calendar item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Reminder">
            <summary>
            Specifies the number of seconds prior to the calendar item's start time that a reminder is displayed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.ResponseRequested">
            <summary>
            Specifies whether the originator of the meeting has requested a response.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Recurrences">
            <summary>
            Specifies a collection of Recurrence elements.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Recurrence">
            <summary>
            Specifies a collection of Recurrence elements that describe when and how often this meeting recurs.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Type">
            <summary>
            Specifies the recurrence type of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Until">
            <summary>
            Specifies the end time of a series of recurrence meetings.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Occurrences">
            <summary>
            Specifies the number of occurrences before the series of recurring meeting ends.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Interval">
            <summary>
            Specifies the interval between recurrences of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DayOfWeek">
            <summary>
            Specifies the day of the week of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DayOfMonth">
            <summary>
            Specifies the day of the month of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.WeekOfMonth">
            <summary>
            Specifies the week of the month of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.MonthOfYear">
            <summary>
            Specifies the month of the year of the recurring meeting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.StartTime">
            <summary>
            Specifies the date and time that the meeting starts.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Sensitivity">
            <summary>
            Specifies the confidentiality level of the meeting request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.TimeZone">
            <summary>
            Specifies the time zone specified when the calendar item was created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.GlobalObjId">
            <summary>
            Specifies a 76-digit hexadecimal ID generated by the client for the meeting request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.ThreadTopic">
            <summary>
            Specifies the topic used in conversation reading.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.InternetCPID">
            <summary>
            Specifies the original code page ID from the MIME message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Flag">
            <summary>
            Specifies the flag associated with the item, along with the item's current status.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.Status">
            <summary>
            Specifies the current status of the flag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.ContentClass">
            <summary>
            Specifies the content class of the data.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.FlagType">
            <summary>
            Specifies the type of the flag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.CompleteTime">
            <summary>
            Specifies the time at which the flagged item was marked as finished.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email.DisallowNewTimeProposal">
            <summary>
            Specifies whether recipients can propose a new meeting time.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2">
            <summary>
            Email2 namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.UmCallerID">
            <summary>
            Specifies the callback telephone number of the person who called or left an electronic voice message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.UmUserNotes">
            <summary>
            Specifies user notes related to an electronic voice message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.UmAttDuration">
            <summary>
            Specifies the duration of electronic voicemail attachments.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.UmAttOrder">
            <summary>
            Specifies the order of electronic voice mail attachments.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.ConversationId">
            <summary>
            Specifies a unique identifier for a conversation.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.ConversationIndex">
            <summary>
            Specifies a set of dates and times used by clients to generate a conversation tree view.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.LastVerbExecuted">
            <summary>
            Specifies the last action, such as reply or forward, which was taken on the message so that the client can display the related icon.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.LastVerbExecutionTime">
            <summary>
            Specifies the time when the email2:LastVerbExecuted was performed on the message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.ReceivedAsBcc">
            <summary>
            Specifies whether the recipient was blind carbon copied on a message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.Sender">
            <summary>
            Specifies the user that actually sent the message when the message was not sent by the user identified by From.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.CalendarType">
            <summary>
            Specifies the type of calendar associated with the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.IsLeapMonth">
            <summary>
            Specifies whether the recurrence takes place in the leap month of the given year.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.AccountId">
            <summary>
            Specifies the ID of the account that received the message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.FirstDayOfWeek">
            <summary>
            Specifies the day that is considered the first day of the calendar week for this recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Email2.MeetingMessageType">
            <summary>
            Specifies the type of the meeting message.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy">
            <summary>
            FolderHierarchy namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.DisplayName">
            <summary>
             Specifies the name of the folder that is shown to the user.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.ServerId">
            <summary>
            Identifies a folder on a server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.ParentId">
            <summary>
            Specifies the server ID of the parent folder of the folder on the server
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Type">
            <summary>
            Specifies the type of the folder to be created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Status">
            <summary>
            Indicates the reason for the failure of a command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Changes">
            <summary>
            Contains changes to the folder hierarchy.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Add">
            <summary>
            Creates a new folder on the client
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Delete">
            <summary>
            Specifies that a folder on the server was deleted since the last folder synchronization.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Update">
            <summary>
            Identifies a folder on the server that has been updated (renamed or moved).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.SyncKey">
            <summary>
            It is used by the server to track the current state of the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.FolderCreate">
            <summary>
            The FolderCreate element is a required element in FolderCreate command requests and FolderCreate command responses that identifies the body of the HTTP POST as containing a FolderCreate command (section 2.2.2.2).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.FolderDelete">
            <summary>
            The FolderDelete element is a required element in FolderDelete command requests and FolderDelete command responses that identifies the body of the HTTP POST as containing a FolderDelete command (section 2.2.2.3).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.FolderUpdate">
            <summary>
            The FolderUpdate element is a required element in FolderUpdate command requests and FolderUpdate command responses that identifies the body of the HTTP POST as containing a FolderUpdate command (section 2.2.2.5).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.FolderSync">
            <summary>
            The FolderSync element is a required element in FolderSync command requests and FolderSync command responses that identifies the body of the HTTP POST as containing a FolderSync command (section 2.2.2.4). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.FolderHierarchy.Count">
            <summary>
            Specifies the number of added, deleted, and updated folders on the server since the last folder synchronization.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL">
            <summary>
            GAL namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.DisplayName">
            <summary>
            Contains the display name of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Phone">
            <summary>
            Contains the phone number of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Office">
            <summary>
            Contains the office location or number of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Title">
            <summary>
            Contains the title of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Company">
            <summary>
            Contains the company of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Alias">
            <summary>
            Contains the alias of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.FirstName">
            <summary>
            Contains the first name of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.LastName">
            <summary>
            Contains the last name of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.HomePhone">
            <summary>
            Contains the home phone number of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.MobilePhone">
            <summary>
            Contains the mobile phone number of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.EmailAddress">
            <summary>
            Contains the email address of a recipient in the GAL that matched the search criteria from the corresponding Search command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Picture">
            <summary>
            Contains the data related to the contact photos.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Status">
            <summary>
            Indicates the reason for the failure of a command request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GAL.Data">
            <summary>
            Contains the binary data of the contact photo.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.GetItemEstimate">
            <summary>
            GetItemEstimate namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.GetItemEstimate.GetItemEstimate">
            <summary>
            The GetItemEstimate element is a required element in GetItemEstimate command requests and GetItemEstimate command responses that identifies the body of the HTTP POST as containing a GetItemEstimate command (section 2                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                nvisibleParameterAnnotations k ´ | Ljava/lang/String;
 Æ ñ ∂ : ê A RuntimeVisibleAnnotations I  CreatePortForwardingDialogExt.kt getDescription Code 
component2 java/lang/String d = F  [ √´√É	¬Ç"¬©:|9qqU√ÆR¬É√â√òa√†< )com/jetbrains/codeWithMe/model/RdPortType <clinit> n ò ù     getPort  w s(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;
 f 1 name kotlin/jvm/internal/Intrinsics 	substring -()Lcom/jetbrains/codeWithMe/model/RdPortType; ò O
 ≠  d1 StackMapTable   0 
SourceFile
 v S h√§ko+¬û{d2√¢¬æ√û¬ø¬¶√û¬∞√∫√ù¬©	√ÜgI6t¿Äw√¢14[¬Ø:√´t√∏E1√§+√à¬Ö√´¬ü¬ê¬Ç√å√ä√¨√ö¬õ-F√†¬≠4¬ì port    LocalVariableTable (I)IK¿Ä&

¿Ä
¿Ä

¿Ä

¿Ä



¬Ü¿Ä20B%0000¬¢	J	0H√ÜJ	0H√ÜJ	0H√ÜJ	0H√ÜJ10¿Ä20202020H√ÜJ020H√ñJ	0H√ñJ	0H√ñR0¬¢
¿Ä
R0¬¢
¿ÄR0¬¢
¿ÄR0¬¢
¿Ä¬® description java/lang/Object getName charAt #Lorg/jetbrains/annotations/NotNull; _com/jetbrains/rd/platform/codeWithMe/portForwarding/CreatePortForwardingDialogExt$ForwardedPort RuntimeInvisibleAnnotations ∂  toString √≤ & ¶ í > ? mv (JJ)I	 ≠ C H ( other (III)Ljava/lang/String; 
component4 I ¶ d2 ()[C ()I ()V 5 ≤ & ç	 ≠ 3 a
 v , î P
 v £   ([C)V +Lcom/jetbrains/codeWithMe/model/RdPortType; '(Ljava/lang/Object;Ljava/lang/Object;)Z  Ç
 ≠ p makeConcatWithConstants  ":∫€çÂ≥“£Éh%Ì  :I˜Êù`Ô jtS  SÏKTˇ≤  d◊ôXùag˘‘…  6ftˇ>‚/D›ÂŸ´á 1 ≠ f     ä i    5 ≤  ï     ì    ~ c  ï     ì    è c  ï     ì    ´     M      H (  l   ∆     j ∑7,˝Ôí`Ÿídà∏ É∏ -˝Óí`‰˘ít`à∏ É∏ ˝Ìí`Íîít`à∏ É∏ *∑ }*µ '*,µ T*-µ ™*µ .±         P K T L Y M ^ N c O i K å   *    j ä i    j 5 ≤    j ~ c    j è c  `       ì    ì    ì    z ¶  l        *¥ '¨           L  ^ Å  l        *¥ T∞           M ï     ì    ë 4  l        *¥ ™∞           N ï     ì    k 4  l        *¥ .∞           O ï     ì    U ¶  l        *¥ '¨      m Å  l        *¥ T∞     ï     ì     4  l        *¥ ™∞     ï     ì    ¢ 4  l        *¥ .∞     ï     ì    = F  l   ö     ^ ≈7,⁄ítd∂Ìídà∏ É∏ -⁄ítdØøídà∏ É∏ ⁄ítd
Ú‰í`à∏ É∏ ª ≠Y,-∑ J∞    å   *    ^ ä i    ^ 5 ≤    ^ ~ c    ^ è c  ï     ì   `       ì    ì    ì  	 R D  l   ‰  
   Ü ª7 π∫ {  6	~	ö ô ß  «∫ ¥  ø*¥ '<~	ö ô ß  «∫ ¥  ø*¥ TM~	ö ô ß  «∫ ¥  ø*¥ ™N~ô 	*¥ .:*,-∂ µ∞      g 4 < ? g S [ ^ g  Ö   4 ˇ   	 ≠ G v v f  g
CJ g
CJ g
D  ó 4  l   á 
    { ø@*¥ '*¥ T*¥ ™*¥ .N::6ıúítd˘Àít`à∏ Éıùítd‰lí`à∏ Éı¶ítdŒí`à∏ Éıßítdœ‹ídà∏ É-∫ Y  ∞     ï     ì    & ¶  l   =     1*¥ '∏ "<h*¥ T∂ N`<h*¥ ™∂ `<h*¥ .∂ `<¨      6 )  l       ¡A Ω ∫ {  6*ô !+¶ ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø+ô #¡ ≠ö ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø+¿ ≠:*ô (¥ '¥ 'ü ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø*ô (¥ T¥ T• ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø*¥ ™¥ ™∏ ô +ö ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø*¥ .¥ .∏ ô  ö ß  √ ∫ ¥  ø¨ √ ∫ ¥  ø¨     g  ( ( g 3 > A g 8 M M g ] n q g c } } g à ò õ g ç ß ß g ≤ ≈ » g ¬ ‘ ‘ g Í Ú ı g Ô g  Ö   q ˇ   ≠ f  g	A g	@ fM g	A g	@ fˇ   ≠ f ≠  g	A g	@ ≠R g	A g	@ ≠U g	A g	KJ g	A g	@ å       † E  `        
 ´   l        *∞      u ß  l  √ 
   -
Ω v:>	YM∂ Ø6<;Ñ ,Y`∂ ß j_Ñ_S`Y;¢ ,∂ %<ßˇ÷YM∂ Ø6<;'Ñ ,Y`∂ ß /_Ñ_S`Y;¢ ,∂ %<ßˇ÷≥ û
Ω v≥ 8ß °[W∂ ¨Zæ[W6]X[£ f\_]4_p™     E          '   ,   1   6   ;   @Rß yß :ß Sß Iß 
xß EÇÇíUÑYö \Zßˇ§]X[£ˇòWª vZ_∑ à∂ W_W_™ˇˇˇ        ˇˇˇG±    Ö  Ñ ˇ   v q  ˇ   v q  vP vˇ   v q  vˇ   v q  -ˇ   v q         7 8   9    :  2 ;  4   <     *∂ 	∞    5      U 6        7 8      < =   > 3  4   1     *∂ ∞    5      X 6        7 8   9    ?  > @  4   ?     *∂ ¿ ∞    5      [ 6        7 8      < =      4   I     *+∑ ±    5   
   ^ _ 6         7 8      A B     C =   D E  4   -     
¨    5      ` 6        7 8    F G  4   S     +¡ ô +¿ *π  ±    5   
   c d 6        7 8      H I  J      K G  4   S     +¡ ô +¿ *π # ±    5   
   g h 6        7 8      H I  J      L M  4   m     +¡ &ô +¿ &*π ( ∞+*π , ∞    5   
   k l 6        7 8      N O  P        N Q  J     9    R  S    T U     V       W 	   X 	PK          SÏ≥ê  ê  F   org/apache/tuweni/toml/internal/TomlParser$BasicUnescapedContext.class ˛∫æ   7 D  *org/apache/tuweni/toml/internal/TomlParser
      @org/apache/tuweni/toml/internal/TomlParser$BasicUnescapedContext getToken ,(II)Lorg/antlr/v4/runtime/tree/TerminalNode;
 
     &org/antlr/v4/runtime/ParserRuleContext <init> ,(Lorg/antlr/v4/runtime/ParserRuleContext;I)V  2org/apache/tuweni/toml/internal/TomlParserListener     enterBasicUnescaped E(Lorg/apache/tuweni/toml/internal/TomlParser$BasicUnescapedContext;)V     exitBasicUnescaped  1org/apache/tuweni/toml/internal/TomlParserVisitor     visitBasicUnescaped V(Lorg/apache/tuweni/toml/internal/TomlParser$BasicUnescapedContext;)Ljava/lang/Object;    ! " # *org/antlr/v4/runtime/tree/ParseTreeVisitor visitChildren 8(Lorg/antlr/v4/runtime/tree/RuleNode;)Ljava/lang/Object; 
StringChar *()Lorg/antlr/v4/runtime/tree/TerminalNode; Code LineNumberTable LocalVariableTable this BLorg/apache/tuweni/toml/internal/TomlParser$BasicUnescapedContext; parent (Lorg/antlr/v4/runtime/ParserRuleContext; invokingState I getRuleIndex ()I 	enterRule 0(Lorg/antlr/v4/runtime/tree/ParseTreeListener;)V listener -Lorg/antlr/v4/runtime/tree/ParseTreeListener; StackMapTable exitRule accept @(Lorg/antlr/v4/runtime/tree/ParseTreeVisitor;)Ljava/lang/Object; visitor ,Lorg/antlr/v4/runtime/tree/ParseTreeVisitor; LocalVariableTypeTable 2Lorg/antlr/v4/runtime/tree/ParseTreeVisitor<+TT;>; 	Signature M<T:Ljava/lang/Object;>(Lorg/antlr/v4/runtime/tree/ParseTreeVisitor<+TT;>;)TT; 
SourceFile TomlParser.java NestHost InnerClasses BasicUnescapedContext !  
       $ %  &   1     *∂ ∞    '      ’ (        ) *       &   I     *+∑ 	±    '   
   ◊ ÿ (         ) *      + ,     - .   / 0  &   -     ¨    '      Ÿ (        ) *    1 2  &   S     +¡ ô +¿ *π  ±    '   
   ‹ › (        ) *      3 4  5      6 2  &   S     +¡ ô +¿ *π  ±    '   
   ‡ · (        ) *      3 4  5      7 8  &   m     +¡ ô +¿ *π  ∞+*π  ∞    '   
   ‰ Â (        ) *      9 :  ;        9 <  5     =    >  ?    @ A     B   
    C 	PK          K>AæT  T  >   org/apache/tuweni/toml/internal/TomlParser$BinIntContext.class ˛∫æ   7 D  *org/apache/tuweni/toml/internal/TomlParser
      8org/apache/tuweni/toml/internal/TomlParser$BinIntContext getToken ,(II)Lorg/antlr/v4/runtime/tree/TerminalNode;
 
     &org/antlr/v4/runtime/ParserRuleContext <init> ,(Lorg/antlr/v4/runtime/ParserRuleContext;I)V  2org/apache/tuweni/toml/internal/TomlParserListener     enterBinInt =(Lorg/apache/tuweni/toml/internal/TomlParser$BinIntContext;)V     
exitBinInt  1org/apache/tuweni/toml/internal/TomlParserVisitor     visitBinInt N(Lorg/apache/tuweni/toml/internal/TomlParser$BinIntContext;)Ljava/lang/Object;    ! " # *org/antlr/v4/runtime/tree/ParseTreeVisitor visitChildren 8(Lorg/antlr/v4/runtime/tree/RuleNode;)Ljava/lang/Object; BinaryInteger *()Lorg/antlr/v4/runtime/tree/TerminalNode; Code LineNumberTable LocalVariableTable this :Lorg/apache/tuweni/toml/internal/TomlParser$BinIntContext; parent (Lorg/antlr/v4/runtime/P                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 >
            <summary>
            Identifies an account.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Settings.AccountName">
            <summary>
            Specifies the friendly name for the given account.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Settings.UserDisplayName">
            <summary>
            Specifies the display name of the user associated with the given account.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Settings.SendDisabled">
            <summary>
            Specifies whether the client can send messages using the given account.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Settings.RightsManagementInformation">
            <summary>
            In Settings command requests, the RightsManagementInformation element is a container node that is used to request rights management information settings. 
            In Settings command responses, the RightsManagementInformation element is a container node that contains rights management information settings retrieved from the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks">
            <summary>
            Tasks namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Categories">
            <summary>
            A collection of user-selected labels assigned to the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Category">
            <summary>
            One of the user-selected labels that has been applied to the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Complete">
            <summary>
            Whether the task has been completed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.DateCompleted">
            <summary>
            The date on which the task item was completed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.DueDate">
            <summary>
            The local due date of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.UtcDueDate">
            <summary>
            The UTC due date of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Importance">
            <summary>
            The importance or priority of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Recurrence">
            <summary>
            When and how often this task recurs.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Type">
            <summary>
            The recurrence type.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Start">
            <summary>
            The start time of a series of recurrence items.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Until">
            <summary>
            The end time of a series of recurrence items.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Occurrences">
            <summary>
            The number of occurrences before the series ends.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Interval">
            <summary>
            The interval between recurrences.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.DayOfMonth">
            <summary>
            The day of the month for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.DayOfWeek">
            <summary>
            The day of the week for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.WeekOfMonth">
            <summary>
            The week of the month for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.MonthOfYear">
            <summary>
            The month of the year for the recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Regenerate">
            <summary>
            Whether the task item regenerates after each task instance is complete.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.DeadOccur">
            <summary>
            Whether the task is a recurring instance.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.ReminderSet">
            <summary>
            Whether a reminder for the task item has been set to appear.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.ReminderTime">
            <summary>
            The time and date at which the reminder for the task item will appear.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Sensitivity">
            <summary>
            The sensitivity of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.StartDate">
            <summary>
            The local start date of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.UtcStartDate">
            <summary>
            The Coordinated Universal Time (UTC) start date of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.Subject">
            <summary>
            The subject of the task item.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.OrdinalDate">
            <summary>
            The time at which the client set the flag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.SubOrdinalDate">
            <summary>
            A value that can be used for sorting.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.CalendarType">
            <summary>
            The calendar system used by this recurrence.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.IsLeapMonth">
            <summary>
            Whether this recurrence takes place during a leap month.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Tasks.FirstDayOfWeek">
            <summary>
            Specifies which day is considered the first day of the calendar week for this recurrence.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert">
            <summary>
            ValidateCert namespace of the ActiveSync protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.ValidateCert">
            <summary>
            Identifies the body of the HTTP POST as containing a ValidateCert command (section 2.2.2.20).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.Certificates">
            <summary>
            Contains the list of certificates to be validated.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.Certificate">
            <summary>
            Contains the X509 certificate BLOB that is encoded with base64 encoding.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.CertificateChain">
            <summary>
            Contains the list of certificates to be validated.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.CheckCRL">
            <summary>
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ValidateCert.Status">
            <summary>
            Indicates the result of an operation. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage">
            <summary>
            Specifies the OOF message for a particular audience.
            Exchange 2007, Exchange 2010, and Exchange 2013 require that the reply message for unknown external and known external audiences be the same.
            The property supports the following three audiences for an OOF message:
                Internal         ‚Äî A user who is in the same organization as the sending user.
                Known external   ‚Äî A user who is outside the sending user's organization, but is represented in the sending user's contacts.
                Unknown external ‚Äî A user who is outside the sending user's organization and is not represented in the sending user's contacts.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.AppliesToInternal">
            <summary>
            Indicates that the OOF message applies to internal users. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.AppliesToExternalKnown">
            <summary>
            Indicates that the OOF message applies to known external users. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.AppliesToExternalUnknown">
            <summary>
            Indicates that the OOF message applies to unknown external users. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.Enabled">
            <summary>
            Specifies whether an OOF message is sent to this audience while the sending user is OOF.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.ReplyMessage">
            <summary>
            Specifies the message to be shown to a particular audience when the user is OOF.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFMessage.BodyType">
            <summary>
            Specifies the format of the OOF message.
            The following are the permitted values for the BodyType element:
             - Text
             - HTML
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFReqParametrs">
            <summary>
            Gets OOF information settings from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFReqParametrs.BodyType">
            <summary>
            Specifies the format type of the body content of the item.
            The following are the permitted values for the BodyType element:
             - Text
             - HTML
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFRequest">
            <summary>
            Specifies a class for retrieving and setting Out of Office (OOF) information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFRequest.Get">
            <summary>
            Gets OOF information settings from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFRequest.Set">
            <summary>
            Sets OOF information settings on the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFResponse">
            <summary>
            Specifies a class for retrieving and setting Out of Office (OOF) information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFResponse.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFResponse.Oof">
            <summary>
            OOF information settings from the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFSettings">
            <summary>
            OOF information settings.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFSettings.OofState">
            <summary>
            Specifies the availability of the Oof property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFSettings.StartTime">
            <summary>
            Start time during which the user is out of office.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFSettings.EndTime">
            <summary>
            End time during which the user is out of office.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.OOFSettings.OofMessage">
            <summary>
            Specifies the OOF message for a particular audience.
            Exchange 2007, Exchange 2010, and Exchange 2013 require that the reply message for unknown external and known external audiences be the same.
            The property supports the following three audiences for an OOF message:
                Internal         ‚Äî A user who is in the same organization as the sending user.
                Known external   ‚Äî A user who is outside the sending user's organization, but is represented in the sending user's contacts.
                Unknown external ‚Äî A user who is outside the sending user's organization and is not represented in the sending user's contacts.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.OofState">
            <summary>
            Specifies the availability of the Oof property.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.OofState.Disabled">
            <summary>
            The Oof property is disabled.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.OofState.Global">
            <summary>
            The Oof property is global.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.OofState.TimeBased">
            <summary>
            The Oof property is time-based.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRequest">
            <summary>
            Indicates that the client is requesting that photos be returned in the server response.
            The Picture is not supported when the protocol version is 12.1 or 14.0.
            Contains the data related to the photos request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRequest.MaxSize">
            <summary>
            Specifies the maximum size of an individual contact photo that is returned in the response, in bytes.
            The MaxSize is not supported when the protocol version is 12.1 or 14.0.
            The maximum value of the MaxSize is 100 KB or 102400 bytes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRequest.MaxPictures">
            <summary>
            Limits the number of contact photos returned in the server response.
            The MaxPictures is not supported when the protocol version is 12.1 or 14.0.
            The server returns the first N results that have contact photos, where N is the value of the MaxPictures. 
            After the MaxPictures limit is reached, the server returns Status value 173 (NoPicture) if the contact has no photo, Status value 174 (PictureTooLarge) if the contact‚Äôs photo is too large, or Status value 175 (PictureLimitReached) if the contact has a photo but the MaxPictures limit was reached.
            Note that the MaxPictures identifies the number of contact photos returned per query. 
            Therefore, if the client includes three recipients to resolve and sets the MaxPictures value to 3 in the ResolveRecipients command request, a maximum of 9 contact photos can be returned.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRespose">
            <summary>
            Contains the data related to the contact photos.
            The Picture is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRespose.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PictureRespose.Data">
            <summary>
            Contains the binary data of the contact photo.
            The Data is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter">
            <summary>
            Contains the ping command parameters
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter.ServerId">
            <summary>
            The Id element is a required child element of the Folder element in Ping command requests 
            that specifies the server ID of the folder to be monitored. 
            Elements referenced in this section are defined in the Ping namespace, 
            except where otherwise indicated by the presence of a namespace prefix (as defined in section 2.2.1).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter.Class">
            <summary>
            The Class element is a required child element of the Folder element in Ping command requests 
            that specifies the content class of the folder to be monitored.
            The valid Class element values are: Email, Calendar, Contacts, Tasks, Notes
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter.#ctor(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass)">
            <summary>
            Initializes a new instance of the PingParameter class.
            </summary>
            <param name="serverId">The Id element is a required child element of the Folder element in Ping command requests 
            that specifies the server ID of the folder to be monitored. </param>
            <param name="fClass">
            The Class element is a required child element of the Folder element in Ping command requests 
            that specifies the content class of the folder to be monitored.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicy">
            <summary>
            Specifies a security policy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicy.PolicyType">
            <summary>
            Specifies the format in which the policy settings are to be provided to the client device.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicy.PolicyKey">
            <summary>
            PolicyKey is used by the server to mark the state of policy settings on the client in the settings download phase of the Provision command. 
            The PolicyKey is an element of type string with a maximum of 64 characters.
            The value of the PolicyKey SHOULD be a string representation of a 32-bit unsigned integer. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicy.Status">
            <summary>
            Indicates the result of the operation. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicy.Data">
            <summary>
            Specifies the settings for a policy. Used in the Policy responses only. 
            It is not present in responses to acknowledgment requests.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyData">
            <summary>
            Specifies the settings for a policy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyData.EASProvisionDoc">
            <summary>
            Specifies the collection of security settings for device provisioning.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyStatuses">
            <summary>
            The value indicates the success or failure of the client to apply the policy settings retrieved from the server. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyStatuses.Success">
            <summary>
            The client operation was successful.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyStatuses.PartialSuccess">
            <summary>
            Partial success (at least the PIN was enabled).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyStatuses.NotApply">
            <summary>
            The client did not apply the policy at all.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionPolicyStatuses.ProvisionedByThirdParty">
            <summary>
            The client claims to have been provisioned by a third party.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRemoteWipeStatuses">
            <summary>
            The value indicates the success or failure of a remote wipe operation on the client.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRemoteWipeStatuses.Successful">
            <summary>
            The client remote wipe operation was successful.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRemoteWipeStatuses.Failed">
            <summary>
            The remote wipe operation failed.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest">
            <summary>
            Contains request information for provision command
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest.Policies">
            <summary>
            Specifies a collection of security policies.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest.RemoteWipeStatus">
            <summary>
            Specifies a client's confirmation of a server's remote wipe directive.
            The value indicates the success or failure of a remote wipe operation on the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest.DeviceInformation">
            <summary>
            Device information. 
            When the protocol version is 14.1, the client MUST send the DeviceInformation element with its contents when sending an initial Provision command request to the server but not on subsequent requests.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionResponse">
            <summary>
            Contains response information for provision command
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionResponse.DeviceInformationStatus">
            <summary>
            Contains DeviceInformation status
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionResponse.Policies">
            <summary>
            Specifies a collection of security policies.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionResponse.RemoteWipe">
            <summary>
            Specifies a remote wipe directive from the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType">
            <summary>
            Specifies the keywords to use for matching the entries in the store that is being searched.
            The value of the Query is used as a prefix-string matching pattern, and returns entries that match the beginning of the string. 
            For example, searching for "John" would match "John Frum" or "Barry Johnson", but would not match "James Littlejohn".
            All nonempty text properties in the GAL that are indexed by using ANR are compared with the Query element value. 
            Search comparisons are performed by using case-insensitive matching.
            For a Windows SharePoint Services document library search, this protocol supports queries of the following form: 
            LinkId == value, where value specifies the URL of the item or folder and LinkId indicates that the value is to be compared to the link ID property.
            For mailbox search, the query syntax is as follows:
                - Folders can be specified in the following ways:
                    Specified ID
                    Specified folder and subfolders
                    All email folders, including Draft, Inbox and subfolders, Outbox, and Sent Items
                - The basic keyword query can be composed of the following:
                    The basic operator: And (section 2.2.3.10) 
                    A dateTime filter specified by using the GreaterThan (section 2.2.3.78) and LessThan elements (section 2.2.3.87)
                    FreeText elements (section 2.2.3.73) that contain keywords
            The basic keyword query is executed against all indexed properties.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.FreeText">
            <summary>
            Specifies a string value for which to search.
            If the FreeText property is set other than the And property, the server responds with a Status value of 8 (SearchTooComplex).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.Class">
            <summary>
            Identifies the class of the item.
            The valid airsync:Class element values are:
                - Tasks
                - Email
                - Calendar
                - Contacts
                - Notes
                - SMS
            The following classes are supported for mailbox searches when the protocol version is 12.1: Email, Calendar, Contacts, Tasks. 
            The SMS and Notes classes are only available if the protocol version is 14.0 or 14.1.
            The Search request can include one or more Class elements in the request to limit the type of data included in the Search response. 
            If one or more Class elements are not included in the Search request, the server will return all supported classes.
            If the Class is included as a child of any element other than the And element, the server responds with a Status value of 8 (SearchTooComplex).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.CollectionId">
            <summary>
            Specifies the folder in which to search.
            If the DeepTraversal is present, it applies to all folders under each CollectionId. 
            If the CollectionId is included as a child of any element other than And, the server responds with a Status value of 8 (SearchTooComplex).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.ConversationId">
            <summary>
            Specifies the conversation for which to search. The value is a GUID.
            The ConversationId is not supported when the protocol version is 12.1.
            If the ConversationId is included as a child of any element other than the And element, the server responds with a Status value of 8 (SearchTooComplex).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.LessThan">
            <summary>
            Specifies a property and a value that are compared for a 'Less than' conditions during a search.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.QueryType.GreaterThan">
            <summary>
            Specifies a property and a value that are compared for a 'Greater than' conditions during a search.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient">
            <summary>
            Represents a single recipient that has been resolved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.Type">
            <summary>
            Indicates the type of recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.DisplayName">
            <summary>
            Contains the display name of the recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.EmailAddress">
            <summary>
            Contains the email address of the recipient, in SMTP format.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.Availability">
            <summary>
            Identifies status and free/busy data of the users or distribution lists identified in the request for the time identified by the StartTime and EndTime.
            When the Availability is included in a ResolveRecipients request, the server retrieves free/busy information for the users identified in the To elements included in the request, and returns the free/busy information in the MergedFreeBusy in the response. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.Certificates">
            <summary>
            Contains information about the certificates for a recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Recipient.Picture">
            <summary>
            Contains the data related to the contact photos.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.RecipientType">
            <summary>
            Indicates the type of recipient.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.RecipientType.GAL">
            <summary>
            Represents a GAL entry.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.RecipientType.Contact">
            <summary>
            Represents a contact entry.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityRequest">
            <summary>
            Indicates to the server that free/busy data is being requested by the client and identifies the start time and end time of the free/busy data to retrieve.
            The Availability is not supported when the protocol version is 12.1.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityRequest.StartTime">
            <summary>
            Identifies the start of the span of free/busy time requested by the client.
            The StartTime is not supported when the protocol version is 12.1.
            If the Availability is included in the request, the request MUST also include the StartTime and EndTime.
            If the client sends an invalid StartTime value, then the server returns a Status value of 5 in the ResolveRecipients command response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityRequest.EndTime">
            <summary>
            Identifies the end of the span of free/busy time requested by the client.
            The EndTime is not supported when the protocol version is 12.1.
            If the client sends an invalid EndTime value, then the server returns a Status value of 5 in the ResolveRecipients command response.
            If no EndTime is included in an Availablity request, the server uses a default end time value of seven days after the StartTime value. 
            If the EndTime value specified in the request is smaller than the StartTime value plus 30 minutes, or the duration spanned by the StartTime value and the EndTime value is greater than a specific number of days, then the server returns a Status value of 5 in the ResolveRecipients command response.
            Exchange 2010 and Exchange 2013 use 42 days; Exchange 2007 SP1 uses 62 days.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityResponse">
            <summary>
            Identifies status and free/busy data of the users or distribution lists identified in the request for the time identified by the StartTime and EndTime.
            When the Availability is included in a ResolveRecipients request, the server retrieves free/busy information for the users identified in the To elements included in the request, and returns the free/busy information in the MergedFreeBusy in the response. 
            When the server parses the request, the server first resolves the recipients identified by the To elements, and then determines the users free/busy information for the specified time span, before returning the free/busy data in the MergedFreeBusy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityResponse.MergedFreeBusy">
            <summary>
            Specifies the free/busy information for the users or distribution list identified in the request.
            Each item in the MergedFreeBusy list indicates the free/busy status for the user or distribution list for every 30 minute interval.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsAvailabilityResponse.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates">
            <summary>
            Contains information about the certificates for a recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates.CertificateCount">
            <summary>
            Specifies the number of valid certificates that were found for the recipient.
            If a Status value of 8 is returned with the Certificates, the CertificateCount specifies the number of recipient certificates that were not returned.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates.RecipientCount">
            <summary>
            Specifies the number of members belonging to a distribution list. 
            It can be used to determine whether all recipients belonging to a distribution list have valid certificates by comparing values of the CertificateCount and RecipientCount elements.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates.Certificates">
            <summary>
            Contains the list of X509 certificates as binary large object (BLOB).
            This element is returned by the server only if the client specifies a value of 2 in the CertificateRetrieval in the ResolveRecipients command request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsCertificates.MiniCertificate">
            <summary>
            Contains the mini-certificate BLOB.
            This element is returned only if the client specifies a value of 3 in the CertificateRetrieval in the ResolveRecipients command request and the resolved recipient has a valid S/MIME certificate.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions">
            <summary>
            Contains the options for resolving the list of recipients.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions.CertificateRetrieval">
            <summary>
            Specifies whether S/MIME certificates SHOULD be returned by the server for each resolved recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions.MaxCertificates">
            <summary>
            Limits the total number of certificates that are returned by the server.
            The value of the MaxCertificates is limited to a range of 0‚Äì9999. 
            This limit ensures that no individual recipient receives an incomplete set of certificates. 
            If the MaxCertificates limit is reached while enumerating certificates for an address list, that address list will not get back any certificates and a Status value of 8 is returned. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions.MaxAmbiguousRecipients">
            <summary>
            Limits the number of suggestions that are returned for each ambiguous recipient node in the response.
            The value of the MaxAmbiguousRecipients is limited to a range of 0‚Äì9999. 
            Each ambiguous recipient node receives only this many suggestions and no more. 
            The recipient count, returned in the RecipientCount, can be used by the client to determine the total number of suggestions available for that recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions.Availability">
            <summary>
            Indicates to the server that free/busy data is being requested by the client and identifies the start time and end time of the free/busy data to retrieve.
            When the Availability is included in a ResolveRecipients request, the server retrieves free/busy information for the users identified in the To elements included in the request, and returns the free/busy information in the MergedFreeBusy in the response. 
            If the Availability element is included in the ResolveRecipients request, the request MUST also include a valid StartTime value and EndTime value. 
            When the server parses the request, the server first resolves the recipients identified by the To elements, and then determines the users free/busy information for the specified time span, before returning the free/busy data in the MergedFreeBusy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsOptions.Picture">
            <summary>
            Indicates that the client is requesting that contact photos be returned in the server response.
            The Picture is not supported when the protocol version is 12.1 or 14.0.
            Contains the data related to the contact photos.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest">
            <summary>
            Contains information to resolve recipients.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest.To">
            <summary>
            Specifies one or more recipients to be resolved. 
            Value can be up to 256 characters in length.
            The result of including more than 1000 To elements in the request is undefined. 
            The server MAY return a protocol status error in response to such a command request.
            If the ResolveRecipients command request includes the Availability, a maximum of 100 To elements containing SMTP addresses can be included in the request. 
            If more than 100 SMTP addresses are included in the request, Status value 160 is returned in the response.
            If the ResolveRecipients command request includes the Availability and includes a To element for an ambiguous user, the response does not include a MergedFreeBusy element for that user. 
            Only users or distribution lists specified with valid SMTP addresses or a uniquely identifiable string in the request message To element have MergedFreeBusy elements included in the response.
            If the ResolveRecipients command request includes the Availability and the To element specifies a distribution group, then the availability data is returned as a single string that merges the data for the individual members of the distribution group. 
            If the distribution group contains more than 20 members, a Status element value of 161 is returned in the response indicating that the merged free busy information of such a large distribution group is not useful. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest.Options">
            <summary>
            Contains the options for resolving the list of recipients.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsResponse">
            <summary>
            Contains information as to whether the recipient was resolved. 
            If the recipient was resolved, the it also contains the type of recipient, the email address that the recipient resolved to, and, optionally, the S/MIME certificate for the recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsResponse.To">
            <summary>
            Specifies a recipient to be resolved.
            Its value can be up to 256 characters in length.
            If the To element specifies an ambiguous name and the Availability is included in the request, the response will not include free/busy data for that user. 
            The Availability is only included when the To element includes a valid SMTP address or name that resolves to a unique individual on the server.
            The result of including more than 1000 To elements in the request is undefined. 
            The server MAY return a protocol status error in response to such a command request.
            If the ResolveRecipients command request includes the Availability, a maximum of 100 To elements containing SMTP addresses can be included in the request. 
            If more than 100 SMTP addresses are included in the request, Status value 160 is returned in the response.
            If the ResolveRecipients command request includes the Availability and includes a To element for an ambiguous user, the response does not include a MergedFreeBusy element for that user. 
            Only users or distribution lists specified with valid SMTP addresses or a uniquely identifiable string in the request message To element have MergedFreeBusy elements included in the response.
            If the ResolveRecipients command request includes the Availability and the To element specifies a distribution group, then the availability data is returned as a single string that merges the data for the individual members of the distribution group. 
            If the distribution group contains more than 20 members, a Status element value of 161 is returned in the response indicating that the merged free busy information of such a large distribution group is not useful. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsResponse.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsResponse.RecipientCount">
            <summary>
            Specifies the number of recipients that are returned in the ResolveRecipients command response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsResponse.Recipients">
            <summary>
            Represents recipients that have been resolved.
            More than one Recipient are returned in a Response if the To specified in the request was either resolved to a distribution list or found to be ambiguous.
            The status code returned in the Response can be used to determine if the recipient was found to be ambiguous. 
            The recipient would be a suggested match if the recipient specified in the request was found to be ambiguous.
            Certificates are returned if the client requested certificates to be returned in the response.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementInformationResponce">
            <summary>
            Contains rights management information settings retrieved from the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementInformationResponce.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementInformationResponce.RightsManagementTemplates">
            <summary>
            The list of RightsManagementTemplates.
            A maximum of 20 RightsManagementTemplate objects can be returned to the client.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense">
            <summary>
            Contains the rights policy template settings for the template applied to the e-mail message being synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ContentExpiryDate">
            <summary>
            Specifies the expiration date for the license.
            The ContentExpiryDate element is set to "9999-12-30T23:59:59.999Z" if the rights management license has no expiration date set. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ContentOwner">
            <summary>
            Specifies whether the content of the original email can be modified by the user when the user forwards, replies, or replies all to the email message.
            The value is TRUE if the e-mail can be modified by the user; otherwise, FALSE.
            A value of FALSE requires that the client MUST exclude the original rights-managed email message from the SmartForward or SmartReply request. 
            Consequently, inline replies are not allowed if the EditAllowed element is set to FALSE. 
            When EditAllowed is set to FALSE and ReplaceMime is not present in a SmartForward or SmartReply request, the server will add the original rights-managed email message as an attachment to the new message. 
            Conversely, if ReplaceMime is present, the server will not attach the original rights-managed email message as an attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.EditAllowed">
            <summary>
            Specifies whether the content of the original email can be modified by the user when the user forwards, replies, or replies all to the email message.
            The value is TRUE if the e-mail can be modified by the user; otherwise, FALSE.
            A value of FALSE requires that the client MUST exclude the original rights-managed email message from the SmartForward or SmartReply request. 
            Consequently, inline replies are not allowed if the EditAllowed element is set to FALSE. 
            When EditAllowed is set to FALSE and ReplaceMime is not present in a SmartForward or SmartReply request, the server will add the original rights-managed email message as an attachment to the new message. 
            Conversely, if composemail:ReplaceMime is present, the server will not attach the original rights-managed email message as an attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ExportAllowed">
            <summary>
            Specifies whether the IRM protection on the e-mail message can be removed by the user.
            The value is TRUE if the user can remove the IRM protection when the user forwards, replies, or replies all to the e-mail message; otherwise, FALSE.
            If a rights-managed email message is forwarded or replied to using the SmartForward or SmartReply command, the following conditions are evaluated:
              - The original rights policy template has the ExportAllowed element set to TRUE
              - The TemplateID on the new message is set to the "No Restriction" template (TemplateID value "00000000-0000-0000-0000-000000000000")
            If both of the conditions are true, the IRM protection is removed from the outgoing message. 
            The original message retains its IRM protection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ExtractAllowed">
            <summary>
            Specifies whether the user can copy content out of the e-mail message.
            The value is TRUE if the content of the e-mail message can be cut, copied, or a screen capture can be taken of the content; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ForwardAllowed">
            <summary>
            Specifies whether the user can forward the e-mail message.
            The value is TRUE if the user can forward the e-mail message; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ModifyRecipientsAllowed">
            <summary>
            Specifies whether the user can modify the recipient list when the user forwards, or replies to the e-mail message.
            The value is TRUE if the user can modify the recipient (1) list; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.Owner">
            <summary>
            Specifies whether the user is the owner of the e-mail message.
            The value is TRUE if the user is the owner of the e-mail message; otherwise, FALSE. 
            A value of TRUE indicates that the authenticated user has owner rights on this message. 
            This element is used for information presentation purposes only. 
            The Allowed elements (EditAllowed, ReplyAllowed, etc.) are used to evaluate whether a particular action is permitted or restricted.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.PrintAllowed">
            <summary>
            Specifies whether the e-mail can be printed by the user. 
            This element does not indicate client support for printing an e-mail message; it only specifies whether the e-mail message can be printed if the client supports printing.
            The value is TRUE if the e-mail can be printed by the user; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ProgrammaticAccessAllowed">
            <summary>
            Specifies whether the contents of the e-mail message can be accessed programmatically by third party applications.
            The value is TRUE if third party applications can access the content of the e-mail message programmatically; otherwise, FALSE. 
            A value of TRUE indicates whether the protected content is accessible by other applications. 
            Protected content consists of the message body and attachments.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ReplyAllAllowed">
            <summary>
            Specifies whether the user can reply to all of the recipients (1) of the original e-mail message.
            The value is TRUE if the user can reply to all of the recipients of the e-mail message; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.ReplyAllowed">
            <summary>
            Specifies whether the user is allowed to reply to the e-mail message.
            The value is TRUE if the user can reply to the e-mail message; otherwise, FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.TemplateDescription">
            <summary>
            Contains a description of the rights policy template represented by the parent RightsManagementLicense element. 
            This element is used for informational presentation purposes only.
            The maximum length of the TemplateDescription element is 10240 characters.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.TemplateID">
            <summary>
            Contains a string that identifies the rights policy template represented by the parent RightsManagementLicense element.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementLicense.TemplateName">
            <summary>
            Specifies the name of the rights policy template represented by the parent RightsManagementLicense element. 
            This element is used for informational presentation purposes only.
            The maximum length of the TemplateName element is 256 characters.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate">
            <summary>
            Contains the template identifier, name, and description of a rights policy template available on the client.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate.#ctor">
            <summary>
            Initializes a new instance of the RightsManagementTemplate class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate.#ctor(System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the RightsManagementTemplate class.
            </summary>
            <param name="templateID">Template identifier</param>
            <param name="templateName">Template name</param>
            <param name="templateDescription">Template description</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate.TemplateID">
            <summary>
            Template identifier
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate.TemplateName">
            <summary>
            Template name
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.RightsManagementTemplate.TemplateDescription">
            <summary>
            Template description
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchCondition">
            <summary>
            Specifies a condition for search requests
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchCondition.Value">
            <summary>
            String value of condition
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions">
            <summary>
            Contains the search options.
            The UserName and Password can only be sent in the request after receiving a Status value of 14. 
            The server requires these credentials to access the requested resources. 
            The client MUST only send these over a secure or trusted connection, and only in response to a Status value of 14. 
            The supported options vary according to the store that is being searched. 
            The following table lists the valid options for each store.
                GAL: Range, UserName, Password, Picture
                Mailbox: Range, DeepTraversal, RebuildResults, BodyPreference, BodyPartPreference, RightsManagementSupport 
                DocumentLibrary: Range, UserName, Password
            The BodyPartPreference is only valid in Search command requests that include a ConversationId.
             </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.MIMESupport">
            <summary>
            Enables MIME support for email items that are sent from the server to the client.
            If the airsync:MIMESupport element is set to 'SendForSecureMIMEonly' (1) or 'SendForAll' (2) in the Search request:
              - The property of the airsyncbase:BodyPreference, the Type, SHOULD be included in the Search request, 
                containing a value of 'MIME' (4) to inform the server that the device can read the MIME BLOB.
              - The response from the server MUST include the airsyncbase:Body, which is a child of the Properties. 
                The airsyncbase:Body MUST contain the following properties in an S/MIME Search response:
                    - The airsyncbase:Type with a value of 'MIME' (4) to inform the device that the data is a MIME BLOB.
                    - The airsyncbase:EstimatedDataSize to specify the rough total size of the data.
                    - The airsyncbase:Truncated to indicate whether the MIME BLOB is truncated.
                    - The airsyncbase:Data that contains the full MIME BLOB.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.BodyPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.BodyPartPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching a message part.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.RightsManagementSupport">
            <summary>
            Specifies how the server returns rights-managed email messages to the client.
            If the value is TRUE, the server will decompress and decrypt rights-managed email messages before sending them to the client. 
            If the value is FALSE, the server will not decompress or decrypt rights-managed email messages before sending them to the client. 
            If the RightsManagementSupport element is not included in a request message, a default value of FALSE is assumed.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.Range">
            <summary>
            Specifies the maximum number of matching entries to return. 
            The format of the Range element value is in the form of a zero-based index specifier, formed with a zero, a hyphen, and another numeric value: "m-n." 
            The m indicates the lowest index of a zero-based array that would hold the items. 
            The n indicates the highest index of a zero-based array that would hold the items. 
            For example, a Range element value of 0‚Äì9 indicates 10 items, and 0‚Äì10 indicates 11 items. 
            A Range element value of 0‚Äì0 indicates 1 item.
            If Range is null, the default Range value for each Store type is used. 
            The following table identifies the default Range values and maximum results returned for each Store type:
            
            Mailbox
              - Default range value: 0-99
              - Maximum results returned: 100
            
            DocumentLibrary	       	                           
              - Default range value: 0-999
              - Maximum results returned: 1000
            
            GAL
              - Default range value: 0-99
              - Maximum results returned: 100
            
            If the Range value specified in the request exceeds the default range value, a Status value of 12 is returned to indicate that the maximum range has been exceeded.
            In the Search command response, the Total property indicates an estimate of the total number of entries that matched the Query value.
            Search results are stored in a search folder on the server. 
            This way, when a client comes back with the same query but a new row range, rows are pulled from the result set that is currently stored in the search folder. 
            The entire result set does not have to be rebuilt.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.UserName">
            <summary>
            Specifies the user account used to search the document from the document library. 
            The UserName value can be up to 100 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.Password">
            <summary>
            Specifies the password for the given UserName. 
            The value of the Password has a maximum length of 100 characters.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.DeepTraversal">
            <summary>
            Indicates that the client wants the server to search all subfolders for the folders that are specified in the query.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.RebuildResults">
            <summary>
            Forces the server to rebuild the search folder (2) that corresponds to a given query.
            The search results (that is, the result set) are stored in a search folder on the server. 
            This way, when a client comes back with the same query but a new row range, rows are pulled from the result set that is currently stored in the search folder. 
            The entire result set does not have to be rebuilt.
            The search folder remains unchanged until the client does one of the following to update the result set:
              - Sends a Search request, specifying a new query. In this case, the search folder is automatically rebuilt. 
                The RebuildResults node does not have to be included.
              - Sends a Search request that includes the RebuildResults node. In this case, the server is forced to rebuild the search folder.
            If a new item is added, the item does not appear in the result set until the result set is updated. 
            If an item is deleted, the server will filter the deleted item out of the result set.
            The client SHOULD send a new Search request with the given query and include the RebuildResults option every few days to ensure accurate results for that query.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchOptions.Picture">
            <summary>
            Contains the data related to the photos request.
            The Picture is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchQuery">
            <summary>
            Specifies the keywords to use for matching the entries in the store that is being searched.
            The value of the Query is used as a prefix-string matching pattern, and returns entries that match the beginning of the string. 
            For example, searching for "John" would match "John Frum" or "Barry Johnson", but would not match "James Littlejohn".
            All nonempty text properties in the GAL that are indexed by using ANR are compared with the Query element value. 
            Search comparisons are performed by using case-insensitive matching.
            For a Windows SharePoint Services document library search, this protocol supports queries of the following form: LinkId == value, 
            where value specifies the URL of the item or folder and LinkId indicates that the value is to be compared to the link ID property.
            For mailbox search, the query syntax is as follows:
                - Folders can be specified in the following ways:
                    Specified ID
                    Specified folder and subfolders
                    All email folders, including Draft, Inbox and subfolders, Outbox, and Sent Items
                - The basic keyword query can be composed of the following:
                    The basic operator: And (section 2.2.3.10) 
                    A dateTime filter specified by using the GreaterThan (section 2.2.3.78) and LessThan elements (section 2.2.3.87)
                    FreeText elements (section 2.2.3.73) that contain keywords
            The basic keyword query is executed against all indexed properties.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchQuery.And">
            <summary>
            Specifies the keywords to use for matching the entries in the store that is being searched.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchQuery.EqualTo">
            <summary>
            Specifies a property and a value that are compared for a "Equal To" condition during a search.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest">
            <summary>
            Contains search request information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest.Store">
            <summary>
            Specify the location, name, and options for the search.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequestStore">
            <summary>
            Specify the name, query and options for the search.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequestStore.Name">
            <summary>
            Contains infarmation that specify the location, for the operations.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequestStore.Query">
            <summary>
            Specifies the keywords to use for matching the entries in the store that is being searched.
            The value of the Query is used as a prefix-string matching pattern, and returns entries that match the beginning of the string. 
            For example, searching for "John" would match "John Frum" or "Barry Johnson", but would not match "James Littlejohn".
            All nonempty text properties in the GAL that are indexed by using ANR are compared with the Query element value. 
            Search comparisons are performed by using case-insensitive matching.
            For a Windows SharePoint Services document library search, this protocol supports queries of the following form: LinkId == value, 
            where value specifies the URL of the item or folder and LinkId indicates that the value is to be compared to the link ID property.
            For mailbox search, the query syntax is as follows:
                - Folders can be specified in the following ways:
                    Specified ID
                    Specified folder and subfolders
                    All email folders, including Draft, Inbox and subfolders, Outbox, and Sent Items
                - The basic keyword query can be composed of the following:
                    The basic operator: And (section 2.2.3.10) 
                    A dateTime filter specified by using the GreaterThan (section 2.2.3.78) and LessThan elements (section 2.2.3.87)
                    FreeText elements (section 2.2.3.73) that contain keywords
            The basic keyword query is executed against all indexed properties.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequestStore.Options">
            <summary>
            Contains the search options.
            The UserName and Password can only be sent in the request after receiving a Status value of 14. 
            The server requires these credentials to access the requested resources. 
            The client MUST only send these over a secure or trusted connection, and only in response to a Status value of 14. 
            The supported options vary according to the store that is being searched. 
            The following table lists the valid options for each store.
                GAL: Range, UserName, Password, Picture
                Mailbox: Range, DeepTraversal, RebuildResults, BodyPreference, BodyPartPreference, RightsManagementSupport 
                DocumentLibrary: Range, UserName, Password
            The BodyPartPreference is only valid in Search command requests that include a ConversationId.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponse">
            <summary>
            Contains search response information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponse.Store">
            <summary>
            Contains the Status, Result, Range, and Total elements for the returned mailbox entries.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponseStore">
            <summary>
            Contains the Status, Result, Range, and Total elements for the returned mailbox entries.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponseStore.Status">
            <summary>
            Indicates the result of an operation. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponseStore.Range">
            <summary>
            Specifies the number of matching entries that are being returned.
            The format of the Range element value is in the form of a zero-based index specifier, formed with a zero, a hyphen, and another numeric value: "m-n." 
            The m indicates the lowest index of a zero-based array that would hold the items. 
            The n indicates the highest index of a zero-based array that would hold the items. 
            For example, a Range element value of 0‚Äì9 indicates 10 items, and 0‚Äì10 indicates 11 items. 
            A Range element value of 0‚Äì0 indicates 1 item.
            If Range is null, the default Range value for each Store type is used. 
            The following table identifies the default Range values and maximum results returned for each Store type:
            
            Mailbox
              - Default range value: 0-99
              - Maximum results returned: 100
            
            DocumentLibrary	       	                           
              - Default range value: 0-999
              - Maximum results returned: 1000
            
            GAL
              - Default range value: 0-99
              - Maximum results returned: 100
            
            If the Range value specified in the request exceeds the default range value, a Status value of 12 is returned to indicate that the maximum range has been exceeded.
            In the Search command response, the Total property indicates an estimate of the total number of entries that matched the Query value.
            Search results are stored in a search folder on the server. 
            This way, when a client comes back with the same query but a new row range, rows are pulled from the result set that is currently stored in the search folder. 
            The entire result set does not have to be rebuilt.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponseStore.Total">
            <summary>
            Provides an estimate of the total number of mailbox entries that matched the search Query value.
            The value of the Total does not always equal the number of entries that are returned. 
            To determine the number of entries that are returned by the Search command, use the Range value.
            The Total indicates the number of entries that are available. 
            In cases where all the results are returned in the response XML, the value of the Total element is one more than the end-index value that is provided in the Range element. 
            For example, if the Search command returns 15 entries, the value of the Range element is 0‚Äì14, while the value of the Total is 15.
            The Total is used by clients to determine whether more matching entries were found in the mailbox than have been returned by the Search command. 
            For example, a client might perform an initial search and specify a requested Range of 0‚Äì4 (return 5 entries maximum). 
            If the Total element indicates that there are actually 25 matching items, the client can then enable the user to retrieve the full results.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResponseStore.Result">
            <summary>
            The list of matched items.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResult">
            <summary>
            Container for an individual matching mailbox item.
            When the store that is being searched is the mailbox:
                - There is one Result element for each match that is found in the mailbox. 
                  If no matches are found, an empty Result element is present in the Store container element of the response XML.
                - Inside the Result element, the Properties element contains a list of requested properties for the mailbox item.
            When the store that is being searched is the document library:
                - The first result that is returned in the Search response is the metadata for the Root folder or item to which the LinkId value is pointing. 
                  The client can choose to ignore this entry if it does not require it.
                - If the documentlibrary:LinkId element value in the request points to a folder, the metadata properties of the folder are returned as the first item, and the contents of the folder are returned as subsequent results. 
                  The Range applies to these results with no difference; for example, the index 0 would always be for the root item to which the link is pointing.
                - If the documentlibrary:LinkId element value in the request points to an item, only one result is returned: the metadata for the item.
                - Inside the Result element, the Properties element contains a list of requested properties for the mailbox item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResult.Class">
            <summary>
            Identifies the class of the item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResult.LongId">
            <summary>
            Specifies a unique identifier that is assigned by the server to each result set that is returned.
            The value of the LongId can be used as the long ID specified in the ItemOperations command request, the SmartReply command request, the SmartForward command request, or the MeetingResponse command request to reference the result set.
            The client MUST store the value of LongId as an opaque string of up to 256 characters.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResult.CollectionId">
            <summary>
            Specifies the folders in which the item was found.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResult.Properties">
            <summary>
            The Search command response Properties is a container for properties that apply to an individual entry that matches the Query element search string. 
            For example, the Properties element contains an element for each nonempty, text-valued GAL property that is attached to the matching GAL entry. 
            Only those properties that are attached to the specific GAL entry are returned; therefore different sets of properties can be returned in the response XML for different matching GAL entries.
            Each element in the Properties container is scoped to the appropriate namespace that is specified in the top-level Search element.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties">
            <summary>
            The Search command response Properties is a container for properties that apply to an individual entry that matches the Query element search string. 
            For example, the Properties element contains an element for each nonempty, text-valued GAL property that is attached to the matching GAL entry. 
            Only those properties that are attached to the specific GAL entry are returned; therefore different sets of properties can be returned in the response XML for different matching GAL entries.
            Each element in the Properties container is scoped to the appropriate namespace that is specified in the top-level Search element.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties.RightsManagementLicense">
            <summary>
            Contains the rights policy template settings for the template applied to the e-mail message being synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties.Body">
            <summary>
            Specifies a free-form, variable-length data field associated with a stored item on the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties.BodyPart">
            <summary>
            Specifies details about the message part of an e-mail in a response. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties.Picture">
            <summary>
            Contains the data related to the contact photos.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SearchResultProperties.DataContainer">
            <summary>
            Contains data elements from the content classes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo">
            <summary>
            Server settings in Autodiscover operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.Type">
            <summary>
            Specifies the server type
            The following are the valid values for the Type element:
                MobileSync ‚Äî Indicates that the URL that is returned by the URL element (section 2.2.3.172) can be accessed by clients.
                CertEnroll ‚Äî Indicates that the URL that is returned by the URL element can be accessed by clients to obtain a client certificate for Secure Sockets Layer (SSL) negotiation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.Url">
            <summary>
            Specifies a URL string that conveys the protocol, port, resource location, and other information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.Name">
            <summary>
            Specifies a URL if the Type element (section 2.2.3.170.1) value is set to "MobileSync".
            If the Type element value is "MobileSync", then the Name element specifies the URL that conveys the protocol. 
            If the Type element value is "CertEnroll", then the Name element value is NULL.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.ServerData">
            <summary>
            The ServerData specifies the template name for the client certificate. Optional.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.ServerType,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the ServerInfo class.
            </summary>
            <param name="type">Specifies the server type</param>
            <param name="url">Specifies a URL string that conveys the protocol, port, resource location, and other information.</param>
            <param name="name">Specifies a URL if the Type element (section 2.2.3.170.1) value is set to "MobileSync".</param>
            <param name="serverData">The ServerData specifies the template name for the client certificate.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerType">
            <summary>
            Specifies the server type
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerType.None">
            <summary>
            Not defined
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerType.MobileSync">
            <summary>
            Indicates that the URL that is returned by the URL element (section 2.2.3.172) can be accessed by clients.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ServerType.CertEnroll">
            <summary>
            Indicates that the URL that is returned by the URL element can be accessed by clients to obtain a client certificate for Secure Sockets Layer (SSL) negotiation.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest">
            <summary>
            The Settings command supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings command also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest.Oof">
            <summary>
            Specifies a request for retrieving and setting Out of Office (OOF) information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest.DevicePassword">
            <summary>
            Specifies the request to set recovery password of the client device by the server.
            To clear an existing recovery password, the client MUST send an empty Password.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest.GetUserInformation">
            <summary>
            Requests a list of a user's email addresses from the server. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest.GetRightsManagementInformation">
            <summary>
            Requests a rights management information from the server. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest.DeviceInformation">
            <summary>
            Request that is used for sending the client device's properties to the server. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse">
            <summary>
            Specifies a response with Out of Office (OOF) settings and list of the user's accounts.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse.Oof">
            <summary>
            Specifies a class for retrieving and setting Out of Office (OOF) information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse.DeviceInformationStatus">
            <summary>
            Indicates the result of the DeviceInformation setup request
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse.DevicePasswordStatus">
            <summary>
            Indicates the result of the DevicePassword setup request
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse.UserInformation">
            <summary>
            Contains status of the request and a list of a user‚Äôs account information (email addresses).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsResponse.RightsManagementInformation">
            <summary>
            Contains rights management information settings retrieved from the server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SignedSMIMEAlgorithm">
            <summary>
            Specifies the algorithm used when signing S/MIME messages.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.SignedSMIMEAlgorithm.SHA1">
            <summary>
            Uses SHA1 algorithm.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.SignedSMIMEAlgorithm.MD5">
            <summary>
            Uses MD5 algorithm.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest">
            <summary>
            Contains smart request information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.Source">
            <summary>
            Contains information about the source message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.ClientId">
            <summary>
            Specifies the client's unique message ID (MID).
            The ClientId value can be up to 40 characters in length and MUST be unique for each message, 
            as the server will use the ClientId value to identify duplicate messages. 
            The ClientId value can be a simple counter incremented for each new message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.AccountId">
            <summary>
            Identifies the account from which an email is sent.
            If the AccountId is null, the server sends the email using the account identified by the settings:PrimarySmtpAddress returned in the Settings command response.
            If AccountId is included in the request, the value MUST equal one of the settings:AccountId element values included in the Settings command response.
            The server MUST validate that the AccountId element value provided is valid for sending email. 
            A Status value of 166 is returned if the AccountId element value is not valid. 
            A Status element value of 167 is returned if the account does not support sending email.
            Note  The server sends the email using the account specified by the AccountId, and not the account specified by the From.
            The AccountId element is not supported when the protocol version is 12.1 or 14.0. 
            Exchange 2007 returns Status value 103 if the AccountId element is included in a SendMail command request, a SmartForward command request, or a SmartReply command request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.SaveInSentItems">
            <summary>
            Specifies whether a copy of the message will be stored in the Sent Items folder. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.ReplaceMime">
            <summary>
            Specifies whether the client is sending the entire message. 
            When the ReplaceMime is TRUE, the server MUST not include the body or attachments of the original message being forwarded. 
            When the ReplaceMime is FALSE, the client MUST append the body of the original message as attachments to the outgoing message. 
            The client can use this property to indicate whether the message was edited inline, or whether the message had reply/forward text prepended to the source message. 
            If the ReplaceMime is TRUE, the message was edited.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest.Mime">
            <summary>
            Contains the MIME-encoded message.
            The 