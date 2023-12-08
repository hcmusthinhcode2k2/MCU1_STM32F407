ng a read response</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.EMAILNET_38444.RetrCommand.ReadResponse(System.String)">
            <summary>
            Reads response
            </summary>
            <param name="commandIdentifier">A command identifier</param>
            <returns>A <see cref="T:System.IO.Stream"/> containing a read response</returns>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3Client">
            <summary>
            Allows applications to access and manipulate 
            messages by using the Post Office Protocol Version 3 (POP3).
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.Int32)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.Int32,System.AsyncCallback)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.String)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.String,System.AsyncCallback)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageSize(System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageSize operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMessageSize(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns>size of the message in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageSize(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Gets the size of the message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns>size of the message in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageSize(System.String)">
            <summary>
            Gets the size of the message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns>size of the message in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageSize(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Gets the size of the message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>size of the message in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageSize(System.Int32)">
            <summary>
            Gets the size of the message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>size of the message in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins 'No operation' command.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins 'No operation' command.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins 'No operation' command.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop">
            <summary>
            Begins 'No operation' command.
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop(System.AsyncCallback)">
            <summary>
            Begins 'No operation' command.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginNoop(System.AsyncCallback,System.Object)">
            <summary>
            Begins 'No operation' command.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndNoop(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.Noop(Aspose.Email.Clients.IConnection)">
            <summary>
            'No operation' command
            </summary>
            <param name="iConnection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.Noop">
            <summary>
            'No operation' command
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins to commit the deletions.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins to commit the deletions.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins to commit the deletions.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes">
            <summary>
            Begins to commit the deletions.
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes(System.AsyncCallback)">
            <summary>
            Begins to commit the deletions.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginCommitDeletes(System.AsyncCallback,System.Object)">
            <summary>
            Begins to commit the deletions.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndCommitDeletes(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.CommitDeletes(System.Int32)">
            <summary>
            Commit the deletions
            </summary>
            <param name="sleep">Timeout in milliseconds</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.CommitDeletes(Aspose.Email.Clients.IConnection)">
            <summary>
            Commit the deletions
            </summary>
            <param name="iConnection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.CommitDeletes">
            <summary>
            Commit the deletions
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3Client.UseOldFetchStyle">
            <summary>
            Gets or sets value which defines fetch alghorithm
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.Int32)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.Int32,System.AsyncCallback)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.String)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.String,System.AsyncCallback)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginFetchMessage(System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins FetchMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndFetchMessage(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns><see cref="T:Aspose.Email.MailMessage"/> that represents e-mail message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.FetchMessage(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Fetches the message
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique id of the message</param>
            <returns><see cref="T:Aspose.Email.MailMessage"/> that represents e-mail message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.FetchMessage(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Fetches the message
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns><see cref="T:Aspose.Email.MailMessage"/> that represents e-mail message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.FetchMessage(System.String)">
            <summary>
            Fetches the message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns><see cref="T:Aspose.Email.MailMessage"/> that represents e-mail message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.FetchMessage(System.Int32)">
            <summary>
            Fetches the message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns><see cref="T:Aspose.Email.MailMessage"/> that represents e-mail message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,Aspose.Email.Clients.Pop3.Pop3ListFields,System.Boolean,Aspose.Email.Tools.Search.MailQuery,System.AsyncCallback,System.Object)">
            <summary>
            Begins ListMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="fields">The fields that we want get</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,Aspose.Email.Tools.Search.MailQuery)">
             <summary>
             Begins ListMessage operation asynchronously
             </summary>
             <param name="iConnection">Connection to a server</param>
            <param name="query"><see cref="T:Aspose.Email.Tools.Search.MailQuery"/> that represents search query.</param> 
             <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,Aspose.Email.Tools.Search.MailQuery,System.AsyncCallback)">
            <summary>
            Begins ListMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Clients.IConnection,Aspose.Email.Tools.Search.MailQuery,System.AsyncCallback,System.Object)">
            <summary>
            Begins ListMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(System.AsyncCallback)">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(System.AsyncCallback,System.Object)">
            <summary>
            Begins ListMessages operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Tools.Search.MailQuery)">
             <summary>
             Begins ListMessage operation asynchronously
             </summary>
            <param name="query"><see cref="T:Aspose.Email.Tools.Search.MailQuery"/> that represents search query.</param> 
             <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Tools.Search.MailQuery,System.AsyncCallback)">
            <summary>
            Begins ListMessage operation asynchronously
            </summary>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginListMessages(Aspose.Email.Tools.Search.MailQuery,System.AsyncCallback,System.Object)">
            <summary>
            Begins ListMessage operation asynchronously
            </summary>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndListMessages(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns>Returns collection of Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.ListMessages">
            <summary>
            Lists the messages.
            Gets an information for earch message
            </summary>
            <remarks>Note that messages marked as deleted are not listed</remarks>
            <returns>Pop3MessageInfoCollection</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.ListMessages(System.Boolean)">
            <summary>
            Lists the messages.
            Gets an information for earch message
            </summary>
            <remarks>Note that messages marked as deleted are not listed</remarks>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns>Pop3MessageInfoCollection</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.ListMessages(Aspose.Email.Tools.Search.MailQuery)">
            <summary>
            Lists the messages.
            </summary>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <returns>
            Collection of Pop3MessageInfo objects.
            </returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.ListMessages(Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
            Lists the messages.
            </summary>
            <param name="fields">The fields that we want get</param>
            <remarks>Note that messages marked as deleted are not listed</remarks>
            <returns>Pop3MessageInfoCollection</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.ListMessages(Aspose.Email.Clients.IConnection,Aspose.Email.Clients.Pop3.Pop3ListFields,System.Boolean,Aspose.Email.Tools.Search.MailQuery)">
            <summary>
            Lists the messages.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="fields">The fields that we want get</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="query">The <see cref="T:Aspose.Email.Tools.Search.MailQuery"/> object.</param>
            <returns>Pop3MessageInfoCollection</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String,Aspose.Email.Clients.Pop3.Pop3ListFields,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String,System.AsyncCallback)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageInfo(System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMessageInfo(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
             Gets the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Gets the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(System.String)">
            <summary>
            Gets the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(System.String,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
             Gets the information for that message
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
             Gets the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Gets the information for that message
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(System.Int32)">
            <summary>
            Gets the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageInfo(System.Int32,Aspose.Email.Clients.Pop3.Pop3ListFields)">
            <summary>
             Gets the information for that message
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fields">The fields that we want get</param>
            <returns>Pop3MessageInfo</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.Int32,System.IO.Stream)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.Int32,System.IO.Stream,System.AsyncCallback)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.Int32,System.IO.Stream,System.AsyncCallback,System.Object)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.String,System.IO.Stream)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.String,System.IO.Stream,System.AsyncCallback)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(Aspose.Email.Clients.IConnection,System.String,System.IO.Stream,System.AsyncCallback,System.Object)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>        
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.Int32,System.IO.Stream)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.Int32,System.IO.Stream,System.AsyncCallback)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.Int32,System.IO.Stream,System.AsyncCallback,System.Object)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.String,System.IO.Stream)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.String,System.IO.Stream,System.AsyncCallback)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginSaveMessage(System.String,System.IO.Stream,System.AsyncCallback,System.Object)">
            <summary>
            Begins SaveMessage operation asynchronously
            </summary>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndSaveMessage(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(Aspose.Email.Clients.IConnection,System.String,System.IO.Stream)">
            <summary>
            Fetches and save the message as a stream
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(Aspose.Email.Clients.IConnection,System.String,System.String)">
            <summary>
            Fetches and save the message into a file
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="fileName">File name for message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(Aspose.Email.Clients.IConnection,System.Int32,System.IO.Stream)">
            <summary>
            Fetches and save the message as a stream
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(Aspose.Email.Clients.IConnection,System.Int32,System.String)">
            <summary>
            Fetches and save the message into a file
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fileName">File name for message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(System.String,System.IO.Stream)">
            <summary>
            Fetches and save the message as a stream
            </summary>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(System.String,System.String)">
            <summary>
            Fetches and save the message into a file
            </summary>
            <param name="uniqueId">The unique Id of the message</param>
            <param name="fileName">File name for message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(System.Int32,System.IO.Stream)">
            <summary>
            Fetches and save the message as a stream
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="outputStream">Stream where message will be saved</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.SaveMessage(System.Int32,System.String)">
            <summary>
            Fetches and save the message into a file
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="fileName">File name for message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages(System.AsyncCallback)">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessages(System.AsyncCallback,System.Object)">
            <summary>
            Begins delete all messages asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndDeleteMessages(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessages(Aspose.Email.Clients.IConnection)">
            <summary>
            Deletes all messages
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessages">
            <summary>
            Deletes all messages
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.Int32)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.Int32,System.AsyncCallback)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.String)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.String,System.AsyncCallback)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginDeleteMessage(System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins DeleteMessage operation asynchronously
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndDeleteMessage(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessage(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Deletes the message
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessage(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Deletes the message
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessage(System.Int32)">
            <summary>
            Deletes the message
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="sequenceNumber">The sequence number of the message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.DeleteMessage(System.String)">
            <summary>
            Deletes the message
            </summary>
            <remarks>The POP3 server marks the message as deleted. 
            The POP3 server does not actually delete the message until the POP3 session enters the UPDATE state.</remarks>
            <param name="uniqueId">The unique id of the message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize(System.AsyncCallback)">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxSize(System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMailboxSize operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMailboxSize(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns>size of the mailbox in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxSize(Aspose.Email.Clients.IConnection)">
            <summary>
            Gets the size of the mailbox
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns>size of the mailbox in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxSize">
            <summary>
            Gets the size of the mailbox
            </summary>
            <returns>size of the mailbox in bytes</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(Aspose.Email.Clients.IConnection,System.Boolean,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(System.AsyncCallback)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMailboxInfo(System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the mailbox status info
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMailboxInfo(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns>Mailbox information</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxInfo(Aspose.Email.Clients.IConnection)">
            <summary>
            Gets the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns>Mailbox information</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxInfo(Aspose.Email.Clients.IConnection,System.Boolean)">
            <summary>
            Gets the mailbox status info
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns>Mailbox information</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxInfo(System.Boolean)">
            <summary>
            Gets the mailbox status info
            </summary>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns>Mailbox information</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMailboxInfo">
            <summary>
            Gets the mailbox status info
            </summary>
            <returns>Mailbox information</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(System.Int32)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(System.Int32,System.AsyncCallback)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageUniqueId(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins to get the message unique id
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMessageUniqueId(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <returns>String that represents uid of the message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageUniqueId(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Gets the message unique id
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>String that represents uid of the message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageUniqueId(System.Int32)">
            <summary>
            Gets the message unique id
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>String that represents uid of the message</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection,System.Boolean)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection,System.Boolean,System.AsyncCallback)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(Aspose.Email.Clients.IConnection,System.Boolean,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(System.AsyncCallback)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(System.Boolean)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(System.Boolean,System.AsyncCallback)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageCount(System.Boolean,System.AsyncCallback,System.Object)">
            <summary>
            Begins GetMessageCount operation asynchronously
            </summary>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMessageCount(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
            <returns>message count</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageCount(Aspose.Email.Clients.IConnection)">
            <summary>
            Gets the message count
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns>message count</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageCount(Aspose.Email.Clients.IConnection,System.Boolean)">
            <summary>
            Gets the message count
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns>message count</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageCount">
            <summary>
            Gets the message count
            </summary>
            <returns>message count</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageCount(System.Boolean)">
            <summary>
            Gets the message count
            </summary>
            <param name="closeTransaction">Indicates if current transaction has to be closed, before the list is retrieved.</param>
            <returns>message count</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages(System.AsyncCallback)">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginUndeleteMessages(System.AsyncCallback,System.Object)">
            <summary>
            Begins undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndUndeleteMessages(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.UndeleteMessages(Aspose.Email.Clients.IConnection)">
            <summary>
            Undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
            <param name="iConnection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.UndeleteMessages">
            <summary>
            Undeletes the messages.
            If any messages have been marked as deleted by the POP3 server, they are unmarked.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.Int32)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.Int32,System.AsyncCallback)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.Int32,System.AsyncCallback,System.Object)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(Aspose.Email.Clients.IConnection,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.String)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.String,System.AsyncCallback)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.BeginGetMessageHeaders(System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins getting message headers
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.EndGetMessageHeaders(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageHeaders(Aspose.Email.Clients.IConnection,System.Int32)">
            <summary>
            Gets the message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>HeaderCollection that represents collection of the headers</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageHeaders(System.Int32)">
            <summary>
            Gets the message headers
            </summary>
            <param name="sequenceNumber">The sequence number of the message</param>
            <returns>HeaderCollection that represents collection of the headers</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageHeaders(Aspose.Email.Clients.IConnection,System.String)">
            <summary>
            Gets the message headers
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="uniqueId">The unique id of the message</param>
            <returns>HeaderCollection that represents collection of the headers</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.GetMessageHeaders(System.String)">
            <summary>
            Gets the message headers
            </summary>
            <param name="uniqueId">The unique id of the message</param>
            <returns>HeaderCollection that represents collection of the headers</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.String,System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32,System.String,System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32,System.String,System.String,System.Net.Security.RemoteCertificateValidationCallback)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
            <param name="userCertificateValidationCallback">System.Net.Security.RemoteCertificateValidationCallback</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.#ctor(System.String,System.Int32,System.String,System.String,System.Net.Security.RemoteCertificateValidationCallback,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Client"/> class
            </summary>
            <param name="host">The host name</param>
            <param name="port">The port number</param>
            <param name="username">The username</param>
            <param name="password">The password</param>
            <param name="userCertificateValidationCallback">System.Net.Security.RemoteCertificateValidationCallback</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3Client.DefaultPort">
            <summary>
            Gets default port for client
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Client.Initialize">
            <summary>
            Initializes a mail client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3ConnectionPool.ProtocolType">
            <summary>
            Gets protocol name
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3ConnectionPool.CreateConnection(System.Int32)">
            
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3ConnectionState">
            <summary>
            States of the Pop3 connection
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ConnectionState.Authentication">
            <summary>
            Authentication state
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ConnectionState.Transaction">
            <summary>
            Transaction state
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ConnectionState.Update">
            <summary>
            Update state
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3ListFields">
            <summary>
            Fields that may be retrieved from the server
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ListFields.UniqueId">
            <summary>
            Unique Id
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ListFields.SequenceNumber">
            <summary>
            Sequence Number
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ListFields.Size">
            <summary>
            Size
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ListFields.Header">
            <summary>
            Header
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3ListFields.All">
            <summary>
            All fields
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3Connection.Protocol">
            <summary>
            Returns protocol name
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Connection.ParseExtensions(System.String[])">
            <summary/>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3Exception">
            <summary>
            Represents the exception that is thrown when 
            the Pop3Client is not able to complete an operation.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Exception.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Exception"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Exception.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Exception"/> class.
            </summary>
            <param name="message">The error message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Exception.#ctor(System.String,System.Object[])">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Exception"/> class with a specified error message.
            </summary>
            <param name="format">Message format</param>
            <param name="parameters">Format parameters</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3Exception.#ctor(System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3Exception"/> class.
            </summary>
            <param name="message">The error message.</param>
            <param name="innerException">The inner exception.</param>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3MailboxInfo">
            <summary>
            Represents the status of the mailbox.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MailboxInfo.#ctor(System.Int32,System.Int64)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3MailboxInfo"/> class.
            </summary>
            <param name="count">The message count.</param>
            <param name="size">The occupied size.</param>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MailboxInfo.MessageCount">
            <summary>
            Gets the count of messages in the mailbox.
            </summary>
            <value>
            The message count.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MailboxInfo.OccupiedSize">
            <summary>
            Gets the occupied size of the mailbox.
            </summary>
            <value>
            The occupied size.
            </value>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MailboxInfo.ToString">
            <summary>
            Returns a <see cref="T:System.String"/> that represents this instance.
            </summary>
            <returns>
            A <see cref="T:System.String"/> that represents this instance.
            </returns>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3MessageInfo">
            <summary>
            The Pop3MessageInfo represents the E-Mail message info fetched from the Pop3 server.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3MessageInfo.headers">
            <summary>
            The MailMessage.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3MessageInfo.size">
            <summary>
            The message length.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3MessageInfo.sequenceNumber">
            <summary>
            The sequence number.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Pop3.Pop3MessageInfo.uid">
            <summary>
            The message uid.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3MessageInfo"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.#ctor(System.Int32,System.String,System.Int64)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3MessageInfo"/> class.
            </summary>
            <param name="sequenceNumber">The number.</param>
            <param name="uniqueId">The unique id.</param>
            <param name="length">The length.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.#ctor(System.Int32,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3MessageInfo"/> class.
            </summary>
            <param name="sequenceNumber">The number.</param>
            <param name="uniqueId">The unique id.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.#ctor(System.Int32,System.String,System.Int64,Aspose.Email.MailMessage,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Pop3.Pop3MessageInfo"/> class.
            </summary>
            <param name="sequenceNumber">The number.</param>
            <param name="uniqueId">The unique id.</param>
            <param name="size">The message size.</param>
            <param name="headers">The headers.</param>
            <param name="error">The error.</param>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.CC">
            <summary>
            Gets CC of the E-Mail message.
            </summary>
            <value>
            The cc field of the E-Mail message.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Date">
            <summary>
            The origination date specifies the date and time at which the creator of the message indicated 
            that the message was complete and ready to enter the mail delivery system. 
            For instance, this might be the time that a user pushes the "send" or "submit" button in an application program.
            In any case, it is specifically not intended to convey the time that the message is actually transported,
            but rather the time at which the human or other creator of the message has put the message into its final form, 
            ready for transport.
            (For example, a portable computer user who is not connected to a network might queue a message for delivery.
            The origination date is intended to contain the date and time that the user queued the message, 
            not the time when the user connected to the network to send the message.)
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.From">
            <summary>
            Gets the From property.
            </summary>
            <value>
            The from field.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Headers">
            <summary>
            Gets the Headers of the E-Mail message.
            </summary>
            <value>
            The headers.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Size">
            <summary>
            Gets the size of the E-Mail message.
            </summary>
            <value>
            The size  of the E-Mail message.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.ReplyTo">
            <summary>
            Gets the ReplyTo of the E-Mail message.
            </summary>
            <value>
            The reply to.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Sender">
            <summary>
            Gets the Sender of the E-Mail message.
            </summary>
            <value>
            The sender.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.SequenceNumber">
            <summary>
            Gets the Sequence Number of the E-Mail message.
            </summary>
            <value>
            The sequence number.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Subject">
            <summary>
            Gets the Subject of the E-Mail message.
            </summary>
            <value>
            The subject of the E-Mail message.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.To">
            <summary>
            Gets the receiptants of the E-Mail message.
            </summary>
            <value>
            The receiptants of the E-Mail message.
            </value>
        </member>
        <member name="P:Aspose.Email.Clients.Pop3.Pop3MessageInfo.UniqueId">
            <summary>
            Gets the Unique Id of the E-Mail message.
            </summary>
            <value>
            The unique id.
            </value>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.ClearUid">
            <summary>
            Clears the uid.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.ClearSequence">
            <summary>
            Clears the sequence.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.ClearSize">
            <summary>
            Clears the size.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.SetHeaders(Aspose.Email.MailMessage)">
            <summary>
            Sets the headers.
            </summary>
            <param name="m">The message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.SetUid(System.String)">
            <summary>
            Sets the uid.
            </summary>
            <param name="p">The uid string.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.SetSize(System.Int64)">
            <summary>
            Sets the size.
            </summary>
            <param name="p">The size of message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.SetSequence(System.Int32)">
            <summary>
            Sets the sequence.
            </summary>
            <param name="p">The sequence number.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfo.Dispose">
            <summary>
            Performs tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Pop3.Pop3MessageInfoCollection">
            <summary>
            Represents the information of a mail message from Pop3 server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3MessageInfoCollection.#ctor">
            <summary>
            Initializes a new instance of the Pop3MessageInfoCollection class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Pop3.Pop3ReplyLineInfo.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.Commands.MailCommand">
            <summary/>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.NamespaceDoc">
            <summary>
            The <b>Aspose.Email.Clients.Smtp</b> namespace provides classes for sending messages by using the Simple Mail Transfer Protocol (SMTP).
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.MailMessageEventArgs">
            <summary>
            Provides data for the MessageSending and MessageSent events.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.MailMessageEventArgs.message">
            <summary>
            The sending message.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.MailMessageEventArgs.#ctor(Aspose.Email.MailMessage)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.MailMessageEventArgs"/> class.
            </summary>
            <param name="message">The message.</param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.MailMessageEventArgs.Message">
            <summary>
            Gets the sending message.
            </summary>
            <value>The MailMessage.</value>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpClient">
            <summary>
            Allows applications to send messages by using the Simple Mail Transfer Protocol (SMTP).
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,System.String,Aspose.Email.MailMessage)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipient of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,System.String,Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,System.String,Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,System.String,Aspose.Email.MailMessage)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,System.String,Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,System.String,Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginForward(System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins forward email asynchronously.
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>        
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.EndForward(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(Aspose.Email.Clients.IConnection,System.String,System.String,Aspose.Email.MailMessage)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipient of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(System.String,System.String,Aspose.Email.MailMessage)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipient">Recipient of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(System.String,Aspose.Email.MailAddressCollection,Aspose.Email.MailMessage)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="message">The message for a forwarding.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(Aspose.Email.Clients.IConnection,System.String,Aspose.Email.MailAddressCollection,System.IO.Stream)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="messageStream">The stream that represents message in eml format.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Forward(System.String,Aspose.Email.MailAddressCollection,System.IO.Stream)">
            <summary>
            Forwards specified message to recipient
            </summary>
            <param name="sender">Sender of the forwarded message.</param>
            <param name="recipients">Recipients of the forwarded message.</param>
            <param name="messageStream">The stream that represents message in eml format.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="message">Represents an e-mail message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="message">Represents an e-mail message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="message">Represents an e-mail message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.String,System.String,System.String,System.String)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.String,System.String,System.String,System.String,System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage[])">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage})">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.MailMessage)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="message">Represents an e-mail message</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.MailMessage,System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="message">Represents an e-mail message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.MailMessage,System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="message">Represents an e-mail message</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.String,System.String,System.String,System.String)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.String,System.String,System.String,System.String,System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.MailMessage[])">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage})">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs})">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs},System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs},System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs})">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs},System.AsyncCallback)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginSend(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage},System.EventHandler{Aspose.Email.Clients.Smtp.MailMessageEventArgs},System.AsyncCallback,System.Object)">
            <summary>
            Begins sending email asynchronously.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
            <param name="messageSentDelegate">References a method to be called when a message has been sent.</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns> <see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.EndSend(System.IAsyncResult)">
            <summary>
            Waits for the asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(System.String,System.String,System.String,System.String)">
            <summary>
            Creates and sends the specified message.
            </summary>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.MailMessage)">
            <summary>
            Send the specified message.
            </summary>
            <param name="message">The MailMessage that represents an email-message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.MailMessage[])">
            <summary>
            Send the specified message.
            </summary>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.MailMessageCollection)">
            <summary>
            Send the specified message collection.
            </summary>
            <param name="messages">The collection of messages.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage})">
            <summary>
            Send the specified messages.
            </summary>
            <param name="messages">The IEnumerator that supports a message iteration.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.Clients.IConnection,System.String,System.String,System.String,System.String)">
            <summary>
            Creates and sends the specified message.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="from">A String that contains the address of message sender.</param>
            <param name="recipients">A String that contains the address of recipients.</param>
            <param name="subject">A subject of message.</param>
            <param name="body">A body of message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage)">
            <summary>
            Send the specified message.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="message">The MailMessage that represents an email-message.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessage[])">
            <summary>
            Send the specified message.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The array of MailMessage that represents an email-messages to send.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.Clients.IConnection,Aspose.Email.MailMessageCollection)">
            <summary>
            Send the specified message collection.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The collection of messages.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Send(Aspose.Email.Clients.IConnection,System.Collections.Generic.IEnumerable{Aspose.Email.MailMessage})">
            <summary>
            Send the specified messages.
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="messages">The IEnumerator that supports a message iteration.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop(Aspose.Email.Clients.IConnection)">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <param name="iConnection">Connection to a server</param>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop(Aspose.Email.Clients.IConnection,System.AsyncCallback)">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop(Aspose.Email.Clients.IConnection,System.AsyncCallback,System.Object)">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <param name="iConnection">Connection to a server</param>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop(System.AsyncCallback)">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.BeginNoop(System.AsyncCallback,System.Object)">
            <summary>
            Begins to execute 'No operation' command
            </summary>
            <param name="callback">References a method to be called when a corresponding asynchronous operation completes.</param>
            <param name="state">The state.</param>
            <returns><see cref="T:System.IAsyncResult"/> that represents the status of an asynchronous operation.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.EndNoop(System.IAsyncResult)">
            <summary>
            Waits for the pending asynchronous operation to complete.
            </summary>
            <param name="asyncResult">The reference to the pending asynchronous request to wait for.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Noop(Aspose.Email.Clients.IConnection)">
            <summary>
            'No operation' command
            </summary>
            <param name="iConnection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Noop">
            <summary>
            'No operation' command
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Noop(Aspose.Email.Clients.Base.Connection)">
            <summary>
            'No operation' command
            </summary>
            <param name="connection">Connection to a server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.Configuration.Configuration)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class 
            by using configuration file settings.
            </summary>
            <param name="configuration">
            The configuration.
            </param>
            <remarks>
            Initializes the Host, Port, Username, Password properties for the new SmtpClient.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,System.String,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="password">The password.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,System.String,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="authInfo">The user password or XOAUTH2 access token</param>
            <param name="useOAuth">Defines whether SASL XOAUTH2 mechanism is used to login to the server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,System.String,System.Boolean,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="authInfo">The user password or XOAUTH2 access token</param>
            <param name="useOAuth">Defines whether SASL XOAUTH2 mechanism is used to login to the server</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,System.String,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="authInfo">The user password or XOAUTH2 access token</param>
            <param name="useOAuth">Defines whether SASL XOAUTH2 mechanism is used to login to the server</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,System.String,System.Boolean,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="authInfo">The user password or XOAUTH2 access token</param>
            <param name="useOAuth">Defines whether SASL XOAUTH2 mechanism is used to login to the server</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,Aspose.Email.Clients.ITokenProvider)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.String,Aspose.Email.Clients.ITokenProvider,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,Aspose.Email.Clients.ITokenProvider)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.#ctor(System.String,System.Int32,System.String,Aspose.Email.Clients.ITokenProvider,Aspose.Email.Clients.SecurityOptions)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpClient"/> class.
            </summary>
            <param name="host">The name of the host used for SMTP.</param>
            <param name="port">The port used for SMTP.</param>
            <param name="username">The username.</param>
            <param name="tokenProvider">TokenProvider allowing to retrieve access token.</param>
            <param name="securityOptions">Security mode for a mail client</param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.DefaultPort">
            <summary>
            Gets default port for client
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.Initialize">
            <summary>
            Initializes a mail client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.HelloMessage">
            <summary>
            Gets or sets a HELO/EHLO string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.DeliveryMethod">
            <summary>
            Gets or sets the delivery method.
            </summary>
            <value>An SmtpDeliveryMethod that indicates how messages are delivered.</value>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.PickupDirectoryLocation">
            <summary>
            Gets or sets the directory where applications save mail messages to be processed by the local SMTP server.
            Please note: only absolute path is allowed.
            </summary>
            <value>A String that represents the pickup directory</value>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.AuthenticationMethod">
            <summary>
            Gets or sets the authentication method.
            </summary>
            <value>A SmtpAuthentication that represents the authentication method.</value>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.Encoding">
            <summary>
            Gets or sets the encoding.
            </summary>
            <value>The encoding.</value>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.UseDefaultCredentials">
            <summary>
            Gets or sets a Boolean value that controls whether the DefaultCredentials are sent with requests.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpClient.UseTnef">
            <summary>
            Gets or sets a boolean value that controls whether the messages are sent in TNEF format.
            Note, that now message is sent in TNEF format when being loaded a message contains tnef.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpClient.retrieveSettingsFromConfig(System.Configuration.Configuration)">
            <summary>
            Retrieves the settings from configuration file.
            </summary>
            <param name="configuration">
            The configuration.
            </param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpConnectionPool.ProtocolType">
            <summary>
            Gets protocol name
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpConnectionPool.CreateConnection(System.Int32)">
            
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpConnectionPool.HelloMessage">
            <summary>
            Gets or sets a HELO/EHLO string.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.IMailTransferAgent">
            <summary>
            Provides the base interface for mail transfer agents.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.IMailTransferAgent.Send(Aspose.Email.MailMessage)">
            <summary>
            Send an Email message.
            </summary>
            <param name="message">The Email message.</param>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpAuthentication">
            <summary>
            Represents the SMTP authentication supported by the SMTP server.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpAuthentication.Equals(System.Object)">
            <summary>
            Checks equality of this object and operand.
            </summary>
            <param name="obj">Object to compare</param>
            <returns>Returns a boolean indicating if the passed in object obj is Equal to this.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpAuthentication.GetHashCode">
            <summary>
            Returns the hash code for this instance.
            </summary>
            <returns> The hash code for this instance. </returns>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpAuthentication.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.CramMD5">
            <summary>
            CRAM-MD5 authorization protocol
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.DigestMD5">
            <summary>
            DIGEST-MD5 authorization protocol
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.Plain">
            <summary>
            PLAIN authorization (Uses Base64 encoding.)
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.Login">
            <summary>
            LOGIN authorization (Uses Base64 encoding.)
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.None">
            <summary>
            Without authorization 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.Ntlm">
            <summary>
            NTLM authorization protocol
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.Auto">
            <summary>
            Automatic selection of authorization protocol
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpAuthentication.XOAuth2">
            <summary>
            OAuth 2.0 authorization protocol
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpReplyLineInfo.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpConnection.Protocol">
            <summary>
            Returns protocol name
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpDeliveryMethod">
            <summary>
            Smtp delivery method
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpDeliveryMethod.Network">
            <summary>
            Transporting messages through the network
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpDeliveryMethod.SpecifiedPickupDirectory">
            <summary>
            Transporting messages through the specified directory
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpDeliveryMethod.PickupDirectoryFromIis">
            <summary>
            Transporting messages through the specified IIS directory
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpException">
            <summary>
            Represents the exception that is thrown when the SmtpClient is not able to complete an operation.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(Aspose.Email.Clients.Smtp.SmtpStatusCode)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="statusCode">Smtp status code</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(Aspose.Email.Clients.Smtp.SmtpStatusCode,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="statusCode">Smtp status code</param>
            <param name="message">Error message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="message">Error message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="innerException">
            The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. 
            </param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(Aspose.Email.Clients.Smtp.SmtpStatusCode,System.String,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="statusCode">Smtp status code</param>
            <param name="serverMessage">Server message</param>
            <param name="serverResponse">Server response</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpException.#ctor(System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="serverResponse">Server response</param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpException.StatusCode">
            <summary>
            Smtp status code
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException">
            <summary>
            Represents the exception which arises when the specified recipient is wrong
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
            <param name="message">Error message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor(System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="innerException">
            The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. 
            </param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor(Aspose.Email.Clients.Smtp.SmtpStatusCode,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
            <param name="statusCode">Status code</param>
            <param name="failedRecipient">Failed recipient</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor(Aspose.Email.Clients.Smtp.SmtpStatusCode,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
            <param name="statusCode">Status code</param>
            <param name="failedRecipient">Failed recipient</param>
            <param name="serverResponse">Server response</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.#ctor(System.String,System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="failedRecipient">Failed recipient</param>
            <param name="innerException">
            The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. 
            </param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpFailedRecipientException.FailedRecipient">
            <summary>
            Failed recipient
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException">
            <summary> 
            Summary description for SmtpFailedRecipientsException.
            </summary> 
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException"/> class
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException"/> class
            </summary>
            <param name="message">Error message</param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.#ctor(System.String,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="innerException">
            The exception that is the cause of the current exception, or a null reference (Nothing in Visual Basic) if no inner exception is specified. 
            </param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.#ctor(System.String,Aspose.Email.Clients.Smtp.SmtpFailedRecipientException[])">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException"/> class
            </summary>
            <param name="message">Error message</param>
            <param name="innerExceptions"> The list of exceptions that is the cause of the current exception.  </param>
        </member>
        <member name="M:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.#ctor(System.Collections.Generic.List{Aspose.Email.Clients.Smtp.SmtpFailedRecipientException},System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException"/> class
            </summary>
            <param name="innerExceptions"> The list of exceptions that is the cause of the current exception.  </param>
            <param name="allFailed">Specifies type of error message</param>
        </member>
        <member name="P:Aspose.Email.Clients.Smtp.SmtpFailedRecipientsException.InnerExceptions">
            <summary>
            Array of inner exceptions
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Smtp.SmtpStatusCode">
            <summary>
            Smtp status codes
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.NotDefined">
            <summary>
            Not defined
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.GeneralFailure">
            <summary>
            General failure
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.SystemStatus">
            <summary>
            System status, or system help reply.
            A SMTP status 211 is a message that gives details about the Mail Server status. 
            In the case of a System Help reply, it is a message to the user requesting help information. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.HelpMessage">
            <summary>
            A help message for a human reader will follow. 
            SMTP 214 is usually provided as a response to the “HELP” command. 
            A user will usually receive this as a displays of information about the mail server and it will most likely be in the form of a link to the FAQ page of THAT particular SMTP software that is running on the mail server.
            Due to the nature of this error and how the email server responds, it is normally called a reply, as in SMTP Reply 214.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.ServiceReady">
            <summary>
            SMTP Service ready.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.ServiceClosingTransmissionChannel">
            <summary>
             Service closing transmission channel
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.AuthenticationSucceeded">
            <summary>
            Authentication Succeeded
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.Ok">
            <summary>
             Requested action taken and completed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.UserNotLocalWillForward">
            <summary>
            The recipient is not local to the server, but the server will accept and forward the message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.CannotVerifyUserWillAttemptDelivery">
            <summary>
             The recipient cannot be VRFYed, but the server accepts the message and attempts delivery.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.Base64Response">
            <summary>
            Text part containing the [BASE64] encoded string
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.StartMailInput">
            <summary>
            Start message input and end with. This indicates that the server is ready to accept the message itself
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.ServiceNotAvailable">
            <summary>
            The service is not available and the connection will be closed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.PasswordTransitionNeeded">
            <summary>
            A password transition is needed
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.MailboxBusy">
            <summary>
            The requested command failed because the user’s mailbox was unavailable (such as being full). Try again later.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.LocalErrorInProcessing">
            <summary>
            The command has been aborted due to a server error. (on their side)
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.InsufficientStorage">
            <summary>
             The command has been aborted because the server has insufficient system storage.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.ClientNotPermitted">
            <summary>
            Client does not have permission.
            TLS not available due to temporary reason. 
            Encryption required for requested authentication mechanism.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.CommandUnrecognized">
            <summary>
            The server could not recognize the command due to a syntax error.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.SyntaxError">
            <summary>
             A syntax error was encountered in command arguments.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.CommandNotImplemented">
            <summary>
            This command is not implemented.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.CommandNotPermitted">
            <summary>
            Сommand is not permitted during a mail transaction
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.UnrecognizedAuthenticationType">
            <summary>
            Unrecognized authentication type
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.AuthenticationRequired">
            <summary>
            The SMTP server requires a secure connection or the client was not authenticated.
            But sometimes it's about the recipient's server blacklisting yours, or an invalid email address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.AuthenticationMechanismIsToWeak">
            <summary>
            Authentication mechanism is to weak
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.CredentialsInvalid">
            <summary>
            Authentication credentials invalid
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.EncryptionRequiredRequestedMechanism">
            <summary>
            Encryption required for requested authentication mechanism
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.MailboxUnavailable">
            <summary>
            It usually defines a non-existent email address on the remote side.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.UserNotLocalTryAlternatePath">
            <summary>
            "User not local or invalid address – Relay denied". 
            Meaning, if both your address and the recipient's are not locally hosted by the server, a relay can be interrupted.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.ExceededStorageAllocation">
            <summary>
            "Requested mail actions aborted – Exceeded storage allocation": simply put, the recipient's mailbox has exceeded its limits.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.MailboxNameNotAllowed">
            <summary>
            "Requested action not taken – Mailbox name invalid". 
            That is, there's an incorrect email address into the recipients line.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Smtp.SmtpStatusCode.TransactionFailed">
            <summary>
            This means that the transaction has failed. 
            It's a permanent error and the server will not try to send the message again.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationToken.None">
            <summary> 
            Returns an empty CancellationToken value.
            </summary> 
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationToken.#ctor(Aspose.Email.Clients.Threading.CancellationTokenSource)">
            <summary> 
            Internal constructor only a CancellationTokenSource should create a CancellationToken
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationToken.IsCancellationRequested">
            <summary>
            Gets whether cancellation has been requested for this token. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationToken.CanBeCanceled">
            <summary>
            Gets whether this token is capable of being in the canceled state.
            </summary>  
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationToken.WaitHandle">
            <summary> 
            Gets a <see cref="P:Aspose.Email.Clients.Threading.CancellationToken.WaitHandle"/> that is signaled when the token is canceled.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationToken.ThrowIfCancellationRequested">
            <summary>
            Throws a System.OperationCanceledException if this token has had cancellation requested.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationToken.Register(Aspose.Email.Clients.Base.Action)">
            <summary>
            Registers a delegate that will be called when this <see cref="T:CancellationToken">CancellationToken</see> is canceled.
            </summary> 
            <param name="callback">The delegate to be executed when the <see cref="T:CancellationToken">CancellationToken</see> is canceled.</param> 
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationTokenSource.#ctor">
            <summary>
            Initializes the <see cref="T:CancellationTokenSource"/>.
            </summary> 
        </member>
        <member name="E:Aspose.Email.Clients.Threading.CancellationTokenSource.CancelationEvent">
            <summary>
            Rises when cancellation happens
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationTokenSource.IsCancellationRequested">
            <summary>
            Gets whether cancellation has been requested
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationTokenSource.CanBeCanceled">
            <summary>
            Gets whether cancellation is capable of being in the canceled state.
            </summary>  
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationTokenSource.WaitHandle">
            <summary> 
            Gets a <see cref="P:Aspose.Email.Clients.Threading.CancellationTokenSource.WaitHandle"/> that is signaled when the token is canceled.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationTokenSource.Token">
            <summary>
            Gets the <see cref="T:Aspose.Email.Clients.Threading.CancellationToken">CancellationToken</see> 
            associated with this <see cref="T:Aspose.Email.Clients.Threading.CancellationTokenSource"/>. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationTokenSource.Cancel">
            <summary>
            Communicates a request for cancellation. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.CancellationTokenSource.IsDisposed">
            <summary>
            Gets value that indicates whether object is disposed.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.CancellationTokenSource.Dispose">
            <summary> 
            Releases the resources used by this <see cref="T:CancellationTokenSource" />.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Threading.Task">
            <summary>
            Represents an asynchronous operation.
            Implemented to provide compatibility .NET 2.0 and .NET Core
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action)">
            <summary>
            Initializes a new Task with the specified action.
            </summary>
            <param name="action">The delegate that represents the code to execute in the Task.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action,Aspose.Email.Clients.Threading.CancellationToken)">
            <summary>
            Initializes a new Task with the specified action and CancellationToken.
            </summary>
            <param name="action">The delegate that represents the code to execute in the Task.</param>
            <param name="cancellationToken">The CancellationToken that the new Task will observe.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action,Aspose.Email.Clients.Threading.TaskCreationOptions)">
            <summary>
            Initializes a new Task with the specified action and creation options.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="creationOptions">The TaskCreationOptions used to customize the Task's behavior.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action,Aspose.Email.Clients.Threading.CancellationToken,Aspose.Email.Clients.Threading.TaskCreationOptions)">
            <summary>
            Initializes a new Task with the specified action and creation options.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="cancellationToken">The Task.CancellationToken that the new task will observe.</param>
            <param name="creationOptions">The TaskCreationOptions used to customize the Task's behavior.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action{System.Object},System.Object)">
            <summary>
            Initializes a new Task with the specified action and state.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="state">An object representing data to be used by the action.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action{System.Object},System.Object,Aspose.Email.Clients.Threading.CancellationToken)">
            <summary>
            Initializes a new Task with the specified action, state, and options.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="state">An object representing data to be used by the action.</param>
            <param name="cancellationToken">The Task.CancellationToken that that the new task will observe.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action{System.Object},System.Object,Aspose.Email.Clients.Threading.TaskCreationOptions)">
            <summary>
            Initializes a new Task with the specified action, state, and options.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="state">An object representing data to be used by the action.</param>
            <param name="creationOptions">The TaskCreationOptions used to customize the Task's behavior.</param>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.#ctor(Aspose.Email.Clients.Base.Action{System.Object},System.Object,Aspose.Email.Clients.Threading.CancellationToken,Aspose.Email.Clients.Threading.TaskCreationOptions)">
            <summary>
            Initializes a new Task with the specified action, state, and options.
            </summary>
            <param name="action">The delegate that represents the code to execute in the task.</param>
            <param name="state">An object representing data to be used by the action.</param>
            <param name="cancellationToken">The Task.CancellationToken that that the new task will observe..</param>
            <param name="creationOptions">The TaskCreationOptions used to customize the Task's behavior.</param>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.CancellationToken">
            <summary> 
            This internal property provides access to the CancellationToken that was set on the task when it was constructed. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.Status">
            <summary>
            Gets the TaskStatus of this Task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.CreationOptions">
            <summary>
            Gets the TaskCreationOptions used to create this task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.Exception">
            <summary>
            Gets the System.Exception that caused the Task to end prematurely. 
            If the Task completed successfully or has not yet thrown any exceptions, this will return null.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.Id">
            <summary>
            Gets a unique ID for this Task instance.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.IsCanceled">
            <summary>
            Gets whether this Task instance has completed execution due to being canceled.
            true if the task has completed due to being canceled; otherwise false.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.IsCompleted">
            <summary>
            Gets whether this Task has completed.
            true if the task has completed; otherwise false.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.IsFaulted">
            <summary>
            Gets whether the Task completed due to an unhandled exception.
            true if the task has thrown an unhandled exception; otherwise false.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.Start">
            <summary>
            Starts the Task, scheduling it for execution to the current TaskScheduler.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.Dispose">
            <summary>
            Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.Wait">
            <summary>
            Waits for the Task to complete execution.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.Wait(System.TimeSpan)">
            <summary>
            Waits for the Task to complete execution.
            </summary>
            <param name="timeout">
            A System.TimeSpan that represents the number of milliseconds to wait, or a System.TimeSpan that represents -1 milliseconds to wait indefinitely.
            </param>
            <returns>true if the Task completed execution within the allotted time; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.Threading.Task.Wait(System.Int32)">
            <summary>
            Waits for the Task to complete execution.
            </summary>
            <param name="millisecondsTimeout">The number of milliseconds to wait, or Timeout.Infinite (-1) to wait indefinitely.</param>
            <returns>true if the Task completed execution within the allotted time; otherwise, false.</returns>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.AsyncState">
            <summary>
            Gets a user-defined object that qualifies or contains information about an asynchronous operation.
            Returns: A user-defined object that qualifies or contains information about an asynchronous operation. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.AsyncWaitHandle">
            <summary>
            Gets a System.Threading.WaitHandle that is used to wait for an asynchronous operation to complete.
            Returns: A System.Threading.WaitHandle that is used to wait for an asynchronous operation to complete.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.Task.CompletedSynchronously">
            <summary>
            Gets a value that indicates whether the asynchronous operation completed synchronously.
            Returns: true if the asynchronous operation completed synchronously; otherwise, false.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskCreationOptions.None">
            <summary>
            Specifies that the default behavior should be used.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskCreationOptions.PreferFairness">
            <summary>
            A hint to a System.Threading.Tasks.TaskScheduler to schedule a task in as fair a manner as possible, 
            meaning that tasks scheduled sooner will be more likely to be run sooner, 
            and tasks scheduled later will be more likely to be run later.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskCreationOptions.LongRunning">
            <summary>
            Specifies that a task will be a long-running, coarse-grained operation. 
            It provides a hint to the System.Threading.Tasks.TaskScheduler that oversubscription may be warranted.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskCreationOptions.AttachedToParent">
            <summary>
            Specifies that a task is attached to a parent in the task hierarchy.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.Created">
            <summary>
            The task has been initialized but has not yet been scheduled.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.WaitingForActivation">
            <summary>
            The task is waiting to be activated and scheduled internally by the .NET Framework infrastructure.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.WaitingToRun">
            <summary>
            The task has been scheduled for execution but has not yet begun executing.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.Running">
            <summary>
            The task is running but has not yet completed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.WaitingForChildrenToComplete">
            <summary>
            The task has finished executing and is implicitly waiting for attached child tasks to complete.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.RanToCompletion">
            <summary>
            The task completed execution successfully.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.Canceled">
            <summary>
            The task acknowledged cancellation by throwing an OperationCanceledException with its own CancellationToken while the token was in signaled state, 
            or the task's CancellationToken was already signaled before the task started executing. For more information, see Task Cancellation.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.Threading.TaskStatus.Faulted">
            <summary>
            The task completed due to an unhandled exception.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.Threading.ThreadTimer">
            <summary>
            System.Timers.Timer and System.Threading.Timer use ThreadPool for event callback. 
            It may lead to the problem when callback delegate may be executed much later in case if ThreadPool is overloaded with big quantity of invocations.
            This class is created to avoid this problem.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.Threading.ThreadTimer.Timeout">
            <summary>
            Timeout in milliseconds
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.BaseCommand">
            <summary>
            Defines a base command.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.BaseCommand.OnCanExecuteChanged">
            <summary>
            Executes CanExecuteChanged event
            </summary>
        </member>
        <member name="E:Aspose.Email.Clients.BaseCommand.CanExecuteChanged">
            <summary>
            Occurs when changes occur that affect whether or not the command should execute.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.BaseCommand.CanExecute">
            <summary>
            Defines the operator that determines whether the command can execute in its current state.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.BaseCommand.Execute">
            <summary>
            Defines the method to be called when the command is invoked.
            Method will be invoked taking in account CanExecute property.
            </summary>
            <returns>Returns next command to execute. By default returns itself.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.BaseCommand.executingOperation">
            <summary>
            Defines the method to be called when the command is invoked.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.BaseCommand.Dispose">
            <summary>
            Performs tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.CommandStatus">
            <summary>
            Indicates the result of an operation. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.CommandStatus.statusCodefield">
            <summary>
            Contains status code
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.CommandStatus.descriptionfield">
            <summary>
            Contains status description
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CommandStatus.#ctor(System.Int32,System.String)">
            <summary>
            Initializes a new instance of the Status class.
            </summary>
            <param name="statusCode">Contains status code</param>
            <param name="description">Contains status description</param>
        </member>
        <member name="P:Aspose.Email.Clients.CommandStatus.Description">
            <summary>
            Contains status description
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.CommandStatus.StatusCode">
            <summary>
            Contains status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.CommandStatus.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.CommandStatus.GetHashCode">
            <summary>
            Serves as a hash function for a particular type.
            </summary>
            <returns>A hash code for the current Object.</returns>
        </member>
        <member name="M:Aspose.Email.Clients.CommandStatus.Equals(System.Object)">
            <summary>
            Determines whether the specified object is equal to the current object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified object is equal to the current object; otherwise, false.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.AsyncCommandResultEventArgs">
            <summary>
            <see cref="T:Aspose.Email.Clients.AsyncCommandResultEventArgs"/> is containing event data.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.AsyncCommandResultEventArgs.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.AsyncCommandResultEventArgs"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.AsyncCommandResultEventArgs.#ctor(Aspose.Email.Clients.AsyncCommandResults)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.AsyncCommandResultEventArgs"/> class.
            </summary>
            <param name="result">Contains operation result</param>
        </member>
        <member name="M:Aspose.Email.Clients.AsyncCommandResultEventArgs.#ctor(Aspose.Email.Clients.AsyncCommandResults,System.Exception)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.AsyncCommandResultEventArgs"/> class.
            </summary>
            <param name="result">Contains operation state</param>
            <param name="error">Contains operation error</param>
        </member>
        <member name="P:Aspose.Email.Clients.AsyncCommandResultEventArgs.Result">
            <summary>
            Operation state
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.AsyncCommandResultEventArgs.Error">
            <summary>
            Operation error
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.AsyncCommandResults">
            <summary>
            The result of asynchronous command.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AsyncCommandResults.Undefined">
            <summary>
            Undefined result.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AsyncCommandResults.Successfully">
            <summary>
            Successfully result.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AsyncCommandResults.Failed">
            <summary>
            Failed result.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.AsyncCommandResults.Cancelled">
            <summary>
            The command is Cancelled.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ICommand">
            <summary>
            Defines a command.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ICommand.CanExecute">
            <summary>
            Defines the operator that determines whether the command can execute in its current state.
            </summary>
        </member>
        <member name="E:Aspose.Email.Clients.ICommand.CanExecuteChanged">
            <summary>
            Occurs when changes occur that affect whether or not the command should execute.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ICommand.Execute">
            <summary>
            Defines the method to be called when the command is invoked.
            </summary>
            <returns>Returns next command to execute. By default returns itself.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.NamespaceDoc">
            <summary>
            The <b>Aspose.Email.Clients</b> namespace provides classes to access messages by using mail protocols. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.NamespaceGroupDoc">
            <summary>
            The <b>Aspose.Email.Clients</b> namespace contains classes for work with protocols, such as ActiveSync and SocksProxy.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.BindIPEndPointHandler">
            <summary>
            Use the BindIPEndPointHandler if you need to use a specific local endpoint.
            </summary>
            <param name="remoteEndPoint">Remote endpoint</param>
            <returns><see cref="T:System.Net.IPEndPoint"/> that represents the local endpoint.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.IAsyncResultExt">
            <summary>
            Represents the extended status of an asynchronous operation.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.IAsyncResultExt.IsCanceled">
            <summary>
            Gets a value that indicates whether the asynchronous operation completed synchronously.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.IAsyncResultExt.ErrorInfo">
            <summary>
            Gets a value that represents operation error.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.CompressionType">
            <summary>
            Compression types which are used by mail protocols
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.CompressionType.None">
            <summary>
            Compression is not defined
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.CompressionType.Deflate">
            <summary>
            Deflate algorithm is used
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.PageInfo">
            <summary>
            Contains information about retrieved page when paging methods are used.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.PageInfo.next">
            <summary/>
        </member>
        <member name="M:Aspose.Email.Clients.PageInfo.#ctor(System.Int32,System.Int32)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.PageInfo"/> class
            </summary>
            <param name="itemsPerPage">A number of items in page</param>
            <param name="offset">offset in view of a page</param>
        </member>
        <member name="M:Aspose.Email.Clients.PageInfo.#ctor(System.Int32,System.Int32,System.Int32,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.PageInfo"/> class
            </summary>
            <param name="totalCount">total count of items in view</param>
            <param name="itemsPerPage">A number of items in page</param>
            <param name="offset">offset in view of a page</param>
            <param name="lastPage">Indicates whether current page is last page in view</param>
        </member>
        <member name="M:Aspose.Email.Clients.PageInfo.#ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.PageInfo"/> class
            </summary>
            <param name="totalCount">total count of items in view</param>
            <param name="offset">offset in view of a page</param>
            /// <param name="absoluteOffset">additinal offset added to start index of a page</param>
            <param name="lastPage">Indicates whether current page is last page in view</param>
            <param name="itemsPerPage">A number of items in page</param>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.PageOffset">
            <summary>
            Gets offset of a page
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.AbsoluteOffset">
            <summary>
            Gets additinal offset added to start index of a page
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.LastPage">
            <summary>
            Indicates whether current page is last page in view.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.TotalCount">
            <summary>
            Gets total count of items in view
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.ItemsPerPage">
            <summary>
            A number of items in page
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.PageInfo.NextPage">
            <summary>
            Information of the next page or null if current page is last
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.OAuthNetworkCredential">
            <summary>
            Represents the NetworkCredential for OAuth authentication.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthNetworkCredential.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthNetworkCredential"/> class
            </summary>
            <param name="accessToken">Access token</param>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthNetworkCredential.#ctor(Aspose.Email.Clients.ITokenProvider)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthNetworkCredential"/> class
            </summary>
            <param name="tokenProvider">Token provider</param>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthNetworkCredential.#ctor(System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthNetworkCredential"/> class
            </summary>
            <param name="userName">User name</param>
            <param name="accessToken">Access token</param>
        </member>
        <member name="M:Aspose.Email.Clients.OAuthNetworkCredential.#ctor(System.String,Aspose.Email.Clients.ITokenProvider)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Clients.OAuthNetworkCredential"/> class
            </summary>
            <param name="userName">User name</param>
            <param name="tokenProvider">Token provider</param>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthNetworkCredential.AccessToken">
            <summary>
            Gets OAuth 2.0 access token.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.OAuthNetworkCredential.TokenProvider">
            <summary>
            Gets the token provider.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation">
            <summary>
            Contains user's account information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.AccountId">
            <summary>
            Identifies an account.
            The primary account, as identified by the PrimarySmtpAddress element, does not have an AccountId value.
            The AccountId is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.AccountName">
            <summary>
            Specifies the friendly name for the given account.
            The AccountName value is a string value up to 512 characters in length.
            The AccountName is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.UserDisplayName">
            <summary>
            Specifies the display name of the user associated with the given account. 
            The UserDisplayName value can be up to 512 characters in length.
            The UserDisplayName is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.SendDisabled">
            <summary>
            Specifies whether the client can send messages using the given account.
            The value of the SendDisabled is TRUE if the client cannot send using the given account; otherwise, FALSE.
            The SendDisabled is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.PrimarySmtpAddress">
            <summary>
            Specifies the primary SMTP address for the given account.
            The value of the PrimarySmtpAddress can also be returned as a value for the SMTPAddress.
            The PrimarySmtpAddress is not supported when the protocol version is 12.1 or 14.0.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AccountInformation.SMTPAddresses">
            <summary>
            Specifies one of the user's email addresses.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncAuthenticationType">
            <summary>
            Enum specifies type of authentication
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncAuthenticationType.Basic">
            <summary>
            HTTP basic authentication
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient">
            <summary>
            Basic class for ActiveSync client implementations
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.#cctor">
            <summary>
            Initializes static members of the ActiveSyncTLClient class.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.DefaultTimeout">
            <summary>
            Gets or sets the default timeout value for ActiveSync client instances
            The default value is 100,000 milliseconds (100 seconds).
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.GetInstance(System.String,System.Net.NetworkCredential)">
            <summary>
            Gets an instance of the ActiveSync client
            The version of the ActiveSync protocol is selected automatically according to server response.
            </summary>
            <param name="uri">server uri</param>
            <param name="credentials">user credentials</param>
            <returns>Returns an instance of the ActiveSync client</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.GetInstance(System.String,System.Net.NetworkCredential,Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions)">
            <summary>
            Gets an instance of the ActiveSync client
            </summary>
            <param name="uri">server uri</param>
            <param name="credentials">user credentials</param>
            <param name="version">ActiveSync protocol version</param>
            <returns>Returns an instance of the ActiveSync client</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.GetOptions(System.String,System.Net.NetworkCredential,System.String[]@,System.String[]@)">
            <summary>
            The GetOptions static method is used to discover what protocol versions are supported, and which protocol commands are supported on the server. 
            The client uses the GetOptions static method  to determine whether the server supports the same versions of the protocol that the client supports.
            </summary>
            <param name="uri">The URL of ActiveSync service</param>
            <param name="credentials">Credentials for connecting to the server.</param>
            <param name="supportedServerCommands">Out parameter, returns supported protocol commands</param>
            <param name="supportedServerProtocols">Out parameter, returns supported versions of the protocol</param>
            <returns>Returns latest supported protocol version</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.#ctor(System.String,System.Net.NetworkCredential)">
            <summary>
            Initializes a new instance of the ActiveSyncTLClient class.
            </summary>
            <param name="uri">The URL of ActiveSync service</param>
            <param name="credential">Credentials for connecting to the server.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.#ctor(System.Net.NetworkCredential,System.String)">
            <summary>
            Used by static Autodiscover method only !!!
            Initializes a new instance of the ActiveSyncTLClient class.
            </summary>
            <param name="credential">Credentials for connecting to the server.</param>
            <param name="autodiscoverUri">The URL of autodiscover service</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Uri">
            <summary>
            Gets the URL of ActiveSync service
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.AutodiscoverUri">
            <summary>
            Gets or sets the autodiscover service uri
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Credentials">
            <summary>
            User's credentials for Exchange server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.DeviceID">
            <summary>
            A GUID that identifies the device.
            The device ID is specified by the device-id-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-id ABNF rule, is a string that specifies the device. 
            Each device MUST have a unique device ID string. 
            Each request from the device MUST include the same device ID string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.PolicyState">
            <summary>
            An unsigned integer that indicates the state of policy settings on the client device, 
            as specified in [MS-ASPROV] section 2.2.2.41.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.DeviceType">
            <summary>
            The device type is specified by the device-type-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-type ABNF rule, is any string that specifies a device type. 
            "SP" specifies a SmartPhone and "PPC" specifies a PocketPC. 
            Other client devices send unique strings for their specific device type. 
            Each request from a client device MUST include the same device type string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.UserAgent">
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
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.SupportedServerProtocols">
            <summary>
            Gets the versions of ActiveSync protocols which are supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.SupportedServerCommands">
            <summary>
            Gets the versions of ActiveSync commands which are supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Version">
            <summary>
            Gets the version of the protocol which is used in ActiveSync client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Timeout">
            <summary>
            Gets or sets the number of milliseconds to wait before the operation times out.
            The default value is 100,000 milliseconds (100 seconds).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.AuthenticationType">
            <summary>
            Gets or sets the type of authentication is used by the ActiveSync client.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Autodiscover(System.String,System.Net.NetworkCredential,System.String)">
            <summary>
            The Autodiscover command facilitates the discovery of core account configuration information by using the user's Simple Mail Transfer Protocol (SMTP) address as the primary input. 
            </summary>
            <param name="autodiscoverUri">The URL of autodiscover service</param>
            <param name="credential">Credentials for connecting to the server.</param>
            <param name="emailAddress">The email address is a required child element of the autodiscover request</param>
            <returns>Autodiscover result</returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Autodiscover(System.String)">
            <summary>
            The Autodiscover command facilitates the discovery of core account configuration information by using the user's Simple Mail Transfer Protocol (SMTP) address as the primary input. 
            </summary>
            <param name="emailAddress">The email address is a required child element of the autodiscover request</param>
            <returns>Autodiscover result</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Proxy">
            <summary>
            Gets or sets the proxy.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Dispose">
            <summary>
            Performs tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.ActiveSyncTLClient.Dispose(System.Boolean)">
            <summary>
            Releases unmanaged and - optionally - managed resources.
            </summary>
            <param name="disposing">
            <c>true</c> to release both managed 
            and unmanaged resources; <c>false</c> to release only unmanaged resources.
            </param>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass">
            <summary>
            Identifies the class of the item.
            The following classes are supported for mailbox searches when the protocol version is 12.1: 
                - Email
                - Calendar
                - Contacts
                - Tasks
            The SMS and Notes classes are only available if the protocol version is 14.0 or 14.1.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.Tasks">
            <summary>
            Tasks item class 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.Email">
            <summary>
            Email item class 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.Calendar">
            <summary>
            Calendar item class
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.Contacts">
            <summary>
            Contacts item class 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.SMS">
            <summary>
            SMS item class 
            The SMS class is only available if the protocol version is 14.0 or 14.1.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncClass.Notes">
            <summary>
            Notes item class 
            The Notes class is only available if the protocol version is 14.0 or 14.1.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType">
            <summary>
             Specifies an optional time window for the objects 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.NoFilter">
            <summary>
            No filter- synchronize all items
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.OneDay">
            <summary>
            Specifies 1 day time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.ThreeDays">
            <summary>
            Specifies 3 days time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.OneWeek">
            <summary>
            Specifies 1 week time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.TwoWeeks">
            <summary>
            Specifies 2 weeks time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.OneMonth">
            <summary>
            Specifies 1 month time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.ThreeMonths">
            <summary>
            Specifies 3 months time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.SixMonths">
            <summary>
            Specifies 6 months time window 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.IncompleteTasks">
            <summary>
            Filter by incomplete tasks
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AirsyncFilterType.Any">
            <summary>
            Identifies any email, contact, calendar or task collection results in a Status element value of 103.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AllowBluetooth">
            <summary>
            Specifies the use of Bluetooth on the device.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AllowBluetooth.Disable">
            <summary>
            Disable Bluetooth.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AllowBluetooth.AllowProfilesConfiguration">
            <summary>
            Disable Bluetooth, but allow the configuration of hands-free profiles.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.AllowBluetooth.AllowBluetooth">
            <summary>
            Allow Bluetooth.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions">
            <summary>
            The ASProtocolVersions indicates the versions of the ActiveSync protocol. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions.Unknown">
            <summary>
            Version is unknown
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions.Version_12_1">
            <summary>
            Exchange ActiveSync (EAS) 12.1 version
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions.Version_14">
            <summary>
            Exchange ActiveSync (EAS) 14.0 version
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.ASProtocolVersions.Version_14_1">
            <summary>
            Exchange ActiveSync (EAS) 14.1 version
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult">
            <summary>
            Result of the Autodiscover operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.Culture">
            <summary>
            Specifies the client culture, which is used to localize error messages.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.DisplayName">
            <summary>
            Contains the user's display name in the directory service.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.EMailAddress">
            <summary>
            Contains the SMTP email address of the user and is used to identify the user's mailbox in the network.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.Redirect">
            <summary>
            Specifies the SMTP address of the requested user.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.Servers">
            <summary>
            Contains array of server settings
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.#ctor(System.Globalization.CultureInfo,System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the AutodiscoverResult class.
            </summary>
            <param name="culture">Specifies the client culture, which is used to localize error messages.</param>
            <param name="displayName">Contains the user's display name in the directory service.</param>
            <param name="emailAddress">Contains the SMTP email address of the user and is used to identify the user's mailbox in the network.</param>
            <param name="redirect">Specifies the SMTP address of the requested user.</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.#ctor(System.Globalization.CultureInfo,System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo[])">
            <summary>
            Initializes a new instance of the AutodiscoverResult class.
            </summary>
            <param name="culture">Specifies the client culture, which is used to localize error messages.</param>
            <param name="displayName">Contains the user's display name in the directory service.</param>
            <param name="emailAddress">Contains the SMTP email address of the user and is used to identify the user's mailbox in the network.</param>
            <param name="servers">Contains array of server settings</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.#ctor(System.Globalization.CultureInfo,System.String,System.String,System.String,Aspose.Email.Clients.ActiveSync.TransportLayer.ServerInfo[])">
            <summary>
            Initializes a new instance of the AutodiscoverResult class.
            </summary>
            <param name="culture">Specifies the client culture, which is used to localize error messages.</param>
            <param name="displayName">Contains the user's display name in the directory service.</param>
            <param name="emailAddress">Contains the SMTP email address of the user and is used to identify the user's mailbox in the network.</param>
            <param name="redirect">Specifies the SMTP address of the requested user.</param>
            <param name="servers">Contains array of server settings</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.AutodiscoverResult.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand">
            <summary>
            Base ActiveSync command class. 
            Uses as parent class for all ActiveSync commands.
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the BaseActiveSyncCommand class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.ContentType">
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
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Uri">
            <summary>
            Gets the server uri
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.UserName">
            <summary>
            Gets the user name
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Proxy">
            <summary>
            Gets the proxy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Password">
            <summary>
            Gets the user password
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Credentials">
            <summary>
            User's credentials for Exchange server
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.ASError">
            <summary>
            Returns extra information about EAS error
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.DeviceID">
            <summary>
            A GUID that identifies the device.
            The device ID is specified by the device-id-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-id ABNF rule, is a string that specifies the device. 
            Each device MUST have a unique device ID string. 
            Each request from the device MUST include the same device ID string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.PolicyKey">
            <summary>
            An unsigned integer that indicates the state of policy settings on the client device, 
            as specified in [MS-ASPROV] section 2.2.2.41.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.DeviceType">
            <summary>
            The device type is specified by the device-type-spec ABNF rule portion of the plain text query value. 
            The value, represented by the device-type ABNF rule, is any string that specifies a device type. 
            "SP" specifies a SmartPhone and "PPC" specifies a PocketPC. 
            Other client devices send unique strings for their specific device type. 
            Each request from a client device MUST include the same device type string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Version">
            <summary>
            Gets the version of the protocol which is used in ActiveSync client.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Timeout">
            <summary>
            Gets or sets the number of milliseconds to wait before the operation times out.
            The default value is 100,000 milliseconds (100 seconds).
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.UserAgent">
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
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.CommandName">
            <summary>
            The command name 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.Status">
            <summary>
            Indicates the status of the command operation
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.BaseActiveSyncCommand.WebRequestMethod">
            <summary>
            Represents the types of HTTP protocol methods that can be used with an HTTP request.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover">
            <summary>
            The Autodiscover command facilitates the discovery of core account configuration information by using the user's Simple Mail Transfer Protocol (SMTP) address as the primary input. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.SUCCESS_STATUS">
            <summary>
            Defines the value of success status code
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Autodiscover class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient,System.String)">
            <summary>
            Initializes a new instance of the Autodiscover class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
            <param name="emailAddress">The email address is a required child element of the autodiscover request</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.EmailAddress">
            <summary>
            The email address is a required child element of the autodiscover request
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.Uri">
            <summary>
            The URL of autodiscover service
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Autodiscover.Result">
            <summary>
            Result of the Autodiscover operation
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Options">
            <summary>
            The Options command, is used to discover what protocol versions are supported, and which protocol commands are supported on the server. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Options.#ctor(Aspose.Email.Clients.ActiveSync.TransportLayer.IBaseActiveSyncTLClient)">
            <summary>
            Initializes a new instance of the Options class.
            </summary>
            <param name="client">Instance of the ActiveSync client</param>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Options.SupportedServerProtocols">
            <summary>
            Gets the versions of ActiveSync protocols which are server supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Options.SupportedServerCommands">
            <summary>
            Gets the versions of ActiveSync commands which are server supported
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Commands.Options.CommandCode">
            <summary>
            The numeric code is used in the Command code field of the base64 encoded URI to specify the command.
            For more details, see [MS-ASHTTP] 2.2.1.1.1.1.2 Command Codes.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.BehaviorReplacement">
            <summary>
            Specifies how to resolve the conflict that occurs when an object has been changed on both the client and the server. 
            The value specifies which object—the client object or the server object—to keep if there is a conflict.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.BehaviorReplacement.ClientObjectReplaces">
            <summary>
            Client object replaces server object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Clients.ActiveSync.TransportLayer.BehaviorReplacement.ServerObjectReplaces">
            <summary>
            Server object replaces client object.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.Body">
            <summary>
            Specifies a free-form, variable-length data field associated with a stored item on the server.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Body.Type">
            <summary>
            Specifies the format type of the body content of the item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Body.EstimatedDataSize">
            <summary>
            Specifies an informational estimate of the size of the data associated with the parent element.
            The EstimatedDataSize element SHOULD be presented whenever the Truncated element is set to TRUE
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Body.Truncated">
            <summary>
            Specifies whether the body of the item has been truncated according to the BodyPreference element indicated by the client.
            If the value is TRUE, then the body of the item has been truncated. If the value is FALSE, or Truncated property is not set, then the body of the item has not been truncated.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.Body.Data">
            <summary>
            The content of the Data element is a string in the format that is specified                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 C_PLLI2SM_DIV_47
  *         @arg @ref LL_RCC_PLLI2SM_DIV_48
  *         @arg @ref LL_RCC_PLLI2SM_DIV_49
  *         @arg @ref LL_RCC_PLLI2SM_DIV_50
  *         @arg @ref LL_RCC_PLLI2SM_DIV_51
  *         @arg @ref LL_RCC_PLLI2SM_DIV_52
  *         @arg @ref LL_RCC_PLLI2SM_DIV_53
  *         @arg @ref LL_RCC_PLLI2SM_DIV_54
  *         @arg @ref LL_RCC_PLLI2SM_DIV_55
  *         @arg @ref LL_RCC_PLLI2SM_DIV_56
  *         @arg @ref LL_RCC_PLLI2SM_DIV_57
  *         @arg @ref LL_RCC_PLLI2SM_DIV_58
  *         @arg @ref LL_RCC_PLLI2SM_DIV_59
  *         @arg @ref LL_RCC_PLLI2SM_DIV_60
  *         @arg @ref LL_RCC_PLLI2SM_DIV_61
  *         @arg @ref LL_RCC_PLLI2SM_DIV_62
  *         @arg @ref LL_RCC_PLLI2SM_DIV_63
  * @param  PLLN Between 50/192(*) and 432
  *
  *         (*) value not defined in all devices.
  * @param  PLLR This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SR_DIV_2
  *         @arg @ref LL_RCC_PLLI2SR_DIV_3
  *         @arg @ref LL_RCC_PLLI2SR_DIV_4
  *         @arg @ref LL_RCC_PLLI2SR_DIV_5
  *         @arg @ref LL_RCC_PLLI2SR_DIV_6
  *         @arg @ref LL_RCC_PLLI2SR_DIV_7
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLI2S_ConfigDomain_I2S(uint32_t Source, uint32_t PLLM, uint32_t PLLN, uint32_t PLLR)
{
  __IO uint32_t *pReg = (__IO uint32_t *)((uint32_t)((uint32_t)(&RCC->PLLCFGR) + (Source & 0x80U)));
  MODIFY_REG(*pReg, RCC_PLLCFGR_PLLSRC, (Source & (~0x80U)));
#if defined(RCC_PLLI2SCFGR_PLLI2SM)
  MODIFY_REG(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SM, PLLM);
#else
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLM, PLLM);
#endif /* RCC_PLLI2SCFGR_PLLI2SM */
  MODIFY_REG(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SN | RCC_PLLI2SCFGR_PLLI2SR, PLLN << RCC_PLLI2SCFGR_PLLI2SN_Pos | PLLR);
}

