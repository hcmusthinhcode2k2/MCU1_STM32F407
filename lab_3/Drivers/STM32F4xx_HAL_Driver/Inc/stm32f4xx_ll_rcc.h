     <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequestSource">
            <summary>
            Contains information about the source message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequestSource.FolderId">
            <summary>
            Specifies the folder ID for the source message, which is returned in the FolderSync command. 
            If the FolderId is present, the ItemId MUST also be present. 
            The FolderId value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequestSource.ItemId">
            <summary>
            Specifies the item ID for the source message, which is returned in the Sync command. 
            If the ItemId is present, the FolderId MUST also be present if the message being forwarded or replied to is stored in a folder other than the Inbox folder. 
            The ItemId element value can be up to 64 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequestSource.LongId">
            <summary>
            Specifies the long ID for the source message, which is returned in the Search command. 
            If the LongId is present, the FolderId, ItemId, and InstanceId are not present. 
            The LongId value can be up to 256 characters in length.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequestSource.InstanceId">
            <summary>
            Specifies the instance of a recurrence for the source item. 
            If the InstanceId is present, both the FolderId and ItemId SHOULD be present.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SMIMEEncryptionAlgorithmNegotiation">
            <summary>
            Controls the negotiation of the encryption algorithm.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.SMIMEEncryptionAlgorithmNegotiation.DoNotNegotiate">
            <summary>
            Do not negotiate.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.SMIMEEncryptionAlgorithmNegotiation.NegotiateStrong">
            <summary>
            Negotiate a strong algorithm.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.SMIMEEncryptionAlgorithmNegotiation.NegotiateAny">
            <summary>
            Negotiate any algorithm.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Status">
            <summary>
            Indicates the result of an operation. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetStatus(System.Int32)">
            <summary>
            Gets status by code.
            </summary>
            <param name="statusCode">Contains status code</param>
            <returns>Returns status specified by code.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetStatus(Aspose.Email.Clients.ActiveSync.TransportLayer.CommandCodes,System.String)">
            <summary>
            Gets status by code.
            </summary>
            <param name="commandCode">Specifies ActiveSync command code.</param>
            <param name="statusCode">Contains status code</param>
            <returns>Returns status specified by code.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetStatus(Aspose.Email.Clients.ActiveSync.TransportLayer.CommandCodes,System.Int32)">
            <summary>
            Gets status by code.
            </summary>
            <param name="commandCode">Specifies ActiveSync command code.</param>
            <param name="statusCode">Contains status code</param>
            <returns>Returns status specified by code.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetStatus(Aspose.Email.Clients.ActiveSync.TransportLayer.CommandCodes,System.String,System.Int32)">
            <summary>
            Gets status by code.
            </summary>
            <param name="commandCode">Specifies ActiveSync command code.</param>
            <param name="statusCode">Contains status code</param>
            <param name="subCategory">Specifies subcategory for status</param>
            <returns>Returns status specified by code.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetStatus(Aspose.Email.Clients.ActiveSync.TransportLayer.CommandCodes,System.Int32,System.Int32)">
            <summary>
            Gets status by code.
            </summary>
            <param name="commandCode">Specifies ActiveSync command code.</param>
            <param name="statusCode">Contains status code</param>
            <param name="subCategory">Specifies subcategory for status</param>
            <returns>Returns status specified by code.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.op_Implicit(Aspose.Email.Clients.ActiveSync.TransportLayer.Status)~System.Int32">
            <summary>
            Converts status to int value
            </summary>
            <param name="status">Object to convert.</param>
            <returns>Returns status code value.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.op_Equality(Aspose.Email.Clients.ActiveSync.TransportLayer.Status,Aspose.Email.Clients.ActiveSync.TransportLayer.Status)">
            <summary>
            The inequality operator (==) returns true if its operands are equal, false otherwise. 
            </summary>
            <param name="status1">First object to compare</param>
            <param name="status2">Second object to compare</param>
            <returns>true if the first status is equal to the second status; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.op_Inequality(Aspose.Email.Clients.ActiveSync.TransportLayer.Status,Aspose.Email.Clients.ActiveSync.TransportLayer.Status)">
            <summary>
            The inequality operator (!=) returns false if its operands are equal, true otherwise. 
            </summary>
            <param name="status1">First object to compare</param>
            <param name="status2">Second object to compare</param>
            <returns>true if the first status is not equal to the second status; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.Status)">
            <summary>
            Initializes a new instance of the Status class.
            </summary>
            <param name="status">Object of status to copy</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.#ctor(System.String)">
            <summary>
            Initializes a new instance of the Status class.
            Status code is initialized with 0 value.
            </summary>
            <param name="description">Contains status description</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.#ctor(System.Int32,System.String)">
            <summary>
            Initializes a new instance of the Status class.
            </summary>
            <param name="statusCode">Contains status code</param>
            <param name="description">Contains status description</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.GetHashCode">
            <summary>
            Serves as a hash function for a particular type.
            </summary>
            <returns>A hash code for the current Object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.Equals(Aspose.Email.Clients.ActiveSync.TransportLayer.Status)">
            <summary>
            Determines whether the specified object is equal to the current object.
            </summary>
            <param name="other">The object to compare with the current object.</param>
            <returns>true if the specified object is equal to the current object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Status.Equals(System.Object)">
            <summary>
            Determines whether the specified object is equal to the current object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified object is equal to the current object; otherwise, false.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.StoreType">
            <summary>
            Contains infarmation that specify the location, for the operations.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.StoreType.Mailbox">
            <summary>
            The client specifies "Mailbox" when it intends to search the store.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.StoreType.DocumentLibrary">
            <summary>
            The client specifies "DocumentLibrary" when it intends to search a Windows SharePoint Services or UNC library.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.StoreType.GAL">
            <summary>
            The client specifies "GAL" when it intends to search the Global Address List.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddClientOperation">
            <summary>
            Creates a new object in a collection on the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddClientOperation.ApplicationData">
            <summary>
            ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddClientOperation.ServerId">
            <summary>
            Represents a unique identifier that is assigned by the server to each object that can be synchronized. 
            Used in server responses only.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddResponse">
            <summary>
            Serves to indicate that a new object has to be created in a collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddResponse.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddResponse.ClientId">
            <summary>
            Contains a unique identifier that is generated by the client to temporarily identify a new object that is being created by using the Add element. 
            The client includes the ClientId element in the Add element request that it sends to the server. 
            The server response contains an Add element that contains the original client ID and a new server ID that was assigned for the object, which replaces the client ID as the permanent object identifier.
            The ClientId element is a unique identifier that consists of up to 64 digits and letters. The client generates this ID. 
            The value only has to be unique for the device during the duration of the Sync request that adds the object to the server. 
            The client stores the client IDs until the synchronization session is completed successfully, to make recovery easier if the synchronization process fails.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddServerOperation">
            <summary>
            Creates a new object in a collection on the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddServerOperation.ApplicationData">
            <summary>
            ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddServerOperation.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncAddServerOperation.ClientId">
            <summary>
            Contains a unique identifier that is generated by the client to temporarily identify a new object that is being created by using the Add element. 
            The client includes the ClientId element in the Add element request that it sends to the server. 
            The server response contains an Add element that contains the original client ID and a new server ID that was assigned for the object, which replaces the client ID as the permanent object identifier.
            The ClientId element is a unique identifier that consists of up to 64 digits and letters. The client generates this ID. 
            The value only has to be unique for the device during the duration of the Sync request that adds the object to the server. 
            The client stores the client IDs until the synchronization session is completed successfully, to make recovery easier if the synchronization process fails.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation">
            <summary>
            Contains properties of an existing object on the client device that were modified. 
            The changed object is identified by its ServerId element.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation.#ctor">
            <summary>
            Initializes a new instance of the SyncChangeClientOperation class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation.#ctor(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer,Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass)">
            <summary>
            Initializes a new instance of the SyncChangeClientOperation class.
            </summary>
            <param name="serverId">Represents a unique identifier that is assigned by the server to each object that can be synchronized.  </param>
            <param name="applicationData">ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. </param>
            <param name="aClass">Identifies the class of the item being added to the collection.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation.ServerId">
            <summary>
            Represents a unique identifier that is assigned by the server to each object that can be synchronized.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation.ApplicationData">
            <summary>
            ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeClientOperation.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            Used in server responses only.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeResponse">
            <summary>
            Serves to Indicate that an object has been modified.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeResponse.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeServerOperation">
            <summary>
            Contains properties of an existing object on the the server that were modified. 
            The changed object is identified by its ServerId element.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeServerOperation.#ctor">
            <summary>
            Initializes a new instance of the SyncChangeServerOperation class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeServerOperation.#ctor(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer)">
            <summary>
            Initializes a new instance of the SyncChangeServerOperation class.
            </summary>
            <param name="serverId">Represents a unique identifier that is assigned by the server to each object that can be synchronized.  </param>
            <param name="applicationData">ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. </param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeServerOperation.ServerId">
            <summary>
            Represents a unique identifier that is assigned by the server to each object that can be synchronized.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncChangeServerOperation.ApplicationData">
            <summary>
            ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest">
            <summary>
            Class contains commands and options that apply to a particular collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.SyncKey">
            <summary>
            SyncKey value is used by the server to mark the synchronization state of a collection.
            A synchronization key of value 0 (zero) initializes the synchronization state on the server and causes a full synchronization of the collection. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.CollectionId">
            <summary>
            Specifies the server ID of the folder to be synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.Supported">
            <summary>
            Elements of the Contact class and the Calendar class that are not ghosted can be included as child elements of the Supported element. 
            For details about the use of ghosted properties, see section 2.2.3.154.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.DeletesAsMoves">
            <summary>
            Requests that indicates that any deleted items SHOULD be moved to the Deleted Items folder.
            If the DeletesAsMoves element is set to false, the deletion is permanent. 
            If the client wants to permanently delete items, the request MUST include the DeletesAsMoves element with a value of FALSE. 
            A value of TRUE, which is the default, indicates that any deleted items are moved to the Deleted Items folder. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.GetChanges">
            <summary>
            Requests that the server include in its response any pending changes to the collection that is specified by the ServerId element (section 2.2.3.151.6). 
            If there have been changes since the last synchronization, the server response includes a Commands element (section 2.2.3.32) 
            that contains additions, deletions, and changes.
            If the client does not want the server changes returned, the request MUST include the GetChanges element with a value of FALSE. 
            A value of TRUE indicates that the client wants the server changes to be returned.  A value of TRUE is assumed when the GetChanges element is empty. 
            When the GetChanges element is not present in the request, the behavior depends on the value of the SyncKey element, as specified in section 2.2.3.166.4. 
            If the SyncKey element has a value of 0, then the request is handled as if the GetChanges element were set to FALSE.
            If the SyncKey element has a non-zero value, then the request is handled as if the GetChanges element were set to TRUE. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.WindowSize">
            <summary>
            Specifies a maximum number of changed items in a collection or a request that SHOULD be included in the synchronization response.
            If the WindowSize is not defined, the server behaves as if a WindowSize element with a value of 100 were submitted. 
            The server interprets the value 0 (zero) and values above 512 as 512.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.ConversationMode">
            <summary>
            Specifies whether to include items that are included within the conversation modality within the results of the Sync response.
            Setting the ConversationMode element value to TRUE results in retrieving all emails that match the conversations received within the date filter specified. 
            However, although the body of the emails outside of that time based filter will not be retrieved, 
            the text previews will be retrieved if the previews were requested.Setting the ConversationMode element value to FALSE 
            in a Sync request results in the synchronization of items that meet the criteria of the FilterType element (section 2.2.3.64) value. 
            Setting the ConversationMode element value to TRUE expands the result set to also include any items with identical 
            email2:ConversationId ([MS-ASEMAIL] section 2.2.2.14) values to those in the FilterType result set. 
            The ConversationMode element value has no impact on items outside the collection specified by the CollectionId element (section 2.2.3.30.5); 
            the result set is always limited to items in the specified collection. 
            The ConversationMode element value only limits or expands the results determined by the FilterType element value.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.Options">
            <summary>
            Specifies options that control certain aspects of how the synchronization is performed. Number allowed 0...2.
            Synchronization options enable the client to specify truncation and content settings. 
            These settings are encapsulated within a airsyncbase:BodyPreference child element, as specified in [MS-ASAIRS] section 2.2.2.7. 
            Because synchronization options are specified on a collection, the client can specify a unique airsyncbase:BodyPreference element value for each collection that it is being synchronized.
            For more details about the airsyncbase:BodyPreference element, see [MS-ASAIRS] section 2.2.2.7.
            The server preserves the Options block across requests, using a concept referred to as "sticky options". 
            If the Options block is not included in a request, the previous Options block is used. 
            Whenever the client specifies new options by including an Options block in the request, the server MUST replace the original Options block with the new Options block.
            If two Options elements are included in a single Sync command request, one of the Options elements MUST specify the synchronization options for the SMS class, while the other Options element specifies the options for the default class of the given folder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionRequest.Commands">
            <summary>
            Contains operations that apply to a collection. 
            Available operations are Add, Delete, Change, Fetch, and SoftDelete. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse">
            <summary>
             Class contains commands and options that apply to a Sync response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.SyncKey">
            <summary>
            SyncKey value is used by the server to mark the synchronization state of a collection.
            A synchronization key of value 0 (zero) initializes the synchronization state on the server and causes a full synchronization of the collection. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.CollectionId">
            <summary>
            Specifies the server ID of the folder to be synchronized.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.Status">
            <summary>
             Indicates the status of the command operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.MoreAvailable">
            <summary>
            Indicates there are more changes than the number that are requested in the WindowSize element.
            In Exchange 2007, the server sends Sync response messages containing the MoreAvailable and between zero (0) and WindowSize schema changes when it encounters elements external to the protocol.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.Commands">
            <summary>
            Contains operations that apply to a collection. Available operations are Add, Delete, Change, SoftDelete.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.Responses">
            <summary>
            Contains responses to operations such as Add, Fetch, Change that are processed by the server. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCollectionResponse.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            Uses when the protocol version is 12.1 only.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsRequest">
            <summary>
            Contains operations that apply to a collection. Available operations are Add, Delete, Change, Fetch, and SoftDelete. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsRequest.Add">
            <summary>
            Contains the list of add operations.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsRequest.Delete">
            <summary>
            Contains the list of delete operations.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsRequest.Change">
            <summary>
            Contains the list of update operations.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsRequest.Fetch">
            <summary>
            Contains the list of fetch operations.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsResponse">
            <summary>
            Contains operations that apply to a collection. Available operations are Add, Delete, Change, Fetch, and SoftDelete. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsResponse.Add">
            <summary>
            Contains the list of responses to add operations.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsResponse.Delete">
            <summary>
            Contains the list of responses to delete operations.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsResponse.Change">
            <summary>
            Contains the list of responses to update operations.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncCommandsResponse.SoftDelete">
            <summary>
            Contains the list of responses to delete operations.  
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation">
            <summary>
            Deletes an object on the client device or the server. The object is identified by its ServerId.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.#ctor">
            <summary>
            Initializes a new instance of the SyncDeleteClientOperation class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.#ctor(System.String)">
            <summary>
            Initializes a new instance of the SyncDeleteClientOperation class.
            </summary>
            <param name="serverId">Represents a unique identifier that is assigned by the server to each object that can be synchronized. </param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.#ctor(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass)">
            <summary>
            Initializes a new instance of the SyncDeleteClientOperation class.
            </summary>
            <param name="serverId">Represents a unique identifier that is assigned by the server to each object that can be synchronized. </param>
            <param name="aClass">Identifies the class of the item being added to the collection.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.op_Implicit(System.String)~Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation">
            <summary>
            Converts server id to SyncDeleteClientOperation object
            </summary>
            <param name="serverId">Represents a unique identifier that is assigned by the server to each object that can be synchronized. </param>
            <returns>Returns instance of the SyncDeleteClientOperation class</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.Class">
            <summary>
            Identifies the class of the item being added to the collection.
            Used in server responses only.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncDeleteClientOperation.ServerId">
            <summary>
            Represents a unique identifier that is assigned by the server to each object that can be synchronized.  
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncFetchResponse">
            <summary>
             Requests the application data of an item that was truncated in a synchronization response from the server. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncFetchResponse.ApplicationData">
            <summary>
            ApplicationData contains data for a particular object, such as a contact, email message, calendar appointment, or task item. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationResponse">
            <summary>
            Base abstract class for Sync operation responses
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationResponse.ServerId">
            <summary>
            Represents a unique identifier that is assigned by the server to each object that can be synchronized.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationResponse.Status">
            <summary>
            Indicates the result of the operation.
            Used in server responses only.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationsResponse">
            <summary>
            Contains responses to operations such as Add, Fetch, Change that are processed by the server. 
            The response contains a status code and other information, depending on the operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationsResponse.Add">
            <summary>
            List of objects that indicates that a new object has to be created in a collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationsResponse.Change">
            <summary>
            List of objects that indicates that a object has to be modified in a collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOperationsResponse.Fetch">
            <summary>
            List of fetched objects
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions">
            <summary>
            Specifies options that control certain aspects of how the synchronization is performed.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.#ctor">
            <summary>
            Initializes a new instance of the SyncOptions class.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.Class">
            <summary>
            Specifies the class of the item being added to the collection.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.FilterType">
            <summary>
            Specifies an optional time window for the objects that are sent from the server to the client. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.MaxItems">
            <summary>
            Specifies the maximum number of recipients (that is, the top N most frequently used recipients) to keep synchronized from within the recipient information cache. 
            This element MUST only be included in a request when the value of the CollectionId element (section 2.2.3.30.5) maps to the recipient information cache. 
            The value of the MaxItems element does not specify the maximum estimate of additions and deletions to make to the recipient information cache, 
            it only specifies the number of recipients to keep synchronized. 
            A complete replacement of each recipient would be double the number of MaxItems or items in the store, as each recipient update requires a deletion and an addition.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.Conflict">
            <summary>
            Specifies how to resolve the conflict that occurs when an object has been changed on both the client and the server. 
            The value specifies which object—the client object or the server object—to keep if there is a conflict.
            If value is not defined, the server object will replace the client object when a conflict occurs.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.MIMETruncation">
            <summary>
            Specifies whether the MIME data of the email item SHOULD be truncated when it is sent from the server to the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.MIMESupport">
            <summary>
            Enables MIME support for email items that are sent from the server to the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.RightsManagementSupport">
            <summary>
            Specifies how the server returns rights-managed email messages to the client.
            If the value of this element is TRUE, the server will decompress and decrypt rights-managed email messages before sending them to the client, as specified in section 3.2.4.3. 
            If the value is FALSE (0), the server will not decompress or decrypt rights-managed email messages before sending them to the client. 
            If the RightsManagementSupport element is not defined, a default value of FALSE is assumed.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.BodyPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncOptions.BodyPartPreference">
            <summary>
            Contains preference information related to the type and size of information that is returned from searching, synchronizing, or fetching a message part.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest">
            <summary>
            Contains Sync request parameters
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest.Wait">
            <summary>
            Specifies the number of minutes that the server SHOULD delay a response if no new items are added to the included folders.
            Valid values for the Wait are 1 through 59. 
            When the client requests a wait interval that is outside the acceptable range, the server will send a response that includes a Status value of 14 and a Limit.
            Either the Wait or the HeartbeatInterval can be included in a Sync command request, but not both. 
            If both are included, the server response will contain a Status value of 4.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest.HeartbeatInterval">
            <summary>
            Specifies the number of seconds that the server SHOULD delay a response if no new items are added to the included folders.
            Valid values for HeartbeatInterval are 60 through 3540 seconds (59 minutes). 
            When the client requests an interval that is outside the acceptable range, the server will send a response that includes a Status value of 14 and a Limit element.
            Either the HeartbeatInterval or the Wait can be included in a Sync command request, but not both. 
            If both elements are included, the server response will contain a Status value of 4.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest.WindowSize">
            <summary>
            Specifies a maximum number of changed items in a collection or a request that SHOULD be included in the synchronization response.
            The maximum value for the WindowSize is 512. However, if the WindowSize is set to 512, the server can send Sync response messages that contain less than 512 updates. 
            If the server does not send all the updates in a single message, the Sync response message contains the MoreAvailable, which indicates that there are additional updates on the server to be downloaded to the client.
            The WindowSize appears only in requests that are sent to the server from the client. 
            If the WindowSize is omitted, the server behaves as if a WindowSize element with a value of 100 were submitted. 
            The server interprets the value 0 (zero) and values above 512 as 512.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest.Partial">
            <summary>
            Indicates to the server that the client sent a partial list of collections, in which case the server obtains the rest of the collections from its cache.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest.Collections">
            <summary>
            Contains list of objects with commands and options that apply to a particular collection.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes">
            <summary>
            Specifies the type of the folder to be created.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedFolder">
            <summary>
            User-created folder (generic)
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedMailFolder">
            <summary>
            User-created mail folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedCalendarFolder">
            <summary>
            User-created Calendar folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedContactsFolder">
            <summary>
            User-created Contacts folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedTasksFolder">
            <summary>
            User-created Tasks folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedJournalFolder">
            <summary>
            User-created Journal folder
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes.UserCreatedNoteFolder">
            <summary>
            User-created Notes folder
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.UserInformationResponse">
            <summary>
            Contains status of the request and a list of a user’s account information (email addresses).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.UserInformationResponse.Status">
            <summary>
            Indicates the result of the ActiveSync command request. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.UserInformationResponse.SMTPAddresses">
            <summary>
            Specifies one of the user's email addresses.
            The element is only supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.UserInformationResponse.Accounts">
            <summary>
            Contains list of objects with users account information.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse">
            <summary>
            Indicates whether the meeting is being accepted, tentatively accepted, or declined.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse.Accepted">
            <summary>
            Meeting is accepted
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse.TentativelyAccepted">
            <summary>
            Meeting is tentatively accepted
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse.Declined">
            <summary>
            Meeting is declined
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ValueConverter">
            <summary>
            Class converts ActiveSync protocol version from string representation to enum and back.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ValueConverter.#cctor">
            <summary>
            Initializes a static members of ValueConverter class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ValueConverter.ToString(Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions)">
            <summary>
            Converts ActiveSync protocol version from enum to string representation.
            </summary>
            <param name="version">ActiveSync protocol version</param>
            <returns>Returns string representation of ActiveSync protocol version.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ValueConverter.ToASProtocolVersions(System.String)">
            <summary>
            Converts ActiveSync protocol version from string representation to enum.
            </summary>
            <param name="version">String representation of ActiveSync protocol version</param>
            <returns>Returns ActiveSync protocol version.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient">
            <summary>
            ActiveSync transport layer client version 12.1
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.#ctor(System.String,System.Net.NetworkCredential)">
            <summary>
            Initializes a new instance of the Ver_12_1.ActiveSyncTLClient class.
            </summary>
            <param name="uri">The URL of ActiveSync service</param>
            <param name="credential">Credentials for connecting to the server.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.HeartbeatInterval">
            <summary>
            The HeartbeatInterval element is a child element of the Ping element in Ping command requests and responses. 
            In Ping command requests, it specifies the length of time, in seconds, that the server SHOULD wait 
            before sending a response if no new items are added to the specified set of folders, as specified in section 3.1.5.6. 
            The HeartbeatInterval element is also returned by the server with a status code of 5 
            and specifies either the minimum or maximum interval 
            that is allowed when the client has requested a heartbeat interval that is outside the acceptable range.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.AirSyncKeys">
            <summary>
            Contains a values that is used by the server to mark the synchronization state of a every synchronized collection.
            Where dictionary key is server Id and dictionary value is SyncKey.  
            For GetItemEstimate and Sync commands.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FoldersSyncKey">
            <summary>
            Used by the server to track the current state of the client.
            For operations with folders only
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ResetAirSyncKey(System.String)">
            <summary>
            Reset SyncKey for GetItemEstimate and Sync operations for defined collection.
            </summary>
            <param name="serverId">Server Id of the collection.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ResetAirSyncKey">
            <summary>
            Reset SyncKeys for GetItemEstimate and Sync operations for all collections.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ResetFoldersSyncKey">
            <summary>
            Reset SyncKey for operations with folders
             </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderSync(System.Boolean)">
            <summary>
            The FolderSync synchronizes the collection hierarchy but does not synchronize the items in the collections themselves.
            </summary>
            <param name="resetSyncKey">Indicates if SyncKey for operations with folders has to be reseted or not.</param>
            <returns>Returns changes to the folder hierarchy.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderSync">
            <summary>
            The FolderSync synchronizes the collection hierarchy but does not synchronize the items in the collections themselves.
            </summary>
            <returns>Returns changes to the folder hierarchy.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderCreate(System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes)">
            <summary>
            The FolderCreate creates a new folder as a child folder of the specified parent folder.
            </summary>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the name of the folder that is shown to the user.</param>
            <param name="type">Specifies the type of the folder to be created.</param>
            <returns>Returns folder information of the created folder</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderDelete(System.String)">
            <summary>
            Deletes the collection with the matching identifier. 
            </summary>
            <param name="serverId">Identifies a folder on a server.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderUpdate(System.String,System.String,System.String)">
            <summary>
            The FolderUpdate command moves a folder from one location to another on the server. 
            The command is also used to rename a folder.
            </summary>
            <param name="serverId">Specifies the server ID of the folder on the server</param>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the user-friendly name of the folder.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.FolderUpdate(Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo)">
            <summary>
            The FolderUpdate command moves a folder from one location to another on the server. 
            The command is also used to rename a folder.
            </summary>
            <param name="folder">Folder information</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(System.Int32,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderClass)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter[])">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(System.Int32,Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter[])">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait before sending a response if no new items are added to the specified set of folders. 
            </param>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter})">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Ping(System.Int32,System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter})">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes that would require the client to resynchronize.
            </summary>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait before sending a response if no new items are added to the specified set of folders. 
            </param>
            <param name="pingParameters">Ping parameters</param>
            <returns>Array of folders where changes has been discovered</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.GetItemEstimate(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest)">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">ItemEstimate request parameters</param>
            <returns>Estimate on the requested folder</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.GetItemEstimate(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest[])">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">Array with ItemEstimate request parameters</param>
            <returns>Contains array with estimates on the requested folders</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.GetItemEstimate(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest})">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">Enumeration with ItemEstimate request parameters</param>
            <returns>Contains array with estimates on the requested folders</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SendMail(System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SendMail(System.String,System.Boolean)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Sync(Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            The Sync synchronizes changes in a collection between the client and the server.
            </summary>
            <param name="request">Sync request parameters</param>
            <returns>Returns list of responses for Sync operations such as Add, Fetch, Change </returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ItemOperations(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest)">
            <summary>
            The ItemOperations provides batched online handling of the Fetch, the EmptyFolderContents, and the Move operations.
            </summary>
            <param name="request">ItemOperations request.</param>
            <returns>Returns ItemOperations result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MoveItem(System.String,System.String,System.String)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MoveItems(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData})">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
            <param name="request">Enumeration of the items that has to be moved</param>
            <returns>Returns array of objects that describe the moved item.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MoveItems(Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData[])">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
            <param name="request">Array of the items that has to be moved</param>
            <returns>Returns array of objects that describe the moved item.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.GetAttachment(System.String)">
            <summary>
            The GetAttachment retrieves an email attachment from the server.
            The GetAttachment is not supported when the protocol version is 14.0 or 14.1. 
            Use the Fetch element of the ItemOperations command instead.
            </summary>
            <param name="attachmentName">The name of the attachment to be retrieved.</param>
            <returns>Returns attachment data</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse,System.String,System.String)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.UserResponse,System.String,System.String,System.String,System.String)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest[])">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="request">Array of MeetingResponseRequest objects</param>
            <returns>Returns array of MeetingResponseResult objects.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.MeetingResponse(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest})">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="request">Enumeration of MeetingResponseRequest objects</param>
            <returns>Returns array of MeetingResponseResult objects.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Settings(Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            The Settings supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
            <param name="request">Settings operation parameters</param>
            <returns>Returns settings operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ResolveRecipients(Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            The ResolveRecipients is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
            <param name="request">ResolveRecipients operation parameters</param>
            <returns>Returns ResolveRecipients operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Provision(Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
            <param name="request">Provision operation parameters</param>
            <returns>Returns Provision operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SmartReply(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartReply operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.SmartForward(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartForward operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.Search(Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            The Search is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
            <param name="request">Search operation parameters</param>
            <returns>Returns Search operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate)">
            <summary>
            The ValidateCert command is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificate">Certificate that has to be validated.</param>
            <param name="certificateChains">List of certificates to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Security.Cryptography.X509Certificates.X509Certificate,System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
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
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate})">
            <summary>
            The ValidateCert is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
            <param name="certificates">Enumeration of certificates that have to be validated.</param>
            <param name="certificateChains">Enumeration of certificates that have to be validated.</param>
            <returns>List of validation certificate statuses</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.ActiveSyncTLClient.ValidateCert(System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
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
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate">
            <summary>
            The FolderCreate command creates a new folder as a child folder of the specified parent folder.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the FolderCreate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.UserCreatedFolderTypes)">
            <summary>
            Initializes a new instance of the FolderCreate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="syncKey">Used by the server to track the current state of the client.</param>
            <param name="parentId">Specifies the server ID of the parent folder of the folder on the server</param>
            <param name="displayName">Specifies the name of the folder that is shown to the user.</param>
            <param name="type">Specifies the type of the folder to be created.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.SyncKey">
            <summary>
            Used by the server to track the current state of the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.ParentId">
            <summary>
            Specifies the server ID of the parent folder of the folder on the server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.DisplayName">
            <summary>
            Specifies the name of the folder that is shown to the user.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.Type">
            <summary>
            Specifies the type of the folder to be created.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.Result">
            <summary>
            Returns folder information of the created folder
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderCreate.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete">
            <summary>
            Deletes the collection with the matching identifier. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the FolderDelete class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,System.String)">
            <summary>
            Initializes a new instance of the FolderDelete class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="syncKey">Used by the server to track the current state of the client.</param>
            <param name="serverId">Identifies a folder on a server.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.SyncKey">
            <summary>
            Used by the server to track the current state of the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.ServerId">
            <summary>
            Identifies a folder on a server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderDelete.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync">
            <summary>
            The FolderSync command synchronizes the collection hierarchy but does not synchronize the items in the collections themselves.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the FolderSync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String)">
            <summary>
            Initializes a new instance of the FolderSync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="syncKey">Used by the server to track the current state of the client.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.SyncKey">
            <summary>
            Used by the server to track the current state of the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.Result">
            <summary>
            Contains changes to the folder hierarchy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderSync.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate">
            <summary>
            The FolderUpdate command moves a folder from one location to another on the server. 
            The command is also used to rename a folder.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the FolderUpdate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.FolderInfo)">
            <summary>
            Initializes a new instance of the FolderUpdate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="syncKey">Used by the server to track the current state of the client.</param>
            <param name="folder">Contains folder information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.SyncKey">
            <summary>
            Used by the server to track the current state of the client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.Folder">
            <summary>
            Contains folder information 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.FolderUpdate.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment">
            <summary>
            The GetAttachment command retrieves an email attachment from the server.
            The GetAttachment command is not supported when the protocol version is 14.0 or 14.1. 
            Use the Fetch element of the ItemOperations command instead.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the GetAttachment class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String)">
            <summary>
            Initializes a new instance of the GetAttachment class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="attachmentName">The name of the attachment to be retrieved.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment.AttachmentName">
            <summary>
            The name of the attachment to be retrieved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetAttachment.Result">
            <summary>
            Attachment data
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems">
            <summary>
            The MoveItems command moves an item or items from one folder on the server to another.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the MoveItems class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.MoveItemData[])">
            <summary>
            Initializes a new instance of the MoveItems class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="moveItemData">Contains information about moving items</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.MoveItemData">
            <summary>
            Contains information about moving items
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.Result">
            <summary>
            Contains information  that describe the moved items.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MoveItems.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping">
            <summary>
            The Ping command is used to request that the server monitor specified folders for changes 
            that would require the client to resynchronize. 
            The body of the request contains a list of folders on the server about 
            which the client is requesting notifications and an interval of time 
            that specifies how long the server SHOULD wait before responding if no new items are added to the specified folders. 
            If the Ping element (section 2.2.3.126) is specified in an XML request body, 
            either the HeartbeatInterval element or the Folders element (section 2.2.3.70), or both elements MUST be specified. 
            The Ping namespace is the primary namespace for this section. Elements referenced in this section 
            that are not defined in the Ping namespace use the namespace prefixes defined in section 2.2.1. 
            The following table lists the elements that are used in Ping command requests and responses.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.FOUND_STATUS">
            <summary>
            Defines the value of success status code when result is found
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.NOT_FOUND_STATUS">
            <summary>
            Defines the value of success status code when result is not found
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Ping class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Int32,Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter[])">
            <summary>
            Initializes a new instance of the Ping class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait 
            before sending a response if no new items are added to the specified set of folders, as specified in section 3.1.5.6. 
            The HeartbeatInterval element is also returned by the server with a status code of 5 
            and specifies either the minimum or maximum interval 
            that is allowed when the client has requested a heartbeat interval that is outside the acceptable range.
            </param>
            <param name="pingParameters"></param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Int32,System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.PingParameter})">
            <summary>
            Initializes a new instance of the Ping class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="heartbeatInterval">
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait 
            before sending a response if no new items are added to the specified set of folders, as specified in section 3.1.5.6. 
            The HeartbeatInterval element is also returned by the server with a status code of 5 
            and specifies either the minimum or maximum interval 
            that is allowed when the client has requested a heartbeat interval that is outside the acceptable range.
            </param>
            <param name="pingParameters"></param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.PingParameters">
            <summary>
            Contains enumeration of the ping command parameters
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.Result">
            <summary>
            Enumeration of folders where changes has been discovered
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.HeartbeatInterval">
            <summary>
            The HeartbeatInterval specifies the length of time, in seconds, that the server SHOULD wait 
            before sending a response if no new items are added to the specified set of folders, as specified in section 3.1.5.6. 
            The HeartbeatInterval element is also returned by the server with a status code of 5 
            and specifies either the minimum or maximum interval 
            that is allowed when the client has requested a heartbeat interval that is outside the acceptable range.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Ping.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains request information for provision command</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.Request">
            <summary>
            Contains request information for provision command
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.Result">
            <summary>
            Contains response information for provision command
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Provision.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients">
            <summary>
            The ResolveRecipients command is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains information to resolve recipients.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.Request">
            <summary>
            Contains information to resolve recipients.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.Result">
            <summary>
            Contains information as to whether the recipient was resolved. 
            If the recipient was resolved, the it also contains the type of recipient, the email address that the recipient resolved to, and, optionally, the S/MIME certificate for the recipient.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ResolveRecipients.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search">
            <summary>
            The Search command is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>        
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains search request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.Request">
            <summary>
            Contains search request information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.Result">
            <summary>
            Contains search response information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Search.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail">
            <summary>
            The SendMail command is used by clients to send MIME-formatted email messages to the server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Boolean,System.String)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="saveInSentItems">SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.SaveInSentItems">
            <summary>
            SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.MimeContent">
            <summary>
            Contains the MIME-encoded message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SendMail.ContentType">
            <summary>
            The Content-Type header indicates the format of the data sent in the request body. 
            When the request body for a command is in WBXML format, 
            the Content-Type header value MUST be set to either "application/vnd.ms-sync.wbxml", 
            or the shortened string "application/vnd.ms-sync". 
            For the Autodiscover command ([MS-ASCMD] section 2.2.2.1), which specifies an XML request body format, 
            the Content-Type header SHOULD be set to "text/xml" or MAY be set to "text/html". 
            If the request has no body, the Content-Type header SHOULD NOT be present.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings">
            <summary>
            The Settings command supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings command also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Specifies a request for retrieving and setting Out of Office (OOF) information.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.Request">
            <summary>
            Specifies a request for retrieving and setting Out of Office (OOF) information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.Result">
            <summary>
            Specifies a response with Out of Office (OOF) settings and list of the user's accounts.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Settings.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartForward">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartForward.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply.Request">
            <summary>
            Contains smart request information
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.SmartReply.ContentType">
            <summary>
            The Content-Type header indicates the format of the data sent in the request body. 
            When the request body for a command is in WBXML format, 
            the Content-Type header value MUST be set to either "application/vnd.ms-sync.wbxml", 
            or the shortened string "application/vnd.ms-sync". 
            For the Autodiscover command ([MS-ASCMD] section 2.2.2.1), which specifies an XML request body format, 
            the Content-Type header SHOULD be set to "text/xml" or MAY be set to "text/html". 
            If the request has no body, the Content-Type header SHOULD NOT be present.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync">
            <summary>
            The Sync command synchronizes changes in a collection between the client and the server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains Sync request parameters</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.Request">
            <summary>
            Contains Sync request parameters
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.Result">
            <summary>
            Contains list of responses for Sync operations such as Add, Fetch, Change 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.Sync.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the GetItemEstimate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest})">
            <summary>
            Initializes a new instance of the GetItemEstimate class.
            </summary>
            <param name="client">Contains enumeration with ItemEstimate request parameters</param>
            <param name="request"></param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.Request">
            <summary>
            Contains enumeration with ItemEstimate request parameters
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.Result">
            <summary>
            Contains array with estimates on the requested folders
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.GetItemEstimate.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations">
            <summary>
            The ItemOperations command provides batched online handling of the Fetch (section 2.2.3.63.1), the EmptyFolderContents (section 2.2.3.55), and the Move (section 2.2.3.107.1) operations.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.SuccessStatus">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ItemOperations class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest)">
            <summary>
            Initializes a new instance of the ItemOperations class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains ItemOperations request.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.Request">
            <summary>
            Contains ItemOperations request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.Result">
            <summary>
            Contains ItemOperations result.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ItemOperations.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.SERVER_ERROR">
            <summary>
            Defines the value of error status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the MeetingResponse class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest[])">
            <summary>
            Initializes a new instance of the MeetingResponse class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Specifies the meeting request that is being responded to, the response to that meeting request, and the folder on the server that the meeting request is located in.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.Request">
            <summary>
            Specifies the meeting request that is being responded to, the response to that meeting request, and the folder on the server that the meeting request is located in.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.Result">
            <summary>
             Contains elements that are sent to the client in the response.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.MeetingResponse.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert">
            <summary>
            The ValidateCert command is used by the client to validate a certificate that has been received via an S/MIME mail.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ValidateCert class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Collections.Generic.IEnumerable{System.Security.Cryptography.X509Certificates.X509Certificate},System.Boolean)">
            <summary>
            Initializes a new instance of the ValidateCert class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="certificates">Contains the list of certificates to be validated.</param>
            <param name="certificateChains">Contains the list of certificates to be validated.</param>
            <param name="checkCrl">Specifies whether the server SHOULD ignore an unverifiable revocation status.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.CheckCRL">
            <summary>
            Specifies whether the server SHOULD ignore an unverifiable revocation status.
            The revocation status of a certificate cannot be verified when the certificate revocation lists (CRLs) cannot be retrieved.
            When the CheckCRL value is set to TRUE, the server MUST NOT ignore an unverifiable revocation status. 
            When the CheckCRL value is set to FALSE, the server SHOULD ignore an unverifiable revocation status. 
            The default value is FALSE.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.Certificates">
            <summary>
            Contains the list of certificates to be validated.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.CertificateChains">
            <summary>
            Contains the list of certificates to be validated.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_12_1.Commands.ValidateCert.Result">
            <summary>
            Indicates whether one or more certificates were successfully validated.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient">
            <summary>
            ActiveSync transport layer client version 14.0
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.#ctor(System.String,System.Net.NetworkCredential)">
            <summary>
            Initializes a new instance of the Ver_14_0.ActiveSyncTLClient class.
            </summary>
            <param name="uri">The URL of ActiveSync service</param>
            <param name="credential">Credentials for connecting to the server.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.Sync(Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            The Sync synchronizes changes in a collection between the client and the server.
            </summary>
            <param name="request">Sync request parameters</param>
            <returns>Returns list of responses for Sync operations such as Add, Fetch, Change </returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.GetItemEstimate(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest})">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
            <param name="request">Enumeration with ItemEstimate request parameters</param>
            <returns>Contains array with estimates on the requested folders</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.ItemOperations(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest)">
            <summary>
            The ItemOperations provides batched online handling of the Fetch, the EmptyFolderContents, and the Move operations.
            </summary>
            <param name="request">ItemOperations request.</param>
            <returns>Returns ItemOperations result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.GetAttachment(System.String)">
            <summary>
            The GetAttachment retrieves an email attachment from the server.
            The GetAttachment is not supported when the protocol version is 14.0 or 14.1. 
            Use the Fetch element of the ItemOperations command instead.
            </summary>
            <param name="attachmentName">The name of the attachment to be retrieved.</param>
            <returns>Returns attachment data</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.Settings(Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            The Settings supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
            <param name="request">Settings operation parameters</param>
            <returns>Returns settings operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.ResolveRecipients(Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            The ResolveRecipients is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
            <param name="request">ResolveRecipients operation parameters</param>
            <returns>Returns ResolveRecipients operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.Provision(Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
            <param name="request">Provision operation parameters</param>
            <returns>Returns Provision operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.SmartReply(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartReply operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.SmartForward(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartForward operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.ActiveSyncTLClient.Search(Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            The Search is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
            <param name="request">Search operation parameters</param>
            <returns>Returns Search operation result</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.GetItemEstimate">
            <summary>
            The GetItemEstimate command gets an estimate of the number of items in a collection or folder on the server that have to be synchronized.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.GetItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the GetItemEstimate class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.GetItemEstimate.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.Collections.Generic.IEnumerable{Aspose.Email.Clients.ActiveSync.TransportLayer.ItemEstimateRequest})">
            <summary>
            Initializes a new instance of the GetItemEstimate class.
            </summary>
            <param name="client">Contains enumeration with ItemEstimate request parameters</param>
            <param name="request"></param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ItemOperations">
            <summary>
            The ItemOperations command provides batched online handling of the Fetch (section 2.2.3.63.1), the EmptyFolderContents (section 2.2.3.55), and the Move (section 2.2.3.107.1) operations.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ItemOperations.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ItemOperations class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ItemOperations.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperationsRequest)">
            <summary>
            Initializes a new instance of the ItemOperations class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains ItemOperations request.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Provision">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains request information for provision command</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ResolveRecipients">
            <summary>
            The ResolveRecipients command is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains information to resolve recipients.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Search">
            <summary>
            The Search command is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains search request information</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail">
            <summary>
            The SendMail command is used by clients to send MIME-formatted email messages to the server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,System.Boolean,System.String,System.String)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="clientId">Specifies the client's unique message ID (MID).</param>
            <param name="saveInSentItems">SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail.TemplateId">
            <summary>
            Contains a string that identifies the rights policy template.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail.ClientId">
            <summary>
            Specifies the client's unique message ID (MID).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SendMail.ContentType">
            <summary>
            The Content-Type header indicates the format of the data sent in the request body. 
            When the request body for a command is in WBXML format, 
            the Content-Type header value MUST be set to either "application/vnd.ms-sync.wbxml", 
            or the shortened string "application/vnd.ms-sync". 
            For the Autodiscover command ([MS-ASCMD] section 2.2.2.1), which specifies an XML request body format, 
            the Content-Type header SHOULD be set to "text/xml" or MAY be set to "text/html". 
            If the request has no body, the Content-Type header SHOULD NOT be present.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Settings">
            <summary>
            The Settings command supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings command also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Specifies a request for retrieving and setting Out of Office (OOF) information.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartForward">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartForward.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartReply">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.SmartReply.ContentType">
            <summary>
            The Content-Type header indicates the format of the data sent in the request body. 
            When the request body for a command is in WBXML format, 
            the Content-Type header value MUST be set to either "application/vnd.ms-sync.wbxml", 
            or the shortened string "application/vnd.ms-sync". 
            For the Autodiscover command ([MS-ASCMD] section 2.2.2.1), which specifies an XML request body format, 
            the Content-Type header SHOULD be set to "text/xml" or MAY be set to "text/html". 
            If the request has no body, the Content-Type header SHOULD NOT be present.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Sync">
            <summary>
            The Sync command synchronizes changes in a collection between the client and the server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_0.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains Sync request parameters</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient">
            <summary>
            ActiveSync transport layer client version 14.1
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.#ctor(System.String,System.Net.NetworkCredential)">
            <summary>
            Initializes a new instance of the Ver_14_1.ActiveSyncTLClient class.
            </summary>
            <param name="uri">The URL of ActiveSync service</param>
            <param name="credential">Credentials for connecting to the server.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.SendMail(System.String,System.Boolean,System.String,System.String)">
            <summary>
            The SendMail is used by clients to send MIME-formatted email messages to the server.
            </summary>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="saveInSentItems">Specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
            <returns>Returns the client's unique message ID (MID).</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.Sync(Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            The Sync synchronizes changes in a collection between the client and the server.
            </summary>
            <param name="request">Sync request parameters</param>
            <returns>Returns list of responses for Sync operations such as Add, Fetch, Change </returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.MeetingResponse(Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest[])">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
            <param name="request">Array of MeetingResponseRequest objects</param>
            <returns>Returns array of MeetingResponseResult objects.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.Settings(Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            The Settings supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
            <param name="request">Settings operation parameters</param>
            <returns>Returns settings operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.ResolveRecipients(Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            The ResolveRecipients is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
            <param name="request">ResolveRecipients operation parameters</param>
            <returns>Returns ResolveRecipients operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.Provision(Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
            <param name="request">Provision operation parameters</param>
            <returns>Returns Provision operation result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.SmartReply(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartReply operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.SmartForward(Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
            <param name="request">SmartForward operation parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.ActiveSyncTLClient.Search(Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            The Search is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
            <param name="request">Search operation parameters</param>
            <returns>Returns Search operation result</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.MeetingResponse">
            <summary>
            Accepts, tentatively accepts, or declines a meeting request in the user's Inbox folder or Calendar folder.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.MeetingResponse.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the MeetingResponse class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.MeetingResponse.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.MeetingResponseRequest[])">
            <summary>
            Initializes a new instance of the MeetingResponse class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Specifies the meeting request that is being responded to, the response to that meeting request, and the folder on the server that the meeting request is located in.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Provision">
            <summary>
            The Provision command enables client devices to request from the server the security policy settings that the administrator sets, 
            such as the minimum personal identification number (PIN) password length requirement.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Provision.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ProvisionRequest)">
            <summary>
            Initializes a new instance of the Provision class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains request information for provision command</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.ResolveRecipients">
            <summary>
            The ResolveRecipients command is used to resolve a list of supplied recipients, to retrieve their free/busy information, and optionally, to retrieve their S/MIME certificates so that clients can send encrypted S/MIME email messages.
            Retrieval of free/busy information using the Availability element in the ResolveRecipients command is not supported when the protocol version is 12.1.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.ResolveRecipients.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.ResolveRecipientsRequest)">
            <summary>
            Initializes a new instance of the ResolveRecipients class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains information to resolve recipients.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Search">
            <summary>
            The Search command is used to find entries in an address book, mailbox, or document library (UNC or Windows SharePoint Services).
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Search.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SearchRequest)">
            <summary>
            Initializes a new instance of the Search class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains search request information</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SendMail">
            <summary>
            The SendMail command is used by clients to send MIME-formatted email messages to the server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,System.Boolean,System.String,System.String)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="clientId">Specifies the client's unique message ID (MID).</param>
            <param name="saveInSentItems">SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SendMail.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String,System.Boolean,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the SendMail class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="clientId">Specifies the client's unique message ID (MID).</param>
            <param name="saveInSentItems">SaveInSentItems element specifies whether a copy of the message will be stored in the Sent Items folder.</param>
            <param name="accountId">Identifies the account from which an email is sent.</param>
            <param name="mimeContent">Contains the MIME-encoded message.</param>
            <param name="templateId">Contains a string that identifies the rights policy template.</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SendMail.AccountId">
            <summary>
            Identifies the account from which an email is sent.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Settings">
            <summary>
            The Settings command supports get and set operations on global properties and Out of Office (OOF) settings for the user. 
            The Settings command also sends device information to the server, implements the device password/personal identification number (PIN) recovery, and retrieves a list of the user's email addresses.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Settings.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SettingsRequest)">
            <summary>
            Initializes a new instance of the Settings class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Specifies a request for retrieving and setting Out of Office (OOF) information.</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartForward">
            <summary>
            The SmartForward command is used by clients to forward messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartForward.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartForward class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartForward.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartReply">
            <summary>
            The SmartReply command is used by clients to reply to messages without retrieving the full, original message from the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.SmartReply.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SmartRequest)">
            <summary>
            Initializes a new instance of the SmartReply class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains smart request information</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Sync">
            <summary>
            The Sync command synchronizes changes in a collection between the client and the server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Ver_14_1.Commands.Sync.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,Aspose.Email.Clients.ActiveSync.TransportLayer.SyncRequest)">
            <summary>
            Initializes a new instance of the Sync class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="request">Contains Sync request parameters</param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter">
            <summary>
            Class converts XML to WBXML representation and back.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.#ctor">
            <summary>
            Initializes a new instance of the XMLConverter class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.#ctor(System.String)">
            <summary>
            Initializes a new instance of the XMLConverter class.
            </summary>
            <param name="strXML">XML value to convert.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.#ctor(System.Byte[])">
            <summary>
            Initializes a new instance of the XMLConverter class.
            </summary>
            <param name="byteWBXML">WBXML value to convert.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.LoadXml(System.String)">
            <summary>
            Loads data to convert.
            </summary>
            <param name="strXML">XML value to convert.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.GetXml">
            <summary>
            Gets data converted to XML.
            </summary>
            <returns>Returns data converted to XML.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.LoadBytes(System.Byte[])">
            <summary>
            Loads data to convert.
            </summary>
            <param name="byteWBXML">WBXML value to convert.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.XMLConverter.GetBytes">
            <summary>
            Gets data converted to WBXML.
            </summary>
            <returns>Returns data converted to WBXML.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.IConnection">
            <summary>
            IConnectionAdapter allows to manage connection to a server.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.PipeliningMode">
            <summary>
            Defines how mail client supports the pipelining
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.PipeliningMode.Auto">
            <summary>
            Client enables pipelining mode in case if server declares that pipelining is supported
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.PipeliningMode.Enabled">
            <summary>
            Pipelining mode is enabled.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.PipeliningMode.Disabled">
            <summary>
            Pipelining mode is disabled.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.PipeliningStatus">
            <summary>
            Defines pipelining status for mail client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PipeliningStatus.SupportedByServer">
            <summary>
            Gets value that indicates if pipelining mode is supported by a server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PipeliningStatus.ClientMode">
            <summary>
            Gets or sets a value that defines how mail client supports the pipelining
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PipeliningStatus.PipeliningEnabled">
            <summary>
            Gets a value that defines if pipelining mode is enabled.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.PipeliningStatus.op_Implicit(System.Boolean)~Aspose.Email.Clients.PipeliningStatus">
            <summary>
            Converts boolean value to <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object
            </summary>
            <param name="mode">true if pipelining has to be used, otherwise false</param>
            <returns>Returns <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object </returns>
        </member>
        <member name="M:Aspose.Email.Clients.PipeliningStatus.op_Implicit(Aspose.Email.Clients.PipeliningMode)~Aspose.Email.Clients.PipeliningStatus">
            <summary>
            Converts <see cref="T:Aspose.Email.Clients.PipeliningMode"/> value to <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object 
            </summary>
            <param name="mode"><see cref="T:Aspose.Email.Clients.PipeliningMode"/> value for conversion</param>
            <returns>Returns <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object </returns>
        </member>
        <member name="M:Aspose.Email.Clients.PipeliningStatus.op_Implicit(Aspose.Email.Clients.PipeliningStatus)~System.Boolean">
            <summary>
            Converts <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object to boolean value
            </summary>
            <param name="status"><see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object for conversion</param>
            <returns>Returns true if pipelining is used, otherwise returns false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.PipeliningStatus.op_Implicit(Aspose.Email.Clients.PipeliningStatus)~Aspose.Email.Clients.PipeliningMode">
            <summary>
            Converts <see cref="T:Aspose.Email.Clients.PipeliningStatus"/> object 
            </summary>
            <param name="status"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Clients.PipeliningStatus.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.TokenProvider">
            <summary>
            Class TokenProvider allows to retrieve access token for mail services.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.TokenProvider.Outlook">
            <summary>
            Provides an instance of the TokenProvider for Outlook mail server
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.Outlook.GetInstance(System.String,System.String,System.String)">
            <summary>
            Gets an instance of the TokenProvider for Outlook mail server
            </summary>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <returns>Returns an instance of the OutlookTokenProvider for defined parameters.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.TokenProvider.Google">
            <summary>
            Provides an instance of the TokenProvider for Google mail server
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.Google.GetInstance(System.String,System.String,System.String)">
            <summary>
            Gets an instance of the TokenProvider for Google mail server
            </summary>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <returns>Returns an instance of the OutlookTokenProvider for defined parameters.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.GetInstance(System.String,System.String,System.String,System.String)">
            <summary>
            Gets an instance of the OutlookTokenProvider for defined parameters.
            </summary>
            <param name="requestUrl">The url to obtain access token.</param>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <returns>Returns an instance of the OutlookTokenProvider for defined parameters.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.#ctor(System.String,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.TokenProvider"/> class
            </summary>
            <param name="requestUrl">The url to obtain access token.</param>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.#ctor(System.String,System.String,System.String,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.TokenProvider"/> class
            </summary>
            <param name="requestUrl">The url to obtain access token.</param>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <param name="login">login for basic authorization </param>
            <param name="password">password for basic authorization </param>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.#ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.KeyValuePair{System.String,System.String}[])">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.TokenProvider"/> class
            </summary>
            <param name="requestUrl">The url to obtain access token.</param>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <param name="login">login for basic authorization </param>
            <param name="password">password for basic authorization </param>
            <param name="extraParameters"></param>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.#ctor(System.String,System.String,System.String,System.String,System.Collections.Generic.KeyValuePair{System.String,System.String}[])">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.TokenProvider"/> class
            </summary>
            <param name="requestUrl">The url to obtain access token.</param>
            <param name="clientId">The client ID obtained from the Microsoft account Developer Center during application registration.</param>
            <param name="clientSecret">The client secret obtained during application registration.</param>
            <param name="refreshToken">OAuth 2.0 refresh token</param>
            <param name="extraParameters"></param>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.Dispose">
            <summary>
            Performs releasing resources.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.UseBasicAuthorization">
            <summary>
            Gets or sets value which indicates whether basic authorization is used
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.Login">
            <summary>
            Gets or sets login for basic authorization 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.Password">
            <summary>
            Gets or sets password for basic authorization 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.RequestUrl">
            <summary>
            The url to obtain access token.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.ExtraParameters">
            <summary>
            Gets extra parameters for request
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.ClientId">
            <summary>
            The client ID obtained during application registration.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.ClientSecret">
            <summary>
            The client secret obtained during application registration.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.TokenProvider.RefreshToken">
            <summary>
            OAuth 2.0 refresh token
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.GetAccessToken">
            <summary>
            Gets oAuth access token.
            If token exists and its expiration date is not expired returns current token, otherwise requests new token from a server.
            </summary>
            <returns>Returns oAuth access token</returns>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.GetAccessToken(System.Boolean)">
            <summary>
            Gets oAuth access token. 
            </summary>
            <param name="ignoreExistingToken">
            If ignoreExistingToken is true, requests new token from a server. Otherwise behaviour is depended on whether token exists or not.
            If token exists and its expiration date is not expired returns current token, otherwise requests new token from a server.
            </param>
            <returns>Returns oAuth access token</returns>
        </member>
        <member name="M:Aspose.Email.Clients.TokenProvider.getAccessToken">
            <summary>
            Gets oAuth access token. 
            </summary>
            <returns>Returns oAuth access token</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ITokenProvider">
            <summary>
            Defines interface allowing to retrieve access token.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ITokenProvider.GetAccessToken">
            <summary>
            Gets oAuth access token.
            If token exists and its expiration date is not expired returns current token, otherwise requests new token from a server.
            </summary>
            <returns>Returns oAuth access token</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ITokenProvider.GetAccessToken(System.Boolean)">
            <summary>
            Gets oAuth access token. 
            </summary>
            <param name="ignoreExistingToken">
            If ignoreExistingToken is true, requests new token from a server. Otherwise behaviour is depended on whether token exists or not.
            If token exists and its expiration date is not expired returns current token, otherwise requests new token from a server.
            </param>
            <returns>Returns oAuth access token</returns>
        </member>
        <member name="T:Aspose.Email.Clients.OAuthToken">
            <summary>
            Contains OAuth token data such like token value, token type, expiration date.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthToken"/> class
            </summary>
            <param name="token">Refresh token value</param>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.#ctor(System.String,System.DateTime)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthToken"/> class
            </summary>
            <param name="token">Access token value</param>
            <param name="expirationDate">Expiration date of the token.</param>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.#ctor(System.String,Aspose.Email.Clients.TokenType,System.DateTime)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthToken"/> class
            </summary>
            <param name="token">Token value</param>
            <param name="tokenType">OAuth token type</param>
            <param name="expirationDate">Expiration date of the token.</param>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthToken.TokenType">
            <summary>
            Gets OAuth token type
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthToken.Token">
            <summary>
            Gets token value
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthToken.ExpirationDate">
            <summary>
            Gets expiration date of the token.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthToken.Expired">
            <summary>
            Indicates whether token is expired
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.Equals(System.Object)">
            <summary>
            Determines whether the specified object is equal to the current object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true  if the specified object is equal to the current object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.GetHashCode">
            <summary>
            Serves as a hash function for a particular type.
            </summary>
            <returns>A hash code for the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthToken.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.TokenType">
            <summary>
            Defines OAuth token types
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.TokenType.AccessToken">
            <summary>
            Access token grants access to an API.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.TokenType.RefreshToken">
            <summary>
            Refresh token allows to obtain new access tokens.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.SecurityOptions">
            <summary>
            Security mode for a mail client
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SecurityOptions.None">
            <summary>
            Connection is not secured.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SecurityOptions.SSLExplicit">
            <summary>
            Uses the STARTTLS command to start SSL connection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SecurityOptions.SSLImplicit">
            <summary>
            Establishes a SSL connection first.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SecurityOptions.SSLAuto">
            <summary>
            Uses SSL implicit or SSL explicit mode automatically.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SecurityOptions.Auto">
            <summary>
            Auto selection mode
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ConnectionState">
            <summary>
            Describes the current state of the connection.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ConnectionState.Closed">
            <summary>
            The connection is closed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ConnectionState.Open">
            <summary>
            The connection is open.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ConnectionState.Broken">
            <summary>
            The connection is broken.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.CredentialsByHostClient">
            <summary>
            Represents the client that creates server connection by using the host credentials.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.connectionPoolSyncObj">
            <summary/>        
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.connectionPool">
            <summary/>        
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.password">
            <summary/>        
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.username">
            <summary/>        
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.accessToken">
            <summary/>        
        </member>
        <member name="F:Aspose.Email.Clients.CredentialsByHostClient.tokenProvider">
            <summary/>        
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host name.</param>
            <param name="port">The port number.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host name.</param>
            <param name="port">The port number.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host name.</param>
            <param name="port">The port number.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host name.</param>
            <param name="port">The port number.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,System.String,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host.</param>
            <param name="port">The port.</param>
            <param name="username">The username.</param>
            <param name="authInfo">A string representation of the user password or the access token.</param>
            <param name="useOAuth">Defines whether OAuth is used to login to the server</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,System.String,System.Boolean,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host.</param>
            <param name="port">The port.</param>
            <param name="username">The username.</param>
            <param name="authInfo">A string representation of the user password or the access token.</param>
            <param name="useOAuth">Defines whether OAuth is used to login to the server</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,Aspose.Email.Clients.ITokenProvider)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host.</param>
            <param name="port">The port.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.#ctor(System.String,System.Int32,System.String,Aspose.Email.Clients.ITokenProvider,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> class.
            </summary>
            <param name="host">The host.</param>
            <param name="port">The port.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
            <param name="securityOptions"></param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Initialize">
            <summary>
            Initializes a mail client.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.ResetLogSettings">
            <summary>
            Resets logging settings to default.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.LogFileName">
            <summary>
            Gets or sets log file name
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.UseDateInLogFileName">
            <summary>
            Gets or sets value which indicates if date has to be used in log file name.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Logger">
            <summary>
            Diagnostic logger
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.UsePipelining">
            <summary>
            Gets or sets object which indicates whether the pipelining mode is enabled.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Host">
            <summary>
            Gets or sets the host name.
            </summary>
            <value>The host name.</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.ConnectionPool">
            <summary>
            Gets or sets connection pool for the client
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.DefaultPort">
            <summary>
            Gets default port for client
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Port">
            <summary>
            Gets or sets the port.
            </summary>
            <value>The port number.</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.SecurityOptions">
            <summary>
            Security mode for a mail client
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.UseAuthentication">
            <summary>
            Indicates whether authentication is used.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.ConnectionCheckupPeriod">
            <summary>
            Period of connection checking up in milliseconds.
            Default value is 5 min.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.UseDefaultCredentials">
            <summary>
            Gets or sets a Boolean value that controls whether the DefaultCredentials are sent with requests.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.SocksProxy">
            <summary>
            Gets or sets SOCKS proxy for the client
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Proxy">
            <summary>
            Gets or sets proxy for the client
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.ConnectionTimeout">
            <summary>
            Gets or sets the connection timeout
            Please note:
            If connection consists of several server requests, for every request will assigned this timeout value.
            </summary>
            <value>The timeout in milliseconds</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Timeout">
            <summary>
            Gets or sets the timeout for mail operations (except connection operation, see ConnectionTimeout)
            Please note:
            If an operation consists of several server requests, for every request will assigned this timeout value.
            </summary>
            <value>The timeout in milliseconds</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Password">
            <summary>
            Gets or sets the password.
            </summary>
            <value>The string that represents the password.</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.AccessToken">
            <summary>
            Gets or sets the access token.
            </summary>
            <value>The string that represents access token.</value>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.TokenProvider">
            <summary>
            Gets or sets TokenProvider allowing to retrieve access token.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.Username">
            <summary>
            Gets or sets the username.
            </summary>
            <value>The username string.</value>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.CheckCredentials">
            
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.GetCapabilities">
            
        </member>
        <member name="P:Aspose.Email.Clients.CredentialsByHostClient.ConnectionState">
            <summary>
            Gets the current state of the connection.
            </summary>
        </member>
        <member name="E:Aspose.Email.Clients.CredentialsByHostClient.OnConnect">
            <summary>
            The OnConnect event occurs when the clent establishes connection.
            </summary>
        </member>
        <member name="E:Aspose.Email.Clients.CredentialsByHostClient.BindIPEndPoint">
            <summary>
            Associates a Socket with a local endpoint.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.CancelAsyncOperation(System.IAsyncResult)">
            <summary>
            Cancels asynchronous operation.
            </summary>
            <param name="asyncResult">Defines asynchronous operation to cancel.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Noop">
            <summary>
            'No operation' command
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Noop(Aspose.Email.Clients.Base.Connection)">
            <summary>
            'No operation' command
            </summary>
            <param name="connection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.CreateConnection">
            <summary>
            Creates new connection object for operations in current thread.
            Please note:
                New connection can not be created in thread where mail client has been instantiated.
                New connection can not be created when MaxConnectionsPerServer = 1. In this case max number of connections has to be increased.
                When all operations for current thread are finished, connection object must be disposed.
            </summary>
            <returns>Returns connection object</returns>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.ConnectionFinalize(System.Object,Aspose.Email.Clients.Base.ConnectionManagerEventArgs)">
            <summary>
            Performs finalization operation for specified connection
            </summary>
            <param name="sender">The source of the event.</param>
            <param name="args">An ConnectionManagerEventArgs that contains the event data.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.EndGroupOperation(System.IAsyncResult)">
            <summary>
            Waits for the pending asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Dispose">
            <summary>
            Finalizes all operations with a server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Dispose(System.Boolean)">
            <summary>
            Finalizes all operations with a server.
            </summary>
            <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        </member>
        <member name="M:Aspose.Email.Clients.CredentialsByHostClient.Finalize">
            <summary>
            Releases unmanaged resources and performs other cleanup operations before the
            <see cref="T:Aspose.Email.Clients.CredentialsByHostClient"/> is reclaimed by garbage collection.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.AddressType">
            <summary>
            Address type in connection request
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AddressType.IPv4Address">
            <summary>
            IPv4 address
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AddressType.DomainName">
            <summary>
             Domain name
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AddressType.IPv6Address">
            <summary>
            IPv6 address
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.V5SocksConnectionRequestCommand">
            <summary>
            SOCKS4 connection request command
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.V4SocksConnectionRequestCommand">
            <summary>
            SOCKS4 connection request command
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.RequestType">
            <summary>
            Connection request type
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.RequestType.EstablishTCPConnection">
            <summary>
            Establish a TCP/IP stream connection
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.RequestType.EstablishPortBinding">
            <summary>
            Establish a TCP/IP port binding
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.RequestType.AssociateUDPPort">
            <summary>
            Associate a UDP port
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.SocksAuthenticationMethods">
            <summary>
            The authentication methods supported by the SOCKS protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthenticationMethods.NoAuthentication">
            <summary>
            No authentication
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthenticationMethods.PlainText">
            <summary>
            Authenticates user with a user name and password.
            SOCKS5 server only
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.SocksAuthMethods">
            <summary>
            The authentication methods supported by the SOCKS protocol
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.NoAuthentication">
            <summary>
            No authentication
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.GSSAPI">
            <summary>
            GSSAPI is supported
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.PlainText">
            <summary>
            Authenticates user with a user name and password.
            SOCKS5 server only
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.ChallengeHandshake">
            <summary>
            Challenge-Handshake Authentication Protocol
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.ChallengeResponse">
            <summary>
            Challenge-Response Authentication Method
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.SecureSocketsLayer">
            <summary>
            Secure Sockets Layer
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.NDSAuthentication">
            <summary>
            NDS Authentication
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.MultiAuthentication">
            <summary>
            Multi-Authentication Framework
            Method is not supported in current implementation
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksAuthMethods.NoAcceptableMethods">
            <summary>
            No Acceptable Methods
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.V4SocksResponseStatuses">
            <summary>
            SOCKS 4/4a response statuses
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V4SocksResponseStatuses.NotSpecified">
            <summary>
            Not specified
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V4SocksResponseStatuses.Granted">
            <summary>
            Request granted
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V4SocksResponseStatuses.RejectedOrFailed">
            <summary>
            Request rejected or failed
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V4SocksResponseStatuses.IdentdFailed">
            <summary>
            Request failed because client is not running identd (or not reachable from the server)
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V4SocksResponseStatuses.UserIdNotConfirmed">
            <summary>
            Request failed because client's identd could not confirm the user ID string in the request
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.V5SocksResponseStatuses">
            <summary>
            Response statuses for connection request 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.NotSpecified">
            <summary>
            Not specified
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.Granted">
            <summary>
            Request granted
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.Failure">
            <summary>
            General failure
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.ConnectionNotAllowed">
            <summary>
            Connection not allowed by ruleset
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.NetworkUnreachable">
            <summary>
            Network unreachable
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.HostUnreachable">
            <summary>
            Host unreachable
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.ConnectionRefusedByDestinationHost">
            <summary>
            Connection refused by destination host
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.TTLExpired">
            <summary>
            TTL expired
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.NotSupported">
            <summary>
            Command not supported / protocol error
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.V5SocksResponseStatuses.AddressNotSupported">
            <summary>
            Address type not supported
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.SocksVersion">
            <summary>
            Versions of the SOCKS protocol 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksVersion.SocksV4">
            <summary>
            SOCKS4 and SOCKS4a version 
            SOCKS4a extends the SOCKS4 protocol to allow a client to specify a destination domain name rather than an IPv4 address; 
            this is useful when the client itself cannot resolve the destination host's domain name to an IP address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.SocksVersion.SocksV5">
            <summary>
            SOCKS5 version 
            The SOCKS5 protocol is defined in RFC 1928. It is an extension of the SOCKS4 protocol; 
            it offers more choices for authentication, and adds support for IPv6 and UDP, the latter of which can be used for DNS lookups. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.SocksProxy">
            <summary>
            SOCKS proxy client.
            Supported versions of the protocol are SOCKS4 and SOCKS5.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.SocksProxy.#ctor(System.String,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.SocksProxy"/> class to connect to SOCKS4 server without authentication.
            </summary>
            <param name="address">The domain name or IP address of the proxy</param>
            <param name="port">The port number of the proxy</param>
        </member>
        <member name="M:Aspose.Email.Clients.SocksProxy.#ctor(System.String,System.Int32,Aspose.Email.Clients.SocksVersion)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.SocksProxy"/> class to connect to SOCKS4 or SOCKS5 server without authentication.
            </summary>
            <param name="address">The domain name or IP address of the proxy</param>
            <param name="port">The port number of the proxy</param>
            <param name="version">Required SOCKS server version.</param>
        </member>
        <member name="M:Aspose.Email.Clients.SocksProxy.#ctor(System.String,System.Int32,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.SocksProxy"/> class to connect to SOCKS4 server without authentication.
            </summary>
            <param name="address">The domain name or IP address of the proxy</param>
            <param name="port">The port number of the proxy</param>
            <param name="userID">UserID for Socks4 Identification Protocol (RFC 1413)</param>
        </member>
        <member name="M:Aspose.Email.Clients.SocksProxy.#ctor(System.String,System.Int32,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.SocksProxy"/> class to connect to SOCKS5 server with defined username and password.
            </summary>
            <param name="address">The domain name or IP address of the proxy</param>
            <param name="port">The port number of the proxy</param>
            <param name="username">Username for authentication</param>
            <param name="password">Password for authentication</param>
        </member>
        <member name="P:Aspose.Email.Clients.SocksProxy.Version">
            <summary>
            Required SOCKS server version.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.SocksProxy.SupportedAuthenticationMethods">
            <summary>
            The supported authentication methods to connect to SOCKS server
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.SocksProxy.SetUpStream(System.IO.Stream,System.String,System.Int32)">
            <summary>
            Configures proxy-server to transport data to the target host.
            </summary>
            <param name="stream">Stream which is connected to the proxy-server.</param>
            <param name="address">The network address of the target host we want to contact</param>
            <param name="port">The port number of the target host we want to contact</param>
        </member>
        <member name="T:Aspose.Email.Clients.NetworkException">
            <summary>
            Thrown if there is a network connection failure.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.NetworkException.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.NetworkException"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.NetworkException.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.NetworkException"/> class.
            </summary>
            <param name="message">The error message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.NetworkException.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.NetworkException"/> class.
            </summary>
            <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo"/> that holds the serialized object data about the exception being thrown.</param>
            <param name="context">The <see cref="T:System.Runtime.Serialization.StreamingContext"/> that contains contextual information about the source or destination.</param>
            <exception cref="T:System.ArgumentNullException">
            The <paramref name="info"/> parameter is null.
            </exception>
            <exception cref="T:System.Runtime.Serialization.SerializationException">
            The class name is null or <see cref="P:System.Exception.HResult"/> is zero (0).
            </exception>
        </member>
        <member name="M:Aspose.Email.Clients.NetworkException.#ctor(System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.NetworkException"/> class.
            </summary>
            <param name="message">The error message.</param>
            <param name="inner">The inner exception.</param>
        </member>
        <member name="T:Aspose.Email.Common.CalendarObjectType">
            <summary>
            Defines representation of calendar object
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.DistributionListObjectType">
            <summary>
            Defines representation of distribution list object
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.NoteObjectType">
            <summary>
            Defines representation of note object
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TaskObjectType">
            <summary>
            Defines representation of task object
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor(Aspose.Email.Calendar.Appointment)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
            <param name="appointment">The appointment.</param>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor(Aspose.Email.Calendar.Appointment,Aspose.Email.Calendar.AppointmentMethodType,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
            <param name="appointment">The appointment.</param>
            <param name="method">The method.</param>
            <param name="seqId">The seq identifier.</param>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor(System.IO.Stream,Aspose.Email.Calendar.AppointmentLoadOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
            <param name="iCalendarStream">The i calendar stream.</param>
            <param name="options">The options.</param>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor(Aspose.Email.Calendar.Model.CalendarObject,Aspose.Email.Calendar.AppointmentLoadOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
            <param name="iCalendar">The i calendar.</param>
            <param name="options">The options.</param>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.#ctor(Aspose.Email.Calendar.Model.ComponentCollection,Aspose.Email.Calendar.Model.ComponentCollection,Aspose.Email.Calendar.AppointmentMethodType,System.Int32,Aspose.Email.Calendar.AppointmentLoadOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.CalendarConverter"/> class.
            </summary>
            <param name="zones">The zones.</param>
            <param name="events">The events.</param>
            <param name="method">The method.</param>
            <param name="eventIndex">Index of the event.</param>
            <param name="options">The options.</param>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.BuildRRule(Aspose.Email.Calendar.Recurrences.RecurrencePattern)">
            <summary>
            Builds the rrule.
            </summary>
            <param name="recurrencePattern">The recurrence pattern.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.ToICalendar">
            <summary>
            Performs calendar conversion operation.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.ToAppointment">
            <summary>
            Performs calendar conversion operation.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.CalendarConverter.ToMapiCalendar">
            <summary>
            Performs calendar conversion operation.
            </summary>
            <returns></returns>
        </member>
        <member name="F:Aspose.Email.Common.ContactConverter.tagTable">
            <summary>
            Contains pairs of (<see cref="T:Aspose.Email.Clients.Exchange.Dav.ExchangeStorePropertyName"/>, the corresponding tag).
            This table contains only properties of contact item. 
            Before using it for other items, make sure that this table contains the necessary properties
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#cctor">
            <summary>
            Initalizes static members of class <see cref="T:Aspose.Email.Common.ContactConverter"/>.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(System.Collections.Generic.IEnumerable{Aspose.Email.Clients.Exchange.Dav.ExchangeStoreProperty})">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="webDavProperties">The web dav properties.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(System.Xml.XmlDocument)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="googleXml">The google XML.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(Aspose.Email.PersonalInfo.Contact)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="contact">The contact.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(System.IO.Stream)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="vCardStream">The v card stream.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(Aspose.Email.PersonalInfo.VCard.VCardHeaderList)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="vCardHeaders">The v card headers.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(Aspose.Email.Mapi.MapiContact)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="mapiContact">The mapi contact.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.#ctor(Aspose.Email.Clients.Exchange.Dav.ExchangeGalContact)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.ContactConverter"/> class.
            </summary>
            <param name="galContact">The gal contact.</param>
            <exception cref="T:Aspose.Email.AsposeArgumentNullException"></exception>
        </member>
        <member name="M:Aspose.Email.Common.ContactConverter.tryAddToMapiPropertyCollection(Aspose.Email.Clients.Exchange.Dav.ExchangeStoreProperty,Aspose.Email.Mapi.MapiPropertyCollection)">
            <summary>
            Tries to convert this instance to <see cref="T:Aspose.Email.Mapi.MapiProperty"/>(or a few MapiProperties) and to add the result to the given <see cref="T:Aspose.Email.Mapi.MapiPropertyCollection"/>
            </summary>
            <param name="property">Exchange store property</param>
            <param name="collection">A destination collection of MapiProperties</param>
            <returns>True if property was successfully converted and added; otherwise, false</returns>
        </member>
        <member name="T:Aspose.Email.Common.Delegate.BeforeItemCallback">
            <summary>
            BeforeItemCallback is called before the next item is processed, the type of which depends on the task being performed.
            </summary>
            <param name="item">The item to be processed</param>
        </member>
        <member name="T:Aspose.Email.Common.Delegate.ItemCallbackArgs">
            <summary>
            ItemCallbackArgs contains item being processed.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Delegate.ItemCallbackArgs.#ctor(System.Object)">
            <summary>
            Initializes a new instance of the ItemCallbackArgs class with the specified item.
            </summary>
            <param name="item"></param>
        </member>
        <member name="P:Aspose.Email.Common.Delegate.ItemCallbackArgs.Item">
            <summary>
            The item being processed.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.Enumerator">
            <summary>
            Proxy class for IEnumerator
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Enumerator.enumerator">
            <summary/>
        </member>
        <member name="M:Aspose.Email.Common.Enumerator.#ctor(System.Collections.IEnumerator)">
            <summary>
            Initializes a new instance of the Enumerator class.
            </summary>
            <param name="iEnumerator">iEnumerator</param>
        </member>
        <member name="P:Aspose.Email.Common.Enumerator.Current">
            <summary>
            Gets the current element in the collection.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Enumerator.MoveNext">
            <summary>
            Advances the enumerator to the next element of the collection.
            </summary>
            <returns>
            true if the enumerator was successfully advanced to the next element; 
            false if the enumerator has passed the end of the collection.
            </returns>
        </member>
        <member name="M:Aspose.Email.Common.Enumerator.Reset">
            <summary>
            Sets the enumerator to its initial position, which is before the first element in the collection.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.Globalization.HeuristicEncodingDetector">
            <summary>
            This class does NOT try to detect arbitrary codepages/charsets, it really only
            aims to differentiate between some of the most common variants of Unicode
            encoding, and a "default" (western / ascii-based) encoding alternative provided
            by the caller.
                 
             - As there is no "Reliable" way to distinguish between UTF-8 (without BOM) and
            Windows-1252 (in .Net, also incorrectly called "ASCII") encodings, we use a
            heuristic - so the more of the file we can sample the better the guess.If you
            are going to read the whole file into memory at some point, then best to pass
                 in the whole byte byte array directly.Otherwise, decide how to trade off
            reliability against performance / memory usage.
                 
             - The UTF-8 detection heuristic only works for western text, as it relies on
            the presence of UTF-8 encoded accented and other characters found in the upper 
                 ranges of the Latin-1 and (particularly) Windows-1252 codepages.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.DetectEncoding(System.Byte[])">
            <summary>
            Detects the encoding.
            </summary>
            <param name="textData">The text data.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.DetectEncoding(System.Byte[],System.Boolean@)">
            <summary>
            Detects the encoding.
            </summary>
            <param name="textData">The text data.</param>
            <param name="hasBom">if set to <c>true</c> [has bom].</param>
            <returns></returns>
            <exception cref="T:System.ArgumentNullException">textData;The text data cannot be null</exception>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.DetectBomBytes(System.Byte[])">
            <summary>
            Detects the bom bytes.
            </summary>
            <param name="bomBytes">The bom bytes.</param>
            <returns></returns>
            <exception cref="T:System.ArgumentNullException">bomBytes;The byte array cannot be null</exception>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.DetectUnicodeInByteSampleByHeuristics(System.Byte[])">
            <summary>
            Detects the unicode in byte sample by heuristics.
            </summary>
            <param name="sampleBytes">The sample bytes.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.IsCommonUsasciiByte(System.Byte)">
            <summary>
            Determines whether [is common usascii byte] [the specified test byte].
            </summary>
            <param name="testByte">The test byte.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.HeuristicEncodingDetector.DetectSuspiciousUtf8SequenceLength(System.Byte[],System.Int64)">
            <summary>
            Detects the length of the suspicious UTF8 sequence.
            </summary>
            <param name="sampleBytes">The sample bytes.</param>
            <param name="currentPos">The current position.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.CharsetNotInstalledException.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)">
            <msonly/>
        </member>
        <member name="F:Aspose.Email.Common.Globalization.CodePageDetectData.index">
            <remarks>
            Warning: 65Kb data loaded from resource file
            </remarks>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.InvalidCharsetException.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)">
            <msonly/>
        </member>
        <member name="M:Aspose.Email.Common.Globalization.UnknownCultureException.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)">
            <msonly/>
        </member>
        <member name="M:Aspose.Email.Common.IO.ReadOnlyStringBuilderStream.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Common.IO.ReadOnlyStringBuilderStream.Seek(System.Int64,System.IO.SeekOrigin)">
            <summary>
            When overridden in a derived class, sets the position within the current stream.
            </summary>
            <param name="offset">A byte offset relative to the origin parameter.</param>
            <param name="origin">A value of type <see cref="T:System.IO.SeekOrigin"></see> indicating the reference point used to obtain the new position.</param>
            <returns>
            The new position within the current stream.
            </returns>
            <exception cref="T:System.IO.IOException">An I/O error occurs. </exception>
            <exception cref="T:System.NotSupportedException">The stream does not support seeking, such as if the stream is constructed from a pipe or console output. </exception>
            <exception cref="T:System.ObjectDisposedException">Methods were called after the stream was closed. </exception>
        </member>
        <member name="M:Aspose.Email.Common.IO.ReadOnlyStringBuilderStream.SetLength(System.Int64)">
            <summary>
            When overridden in a derived class, sets the length of the current stream.
            </summary>
            <param name="value">The desired length of the current stream in bytes.</param>
            <exception cref="T:System.NotSupportedException">The stream does not support both writing and seeking, such as if the stream is constructed from a pipe or console output. </exception>
            <exception cref="T:System.IO.IOException">An I/O error occurs. </exception>
            <exception cref="T:System.ObjectDisposedException">Methods were called after the stream was closed. </exception>
        </member>
        <member name="M:Aspose.Email.Common.IO.AsciiStringStream.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.MD5Managed">
            <summary>
            MD5Managed: A HashAlgorithm implementation that acts as a thin wrapper
            around a C# translation of the MD5 reference implementation. The C code
            has been translated as closely as possible so that most of the original
            structure remains and comparisons between the two are straightforward.
            </summary>
            <remarks>
            Derived from the RSA Data Security, Inc. MD5 Message-Digest Algorithm.
            
            Specification:
            RFC1321 - The MD5 Message-Digest Algorithm
            http://www.faqs.org/rfcs/rfc1321.html
            
            Original license:
            Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
            rights reserved.
            
            License to copy and use this software is granted provided that it
            is identified as the "RSA Data Security, Inc. MD5 Message-Digest
            Algorithm" in all material mentioning or referencing this software
            or this function.
            
            License is also granted to make and use derivative works provided
            that such works are identified as "derived from the RSA Data
            Security, Inc. MD5 Message-Digest Algorithm" in all material
            mentioning or referencing the derived work.
            
            RSA Data Security, Inc. makes no representations concerning either
            the merchantability of this software or the suitability of this
            software for any particular purpose. It is provided "as is"
            without express or implied warranty of any kind.
            
            These notices must be retained in any copies of any part of this
            documentation and/or software.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Common.MD5Managed.#ctor">
            <summary>
            Initializes a new instance.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.MD5Managed.Initialize">
            <summary>
            Initializes internal state.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.MD5Managed.InitializeVariables">
            <summary>
            Initializes variables.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.MD5Managed.HashCore(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Updates the hash code with the data provided.
            </summary>
            <param name="array">Data to hash.</param>
            <param name="ibStart">Start position.</param>
            <param name="cbSize">Number of bytes.</param>
        </member>
        <member name="M:Aspose.Email.Common.MD5Managed.HashFinal">
            <summary>
            Finalizes the hash code and returns it.
            </summary>
            <returns></returns>
        </member>
        <member name="P:Aspose.Email.Common.MD5Managed.Hash">
            <summary>
            Returns the hash as an array of bytes.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TaskConverter.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.TaskConverter"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TaskConverter.#ctor(Aspose.Email.Calendar.Task)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.TaskConverter"/> class.
            </summary>
            <param name="task">The task.</param>
        </member>
        <member name="M:Aspose.Email.Common.TaskConverter.#ctor(Aspose.Email.Calendar.Model.CalendarObject)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.TaskConverter"/> class.
            </summary>
            <param name="iCalendar">The i calendar.</param>
        </member>
        <member name="M:Aspose.Email.Common.TaskConverter.ToICalendar(Aspose.Email.Calendar.Model.Property.MethodProperty)">
            <summary>
            Performs task conversion operation.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TaskConverter.ToMapiTask">
            <summary>
            Performs task conversion operation.
            </summary>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Common.TEnumerator`1">
            <summary>
            Proxy class for IEnumerator
            </summary>
            <typeparam name="T"></typeparam>
        </member>
        <member name="M:Aspose.Email.Common.TEnumerator`1.#ctor(System.Collections.Generic.IEnumerator{`0})">
            <summary>
            Initializes a new instance of the TEnumerator class.
            </summary>
            <param name="enumerator">IEnumerator</param>
        </member>
        <member name="P:Aspose.Email.Common.TEnumerator`1.System#Collections#Generic#IEnumerator{T}#Current">
            <summary>
            Gets the element in the collection at the current position of the enumerator.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TEnumerator`1.Dispose">
            <summary>
            Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.HtmlToTextConverter.Convert(System.String)">
            <summary>
            Converts the given HTML to plain text and returns the result.
            </summary>
            <param name="html">HTML to be converted</param>
            <returns>Resulting plain text</returns>
        </member>
        <member name="T:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder">
            <summary>
            A StringBuilder class that helps eliminate excess whitespace.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder.Preformatted">
            <summary>
            Normally, extra whitespace characters are discarded.
            If this property is set to true, they are passed
            through unchanged.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder.Clear">
            <summary>
            Clears all current text.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder.Write(System.String)">
            <summary>
            Writes the given string to the output buffer.
            </summary>
            <param name="s"></param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder.Write(System.Char)">
            <summary>
            Writes the given character to the output buffer.
            </summary>
            <param name="c">Character to write</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.HtmlToTextConverter.TextBuilder.ToString">
            <summary>
            Returns the current output as a string.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.DestinationFlag.InBody">
            <summary>
            The corresponding fragment of original HTML SHOULD appear inside of a BODY HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.DestinationFlag.InHead">
            <summary>
            The corresponding fragment of original HTML SHOULD appear inside of a HEAD HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.DestinationFlag.InHtml">
            <summary>
            The corresponding fragment of original HTML SHOULD appear inside of an HTML HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.DestinationFlag.OutHtml">
            <summary>
            The corresponding fragment of original HTML SHOULD appear outside of an HTML HTML element.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter">
            <summary>
            RTF Extensions Algorithm Specification support.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.Encapsulate(System.String)">
            <summary>
            RTF Extensions Specification support
            </summary>
            <param name="htmlBody"></param>
            <returns>RTF Extensions Algorithm string</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.IsEqualTag(System.String,System.String)">
            <summary>
            Equal to tag1.ToUpper().TrimStart('&lt;').StartsWith(tag2.Trim('&lt;', '/', '&gt;')
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator"/> class.
            </summary>
            <param name="html">The HTML.</param>
        </member>
        <member name="P:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.Current">
            <summary>
            Gets the current item.
            </summary>
            <value>The current item.</value>
        </member>
        <member name="P:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.IsTag">
            <summary>
            Gets a value indicating whether this instance is tag.
            </summary>
            <value><c>true</c> if this instance is tag; otherwise, <c>false</c>.</value>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.Next">
            <summary>
            Move to the next item.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.FixMsoLevelText(System.String)">
            <summary>
            In some cases, bullet points are changed to question marks in Outlook list items.
            This fix replaces the "mso-level-text:?" string with "mso-level-text:\b7 string in MS Word styles definition. 
            </summary>
            <param name="data">The string data.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.RTFExtension.HtmlToRTFExtensionConverter.HtmlEncapsulator.SkipWhitespace">
            <summary>
            Skips the whitespace.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.OtherFlag.Undefined">
            <summary>
            Undefined
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.OtherFlag.InPar">
            <summary>
            The corresponding fragment of the original HTML SHOULD appear inside a paragraph HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.OtherFlag.Close">
            <summary>
            This is a closing tag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.OtherFlag.Mhtml">
            <summary>
            This group encapsulates MIME Encapsulation of Aggregate HTML Documents (MHTML); that is, an HTML tag with a rewritable URL parameter.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Text">
            <summary>
            This group encapsulates a text fragment rather than any HTML tags.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Html">
            <summary>
            This group encapsulates the  HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Head">
            <summary>
            This group encapsulates the HEAD HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Body">
            <summary>
            This group encapsulates the BODY HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.P">
            <summary>
            This group encapsulates the P HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.StartP">
            <summary>
            This group encapsulates an HTML tag that starts a paragraph other than the P HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.EndP">
            <summary>
            This group encapsulates an HTML tag that ends a paragraph other than the P HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Br">
            <summary>
            This group encapsulates the BR HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Pre">
            <summary>
            This group encapsulates the PRE HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Font">
            <summary>
            This group encapsulates the FONT HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Header">
            <summary>
            This group encapsulates heading HTML tags such as H1, H2, and so on.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Title">
            <summary>
            This group encapsulates the TITLE HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Plain">
            <summary>
            This group encapsulates the PLAIN HTML element.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Transform.RTFExtension.TagTypeFlag.Unk">
            <summary>
            This group encapsulates any other HTML tag.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.BufferString.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="F:Aspose.Email.Common.Transform.Converting.Format.FormatContainerType.Symbol">
            <summary>
            Specifies the SYMBOL format container
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Format.FormatOutput.EndSymbol(Aspose.Email.Common.Transform.Converting.Format.FormatNode,System.Int32)">
            <summary>
            Ends the SYMBOL element
            </summary>
            <param name="node">A <see cref="T:Aspose.Email.Common.Transform.Converting.Format.FormatNode"/> containing the SYMBOL data</param>
            <param name="nodeIndex">A node index</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Format.FormatOutput.StartSymbol(Aspose.Email.Common.Transform.Converting.Format.FormatNode,System.Int32)">
            <summary>
            Starts the SYMBOL element
            </summary>
            <param name="node">A <see cref="T:Aspose.Email.Common.Transform.Converting.Format.FormatNode"/> containing the SYMBOL data</param>
            <param name="nodeIndex">A node index</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Format.CProperty.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="F:Aspose.Email.Common.Transform.Converting.Format.PropertyId.Symbol">
            <summary>
            Represents the character of SYMBOL
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Format.CPropertyValue.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Format.RGBT.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlAttributeParts.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlFormatOutput.CompleteTag">
            <summary>
            WriteTagEnd if IsTagOpen
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlFormatOutput.EndSymbol(Aspose.Email.Common.Transform.Converting.Format.FormatNode,System.Int32)">
            <summary>
            Ends the SYMBOL element
            </summary>
            <param name="node">A <see cref="T:Aspose.Email.Common.Transform.Converting.Format.FormatNode"/> containing the SYMBOL data</param>
            <param name="nodeIndex">A node index</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlFormatOutput.StartSymbol(Aspose.Email.Common.Transform.Converting.Format.FormatNode,System.Int32)">
            <summary>
            Starts the SYMBOL element
            </summary>
            <param name="node">A <see cref="T:Aspose.Email.Common.Transform.Converting.Format.FormatNode"/> containing the SYMBOL data</param>
            <param name="nodeIndex">A node index</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlSupport.SkipWhitespaces(Aspose.Email.Common.Transform.Converting.BufferString,System.Int32)">
            <summary>
            Skip whitespaces
            </summary>
            <returns>last buffer position</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Html.HtmlSupport.SkipCommaAndWhitespaces(Aspose.Email.Common.Transform.Converting.BufferString,System.Int32)">
            <summary>
            Skip comma and whitespaces
            </summary>
            <returns>last buffer position</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Rtf.RtfFormatOutput.ResizeByContent(Aspose.Email.Common.Transform.Converting.Format.FormatNode,System.Int32@)">
            <summary>
            Increases the width of the node to the content size.
            </summary>
            <param name="node">Column</param>
            <param name="colWidth">Specified width</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Rtf.RtfToHtml.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.Transform.Converting.Rtf.RtfToHtml"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Rtf.RtfToHtml.#ctor(System.Text.Encoding)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.Transform.Converting.Rtf.RtfToHtml"/> class.
            </summary>
            <param name="encoding">The preferred HTML encoding.</param>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Rtf.RtfToTextConverter.Process(Aspose.Email.Common.Transform.Converting.Rtf.RtfKeyword)">
            <summary>
            Return true, if continue required
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.StringBuildSink.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.Converting.Text.TransformException.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)">
            <msonly/>
        </member>
        <member name="M:Aspose.Email.Common.Transform.TransformUtil.RtfToHtml(System.String,System.Text.Encoding)">
            <summary>
            Converts the RTF text to HTML text.
            </summary>
            <param name="text">The rtf text.</param>
            <param name="encoding">The preferred HTML encoding.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.TransformUtil.RtfToHtml(System.IO.Stream,System.Text.Encoding)">
            <summary>
            Converts the RTF text to HTML text.
            </summary>
            <param name="rtf">The rtf data stream.</param>
            <param name="encoding">The preferred HTML encoding.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.TransformUtil.EncapsulateHtml2Rtf(System.String)">
            <summary>
            RTF Extensions Specification support
            </summary>
            <param name="htmlBody"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Transform.TransformUtil.IsMacBinary(System.Byte[])">
            <summary>
            Check the mac binary header
            </summary>
            <param name="data"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.Utils.ArrayHelper.FillZero(System.IO.BinaryWriter,System.Int32)">
            <summary>
            Write <paramref name="count"/> zeros to the <paramref name="writer"/> stream
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Utils.ArrayHelper.FillZero(System.IO.Stream,System.Int32)">
            <summary>
            Write <paramref name="count"/> zeros to the <paramref name="stream"/> stream
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Utils.ArrayHelper.Combine(System.Collections.Generic.IList{System.Collections.Generic.IList{System.Byte}})">
            <summary>
            Combine the byte arrays to single byte array.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.ContactObjectType">
            <summary>
            Defines representation of contact object
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.CompressUtil">
            <summary>
            Compress/decompress data
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.CompressUtil.Element">
            <summary>
            File element
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.CompressUtil.Structure">
            <summary>
            Structure of archive 
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.CompressUtil.Compress(System.Collections.Generic.IEnumerable{System.String},System.String)">
            <summary>
            Compress list of files
            </summary>
            <param name="files">files</param>
            <param name="header">header of archive</param>
            <returns>compressed data</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.CompressUtil.Compress(Aspose.Email.Common.TimeZone.CompressUtil.Structure)">
            <summary>
            Compress data
            </summary>
            <param name="data">data</param>
            <returns>compressed data</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.CompressUtil.Decompress(System.IO.Stream,System.String)">
            <summary>
            Decompress data
            </summary>
            <param name="inputStream">Stream with compressed data</param>
            <param name="header">data header</param>
            <returns>decompressed data</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.CompressUtil.CopyStream(System.IO.Stream,System.IO.Stream)">
            <summary>
            copy one stream to another
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.CompressUtil.CopyStream(System.IO.Stream,System.IO.Stream,System.Int32)">
            <summary>
            copy Count bytes from one stream to another
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.Country">
            <summary>
            Represents a country. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Country.Name">
            <summary>
            Gets the name of country
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Country.Code">
            <summary>
            Gets the ISO 3166-1 code of country
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Country.ZoneNames">
            <summary>
            Gets the list of time zone name
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Country.AddTimeZoneDescription(System.String,System.String,System.String)">
            <summary>
            Add a new zone to the country
            </summary>
            <param name="tzname">Zone name</param>
            <param name="coordinates">Zone's coordinates</param>
            <param name="comment">Zone's comment</param>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Country.TimeZoneDescriptionses">
            <summary>
            Gets the time zone list of country
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.DateSegment">
            <summary>
            Rule "IN" + "ON" + "AT"
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.DateSegment.#ctor">
            <summary>
            Initializes a new instance of <see cref="T:Aspose.Email.Common.TimeZone.DateSegment"/>
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DateSegment.Day">
            <summary>
            ON
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DateSegment.Month">
            <summary>
            IN
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DateSegment.At">
            <summary>
            AT
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DateSegment.AtKind">
            <summary>
            Gets the type of date specified by the rule
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.DateSegment.ToUnspecifiedTime(System.Int32)">
            <summary>
            Gets a date unspecified time depending on the definition of the rule
            </summary>
            <param name="year">Year</param>
            <returns>Datetime representing the date of the rule</returns>
            <remarks>The date is of type DateTimeKind.Unspecified</remarks>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.DateSegment.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.DayKind">
            <summary>
            Define kind of day
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.DayKind.Value">
            <summary>
            Day of month. Exact day date.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.DayKind.Last">
            <summary>
             The last calendar month day of week specified by the value.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.DayKind.Greater">
            <summary>
            Day of Week Greater or Equal
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.DayKind.Less">
            <summary>
            Day of Week Less or Equal
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.DaySegment">
            <summary>
             Rule for "ON" field
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.DaySegment.#ctor(Aspose.Email.Common.TimeZone.DayKind,System.DayOfWeek,System.Int32)">
            <summary>
             create
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DaySegment.Kind">
            <summary>
             Kind of day
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DaySegment.DayOfMonth">
            <summary>
             Day
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.DaySegment.DayWeek">
            <summary>
             Day of week
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.DaySegment.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.LocalTimeZone">
            <summary>
             Get TimeZone.Local name
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.LocalTimeZone.Local">
            <summary>
             Gets a string that represents the local time zone name.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.Resources.TimeZoneResources">
            <summary>
             TZ data helper class
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Resources.TimeZoneResources.ReadFromResource(System.String)">
            <summary>
             Load the specisic resource
            </summary>
            <param name="resourceName"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Resources.TimeZoneResources.Decompress(System.IO.Stream)">
            <summary>
            </summary>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.Rule">
            <summary>
            RULE
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.Name">
            <summary>
            NAME
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.StandardOffset">
            <summary>
            SAVE
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.Letter">
            <summary>
            LETTER/S
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.LowerYear">
            <summary>
            FROM
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.HighYear">
            <summary>
            TO
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Rule.YearType">
            <summary>
            TYPE
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Rule.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.TimeKind">
            <summary>
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeKind.WallTime">
            <summary>
            Default. Wall clock time
            w : Wall
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeKind.StandardTime">
            <summary>
            Local standard time; winter time
            s : standard
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeKind.UniversalTime">
            <summary>
            UTC time
            g, u, z : Greenwich, Universal, Zulu
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.TimeZoneDescription">
            <summary>
            TimeZone description
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeZoneDescription.Coordinates">
            <summary>
            Latitude and longitude of the zone's principal location in ISO 6709 sign-degrees-minutes-seconds format
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeZoneDescription.ZoneName">
            <summary>
            Zone name 
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.TimeZoneDescription.Comment">
            <summary>
            Comments; present if and only if the country has multiple rows.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.TimeZoneInfo">
            <summary>
            Provide access to time zone
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.#cctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.TimeZone.TimeZoneInfo"/> class.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.TimeZoneInfo.Rules">
            <summary>
            Gets all the rules
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.TimeZoneInfo.Local">
            <summary>
            Gets the time zone of the current computer.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadResources">
            <summary>
            Load resources
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadTimeZones(System.IO.TextReader,System.String)">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadCountries(System.IO.TextReader)">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadZoneDescriptions(System.IO.TextReader)">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadwindowsMapping(System.IO.TextReader)">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.LoadwindowsTimesMapping(System.IO.TextReader)">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.BuildZone">
            <summary>
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetZoneNames">
            <summary>
            Gets the time zone name
            </summary>
            <returns><b>string[]</b> of time zone name.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetBackward">
            <summary>
            Gets the name of all links
            </summary>
            <returns>Array of links</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetCountryCode">
            <summary>
            Gets the country code.
            </summary>
            <returns><b>string[]</b> of country code.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetCountry(System.String)">
            <summary>
            Gets the country
            </summary>
            <param name="code">Country code</param>
            <returns>A <see cref="T:Aspose.Email.Common.TimeZone.Country"/> object that represent the country.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetZone(System.String)">
            <summary>
            Gets the <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/> that represents the time zone.
            </summary>
            <param name="zoneName">The time zone name, for sample "Europe/Paris"</param>
            <exception cref="T:System.ArgumentNullException">zoneName is null or empty.</exception>
            <returns>An <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/> object whose name is the value of the zoneName parameter, null otherwise</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.GetZones">
            <summary>
            Gets the list of <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/>.
            </summary>
            <returns>Array of <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/>.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.TimeZoneInfo.FindSystemTzTimeZoneById(System.String)">
            <summary>
            Retrieve a <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/> object from its windows identifier
            </summary>
            <param name="id">The windows time zone identifier.</param>
            <exception cref="T:System.ArgumentException">id is null or empty.</exception>
            <returns>An <see cref="F:Aspose.Email.Common.TimeZone.TimeZoneInfo.cZone"/> object whose windows identifier is the value of the id parameter, otherwise null.</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.Util">
            <summary>
            Utility code for TimeZones calculation
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.ParseLine(System.String,System.Int32)">
            <summary>
            Split line
            </summary>
            <param name="line">Line from TZ data</param>
            <param name="count">Max of parts</param>
            <returns>List of elements in line</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.ParseMonth(System.String)">
            <summary>
            Get month index
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.IsYearType(System.Int32,Aspose.Email.Common.TimeZone.YearType)">
            <summary>
            Check year type for specific year
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.IsAbbreviation(System.String,System.String)">
            <summary>
            Compare abbreviature and word
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.ParseRule(System.Collections.Generic.List{System.String})">
            <summary>
            Parse RULE
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.SetRuleDateValues(Aspose.Email.Common.TimeZone.DateSegment,System.String,System.String,System.String)">
            <summary>
            set rule fields
            </summary>
            <param name="rp">Rule</param>
            <param name="monthp">IN / UNTILMONTH</param>
            <param name="dayp">ON / UNTILDAY</param>
            <param name="timep">AT / UNTILTIME</param>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.ParseZone(System.Collections.Generic.List{System.String},Aspose.Email.Common.TimeZone.Zone@,System.Boolean)">
            <summary>
            Parse zone
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.GetWallClockTime(Aspose.Email.Common.TimeZone.DateSegment,System.Int32,System.TimeSpan,System.TimeSpan)">
            <summary>
            Gets a local date based on specified parameters
            </summary>
            <param name="rule"><see cref="T:Aspose.Email.Common.TimeZone.DateSegment"/>describing the time</param>
            <param name="year">Year</param>
            <param name="gmtOffset">Gmt offset in which the date is expressed</param>
            <param name="stdOffset">Standard offset in which the date is expressed</param>
            <returns><see cref="T:System.DateTime"/> local type corresponding to the specified parameters</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.GetUtcTime(Aspose.Email.Common.TimeZone.DateSegment,System.Int32,System.TimeSpan,System.TimeSpan)">
            <summary>
            Gets a UTC date according to the parameters specified
            </summary>
            <param name="rule"><see cref="T:Aspose.Email.Common.TimeZone.DateSegment"/> describing the time</param>
            <param name="year">year</param>
            <param name="gmtOffset">Gmt offset in which the date is expressed</param>
            <param name="stdOffset">Standard offset in which the date is expressed</param>
            <returns>UTC <see cref="T:System.DateTime"/> corresponding to the specified parameters</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.GetDateTime(Aspose.Email.Common.TimeZone.DateSegment,System.Int32,System.TimeSpan,System.TimeSpan,System.DateTimeKind)">
            <summary>
            Gets a date in the kind specified by the parameters specified
            </summary>
            <param name="rule"><see cref="T:Aspose.Email.Common.TimeZone.DateSegment"/> describing the time</param>
            <param name="year">year</param>
            <param name="gmtOffset">Gmt offset in which the date is expressed</param>
            <param name="stdOffset">Standard offset in which the date is expressed</param>
            <param name="dateTimeKind"><see cref="T:System.DateTimeKind"/> which express the date</param>
            <returns><see cref="T:System.DateTime"/> the kind specified corresponding to the specified parameters</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Util.GetDateTime(System.DateTime,System.TimeSpan,System.TimeSpan,System.DateTimeKind)">
            <summary>
            Gets a date in the kind specified by the parameters specified
            </summary>
            <param name="dateTime"><see cref="T:System.DateTime"/> describing the time</param>
            <param name="gmtOffset">Gmt offset in which the date is expressed</param>
            <param name="stdOffset">Standard offset in which the date is expressed</param>
            <param name="dateTimeKind"><see cref="T:System.DateTimeKind"/> which express the date</param>
            <returns><see cref="T:System.DateTime"/> the kind specified corresponding to the specified parameters</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.YearType">
            <summary>
            Defines the possible restrictions during the year
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.None">
            <summary>
            No constraints
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.Even">
            <summary>
            Even year
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.Odd">
            <summary>
            Odd year
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.Nonpres">
            <summary>
            The rule applies in years other than U.S. Presidential election years
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.Nonuspres">
            <summary>
            The rule applies in years other than U.S. Presidential election years
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.TimeZone.YearType.Uspres">
            <summary>
            The rule applies in U.S. Presidential election years
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.Zone">
            <summary>
            Represents a time zone.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Common.TimeZone.Zone"/> class.  
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.Id">
            <summary>
            Gets the time zone name.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.Filename">
            <summary>
            Gets the time zone filename.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.Coordinates">
            <summary>
            Gets the time zone coordinates.
            </summary>
            <remarks>Coordinates are latitude and longitude of the zone's principal location.</remarks>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.Comment">
            <summary>
            Gets the time zone comment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.LineNumber">
            <summary>
            Gets the the time zone line number in the file.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.ZoneDetails">
            <summary>
            Gets the time zone rules.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.DaylightName">
            <summary>
            Gets the name daylight of the timezone.
            </summary>
            <value>
            The name of the daylight.
            </value>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.StandardName">
            <summary>
            Gets the standard name of the timezone.
            </summary>
            <value>
            The name of the standard.
            </value>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.Zone.DisplayName">
            <summary>
            Gets the display name of the timezone.
            </summary>
            <value>
            The display name.
            </value>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.ToLocalTime(System.DateTime)">
            <summary>
            Returns the local time that corresponds to a specified date and time value. 
            </summary>
            <param name="datetime">A date and time.</param>
            <returns>A <see cref="T:System.DateTime"/> object whose value is the local time that corresponds to time.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.ToUniversalTime(System.DateTime)">
            <summary>
            Returns the Coordinated Universal Time (UTC) that corresponds to a specified time.
            </summary>
            <param name="datetime">A date and time.</param>
            <returns>A <see cref="T:System.DateTime"/> object whose value is the Coordinated Universal Time (UTC) that corresponds to time.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.ToTimeZone(System.DateTime,Aspose.Email.Common.TimeZone.Zone)">
            <summary>
            Returns the local time in the specified time zone that correspond to the specified date in the current time zone.
            </summary>
            <param name="datetime">A date and time in the current time zone</param>
            <param name="zone">The time zone in which the local time is converted.</param>
            <returns>A local <see cref="T:System.DateTime"/> in the specified time zone.</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.GetZoneRule(System.DateTime)">
            <summary>
            Gets the description of the area corresponding to the specified date
            </summary>
            <param name="point"><see cref="T:System.DateTime"/> specified.</param>
            <returns><see cref="T:Aspose.Email.Common.TimeZone.Zone.ZoneRuleAssociate"/> containing <see cref="T:System.DateTime"/> specified</returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.GetAdjustmentRule(Aspose.Email.Common.TimeZone.Zone.ZoneRuleAssociate,System.DateTime)">
            <summary>
            Gets the adjustment rule.
            </summary>
            <param name="ruleAssociate">The rule associate.</param>
            <param name="point">The point.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.GetLastStandardOffset(System.Collections.Generic.List{Aspose.Email.Common.TimeZone.Rule},Aspose.Email.Common.TimeZone.ZoneUntil,Aspose.Email.Common.TimeZone.ZoneDetailDates,System.TimeSpan)">
            <summary>
            Gets the rule applicable to a point
            </summary>
            <param name="rules">rules</param>
            <param name="date"><see cref="T:Aspose.Email.Common.TimeZone.ZoneUntil"/> representing the date of the ponit</param>
            <param name="startZone">Lower limit of validity of the rules</param>
            <param name="gmtOffset"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.GetLastSaveOffset(System.Int32,System.Collections.Generic.List{Aspose.Email.Common.TimeZone.Rule},Aspose.Email.Common.TimeZone.Rule,Aspose.Email.Common.TimeZone.ZoneDetailDates,System.TimeSpan)">
            <summary>
            Gets the offset standard applicable to a rule
            </summary>
            <param name="year"></param>
            <param name="rules"></param>
            <param name="rule"></param>
            <param name="zoneDate"></param>
            <param name="gmtOffset"></param>
            <returns></returns>
            <remarks>This function compares the rules defined as a time change does
            Product not at the same time as another one can apply the rules without stdoff between
            Point to worry about covering.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.GetZoneUntil(System.DateTime)">
            <summary>
            Gets the zone until.
            </summary>
            <param name="point">The point.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.UpdateDateChange(System.Int32)">
            <summary>
            Calculates all the dates in the rules for a given year.
            </summary>
            <param name="year"></param>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.Zone.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.ZoneDetail">
            <summary>
            Represents a rule for TimeZone
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneDetail.#ctor">
            <summary>
            Initializes a new instance of <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetail"/>
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.GmtOffset">
            <summary>
            Gets the time to add to UTC to get standard time zone
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.Format">
            <summary>
            Gets the format of the time zone abbreviation
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.RuleName">
            <summary>
            Gets the name of the rule
            </summary>
            <remarks>
            Can also represent the time it takes to add to the standard date (use StandardOffset)
            If empty, standard time is applied to the area
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.FixedStandardOffset">
            <summary>
            Gets the time it takes to add to the standard date
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.Until">
            <summary>
            Gets the rule represent the deadline effect in the area
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.StartZone">
            <summary>
            Gets the start date of definition of the area
            </summary>
            <remarks>
            StandardOffset represents the offset defined by the effective date.
            GMTOffset represents the offset defined by the effective date.
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneDetail.EndZone">
             <summary>
            Gets the end date to define the area
             </summary>
             <remarks>
             StandardOffset represents the offset defined by the effective date.
             GMTOffset represents the offset defined by the effective date.
             </remarks>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneDetailDates.op_LessThan(Aspose.Email.Common.TimeZone.ZoneDetailDates,Aspose.Email.Common.TimeZone.ZoneDetailDates)">
            <summary>
            Determines whether a <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified is less than another <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified
            </summary>
            <param name="date1"></param>
            <param name="date2"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneDetailDates.op_GreaterThan(Aspose.Email.Common.TimeZone.ZoneDetailDates,Aspose.Email.Common.TimeZone.ZoneDetailDates)">
            <summary>
            Determines whether a <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified is greater than another <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified
            </summary>
            <param name="date1"></param>
            <param name="date2"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneDetailDates.op_LessThanOrEqual(Aspose.Email.Common.TimeZone.ZoneDetailDates,Aspose.Email.Common.TimeZone.ZoneDetailDates)">
            <summary>
            Determines whether a <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified is less than or equal to another <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified
            </summary>
            <param name="date1"></param>
            <param name="date2"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneDetailDates.op_GreaterThanOrEqual(Aspose.Email.Common.TimeZone.ZoneDetailDates,Aspose.Email.Common.TimeZone.ZoneDetailDates)">
            <summary>
            Determines whether a <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified is greater than or equal to another <see cref="T:Aspose.Email.Common.TimeZone.ZoneDetailDates"/> specified
            </summary>
            <param name="date1"></param>
            <param name="date2"></param>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Common.TimeZone.ZoneUntil">
            <summary>
            Represents a rule end zone.
            </summary>
            <remarks>This rule set a date fixed by the association of the year.</remarks>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneUntil.#ctor">
            <summary>
            Initializes a new instance of <see cref="T:Aspose.Email.Common.TimeZone.ZoneUntil"/>
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.TimeZone.ZoneUntil.Year">
            <summary>
            Gets the year of upper limit of the zone rule
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.TimeZone.ZoneUntil.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Common.Crc32">
            <summary>
             Utility class for compute CRC32
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.#ctor(System.UInt32,System.UInt32)">
            <summary>
             Create new instance
            </summary>
            <param name="init">Initial value</param>
            <param name="xorOut">Crc value will combined with XorOut before return</param>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Create(System.UInt32,System.UInt32)">
            <summary>
             Create new instance
            </summary>
            <param name="init">Initial value</param>
            <param name="xorOut">Crc value will combined with XorOut before return</param>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Create">
            <summary>
            Create new instance for CRC-32-IEEE 802.3
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Compute(System.String)">
            <summary>
            Compute CRC
            </summary>
            <param name="data">The input to compute the CRC for. </param>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Compute(System.Byte[])">
            <summary>
            Compute CRC
            </summary>
            <param name="data">The input to compute the CRC for. </param>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Compute(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Compute CRC
            </summary>
            <param name="data">The input to compute the CRC for. </param>
            <param name="offset">The offset into the input byte array from which to begin using data. </param>
            <param name="count">The number of bytes in the input byte array to use as data. </param>
            <returns>The calculated CRC.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Crc32.Compute(System.UInt32,System.Byte)">
            <summary>
            Compute CRC
            </summary>
            <param name="b">input data</param>
            <param name="seed">initial value</param>
        </member>
        <member name="T:Aspose.Email.Common.Zlib.CRC32">
            <summary>
            Calculates a 32bit Cyclic Redundancy Checksum (CRC) using the same polynomial
            used by Zip. This type is used internally by DotNetZip; it is generally not used
            directly by applications wishing to create, read, or manipulate zip archive
            files.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CRC32.TotalBytesRead">
            <summary>
            indicates the total number of bytes read on the CRC stream.
            This is used when writing the ZipDirEntry when compressing files.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CRC32.Crc32Result">
            <summary>
            Indicates the current CRC for all blocks slurped in.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CRC32.GetCrc32(System.IO.Stream)">
            <summary>
            Returns the CRC32 for the specified stream.
            </summary>
            <param name="input">The stream over which to calculate the CRC32</param>
            <returns>the CRC32 calculation</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CRC32.GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)">
            <summary>
            Returns the CRC32 for the specified stream, and writes the input into the
            output stream.
            </summary>
            <param name="input">The stream over which to calculate the CRC32</param>
            <param name="output">The stream into which to deflate the input</param>
            <returns>the CRC32 calculation</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CRC32.ComputeCrc32(System.Int32,System.Byte)">
            <summary>
            Get the CRC32 for the given (word,byte) combo.  This is a computation
            defined by PKzip.
            </summary>
            <param name="W">The word to start with.</param>
            <param name="B">The byte to combine it with.</param>
            <returns>The CRC-ized result.</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CRC32.SlurpBlock(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Update the value for the running CRC32 using the given block of bytes.
            This is useful when using the CRC32() class in a Stream.
            </summary>
            <param name="block">block of bytes to slurp</param>
            <param name="offset">starting point in the block</param>
            <param name="count">how many bytes within the block to slurp</param>
        </member>
        <member name="T:Aspose.Email.Common.Zlib.CrcCalculatorStream">
             <summary>
             A Stream that calculates a CRC32 (a checksum) on all bytes read, 
             or on all bytes written.
             </summary>
            
             <remarks>
             <para>
             This class can be used to verify the CRC of a ZipEntry when
             reading from a stream, or to calculate a CRC when writing to a
             stream.  The stream should be used to either read, or write, but
             not both.  If you intermix reads and writes, the results are not
             defined.
             </para>
             
             <para>
             This class is intended primarily for use internally by the
             DotNetZip library.
             </para>
             </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.TotalBytesSlurped">
             <summary>
             Gets the total number of bytes run through the CRC32 calculator.
             </summary>
            
             <remarks>
             This is either the total number of bytes read, or the total number of bytes
             written, depending on the direction of this stream.
             </remarks>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.#ctor(System.IO.Stream)">
            <summary>
            The default constructor.
            </summary>
            <remarks>
            Instances returned from this constructor will leave the underlying stream
            open upon Close().
            </remarks>
            <param name="stream">The underlying stream</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.#ctor(System.IO.Stream,System.Boolean)">
            <summary>
            The constructor allows the caller to specify how to handle the underlying
            stream at close.
            </summary>
            <param name="stream">The underlying stream</param>
            <param name="leaveOpen">true to leave the underlying stream 
            open upon close of the CrcCalculatorStream.; false otherwise.</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.#ctor(System.IO.Stream,System.Int64)">
            <summary>
            A constructor allowing the specification of the length of the stream to read.
            </summary>
            <remarks>
            Instances returned from this constructor will leave the underlying stream open
            upon Close().
            </remarks>
            <param name="stream">The underlying stream</param>
            <param name="length">The length of the stream to slurp</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.#ctor(System.IO.Stream,System.Int64,System.Boolean)">
            <summary>
            A constructor allowing the specification of the length of the stream to
            read, as well as whether to keep the underlying stream open upon Close().
            </summary>
            <param name="stream">The underlying stream</param>
            <param name="length">The length of the stream to slurp</param>
            <param name="leaveOpen">true to leave the underlying stream 
            open upon close of the CrcCalculatorStream.; false otherwise.</param>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.Crc">
            <summary>
            Provides the current CRC for all blocks slurped in.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.LeaveOpen">
            <summary>
            Indicates whether the underlying stream will be left open when the
            CrcCalculatorStream is Closed.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.Read(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Read from the stream
            </summary>
            <param name="buffer">the buffer to read</param>
            <param name="offset">the offset at which to start</param>
            <param name="count">the number of bytes to read</param>
            <returns>the number of bytes actually read</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.Write(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Write to the stream. 
            </summary>
            <param name="buffer">the buffer from which to write</param>
            <param name="offset">the offset at which to start writing</param>
            <param name="count">the number of bytes to write</param>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.CanRead">
            <summary>
            Indicates whether the stream supports reading. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.CanSeek">
            <summary>
            Indicates whether the stream supports seeking. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.CanWrite">
            <summary>
            Indicates whether the stream supports writing. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.Flush">
            <summary>
            Flush the stream.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.Length">
            <summary>
            Not implemented.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.CrcCalculatorStream.Position">
            <summary>
            Not implemented.
            </summary>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.Seek(System.Int64,System.IO.SeekOrigin)">
            <summary>
            Not implemented.
            </summary>
            <param name="offset">N/A</param>
            <param name="origin">N/A</param>
            <returns>N/A</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.SetLength(System.Int64)">
            <summary>
            Not implemented.
            </summary>
            <param name="value">N/A</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.CrcCalculatorStream.Close">
            <summary>
            Closes the stream.
            </summary>
        </member>
        <member name="T:Aspose.Email.Common.Zlib.FlushType">
            <summary>
            Describes how to flush the current deflate operation. 
            </summary>
            <remarks>
            The different FlushType values are useful when using a Deflate in a streaming application.
            </remarks>
        </member>
        <member name="F:Aspose.Email.Common.Zlib.FlushType.None">
            <summary>No flush at all.</summary>
        </member>
        <member name="F:Aspose.Email.Common.Zlib.FlushType.Partial">
            <summary>Closes the current block, but doesn't flush it to
            the output. Used internally only in hypothetical
            scenarios.  This was supposed to be removed by Zlib, but it is
            still in use in some edge cases. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Zlib.FlushType.Sync">
            <summary>
            Use this during compression to specify that all pending output should be
            flushed to the output buffer and the output should be aligned on a byte
            boundary.  You might use this in a streaming communication scenario, so that
            the decompressor can get all input data available so far.  When using this
            with a ZlibCodec, <c>AvailableBytesIn</c> will be zero after the call if
            enough output space has been provided before the call.  Flushing will
            degrade compression and so it should be used only when necessary.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Zlib.FlushType.Full">
            <summary>
            Use this during compression to specify that all output should be flushed, as
            with <c>FlushType.Sync</c>, but also, the compression state should be reset
            so that decompression can restart from this point if previous compressed
            data has been damaged or if random access is desired.  Using
            <c>FlushType.Full</c> too often can significantly degrade the compression.
            </summary>
        </member>
        <member name="F:Aspose.Email.Common.Zlib.FlushType.Finish">
            <summary>Signals the end of the compression/decompression stream.</summary>
        </member>
        <member name="T:Aspose.Email.Common.Zlib.DeflateStream">
             <summary>
             A class for compressing and decompressing streams using the Deflate algorithm.
             </summary>
            
             <remarks>
            
             <para>
             The DeflateStream is a <see
             href="http://en.wikipedia.org/wiki/Decorator_pattern">Decorator</see> on a <see
             cref="T:System.IO.Stream"/>.  It adds DEFLATE compression or decompression to any stream.
             </para>
            
             <para> Using this stream, applications can compress or decompress data via
             stream <c>Read</c> and <c>Write</c> operations.  Either compresssion or
             decompression can occur through either reading or writing. The compression
             format used is DEFLATE, which is documented in <see
             href="http://www.ietf.org/rfc/rfc1951.txt">IETF RFC 1951</see>, "DEFLATE
             Compressed Data Format Specification version 1.3.".</para>
            
             <para>
             This class is similar to <see cref="T:Aspose.Email.Common.Zlib.ZlibStream"/>, except that <c>ZlibStream</c>
             adds the <see href="http://www.ietf.org/rfc/rfc1950.txt">RFC 1950 - ZLIB</see>
             framing bytes to a compressed stream when compressing, or expects the RFC1950
             framing bytes when decompressing. The <c>DeflateStream</c> does not.
             </para>
            
             </remarks>
            
             <seealso cref="T:Aspose.Email.Common.Zlib.DeflateStream" />
             <seealso cref="T:Aspose.Email.Common.Zlib.GZipStream" />
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.#ctor(System.IO.Stream,Aspose.Email.Common.Zlib.CompressionMode)">
            <summary>
            Create a DeflateStream using the specified CompressionMode.
            </summary>
            
            <remarks> When mode is <c>CompressionMode.Compress</c>, the DeflateStream
            will use the default compression level. The "captive" stream will be closed
            when the DeflateStream is closed.  </remarks>
            
            <example>
            This example uses a DeflateStream to compress data from a file, and writes
            the compressed data to another file.
            <code>
            using (System.IO.Stream input = System.IO.File.OpenRead(fileToCompress))
            {
                using (var raw = System.IO.File.Create(fileToCompress + ".deflated"))
                {
                    using (Stream compressor = new DeflateStream(raw, CompressionMode.Compress))
                    {
                        byte[] buffer = new byte[WORKING_BUFFER_SIZE];
                        int n;
                        while ((n= input.Read(buffer, 0, buffer.Length)) != 0)
                        {
                            compressor.Write(buffer, 0, n);
                        }
                    }
                }
            }
            </code>
            <code lang="VB">
            Using input As Stream = File.OpenRead(fileToCompress)
                Using raw As FileStream = File.Create(fileToCompress &amp; ".deflated")
                    Using compressor As Stream = New DeflateStream(raw, CompressionMode.Compress)
                        Dim buffer As Byte() = New Byte(4096) {}
                        Dim n As Integer = -1
                        Do While (n &lt;&gt; 0)
                            If (n &gt; 0) Then
                                compressor.Write(buffer, 0, n)
                            End If
                            n = input.Read(buffer, 0, buffer.Length)
                        Loop
                    End Using
                End Using
            End Using
            </code>
            </example>
            <param name="stream">The stream which will be read or written.</param>
            <param name="mode">Indicates whether the DeflateStream will compress or decompress.</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.#ctor(System.IO.Stream,Aspose.Email.Common.Zlib.CompressionMode,Aspose.Email.Common.Zlib.CompressionLevel)">
             <summary>
             Create a DeflateStream using the specified CompressionMode and the specified CompressionLevel.
             </summary>
            
             <remarks>
            
             <para> When mode is <c>CompressionMode.Decompress</c>, the level parameter
             is ignored.  The "captive" stream will be closed when the DeflateStream is
             closed.
             </para>
            
             </remarks>
            
             <example>
             This example uses a DeflateStream to compress data from a file, and writes
             the compressed data to another file.
             <code>
             using (System.IO.Stream input = System.IO.File.OpenRead(fileToCompress))
             {
                 using (var raw = System.IO.File.Create(fileToCompress + ".deflated"))
                 {
                     using (Stream compressor = new DeflateStream(raw,
                                                                  CompressionMode.Compress, 
                                                                  CompressionLevel.BestCompression))
                     {
                         byte[] buffer = new byte[WORKING_BUFFER_SIZE];
                         int n= -1;
                         while (n != 0)
                         {
                             if (n &gt; 0) 
                                 compressor.Write(buffer, 0, n);
                             n= input.Read(buffer, 0, buffer.Length);
                         }
                     }
                 }
             }
             </code>
            
             <code lang="VB">
             Using input As Stream = File.OpenRead(fileToCompress)
                 Using raw As FileStream = File.Create(fileToCompress &amp; ".deflated")
                     Using compressor As Stream = New DeflateStream(raw, CompressionMode.Compress, CompressionLevel.BestCompression)
                         Dim buffer As Byte() = New Byte(4096) {}
                         Dim n As Integer = -1
                         Do While (n &lt;&gt; 0)
                             If (n &gt; 0) Then
                                 compressor.Write(buffer, 0, n)
                             End If
                             n = input.Read(buffer, 0, buffer.Length)
                         Loop
                     End Using
                 End Using
             End Using
             </code>
             </example>
             <param name="stream">The stream to be read or written while deflating or inflating.</param>
             <param name="mode">Indicates whether the DeflateStream will compress or decompress.</param>
             <param name="level">A tuning knob to trade speed for effectiveness.</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.#ctor(System.IO.Stream,Aspose.Email.Common.Zlib.CompressionMode,System.Boolean)">
             <summary>
             Create a DeflateStream using the specified CompressionMode, and explicitly specify 
             whether the stream should be left open after Deflation or Inflation.
             </summary>
            
             <remarks>
            
             <para> This constructor allows the application to request that the captive
             stream remain open after the deflation or inflation occurs.  By default,
             after Close() is called on the stream, the captive stream is also closed. In
             some cases this is not desired, for example if the stream is a memory stream
             that will be re-read after compression.  Specify true for the leaveOpen
             parameter to leave the stream open.  </para>
            
             <para>
             The DeflateStream will use the default compression level.
             </para>
             <para>
             See the other overloads of this constructor for example code.
             </para>
             </remarks>
            
             <param name="stream">The stream which will be read or written. This is called the 
             "captive" stream in other places in this documentation.</param>
            
             <param name="mode">Indicates whether the DeflateStream will compress or decompress.</param>
            
             <param name="leaveOpen">true if the application would like the stream to
             remain open after inflation/deflation.</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.#ctor(System.IO.Stream,Aspose.Email.Common.Zlib.CompressionMode,Aspose.Email.Common.Zlib.CompressionLevel,System.Boolean)">
             <summary> Create a DeflateStream using the specified CompressionMode and the
             specified CompressionLevel, and explicitly specify whether the stream should
             be left open after Deflation or Inflation.  </summary>
            
             <remarks>
            
             <para>
             When mode is <c>CompressionMode.Decompress</c>, the level parameter is ignored. 
             </para>
            
             <para>
             This constructor allows the application to request that the captive stream
             remain open after the deflation or inflation occurs.  By default, after Close()
             is called on the stream, the captive stream is also closed. In some cases this
             is not desired, for example if the stream is a <see
             cref="T:System.IO.MemoryStream"/> that will be re-read after compression.  Specify
             true for the leaveOpen parameter to leave the stream open.
             </para>
            
             </remarks>
            
             <example>
             This example shows how to use a DeflateStream to compress data from a file, and store
             the compressed data into another file.
             <code>
             using (var output = System.IO.File.Create(fileToCompress + ".deflated"))
             {
                 using (System.IO.Stream input = System.IO.File.OpenRead(fileToCompress))
                 {
                     using (Stream compressor = new DeflateStream(output, CompressionMode.Compress, CompressionLevel.BestCompression, true))
                     {
                         byte[] buffer = new byte[WORKING_BUFFER_SIZE];
                         int n= -1;
                         while (n != 0)
                         {
                             if (n &gt; 0) 
                                 compressor.Write(buffer, 0, n);
                             n= input.Read(buffer, 0, buffer.Length);
                         }
                     }
                 }
                 // can write additional data to the output stream here
             }
             </code>
             <code lang="VB">
             Using output As FileStream = File.Create(fileToCompress &amp; ".deflated")
                 Using input As Stream = File.OpenRead(fileToCompress)
                     Using compressor As Stream = New DeflateStream(output, CompressionMode.Compress, CompressionLevel.BestCompression, True)
                         Dim buffer As Byte() = New Byte(4096) {}
                         Dim n As Integer = -1
                         Do While (n &lt;&gt; 0)
                             If (n &gt; 0) Then
                                 compressor.Write(buffer, 0, n)
                             End If
                             n = input.Read(buffer, 0, buffer.Length)
                         Loop
                     End Using
                 End Using
                 ' can write additional data to the output stream here.
             End Using
             </code>
             </example>
             <param name="stream">The stream which will be read or written.</param>
             <param name="mode">Indicates whether the DeflateStream will compress or decompress.</param>
             <param name="leaveOpen">true if the application would like the stream to remain open after inflation/deflation.</param>
             <param name="level">A tuning knob to trade speed for effectiveness.</param>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.FlushMode">
            <summary>
            This property sets the flush behavior on the stream.  
            </summary>
            <remarks> See the ZLIB documentation for the meaning of the flush behavior.
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.BufferSize">
             <summary>
             The size of the working buffer for the compression codec. 
             </summary>
            
             <remarks>
             <para>
             The working buffer is used for all stream operations.  The default size is 1024 bytes.
             The minimum size is 128 bytes. You may get better performance with a larger buffer.
             Then again, you might not.  You would have to test it.
             </para>
            
             <para>
             Set this before the first call to Read()  or Write() on the stream. If you try to set it 
             afterwards, it will throw.
             </para>
             </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.Strategy">
            <summary>The ZLIB strategy to be used during compression.</summary>
            <remarks>By tweaking this parameter, you may be able to optimize the compression for 
            data with particular characteristics.</remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.TotalIn">
            <summary> Returns the total number of bytes input so far.</summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.TotalOut">
            <summary> Returns the total number of bytes output so far.</summary>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.Dispose(System.Boolean)">
            <summary>
            Dispose the stream.  
            </summary>
            <remarks>
            This may or may not result in a Close() call on the captive stream. 
            See the constructors that have a leaveOpen parameter for more information.
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.CanRead">
            <summary>
            Indicates whether the stream can be read.
            </summary>
            <remarks>
            The return value depends on whether the captive stream supports reading.
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.CanSeek">
            <summary>
            Indicates whether the stream supports Seek operations.
            </summary>
            <remarks>
            Always returns false.
            </remarks>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.CanWrite">
            <summary>
            Indicates whether the stream can be written.
            </summary>
            <remarks>
            The return value depends on whether the captive stream supports writing.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.Flush">
            <summary>
            Flush the stream.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.Length">
            <summary>
            Reading this property always throws a NotImplementedException.
            </summary>
        </member>
        <member name="P:Aspose.Email.Common.Zlib.DeflateStream.Position">
            <summary>
            The position of the stream pointer. 
            </summary>
            <remarks>
            Writing this property always throws a NotImplementedException. Reading will
            return the total bytes written out, if used in writing, or the total bytes 
            read in, if used in reading.   The count may refer to compressed bytes or 
            uncompressed bytes, depending on how you've used the stream.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.Read(System.Byte[],System.Int32,System.Int32)">
             <summary>
             Read data from the stream. 
             </summary>
             <remarks>
            
             <para> If you wish to use the DeflateStream to compress data while reading,
             you can create a DeflateStream with CompressionMode.Compress, providing an
             uncompressed data stream.  Then call Read() on that DeflateStream, and the
             data read will be compressed as you read.  If you wish to use the
             DeflateStream to decompress data while reading, you can create a
             DeflateStream with CompressionMode.Decompress, providing a readable
             compressed data stream.  Then call Read() on that DeflateStream, and the
             data read will be decompressed as you read.  </para>
            
             <para>
             A DeflateStream can be used for Read() or Write(), but not both. 
             </para>
             </remarks>
             <param name="buffer">The buffer into which the read data should be placed.</param>
             <param name="offset">the offset within that data array to put the first byte read.</param>
             <param name="count">the number of bytes to read.</param>
             <returns>the number of bytes actually read</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.Seek(System.Int64,System.IO.SeekOrigin)">
            <summary>
            Calling this method always throws a <see cref="T:System.NotImplementedException"/>.
            </summary>
            <param name="offset">this is irrelevant, since it will always throw!</param>
            <param name="origin">this is irrelevant, since it will always throw!</param>
            <returns>irrelevant!</returns>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.SetLength(System.Int64)">
            <summary>
            Calling this method always throws a NotImplementedException.
            </summary>
            <param name="value">this is irrelevant, since it will always throw!</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.Write(System.Byte[],System.Int32,System.Int32)">
            <summary>
            Write data to the stream. 
            </summary>
            <remarks>
            <para>
            If you wish to use the DeflateStream to compress data while writing, you can
            create a DeflateStream with CompressionMode.Compress, and a writable output
            stream.  Then call Write() on that DeflateStream, providing uncompressed
            data as input.  The data sent to the output stream will be the compressed
            form of the data written.  If you wish to use the DeflateStream to
            decompress data while writing, you can create a DeflateStream with
            CompressionMode.Decompress, and a writable output stream.  Then call Write()
            on that stream, providing previously compressed data. The data sent to the
            output stream will be the decompressed form of the data written.
            </para>
            <para>
            A DeflateStream can be used for Read() or Write(), but not both. 
            </para>
            </remarks>
            <param name="buffer">The buffer holding data to write to the stream.</param>
            <param name="offset">the offset within that data array to find the first byte to write.</param>
            <param name="count">the number of bytes to write.</param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.CompressString(System.String)">
            <summary>
            Compress a string into a byte array.
            </summary>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressString(System.Byte[])"/>
            <param name="s">
            A string to compress.  The string will first be encoded
            using UTF8, then compressed.
            </param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.CompressBuffer(System.Byte[])">
            <summary>
            Compress a byte array into a new byte array.
            </summary>
            <remarks>
            Uncompress it with <see cref="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressBuffer(System.Byte[])"/>.
            </remarks>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.CompressString(System.String)"/>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressBuffer(System.Byte[])"/>
            <param name="b">
            A buffer to compress. 
            </param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressString(System.Byte[])">
            <summary>
            Uncompress a byte array into a single string.
            </summary>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.CompressString(System.String)"/>
            <param name="compressed">
            A buffer containing GZIP-compressed data.  
            </param>
        </member>
        <member name="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressBuffer(System.Byte[])">
            <summary>
            Uncompress a byte array into a byte array.
            </summary>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.CompressBuffer(System.Byte[])"/>
            <seealso cref="M:Aspose.Email.Common.Zlib.DeflateStream.UncompressString(System.Byte[])"/>
            <param name="compressed">
            A buffer containing ZLIB-compressed data.  
            </param>
        </member>
        <member name="T:Aspose.Email.Common.Zlib.GZipStream">
             <summary>
             A class for compressing and decompressing GZIP streams.
             </summary>
             <remarks>
            
             <para>
             The GZipStream is a <see
             href="http://en.wikipedia.org/wiki/Decorator_pattern">Decorator</see> on a <see 
             cref="T:System.IO.Stream"/>.  It adds GZIP compression or decompression to any stream.
             </para>
            
             <para> Like the <c>Compression.GZipStream</c> in the .NET Base
             Class Library, the Ionic.Zlib.GZipStream can compress while writing, or decompress
             while reading, but not vice versa.  The