/**
  * @brief  Get I2SPLL multiplication factor for VCO
  * @rmtoll PLLI2SCFGR  PLLI2SN      LL_RCC_PLLI2S_GetN
  * @retval Between 50/192(*) and 432
  *
  *         (*) value not defined in all devices.
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetN(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SN) >> RCC_PLLI2SCFGR_PLLI2SN_Pos);
}

#if defined(RCC_PLLI2SCFGR_PLLI2SQ)
/**
  * @brief  Get I2SPLL division factor for PLLI2SQ
  * @rmtoll PLLI2SCFGR  PLLI2SQ      LL_RCC_PLLI2S_GetQ
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_2
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_3
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_4
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_5
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_6
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_7
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_8
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_9
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_10
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_11
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_12
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_13
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_14
  *         @arg @ref LL_RCC_PLLI2SQ_DIV_15
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetQ(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SQ));
}
#endif /* RCC_PLLI2SCFGR_PLLI2SQ */

/**
  * @brief  Get I2SPLL division factor for PLLI2SR
  * @note used for PLLI2SCLK (I2S clock)
  * @rmtoll PLLI2SCFGR  PLLI2SR      LL_RCC_PLLI2S_GetR
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SR_DIV_2
  *         @arg @ref LL_RCC_PLLI2SR_DIV_3
  *         @arg @ref LL_RCC_PLLI2SR_DIV_4
  *         @arg @ref LL_RCC_PLLI2SR_DIV_5
  *         @arg @ref LL_RCC_PLLI2SR_DIV_6
  *         @arg @ref LL_RCC_PLLI2SR_DIV_7
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetR(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SR));
}

#if defined(RCC_PLLI2SCFGR_PLLI2SP)
/**
  * @brief  Get I2SPLL division factor for PLLI2SP
  * @note used for PLLSPDIFRXCLK (SPDIFRX clock)
  * @rmtoll PLLI2SCFGR  PLLI2SP      LL_RCC_PLLI2S_GetP
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SP_DIV_2
  *         @arg @ref LL_RCC_PLLI2SP_DIV_4
  *         @arg @ref LL_RCC_PLLI2SP_DIV_6
  *         @arg @ref LL_RCC_PLLI2SP_DIV_8
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetP(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SP));
}
#endif /* RCC_PLLI2SCFGR_PLLI2SP */

#if defined(RCC_DCKCFGR_PLLI2SDIVQ)
/**
  * @brief  Get I2SPLL division factor for PLLI2SDIVQ
  * @note used PLLSAICLK selected (SAI clock)
  * @rmtoll DCKCFGR   PLLI2SDIVQ      LL_RCC_PLLI2S_GetDIVQ
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_1
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_2
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_3
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_4
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_5
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_6
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_7
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_8
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_9
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_10
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_11
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_12
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_13
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_14
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_15
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_16
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_17
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_18
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_19
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_20
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_21
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_22
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_23
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_24
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_25
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_26
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_27
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_28
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_29
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_30
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_31
  *         @arg @ref LL_RCC_PLLI2SDIVQ_DIV_32
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetDIVQ(void)
{
  return (uint32_t)(READ_BIT(RCC->DCKCFGR, RCC_DCKCFGR_PLLI2SDIVQ));
}
#endif /* RCC_DCKCFGR_PLLI2SDIVQ */

#if defined(RCC_DCKCFGR_PLLI2SDIVR)
/**
  * @brief  Get I2SPLL division factor for PLLI2SDIVR
  * @note used PLLSAICLK selected (SAI clock)
  * @rmtoll DCKCFGR   PLLI2SDIVR      LL_RCC_PLLI2S_GetDIVR
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_1
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_2
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_3
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_4
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_5
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_6
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_7
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_8
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_9
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_10
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_11
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_12
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_13
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_14
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_15
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_16
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_17
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_18
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_19
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_20
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_21
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_22
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_23
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_24
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_25
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_26
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_27
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_28
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_29
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_30
  *         @arg @ref LL_RCC_PLLI2SDIVR_DIV_31
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetDIVR(void)
{
  return (uint32_t)(READ_BIT(RCC->DCKCFGR, RCC_DCKCFGR_PLLI2SDIVR));
}
#endif /* RCC_DCKCFGR_PLLI2SDIVR */

/**
  * @brief  Get division factor for PLLI2S input clock
  * @rmtoll PLLCFGR      PLLM          LL_RCC_PLLI2S_GetDivider\n
  *         PLLI2SCFGR   PLLI2SM       LL_RCC_PLLI2S_GetDivider
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLI2SM_DIV_2
  *         @arg @ref LL_RCC_PLLI2SM_DIV_3
  *         @arg @ref LL_RCC_PLLI2SM_DIV_4
  *         @arg @ref LL_RCC_PLLI2SM_DIV_5
  *         @arg @ref LL_RCC_PLLI2SM_DIV_6
  *         @arg @ref LL_RCC_PLLI2SM_DIV_7
  *         @arg @ref LL_RCC_PLLI2SM_DIV_8
  *         @arg @ref LL_RCC_PLLI2SM_DIV_9
  *         @arg @ref LL_RCC_PLLI2SM_DIV_10
  *         @arg @ref LL_RCC_PLLI2SM_DIV_11
  *         @arg @ref LL_RCC_PLLI2SM_DIV_12
  *         @arg @ref LL_RCC_PLLI2SM_DIV_13
  *         @arg @ref LL_RCC_PLLI2SM_DIV_14
  *         @arg @ref LL_RCC_PLLI2SM_DIV_15
  *         @arg @ref LL_RCC_PLLI2SM_DIV_16
  *         @arg @ref LL_RCC_PLLI2SM_DIV_17
  *         @arg @ref LL_RCC_PLLI2SM_DIV_18
  *         @arg @ref LL_RCC_PLLI2SM_DIV_19
  *         @arg @ref LL_RCC_PLLI2SM_DIV_20
  *         @arg @ref LL_RCC_PLLI2SM_DIV_21
  *         @arg @ref LL_RCC_PLLI2SM_DIV_22
  *         @arg @ref LL_RCC_PLLI2SM_DIV_23
  *         @arg @ref LL_RCC_PLLI2SM_DIV_24
  *         @arg @ref LL_RCC_PLLI2SM_DIV_25
  *         @arg @ref LL_RCC_PLLI2SM_DIV_26
  *         @arg @ref LL_RCC_PLLI2SM_DIV_27
  *         @arg @ref LL_RCC_PLLI2SM_DIV_28
  *         @arg @ref LL_RCC_PLLI2SM_DIV_29
  *         @arg @ref LL_RCC_PLLI2SM_DIV_30
  *         @arg @ref LL_RCC_PLLI2SM_DIV_31
  *         @arg @ref LL_RCC_PLLI2SM_DIV_32
  *         @arg @ref LL_RCC_PLLI2SM_DIV_33
  *         @arg @ref LL_RCC_PLLI2SM_DIV_34
  *         @arg @ref LL_RCC_PLLI2SM_DIV_35
  *         @arg @ref LL_RCC_PLLI2SM_DIV_36
  *         @arg @ref LL_RCC_PLLI2SM_DIV_37
  *         @arg @ref LL_RCC_PLLI2SM_DIV_38
  *         @arg @ref LL_RCC_PLLI2SM_DIV_39
  *         @arg @ref LL_RCC_PLLI2SM_DIV_40
  *         @arg @ref LL_RCC_PLLI2SM_DIV_41
  *         @arg @ref LL_RCC_PLLI2SM_DIV_42
  *         @arg @ref LL_RCC_PLLI2SM_DIV_43
  *         @arg @ref LL_RCC_PLLI2SM_DIV_44
  *         @arg @ref LL_RCC_PLLI2SM_DIV_45
  *         @arg @ref LL_RCC_PLLI2SM_DIV_46
  *         @arg @ref LL_RCC_PLLI2SM_DIV_47
  *         @arg @ref LL_RCC_PLLI2SM_DIV_48
  *         @arg @ref LL_RCC_PLLI2SM_DIV_49
  *         @arg @ref LL_RCC_PLLI2SM_DIV_50
  *         @arg @ref LL_RCC_PLLI2SM_DIV_51
  *         @arg @ref LL_RCC_PLLI2SM_DIV_52
  *         @arg @ref LL_RCC_PLLI2SM_DIV_53
  *         @arg @ref LL_RCC_PLLI2SM_DIV_54
  *         @arg @ref LL_RCC_PLLI2SM_DIV_55
  *         @arg @ref LL_RCC_PLLI2SM_DIV_56
  *         @arg @ref LL_RCC_PLLI2SM_DIV_57
  *         @arg @ref LL_RCC_PLLI2SM_DIV_58
  *         @arg @ref LL_RCC_PLLI2SM_DIV_59
  *         @arg @ref LL_RCC_PLLI2SM_DIV_60
  *         @arg @ref LL_RCC_PLLI2SM_DIV_61
  *         @arg @ref LL_RCC_PLLI2SM_DIV_62
  *         @arg @ref LL_RCC_PLLI2SM_DIV_63
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetDivider(void)
{
#if defined(RCC_PLLI2SCFGR_PLLI2SM)
  return (uint32_t)(READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SM));
#else
  return (uint32_t)(READ_BIT(RCC->PLLCFGR, RCC_PLLCFGR_PLLM));
#endif /* RCC_PLLI2SCFGR_PLLI2SM */
}

/**
  * @brief  Get the oscillator used as PLL clock source.
  * @rmtoll PLLCFGR      PLLSRC        LL_RCC_PLLI2S_GetMainSource\n
  *         PLLI2SCFGR   PLLI2SSRC     LL_RCC_PLLI2S_GetMainSource
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSOURCE_HSI
  *         @arg @ref LL_RCC_PLLSOURCE_HSE
  *         @arg @ref LL_RCC_PLLI2SSOURCE_PIN (*)
  *
  *         (*) value not defined in all devices.
  */
__STATIC_INLINE uint32_t LL_RCC_PLLI2S_GetMainSource(void)
{
#if defined(RCC_PLLI2SCFGR_PLLI2SSRC)
  uint32_t pllsrc = READ_BIT(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC);
  uint32_t plli2sssrc0 = READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SSRC);
  uint32_t plli2sssrc1 = READ_BIT(RCC->PLLI2SCFGR, RCC_PLLI2SCFGR_PLLI2SSRC) >> 15U;
  return (uint32_t)(pllsrc | plli2sssrc0 | plli2sssrc1);
#else
  return (uint32_t)(READ_BIT(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC));
#endif /* RCC_PLLI2SCFGR_PLLI2SSRC */
}

/**
  * @}
  */
#endif /* RCC_PLLI2S_SUPPORT */

#if defined(RCC_PLLSAI_SUPPORT)
/** @defgroup RCC_LL_EF_PLLSAI PLLSAI
  * @{
  */

/**
  * @brief  Enable PLLSAI
  * @rmtoll CR           PLLSAION     LL_RCC_PLLSAI_Enable
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLSAI_Enable(void)
{
  SET_BIT(RCC->CR, RCC_CR_PLLSAION);
}

/**
  * @brief  Disable PLLSAI
  * @rmtoll CR           PLLSAION     LL_RCC_PLLSAI_Disable
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLSAI_Disable(void)
{
  CLEAR_BIT(RCC->CR, RCC_CR_PLLSAION);
}

/**
  * @brief  Check if PLLSAI Ready
  * @rmtoll CR           PLLSAIRDY    LL_RCC_PLLSAI_IsReady
  * @retval State of bit (1 or 0).
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_IsReady(void)
{
  return (READ_BIT(RCC->CR, RCC_CR_PLLSAIRDY) == (RCC_CR_PLLSAIRDY));
}

/**
  * @brief  Configure PLLSAI used for SAI domain clock
  * @note PLL Source and PLLM Divider can be written only when PLL,
  *       PLLI2S and PLLSAI(*) are disabled
  * @note PLLN/PLLQ can be written only when PLLSAI is disabled
  * @note This can be selected for SAI
  * @rmtoll PLLCFGR      PLLSRC        LL_RCC_PLLSAI_ConfigDomain_SAI\n
  *         PLLCFGR      PLLM          LL_RCC_PLLSAI_ConfigDomain_SAI\n
  *         PLLSAICFGR   PLLSAIM       LL_RCC_PLLSAI_ConfigDomain_SAI\n
  *         PLLSAICFGR   PLLSAIN       LL_RCC_PLLSAI_ConfigDomain_SAI\n
  *         PLLSAICFGR   PLLSAIQ       LL_RCC_PLLSAI_ConfigDomain_SAI\n
  *         DCKCFGR      PLLSAIDIVQ    LL_RCC_PLLSAI_ConfigDomain_SAI
  * @param  Source This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSOURCE_HSI
  *         @arg @ref LL_RCC_PLLSOURCE_HSE
  * @param  PLLM This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIM_DIV_2
  *         @arg @ref LL_RCC_PLLSAIM_DIV_3
  *         @arg @ref LL_RCC_PLLSAIM_DIV_4
  *         @arg @ref LL_RCC_PLLSAIM_DIV_5
  *         @arg @ref LL_RCC_PLLSAIM_DIV_6
  *         @arg @ref LL_RCC_PLLSAIM_DIV_7
  *         @arg @ref LL_RCC_PLLSAIM_DIV_8
  *         @arg @ref LL_RCC_PLLSAIM_DIV_9
  *         @arg @ref LL_RCC_PLLSAIM_DIV_10
  *         @arg @ref LL_RCC_PLLSAIM_DIV_11
  *         @arg @ref LL_RCC_PLLSAIM_DIV_12
  *         @arg @ref LL_RCC_PLLSAIM_DIV_13
  *         @arg @ref LL_RCC_PLLSAIM_DIV_14
  *         @arg @ref LL_RCC_PLLSAIM_DIV_15
  *         @arg @ref LL_RCC_PLLSAIM_DIV_16
  *         @arg @ref LL_RCC_PLLSAIM_DIV_17
  *         @arg @ref LL_RCC_PLLSAIM_DIV_18
  *         @arg @ref LL_RCC_PLLSAIM_DIV_19
  *         @arg @ref LL_RCC_PLLSAIM_DIV_20
  *         @arg @ref LL_RCC_PLLSAIM_DIV_21
  *         @arg @ref LL_RCC_PLLSAIM_DIV_22
  *         @arg @ref LL_RCC_PLLSAIM_DIV_23
  *         @arg @ref LL_RCC_PLLSAIM_DIV_24
  *         @arg @ref LL_RCC_PLLSAIM_DIV_25
  *         @arg @ref LL_RCC_PLLSAIM_DIV_26
  *         @arg @ref LL_RCC_PLLSAIM_DIV_27
  *         @arg @ref LL_RCC_PLLSAIM_DIV_28
  *         @arg @ref LL_RCC_PLLSAIM_DIV_29
  *         @arg @ref LL_RCC_PLLSAIM_DIV_30
  *         @arg @ref LL_RCC_PLLSAIM_DIV_31
  *         @arg @ref LL_RCC_PLLSAIM_DIV_32
  *         @arg @ref LL_RCC_PLLSAIM_DIV_33
  *         @arg @ref LL_RCC_PLLSAIM_DIV_34
  *         @arg @ref LL_RCC_PLLSAIM_DIV_35
  *         @arg @ref LL_RCC_PLLSAIM_DIV_36
  *         @arg @ref LL_RCC_PLLSAIM_DIV_37
  *         @arg @ref LL_RCC_PLLSAIM_DIV_38
  *         @arg @ref LL_RCC_PLLSAIM_DIV_39
  *         @arg @ref LL_RCC_PLLSAIM_DIV_40
  *         @arg @ref LL_RCC_PLLSAIM_DIV_41
  *         @arg @ref LL_RCC_PLLSAIM_DIV_42
  *         @arg @ref LL_RCC_PLLSAIM_DIV_43
  *         @arg @ref LL_RCC_PLLSAIM_DIV_44
  *         @arg @ref LL_RCC_PLLSAIM_DIV_45
  *         @arg @ref LL_RCC_PLLSAIM_DIV_46
  *         @arg @ref LL_RCC_PLLSAIM_DIV_47
  *         @arg @ref LL_RCC_PLLSAIM_DIV_48
  *         @arg @ref LL_RCC_PLLSAIM_DIV_49
  *         @arg @ref LL_RCC_PLLSAIM_DIV_50
  *         @arg @ref LL_RCC_PLLSAIM_DIV_51
  *         @arg @ref LL_RCC_PLLSAIM_DIV_52
  *         @arg @ref LL_RCC_PLLSAIM_DIV_53
  *         @arg @ref LL_RCC_PLLSAIM_DIV_54
  *         @arg @ref LL_RCC_PLLSAIM_DIV_55
  *         @arg @ref LL_RCC_PLLSAIM_DIV_56
  *         @arg @ref LL_RCC_PLLSAIM_DIV_57
  *         @arg @ref LL_RCC_PLLSAIM_DIV_58
  *         @arg @ref LL_RCC_PLLSAIM_DIV_59
  *         @arg @ref LL_RCC_PLLSAIM_DIV_60
  *         @arg @ref LL_RCC_PLLSAIM_DIV_61
  *         @arg @ref LL_RCC_PLLSAIM_DIV_62
  *         @arg @ref LL_RCC_PLLSAIM_DIV_63
  * @param  PLLN Between 49/50(*) and 432
  *
  *         (*) value not defined in all devices.
  * @param  PLLQ This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_2
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_3
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_4
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_5
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_6
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_7
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_8
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_9
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_10
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_11
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_12
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_13
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_14
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_15
  * @param  PLLDIVQ This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_1
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_2
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_3
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_4
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_5
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_6
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_7
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_8
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_9
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_10
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_11
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_12
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_13
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_14
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_15
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_16
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_17
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_18
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_19
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_20
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_21
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_22
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_23
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_24
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_25
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_26
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_27
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_28
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_29
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_30
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_31
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_32
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLSAI_ConfigDomain_SAI(uint32_t Source, uint32_t PLLM, uint32_t PLLN, uint32_t PLLQ, uint32_t PLLDIVQ)
{
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC, Source);
#if defined(RCC_PLLSAICFGR_PLLSAIM)
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIM, PLLM);
#else
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLM, PLLM);
#endif /* RCC_PLLSAICFGR_PLLSAIM */
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIN | RCC_PLLSAICFGR_PLLSAIQ, PLLN << RCC_PLLSAICFGR_PLLSAIN_Pos | PLLQ);
  MODIFY_REG(RCC->DCKCFGR, RCC_DCKCFGR_PLLSAIDIVQ, PLLDIVQ);
}

#if defined(RCC_PLLSAICFGR_PLLSAIP)
/**
  * @brief Configure PLLSAI used for 48Mhz domain clock
  * @note PLL Source and PLLM Divider can be written only when PLL,
  *       PLLI2S and PLLSAI(*) are disabled
  * @note PLLN/PLLP can be written only when PLLSAI is disabled
  * @note This  can be selected for USB, RNG, SDIO
  * @rmtoll PLLCFGR      PLLSRC        LL_RCC_PLLSAI_ConfigDomain_48M\n
  *         PLLCFGR      PLLM          LL_RCC_PLLSAI_ConfigDomain_48M\n
  *         PLLSAICFGR   PLLSAIM       LL_RCC_PLLSAI_ConfigDomain_48M\n
  *         PLLSAICFGR   PLLSAIN       LL_RCC_PLLSAI_ConfigDomain_48M\n
  *         PLLSAICFGR   PLLSAIP       LL_RCC_PLLSAI_ConfigDomain_48M
  * @param  Source This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSOURCE_HSI
  *         @arg @ref LL_RCC_PLLSOURCE_HSE
  * @param  PLLM This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIM_DIV_2
  *         @arg @ref LL_RCC_PLLSAIM_DIV_3
  *         @arg @ref LL_RCC_PLLSAIM_DIV_4
  *         @arg @ref LL_RCC_PLLSAIM_DIV_5
  *         @arg @ref LL_RCC_PLLSAIM_DIV_6
  *         @arg @ref LL_RCC_PLLSAIM_DIV_7
  *         @arg @ref LL_RCC_PLLSAIM_DIV_8
  *         @arg @ref LL_RCC_PLLSAIM_DIV_9
  *         @arg @ref LL_RCC_PLLSAIM_DIV_10
  *         @arg @ref LL_RCC_PLLSAIM_DIV_11
  *         @arg @ref LL_RCC_PLLSAIM_DIV_12
  *         @arg @ref LL_RCC_PLLSAIM_DIV_13
  *         @arg @ref LL_RCC_PLLSAIM_DIV_14
  *         @arg @ref LL_RCC_PLLSAIM_DIV_15
  *         @arg @ref LL_RCC_PLLSAIM_DIV_16
  *         @arg @ref LL_RCC_PLLSAIM_DIV_17
  *         @arg @ref LL_RCC_PLLSAIM_DIV_18
  *         @arg @ref LL_RCC_PLLSAIM_DIV_19
  *         @arg @ref LL_RCC_PLLSAIM_DIV_20
  *         @arg @ref LL_RCC_PLLSAIM_DIV_21
  *         @arg @ref LL_RCC_PLLSAIM_DIV_22
  *         @arg @ref LL_RCC_PLLSAIM_DIV_23
  *         @arg @ref LL_RCC_PLLSAIM_DIV_24
  *         @arg @ref LL_RCC_PLLSAIM_DIV_25
  *         @arg @ref LL_RCC_PLLSAIM_DIV_26
  *         @arg @ref LL_RCC_PLLSAIM_DIV_27
  *         @arg @ref LL_RCC_PLLSAIM_DIV_28
  *         @arg @ref LL_RCC_PLLSAIM_DIV_29
  *         @arg @ref LL_RCC_PLLSAIM_DIV_30
  *         @arg @ref LL_RCC_PLLSAIM_DIV_31
  *         @arg @ref LL_RCC_PLLSAIM_DIV_32
  *         @arg @ref LL_RCC_PLLSAIM_DIV_33
  *         @arg @ref LL_RCC_PLLSAIM_DIV_34
  *         @arg @ref LL_RCC_PLLSAIM_DIV_35
  *         @arg @ref LL_RCC_PLLSAIM_DIV_36
  *         @arg @ref LL_RCC_PLLSAIM_DIV_37
  *         @arg @ref LL_RCC_PLLSAIM_DIV_38
  *         @arg @ref LL_RCC_PLLSAIM_DIV_39
  *         @arg @ref LL_RCC_PLLSAIM_DIV_40
  *         @arg @ref LL_RCC_PLLSAIM_DIV_41
  *         @arg @ref LL_RCC_PLLSAIM_DIV_42
  *         @arg @ref LL_RCC_PLLSAIM_DIV_43
  *         @arg @ref LL_RCC_PLLSAIM_DIV_44
  *         @arg @ref LL_RCC_PLLSAIM_DIV_45
  *         @arg @ref LL_RCC_PLLSAIM_DIV_46
  *         @arg @ref LL_RCC_PLLSAIM_DIV_47
  *         @arg @ref LL_RCC_PLLSAIM_DIV_48
  *         @arg @ref LL_RCC_PLLSAIM_DIV_49
  *         @arg @ref LL_RCC_PLLSAIM_DIV_50
  *         @arg @ref LL_RCC_PLLSAIM_DIV_51
  *         @arg @ref LL_RCC_PLLSAIM_DIV_52
  *         @arg @ref LL_RCC_PLLSAIM_DIV_53
  *         @arg @ref LL_RCC_PLLSAIM_DIV_54
  *         @arg @ref LL_RCC_PLLSAIM_DIV_55
  *         @arg @ref LL_RCC_PLLSAIM_DIV_56
  *         @arg @ref LL_RCC_PLLSAIM_DIV_57
  *         @arg @ref LL_RCC_PLLSAIM_DIV_58
  *         @arg @ref LL_RCC_PLLSAIM_DIV_59
  *         @arg @ref LL_RCC_PLLSAIM_DIV_60
  *         @arg @ref LL_RCC_PLLSAIM_DIV_61
  *         @arg @ref LL_RCC_PLLSAIM_DIV_62
  *         @arg @ref LL_RCC_PLLSAIM_DIV_63
  * @param  PLLN Between 50 and 432
  * @param  PLLP This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIP_DIV_2
  *         @arg @ref LL_RCC_PLLSAIP_DIV_4
  *         @arg @ref LL_RCC_PLLSAIP_DIV_6
  *         @arg @ref LL_RCC_PLLSAIP_DIV_8
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLSAI_ConfigDomain_48M(uint32_t Source, uint32_t PLLM, uint32_t PLLN, uint32_t PLLP)
{
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC, Source);
#if defined(RCC_PLLSAICFGR_PLLSAIM)
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIM, PLLM);
#else
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLM, PLLM);
#endif /* RCC_PLLSAICFGR_PLLSAIM */
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIN | RCC_PLLSAICFGR_PLLSAIP, PLLN << RCC_PLLSAICFGR_PLLSAIN_Pos | PLLP);
}
#endif /* RCC_PLLSAICFGR_PLLSAIP */

#if defined(LTDC)
/**
  * @brief  Configure PLLSAI used for LTDC domain clock
  * @note PLL Source and PLLM Divider can be written only when PLL,
  *       PLLI2S and PLLSAI(*) are disabled
  * @note PLLN/PLLR can be written only when PLLSAI is disabled
  * @note This  can be selected for LTDC
  * @rmtoll PLLCFGR      PLLSRC        LL_RCC_PLLSAI_ConfigDomain_LTDC\n
  *         PLLCFGR      PLLM          LL_RCC_PLLSAI_ConfigDomain_LTDC\n
  *         PLLSAICFGR   PLLSAIN       LL_RCC_PLLSAI_ConfigDomain_LTDC\n
  *         PLLSAICFGR   PLLSAIR       LL_RCC_PLLSAI_ConfigDomain_LTDC\n
  *         DCKCFGR      PLLSAIDIVR    LL_RCC_PLLSAI_ConfigDomain_LTDC
  * @param  Source This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSOURCE_HSI
  *         @arg @ref LL_RCC_PLLSOURCE_HSE
  * @param  PLLM This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIM_DIV_2
  *         @arg @ref LL_RCC_PLLSAIM_DIV_3
  *         @arg @ref LL_RCC_PLLSAIM_DIV_4
  *         @arg @ref LL_RCC_PLLSAIM_DIV_5
  *         @arg @ref LL_RCC_PLLSAIM_DIV_6
  *         @arg @ref LL_RCC_PLLSAIM_DIV_7
  *         @arg @ref LL_RCC_PLLSAIM_DIV_8
  *         @arg @ref LL_RCC_PLLSAIM_DIV_9
  *         @arg @ref LL_RCC_PLLSAIM_DIV_10
  *         @arg @ref LL_RCC_PLLSAIM_DIV_11
  *         @arg @ref LL_RCC_PLLSAIM_DIV_12
  *         @arg @ref LL_RCC_PLLSAIM_DIV_13
  *         @arg @ref LL_RCC_PLLSAIM_DIV_14
  *         @arg @ref LL_RCC_PLLSAIM_DIV_15
  *         @arg @ref LL_RCC_PLLSAIM_DIV_16
  *         @arg @ref LL_RCC_PLLSAIM_DIV_17
  *         @arg @ref LL_RCC_PLLSAIM_DIV_18
  *         @arg @ref LL_RCC_PLLSAIM_DIV_19
  *         @arg @ref LL_RCC_PLLSAIM_DIV_20
  *         @arg @ref LL_RCC_PLLSAIM_DIV_21
  *         @arg @ref LL_RCC_PLLSAIM_DIV_22
  *         @arg @ref LL_RCC_PLLSAIM_DIV_23
  *         @arg @ref LL_RCC_PLLSAIM_DIV_24
  *         @arg @ref LL_RCC_PLLSAIM_DIV_25
  *         @arg @ref LL_RCC_PLLSAIM_DIV_26
  *         @arg @ref LL_RCC_PLLSAIM_DIV_27
  *         @arg @ref LL_RCC_PLLSAIM_DIV_28
  *         @arg @ref LL_RCC_PLLSAIM_DIV_29
  *         @arg @ref LL_RCC_PLLSAIM_DIV_30
  *         @arg @ref LL_RCC_PLLSAIM_DIV_31
  *         @arg @ref LL_RCC_PLLSAIM_DIV_32
  *         @arg @ref LL_RCC_PLLSAIM_DIV_33
  *         @arg @ref LL_RCC_PLLSAIM_DIV_34
  *         @arg @ref LL_RCC_PLLSAIM_DIV_35
  *         @arg @ref LL_RCC_PLLSAIM_DIV_36
  *         @arg @ref LL_RCC_PLLSAIM_DIV_37
  *         @arg @ref LL_RCC_PLLSAIM_DIV_38
  *         @arg @ref LL_RCC_PLLSAIM_DIV_39
  *         @arg @ref LL_RCC_PLLSAIM_DIV_40
  *         @arg @ref LL_RCC_PLLSAIM_DIV_41
  *         @arg @ref LL_RCC_PLLSAIM_DIV_42
  *         @arg @ref LL_RCC_PLLSAIM_DIV_43
  *         @arg @ref LL_RCC_PLLSAIM_DIV_44
  *         @arg @ref LL_RCC_PLLSAIM_DIV_45
  *         @arg @ref LL_RCC_PLLSAIM_DIV_46
  *         @arg @ref LL_RCC_PLLSAIM_DIV_47
  *         @arg @ref LL_RCC_PLLSAIM_DIV_48
  *         @arg @ref LL_RCC_PLLSAIM_DIV_49
  *         @arg @ref LL_RCC_PLLSAIM_DIV_50
  *         @arg @ref LL_RCC_PLLSAIM_DIV_51
  *         @arg @ref LL_RCC_PLLSAIM_DIV_52
  *         @arg @ref LL_RCC_PLLSAIM_DIV_53
  *         @arg @ref LL_RCC_PLLSAIM_DIV_54
  *         @arg @ref LL_RCC_PLLSAIM_DIV_55
  *         @arg @ref LL_RCC_PLLSAIM_DIV_56
  *         @arg @ref LL_RCC_PLLSAIM_DIV_57
  *         @arg @ref LL_RCC_PLLSAIM_DIV_58
  *         @arg @ref LL_RCC_PLLSAIM_DIV_59
  *         @arg @ref LL_RCC_PLLSAIM_DIV_60
  *         @arg @ref LL_RCC_PLLSAIM_DIV_61
  *         @arg @ref LL_RCC_PLLSAIM_DIV_62
  *         @arg @ref LL_RCC_PLLSAIM_DIV_63
  * @param  PLLN Between 49/50(*) and 432
  *
  *         (*) value not defined in all devices.
  * @param  PLLR This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIR_DIV_2
  *         @arg @ref LL_RCC_PLLSAIR_DIV_3
  *         @arg @ref LL_RCC_PLLSAIR_DIV_4
  *         @arg @ref LL_RCC_PLLSAIR_DIV_5
  *         @arg @ref LL_RCC_PLLSAIR_DIV_6
  *         @arg @ref LL_RCC_PLLSAIR_DIV_7
  * @param  PLLDIVR This parameter can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIDIVR_DIV_2
  *         @arg @ref LL_RCC_PLLSAIDIVR_DIV_4
  *         @arg @ref LL_RCC_PLLSAIDIVR_DIV_8
  *         @arg @ref LL_RCC_PLLSAIDIVR_DIV_16
  * @retval None
  */
__STATIC_INLINE void LL_RCC_PLLSAI_ConfigDomain_LTDC(uint32_t Source, uint32_t PLLM, uint32_t PLLN, uint32_t PLLR, uint32_t PLLDIVR)
{
  MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC | RCC_PLLCFGR_PLLM, Source | PLLM);
  MODIFY_REG(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIN | RCC_PLLSAICFGR_PLLSAIR, PLLN << RCC_PLLSAICFGR_PLLSAIN_Pos | PLLR);
  MODIFY_REG(RCC->DCKCFGR, RCC_DCKCFGR_PLLSAIDIVR, PLLDIVR);
}
#endif /* LTDC */

/**
  * @brief  Get division factor for PLLSAI input clock
  * @rmtoll PLLCFGR      PLLM          LL_RCC_PLLSAI_GetDivider\n
  *         PLLSAICFGR   PLLSAIM       LL_RCC_PLLSAI_GetDivider
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIM_DIV_2
  *         @arg @ref LL_RCC_PLLSAIM_DIV_3
  *         @arg @ref LL_RCC_PLLSAIM_DIV_4
  *         @arg @ref LL_RCC_PLLSAIM_DIV_5
  *         @arg @ref LL_RCC_PLLSAIM_DIV_6
  *         @arg @ref LL_RCC_PLLSAIM_DIV_7
  *         @arg @ref LL_RCC_PLLSAIM_DIV_8
  *         @arg @ref LL_RCC_PLLSAIM_DIV_9
  *         @arg @ref LL_RCC_PLLSAIM_DIV_10
  *         @arg @ref LL_RCC_PLLSAIM_DIV_11
  *         @arg @ref LL_RCC_PLLSAIM_DIV_12
  *         @arg @ref LL_RCC_PLLSAIM_DIV_13
  *         @arg @ref LL_RCC_PLLSAIM_DIV_14
  *         @arg @ref LL_RCC_PLLSAIM_DIV_15
  *         @arg @ref LL_RCC_PLLSAIM_DIV_16
  *         @arg @ref LL_RCC_PLLSAIM_DIV_17
  *         @arg @ref LL_RCC_PLLSAIM_DIV_18
  *         @arg @ref LL_RCC_PLLSAIM_DIV_19
  *         @arg @ref LL_RCC_PLLSAIM_DIV_20
  *         @arg @ref LL_RCC_PLLSAIM_DIV_21
  *         @arg @ref LL_RCC_PLLSAIM_DIV_22
  *         @arg @ref LL_RCC_PLLSAIM_DIV_23
  *         @arg @ref LL_RCC_PLLSAIM_DIV_24
  *         @arg @ref LL_RCC_PLLSAIM_DIV_25
  *         @arg @ref LL_RCC_PLLSAIM_DIV_26
  *         @arg @ref LL_RCC_PLLSAIM_DIV_27
  *         @arg @ref LL_RCC_PLLSAIM_DIV_28
  *         @arg @ref LL_RCC_PLLSAIM_DIV_29
  *         @arg @ref LL_RCC_PLLSAIM_DIV_30
  *         @arg @ref LL_RCC_PLLSAIM_DIV_31
  *         @arg @ref LL_RCC_PLLSAIM_DIV_32
  *         @arg @ref LL_RCC_PLLSAIM_DIV_33
  *         @arg @ref LL_RCC_PLLSAIM_DIV_34
  *         @arg @ref LL_RCC_PLLSAIM_DIV_35
  *         @arg @ref LL_RCC_PLLSAIM_DIV_36
  *         @arg @ref LL_RCC_PLLSAIM_DIV_37
  *         @arg @ref LL_RCC_PLLSAIM_DIV_38
  *         @arg @ref LL_RCC_PLLSAIM_DIV_39
  *         @arg @ref LL_RCC_PLLSAIM_DIV_40
  *         @arg @ref LL_RCC_PLLSAIM_DIV_41
  *         @arg @ref LL_RCC_PLLSAIM_DIV_42
  *         @arg @ref LL_RCC_PLLSAIM_DIV_43
  *         @arg @ref LL_RCC_PLLSAIM_DIV_44
  *         @arg @ref LL_RCC_PLLSAIM_DIV_45
  *         @arg @ref LL_RCC_PLLSAIM_DIV_46
  *         @arg @ref LL_RCC_PLLSAIM_DIV_47
  *         @arg @ref LL_RCC_PLLSAIM_DIV_48
  *         @arg @ref LL_RCC_PLLSAIM_DIV_49
  *         @arg @ref LL_RCC_PLLSAIM_DIV_50
  *         @arg @ref LL_RCC_PLLSAIM_DIV_51
  *         @arg @ref LL_RCC_PLLSAIM_DIV_52
  *         @arg @ref LL_RCC_PLLSAIM_DIV_53
  *         @arg @ref LL_RCC_PLLSAIM_DIV_54
  *         @arg @ref LL_RCC_PLLSAIM_DIV_55
  *         @arg @ref LL_RCC_PLLSAIM_DIV_56
  *         @arg @ref LL_RCC_PLLSAIM_DIV_57
  *         @arg @ref LL_RCC_PLLSAIM_DIV_58
  *         @arg @ref LL_RCC_PLLSAIM_DIV_59
  *         @arg @ref LL_RCC_PLLSAIM_DIV_60
  *         @arg @ref LL_RCC_PLLSAIM_DIV_61
  *         @arg @ref LL_RCC_PLLSAIM_DIV_62
  *         @arg @ref LL_RCC_PLLSAIM_DIV_63
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_GetDivider(void)
{
#if defined(RCC_PLLSAICFGR_PLLSAIM)
  return (uint32_t)(READ_BIT(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIM));
#else
  return (uint32_t)(READ_BIT(RCC->PLLCFGR, RCC_PLLCFGR_PLLM));
#endif /* RCC_PLLSAICFGR_PLLSAIM */
}

/**
  * @brief  Get SAIPLL multiplication factor for VCO
  * @rmtoll PLLSAICFGR  PLLSAIN      LL_RCC_PLLSAI_GetN
  * @retval Between 49/50(*) and 432
  *
  *         (*) value not defined in all devices.
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_GetN(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIN) >> RCC_PLLSAICFGR_PLLSAIN_Pos);
}

/**
  * @brief  Get SAIPLL division factor for PLLSAIQ
  * @rmtoll PLLSAICFGR  PLLSAIQ      LL_RCC_PLLSAI_GetQ
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_2
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_3
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_4
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_5
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_6
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_7
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_8
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_9
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_10
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_11
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_12
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_13
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_14
  *         @arg @ref LL_RCC_PLLSAIQ_DIV_15
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_GetQ(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIQ));
}

#if defined(RCC_PLLSAICFGR_PLLSAIR)
/**
  * @brief  Get SAIPLL division factor for PLLSAIR
  * @note used for PLLSAICLK (SAI clock)
  * @rmtoll PLLSAICFGR  PLLSAIR      LL_RCC_PLLSAI_GetR
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIR_DIV_2
  *         @arg @ref LL_RCC_PLLSAIR_DIV_3
  *         @arg @ref LL_RCC_PLLSAIR_DIV_4
  *         @arg @ref LL_RCC_PLLSAIR_DIV_5
  *         @arg @ref LL_RCC_PLLSAIR_DIV_6
  *         @arg @ref LL_RCC_PLLSAIR_DIV_7
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_GetR(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIR));
}
#endif /* RCC_PLLSAICFGR_PLLSAIR */

#if defined(RCC_PLLSAICFGR_PLLSAIP)
/**
  * @brief  Get SAIPLL division factor for PLLSAIP
  * @note used for PLL48MCLK (48M domain clock)
  * @rmtoll PLLSAICFGR  PLLSAIP      LL_RCC_PLLSAI_GetP
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIP_DIV_2
  *         @arg @ref LL_RCC_PLLSAIP_DIV_4
  *         @arg @ref LL_RCC_PLLSAIP_DIV_6
  *         @arg @ref LL_RCC_PLLSAIP_DIV_8
  */
__STATIC_INLINE uint32_t LL_RCC_PLLSAI_GetP(void)
{
  return (uint32_t)(READ_BIT(RCC->PLLSAICFGR, RCC_PLLSAICFGR_PLLSAIP));
}
#endif /* RCC_PLLSAICFGR_PLLSAIP */

/**
  * @brief  Get SAIPLL division factor for PLLSAIDIVQ
  * @note used PLLSAICLK selected (SAI clock)
  * @rmtoll DCKCFGR   PLLSAIDIVQ      LL_RCC_PLLSAI_GetDIVQ
  * @retval Returned value can be one of the following values:
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_1
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_2
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_3
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_4
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_5
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_6
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_7
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_8
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_9
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_10
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_11
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_12
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_13
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_14
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_15
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_16
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_17
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_18
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_19
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_20
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_21
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_22
  *         @arg @ref LL_RCC_PLLSAIDIVQ_DIV_23
  *         @arg @d element
            If quantity of DataContainers more then one, AsposeException rises.
            </summary>
            <param name="elementName">Element name </param>
            <returns>Returns DataContainer for selected element</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.Item(Aspose.Email.Clients.ActiveSync.TransportLayer.ItemOperations)">
            <summary>
            Gets DataContainer for selected element
            If quantity of DataContainers more then one, AsposeException rises.
            </summary>
            <param name="elementName">Element name </param>
            <returns>Returns DataContainer for selected element</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.Item(Aspose.Email.Clients.ActiveSync.TransportLayer.GAL)">
            <summary>
            Gets DataContainer for selected element
            If quantity of DataContainers more then one, AsposeException rises.
            </summary>
            <param name="elementName">Element name </param>
            <returns>Returns DataContainer for selected element</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.Item(Aspose.Email.Clients.ActiveSync.TransportLayer.Search)">
            <summary>
            Gets DataContainer for selected element
            If quantity of DataContainers more then one, AsposeException rises.
            </summary>
            <param name="elementName">Element name </param>
            <returns>Returns DataContainer for selected element</returns>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.SubItems">
            <summary>
            Copies the sub-elements of the ApplicationData to a new List.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.GetEnumerator">
            <summary>
            Returns an enumerator that iterates through the collection.
            </summary>
            <returns>
            A <see cref="T:System.Collections.Generic.IEnumerator`1"/> that can be used to iterate through the collection.
            </returns>
            <filterpriority>1</filterpriority>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.System#Collections#IEnumerable#GetEnumerator">
            <summary>
            Returns an enumerator that iterates through a collection.
            </summary>
            <returns>
            An <see cref="T:System.Collections.IEnumerator"/> object that can be used to iterate through the collection.
            </returns>
            <filterpriority>2</filterpriority>
        </member>
        <member name="M:Aspose.Email.Clients.ActiveSync.TransportLayer.DataContainer.ToString">
            <summary>
            Returns a string that represents the current object.
            </summary>
            <returns>A string that represents the current object.</returns>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation">
            <summary>
            Request that is used for sending the client device's properties to the server. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.Model">
            <summary>
            Device model
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.IMEI">
            <summary>
            International Mobile Equipment Identity (IMEI)
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.FriendlyName">
            <summary>
            Device friendly name
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.OS">
            <summary>
            Device operating system
            </summary>        
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.OSLanguage">
            <summary>
            Device operating system language
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.PhoneNumber">
            <summary>
            Telephone number
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.UserAgent">
            <summary>
            User Agent
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.EnableOutboundSMS">
            <summary>
            Whether to enable outbound SMS
            </summary>        
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DeviceInformation.MobileOperator">
            <summary>
            Mobile operator name
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.DevicePasswordRequest">
            <summary>
            Specifies the request to set recovery password of the client device by the server.
            To clear an existing recovery password, the client MUST send an empty Password.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.DevicePasswordRequest.Password">
            <summary>
            Specifies the recovery password of the client device, which is stored by the server.
            The value of the DevicePassword has a maximum length of 255 characters.
            </summary>
        </member>
        <member name="T:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc">
            <summary>
            Specifies the collection of security settings for device provisioning.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.DevicePasswordEnabled">
            <summary>
            Specifies whether a client requires a password.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AlphanumericDevicePasswordRequired">
            <summary>
            Specifies whether a client requires an alphanumeric password.
            If AlphanumericDevicePasswordRequired is null, a client SHOULD treat this value as FALSE.
            If the value of the DevicePasswordEnabled is FALSE, the client SHOULD ignore this property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.PasswordRecoveryEnabled">
            <summary>
            Specifies whether the server supports storage of a recovery password to be sent by the client using the Settings command.
            A recovery password is a special password created by the client that gives the administrator or user the ability to log on to the device one time, 
            after which the user is required to create a new password. The client then creates a new recovery password.
            If the PasswordRecoveryEnabled is set to TRUE, the server supports storage of a recovery password sent by the device. 
            If the property is set to FALSE, the device SHOULD NOT send a recovery password, because the server does not support storage of the password. 
            If PasswordRecoveryEnabled is null, a client SHOULD treat this value as FALSE. 
            If the value of the DevicePasswordEnabled is FALSE, the client SHOULD ignore this property. 
            This property SHOULD be ignored if the client does not support recovery passwords.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.RequireStorageCardEncryption">
            <summary>
            Specifies whether the device encrypts content that is stored on the device.
            This property SHOULD be ignored if the client does not support storing data on removable storage.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AttachmentsEnabled">
            <summary>
            Specifies whether email attachments are enabled.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.MinDevicePasswordLength">
            <summary>
            Specifies the minimum client password length.
            The MinDevicePasswordLength can be empty or have a value no less than 1 and no greater than 16.
            If the property is null or the value of this property is 1, there is no minimum length for the device password. 
            If the value of the DevicePasswordEnabled is FALSE, the client SHOULD ignore this property .
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.MaxInactivityTimeDeviceLock">
            <summary>
            Specifies the maximum number of seconds of inactivity before the device locks itself.
            If this value is greater than or equal to 9999, the client interprets it as unlimited. 
            If the MaxInactivityTimeDeviceLock is null, the client interprets this as meaning that no time device lock has been set by the security policy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.MaxDevicePasswordFailedAttempts">
            <summary>
            Specifies the maximum number of failed password logon attempts that are permitted. 
            The client SHOULD perform a local wipe or enter a timed lock out mode if the maximum number of failed password logon attempts is reached.
            The MaxDevicePasswordFailedAttempts can be null or have a value in the range from 4 through 16. 
            If the property is null, the client interprets this as meaning that no maximum number of failed password logon attempts has been set by the security policy. 
            If the value of the DevicePasswordEnabled is set to FALSE, the client ignores this property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.MaxAttachmentSize">
            <summary>
            Specifies the maximum attachment size in bytes as determined by security policy. 
            If the property is null, the client interprets this as meaning no maximum attachment size has been set by the security policy.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowSimpleDevicePassword">
            <summary>
            Specifies whether the client allows simple passwords. 
            A simple password is one consisting only of repeated ("2222") or sequential ("abcd") characters.
            If AllowSimpleDevicePassword is null, a client SHOULD treat this value as TRUE.
            If the value of the DevicePasswordEnabled is set to FALSE, the client SHOULD ignore this property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.DevicePasswordExpiration">
            <summary>
            Specifies the maximum number of days until a password expires.
            The DevicePasswordExpiration can be null, indicating that no password expiration policy is set.
            Valid values are listed bellow:
              = 0 - Passwords do not expire.
              > 0 - Passwords expire in the specified maximum number of days.
            If DevicePasswordExpiration is null, a client SHOULD treat this value as 0.
            If the value of the DevicePasswordEnabled is set to FALSE, the client SHOULD ignore this property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.DevicePasswordHistory">
            <summary>
            Specifies the minimum number of previously used passwords stored to prevent reuse by the client.
            Valid values are listed bellow:
              = 0 - Storage of previously used passwords is not required.
              > 0 - The minimum number of previously used passwords to be stored.
            If DevicePasswordHistory is null, then a client SHOULD treat this value as 0.
            If the value of the DevicePasswordEnabled is set to TRUE, the client disallows the user from using a stored prior password after a password expires.
            If the value of the DevicePasswordEnabled is set to FALSE, the client SHOULD ignore this property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowStorageCard">
            <summary>
            Specifies whether the device allows use of the storage card.
            This property SHOULD be ignored if the client does not support storing data on removable storage.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowCamera">
            <summary>
            Specifies whether the device allows the use of the built-in camera.
            This property SHOULD be ignored if the client does not have a camera and no camera can be attached to the device.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.RequireDeviceEncryption">
            <summary>
            Specifies whether the client uses encryption.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowUnsignedApplications">
            <summary>
            Specifies whether the device allows unsigned applications to execute.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowUnsignedInstallationPackages">
            <summary>
            Specifies whether the device allows unsigned cabinet (.cab) files to be installed.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.MinDevicePasswordComplexCharacters">
            <summary>
            Specifies the required level of complexity of the client password.
            The value specifies the number of character groups that are required to be present in the password. 
            The character groups are defined as:
              Lower case alphabetical characters = 1
              Lower case and Upper case alphabetical characters = 2
              Lower case, Upper case alphabetical characters and Numbers = 3
              Lower case and Upper case alphabetical characters, Numbers and Non-alphanumeric characters = 4
            
            For example: 
            If the value of MinDevicePasswordComplexCharacters is 2, a password with both upper case and lower case alphabetical characters would be sufficient, 
            as would a password with lower case alphabetical characters and numbers.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowWiFi">
            <summary>
            Specifies whether the device allows the use of Wi-Fi connections.
            This property SHOULD be ignored if the client does not have Wi-Fi capability.
            </summary>
        </member>
        <member name="P:Aspose.Email.Clients.ActiveSync.TransportLayer.EASProvisionDoc.AllowTextMessaging">
            <summary>
            Specifies whether the device allows the use of