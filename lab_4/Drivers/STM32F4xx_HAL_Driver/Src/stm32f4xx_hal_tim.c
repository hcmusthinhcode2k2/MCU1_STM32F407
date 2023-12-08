tEntry">The root entry.</param>
            <param name="entries">The entries.</param>
            <param name="last">if set to <c>true</c> [last].</param>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.BinaryHelper">
            <summary>
            Helps to read/write data to/from streams.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.CustomAttachmentStorage">
            <summary>
            Represents custom attachment storage.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.CustomAttachmentStorage.DataSet">
            <summary>
            Gets the data set representing custom attachment storage, names of the data streams are keys for this dictionary.
            </summary>
            <value>The data set.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.CustomAttachmentStorage.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.CustomAttachmentStorage"/> class.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.IMessageObjectPropertyContainer">
            <summary>
            Defines an interface for container which contains <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> entries.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.IMessageObjectPropertyContainer.Properties">
            <summary>
            Gets the properties of the container.
            </summary>
            <value>The properties.</value>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MapiGuidConstants">
            <summary>
            Contains several guid constants defined by MSG format specification.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiGuidConstants.PS_MAPI">
            <summary>
            Identifies PS_MAPI property set.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiGuidConstants.PS_PUBLIC_STRINGS">
            <summary>
            Identifies PS_PUBLIC_STRINGS property set.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MapiPropertyFlags">
            <summary>
            Represents flags which can be set on a MAPI property.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiPropertyFlags.PROPATTR_MANDATORY">
            <summary>
            If this flag is set for a property, that property MUST NOT be deleted from the .msg file (irrespective of which storage it is contained in) and implementations MUST return an error if any attempt is made to do so. This flag is set in circumstances where the implementation depends on that property always being present in the .msg file once it is written there.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiPropertyFlags.PROPATTR_READABLE">
            <summary>
            If this flag is not set on a property, that property MUST not be read from the .msg file and implementations MUST return an error if any attempt is made to read it. This flag is set on all properties unless there is an implementation-specific reason to prevent a property from being read from the .msg file.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiPropertyFlags.PROPATTR_WRITABLE">
            <summary>
            If this flag is not set on a property, that property MUST not be modified or deleted and implementations MUST return an error if any attempt is made to do so. This flag is set in circumstances where the implementation depends on the properties being writable.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MapiType">
            <summary>
            Contains possible MAPI property types which can be stored with message object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.None">
            <summary>
            No values are set.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_SHORT">
            <summary>
            2 bytes, a 16-bit integer
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_LONG">
            <summary>
            4 bytes, a 32-bit integer
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_FLOAT">
            <summary>
            4 bytes, a 32-bit floating point number
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_DOUBLE">
            <summary>
            8 bytes, a 64-bit floating point number
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_CURRENCY">
            <summary>
            8 bytes, a 64-bit signed, scaled integer representation of a decimal currency value, with 4 places to the right of the decimal point
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_APPTIME">
            <summary>
            8 bytes, a 64-bit floating point number in which the whole number part represents the number of days since December 30, 1899, and the fractional part represents the fraction of a day since midnight
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_ERROR">
            <summary>
            4 bytes, a 32-bit integer encoding error information
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_BOOLEAN">
            <summary>
            1 byte, restricted to 1 or 0
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_OBJECT">
            <summary>
            The property value is a COM object
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_LONGLONG">
            <summary>
            8 bytes, a 64-bit integer
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_UNICODE">
            <summary>
            Variable size, a string of Unicode characters in UTF-16LE encoding with terminating null character(0x0000)
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_STRING8">
            <summary>
            Variable size, a string of multi-byte characters in externally specified encoding with terminating null character (single 0 byte).        
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_SYSTIME">
            <summary>
            8 bytes, a 64-bit integer representing the number of 100-nanosecond intervals since January 1, 1601
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_CLSID">
            <summary>
            16 bytes, a GUID with Data1, Data2, and Data3 fields in little-endian format
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_BINARY">
            <summary>
            Variable size, a byte array
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_SHORT">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_SHORT"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_LONG">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_LONG"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_FLOAT">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_FLOAT"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_DOUBLE">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_DOUBLE"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_CURRENCY">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_CURRENCY"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_APPTIME">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_APPTIME"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_LONGLONG">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_LONGLONG"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_UNICODE">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_UNICODE"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_STRING8">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_STRING8"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_SYSTIME">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_SYSTIME"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_CLSID">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_CLSID"/> values.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MapiType.PT_MV_BINARY">
            <summary>
            Variable size, a set of <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_BINARY"/> values.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObject">
            <summary>
            Represents an Outlook message object.
            Evaluation limits: only 1 attachment and 1 recipient are read when message is being loaded, watermark will be added when the message is being saved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObject.Properties">
            <summary>
            Gets the properties of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/>.
            </summary>
            <value>The properties.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObject.Codepage">
            <summary>
            Gets the codepage used to encode/decode string properties in case <see cref="F:Aspose.Email.Mapi.Msg.MapiType.PT_STRING8"/> type  for them is used.
            </summary>
            <value>The codepage.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObject.Recipients">
            <summary>
            Gets the recipients of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/>.
            </summary>
            <value>The recipients.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObject.Attachments">
            <summary>
            Gets the attachments of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/>.
            </summary>
            <value>The attachments.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.#ctor(Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection,Aspose.Email.Mapi.Msg.MessageObjectRecipientsCollection,Aspose.Email.Mapi.Msg.MessageObjectAttachmentsCollection)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> class, used internally for embedded messages.
            </summary>
            <param name="properties">The properties list.</param>
            <param name="recipients">The recipients list.</param>
            <param name="attachments">The attachments list.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.#ctor(System.IO.Stream,Aspose.Email.Mapi.Msg.MessageObjectLoadFormat)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> class.
            </summary>
            <param name="stream">The stream to initialize this object from.</param>
            <param name="loadFormat">The source format message object is stored with.</param>
            <exception cref="T:System.ArgumentNullException">If given stream is null.</exception>
            <exception cref="T:System.ArgumentOutOfRangeException">If specified <paramref name="loadFormat"/> is not supported.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.#ctor(System.String,Aspose.Email.Mapi.Msg.MessageObjectLoadFormat)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> class.
            </summary>
            <param name="fileName">Name of the file to read from.</param>
            <param name="loadFormat">The source format message object is stored with.</param>
            <exception cref="T:System.ArgumentOutOfRangeException">If specified <paramref name="loadFormat"/> is not supported.</exception>
            <remarks>
            In addition same set of exceptions could be thrown as for the <see cref="M:System.IO.File.Open(System.String,System.IO.FileMode)"/> call.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.LoadFromStream(System.IO.Stream,Aspose.Email.Mapi.Msg.MessageObjectLoadFormat)">
            <summary>
            Loads content from stream.
            </summary>
            <param name="stream">The stream.</param>
            <param name="loadFormat"></param>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.Save(System.String,Aspose.Email.Mapi.Msg.MessageObjectSaveFormat)">
            <summary>
            Saves the current message object to the specified file.
            </summary>
            <param name="fileName">Name of the file.</param>
            <param name="format">The format of the output data.</param>
            <exception cref="T:System.ArgumentOutOfRangeException">If <paramref name="format"/> value is not valid.</exception>
            <remarks>
            In addition same set of exceptions could be thrown as for the <see cref="M:System.IO.File.OpenWrite(System.String)"/> call.
            </remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.Save(System.IO.Stream,Aspose.Email.Mapi.Msg.MessageObjectSaveFormat)">
            <summary>
            Saves the current message object to the specified stream.
            </summary>
            <param name="stream">The stream to write to.</param>
            <param name="format">The format of the output data.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="stream"/> is null.</exception>
            <exception cref="T:System.ArgumentOutOfRangeException">If <paramref name="format"/> value is not valid.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.SaveToMsg(System.IO.Stream)">
            <summary>
            Saves current message object to native MSG format.
            </summary>
            <param name="stream">The stream.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.GetIdForNamedProperty">
            <summary>
            Gets the id to be used for named property,
            named properties are special properties and should have their ids in range [0x8000,0xfffe] aligned starting from 0x8000 sequentally.
            Use this method to find the available id cause it could be hard to calculate it yourself.
            </summary>
            <returns>Available id for the named property.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObject.GetMaxNamedPropertyId(Aspose.Email.Mapi.Msg.IMessageObjectPropertyContainer)">
            <summary>
            Gets the maximum named property id in specified container.
            </summary>
            <param name="container">The container.</param>
            <returns>The maximum from the ids or 0x7FFF if named properties are not found.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity">
            <summary>
            Represents an attachment entity.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.Properties">
            <summary>
            Gets the attachment properties.
            </summary>
            <value>The properties collection.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.EmbeddedMessage">
            <summary>
            Gets or sets the Embedded Message Object storage if present.Can be null.
            </summary>
            <value>The embedded message.</value>
            <remarks>Mutually exclusive with <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.CustomAttachmentStorageData"/> or both can be null.</remarks>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.CustomAttachmentStorageData">
            <summary>
            Gets or sets the custom attachment storage data.Can be null.
            </summary>
            <value>The custom attachment storage data.</value>
            <remarks>Mutually exclusive with <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.EmbeddedMessage"/> or both can be null.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity.#ctor(Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity"/> class with the predefined property set.
            </summary>
            <param name="properties">The properties.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectAttachmentsCollection">
            <summary>
            Represents a collection for <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectAttachmentEntity"/> objects.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectLoadFormat">
            <summary>
            Represents available formats <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> could be loaded from.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MessageObjectLoadFormat.Msg">
            <summary>
            MSG format.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection">
            <summary>
            Represents a keyed collection for <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> objects.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection.GetKeyForItem(Aspose.Email.Mapi.Msg.MessageObjectProperty)">
            <summary>
            When implemented in a derived class, extracts the key from the specified element.
            </summary>
            <param name="item">The element from which to extract the key.</param>
            <returns>The key for the specified element.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection.TryGetValue(System.Int64)">
            <summary>
            Tries to get value, by specified key.
            </summary>
            <param name="propertyTag">The property tag.</param>
            <returns><see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> object if operation succeeds, otherwise null.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectProperty">
            <summary>
            Represents a property on a <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/>.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.PropertyType">
            <summary>
            Gets the type of the property.
            </summary>
            <value>The type of the property.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Flags">
            <summary>
            Gets the flags set on  a property.
            </summary>
            <value>The flags.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Id">
            <summary>
            Gets the id of the property.
            </summary>
            <value>The id if the property.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.PropertyTag">
            <summary>
            Gets the property tag, a combined value which contains <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Id"/> and <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.PropertyType"/>
            </summary>
            <value>The property tag.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Guid">
            <summary>
            Gets or sets the GUID for the named property.
            </summary>
            <value>The GUID.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.PropertyKind">
            <summary>
            Gets or sets the kind of the property if it's named.
            </summary>
            <value>The kind of the property.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Name">
            <summary>
            Gets or sets the name of the property if it's named.
            </summary>
            <value>The name.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.NameId">
            <summary>
            Gets or sets the name id of the property if it's named.
            </summary>
            <value>The name id.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Named">
            <summary>
            Gets a value indicating whether this <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> is a named property.
            </summary>
            <value><c>true</c> if named; otherwise, <c>false</c>.</value>
            <remarks>A named property is determined by its ID, the range for such ids is [0x8000,0xfffe].</remarks>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Atomic">
            <summary>
            Gets a value indicating whether this <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> is atomic.
            </summary>
            <value><c>true</c> if atomic; otherwise, <c>false</c>.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value">
            <summary>
            Gets or sets the value of the property.
            </summary>
            <value>The value.</value>
            <exception cref="T:System.ArgumentNullException">If passed value is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.#ctor(System.Int64,Aspose.Email.Mapi.Msg.MapiPropertyFlags,System.Object)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> class.
            </summary>
            <param name="propertyTag">The property tag.</param>
            <param name="flags">The flags to be set on.</param>
            <param name="value">The value of the property.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="value"/> is null.</exception>
            <exception cref="T:System.ComponentModel.InvalidEnumArgumentException">If <paramref name="propertyTag"/> contains invalid type definition."</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.#ctor(System.Int32,Aspose.Email.Mapi.Msg.MapiType,Aspose.Email.Mapi.Msg.MapiPropertyFlags,System.Object)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> class.
            </summary>
            <param name="id">The id.</param>
            <param name="type">The type of the property.</param>
            <param name="flags">The flags to be set on.</param>
            <param name="value">The value of the property.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="value"/> is null.</exception>
            <exception cref="T:System.ComponentModel.InvalidEnumArgumentException">If <paramref name="type"/> is invalid."</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToInt">
            <summary>
            Converts the value of the property to integer.
            </summary>
            <returns>Integer value, if type can't be converted to integer returns 0.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToDateTime">
            <summary>
            Converts the value of the property to DateTime.
            </summary>
            <returns>DateTime value, if type can't be converted to DateTime returns <see cref="F:System.DateTime.MinValue"/>.</returns>
            <remarks>This method doesn't provide automatic conversion of the data types, e.g. if <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value"/> property is of type default value will be returned.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToStringRepresentation">
            <summary>
            Converts the value of the property to string.
            </summary>
            <returns>String value, if type can't be converted to string returns empty string.</returns>
            <remarks>This method doesn't provide automatic conversion of the data types, e.g. if <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value"/> property is of type default value will be returned.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToList``1">
            <summary>
            Converts the value of the property to a list of values.
            </summary>
            <returns>IList implementation, if type can't be converted to IList returns empty list implementation.</returns>
            <remarks>This method doesn't provide automatic conversion of the data types, e.g. if <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value"/> property is of type default value will be returned.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToGuid">
            <summary>
            Converts the value of the property to <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Guid"/>.
            </summary>
            <returns>Guid object, if type can't be converted to Guid returns empty GUID.</returns>
            <remarks>This method doesn't provide automatic conversion of the data types, e.g. if <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value"/> property is of type default value will be returned.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectProperty.ToByteArray">
            <summary>
            Converts the value of the property to byte array.
            </summary>
            <returns>Byte array object, if type can't be converted to byte array returns empty array.</returns>
            <remarks>This method doesn't provide automatic conversion of the data types, e.g. if <see cref="P:Aspose.Email.Mapi.Msg.MessageObjectProperty.Value"/> property is of type default value will be returned.</remarks>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectRecipientsCollection">
            <summary>
            Represents a collection for <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity"/> objects.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity">
            <summary>
            Represens a recipient entry in message object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity.Properties">
            <summary>
            Gets the properties set on the recipient.
            </summary>
            <value>The properties.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity.#ctor(Aspose.Email.Mapi.Msg.MessageObjectPropertiesCollection)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectRecipientEntity"/> class with the predefined property set.
            </summary>
            <param name="properties">The properties.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectSaveFormat">
            <summary>
            Represents available formats <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/> could be saved to.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.MessageObjectSaveFormat.Msg">
            <summary>
            MSG format.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.MessageObjectWriter">
            <summary>
            Represents a base for all writers hadnling <see cref="T:Aspose.Email.Mapi.Msg.MessageObject"/>.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Msg.MessageObjectWriter.Write(System.IO.Stream,Aspose.Email.Mapi.Msg.MessageObject)">
            <summary>
            Writes the message object to the specified stream.
            </summary>
            <param name="stream">The stream to write into.</param>
            <param name="messageObject">The message object to write.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.Msg.NamedPropertyKind">
            <summary>
            Identifies <see cref="T:Aspose.Email.Mapi.Msg.MessageObjectProperty"/> kind.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.NamedPropertyKind.Numerical">
            <summary>
            Property has name id.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.Msg.NamedPropertyKind.String">
            <summary>
            Property has string name.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.PidLidPropertyDescriptor">
            <summary>
            Class contains property description information.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.#ctor(System.Int64,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidLidPropertyDescriptor"/> class
            Properties identified by an unsigned 32-bit quantity along with a property set.
            </summary>
            <param name="longId">long ID (LID): An unsigned 32-bit quantity that, in combination with a GUID, defines a named property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
            <param name="propertySet">A GUID that identifies a group of properties with a similar purpose.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.#ctor(System.String,System.Int64,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidLidPropertyDescriptor"/> class
            Properties identified by an unsigned 32-bit quantity along with a property set.
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="longId">long ID (LID): An unsigned 32-bit quantity that, in combination with a GUID, defines a named property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
            <param name="propertySet">A GUID that identifies a group of properties with a similar purpose.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.#ctor(System.String,System.String,System.Int64,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidLidPropertyDescriptor"/> class
            Properties identified by an unsigned 32-bit quantity along with a property set.
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="name">The MAPI name used to refer to the property in the documentation.</param>
            <param name="longId">long ID (LID): An unsigned 32-bit quantity that, in combination with a GUID, defines a named property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
            <param name="propertySet">A GUID that identifies a group of properties with a similar purpose.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.PidLidPropertyDescriptor.LongId">
            <summary>
            Gets an unsigned 32-bit quantity that, along with the property set, identifies a named property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.PidLidPropertyDescriptor.PropertySet">
            <summary>
            A GUID that identifies a group of properties with a similar purpose.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.op_Equality(Aspose.Email.Mapi.PidLidPropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.op_Inequality(Aspose.Email.Mapi.PidLidPropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are not equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is not equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.Equals(System.Object)">
            <summary>
            Determines whether the specified System.Object is equal to the current System.Object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified System.Object is equal to the current System.Object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.Equals(Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Indicates whether the current object is equal to another object of the same type.
            </summary>
            <param name="other">An object to compare with this object.</param>
            <returns>true if the current object is equal to the other parameter; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.GetHashCode">
            <summary>
            Serves as a hash function for a type.
            </summary>
            <returns>A hash code for the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidLidPropertyDescriptor.ToString">
            <summary>
            Returns a string that represents the property description.
            </summary>
            <returns>A string that represents the property description.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.PidNamePropertyDescriptor">
            <summary>
            Class contains property description information.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.#ctor(System.String,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidNamePropertyDescriptor"/> class
            Properties identified by a string name along with a property set.
            </summary>
            <param name="name">A string that, along with the property set, identifies a named property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
            <param name="propertySet">A GUID that identifies a group of properties with a similar purpose.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.#ctor(System.String,System.String,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidNamePropertyDescriptor"/> class
            Properties identified by a string name along with a property set.
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="name">A string that, along with the property set, identifies a named property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
            <param name="propertySet">A GUID that identifies a group of properties with a similar purpose.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.PidNamePropertyDescriptor.PropertySet">
            <summary>
            A GUID that identifies a group of properties with a similar purpose.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.op_Equality(Aspose.Email.Mapi.PidNamePropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.op_Inequality(Aspose.Email.Mapi.PidNamePropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are not equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is not equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.Equals(System.Object)">
            <summary>
            Determines whether the specified System.Object is equal to the current System.Object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified System.Object is equal to the current System.Object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.Equals(Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Indicates whether the current object is equal to another object of the same type.
            </summary>
            <param name="other">An object to compare with this object.</param>
            <returns>true if the current object is equal to the other parameter; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.GetHashCode">
            <summary>
            Serves as a hash function for a type.
            </summary>
            <returns>A hash code for the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidNamePropertyDescriptor.ToString">
            <summary>
            Returns a string that represents the property description.
            </summary>
            <returns>A string that represents the property description.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.PidTagPropertyDescriptor">
            <summary>
            Class contains property description information.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.#ctor(System.Int32,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> class
            A property that is defined by a 16-bit property ID and a 16-bit property type. 
            The property ID for a tagged property is in the range 0x001 ‚Äì 0x7FFF. 
            Property IDs in the range 0x8000 ‚Äì 0x8FFF are reserved for assignment to named properties
            </summary>
            <param name="id">Unsigned 16-bit quantity that identifies a tagged property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.#ctor(System.String,System.Int32,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> class
            A property that is defined by a 16-bit property ID and a 16-bit property type. 
            The property ID for a tagged property is in the range 0x001 ‚Äì 0x7FFF. 
            Property IDs in the range 0x8000 ‚Äì 0x8FFF are reserved for assignment to named properties
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="id">Unsigned 16-bit quantity that identifies a tagged property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.#ctor(System.String,System.String,System.Int32,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> class
            A property that is defined by a 16-bit property ID and a 16-bit property type. 
            The property ID for a tagged property is in the range 0x001 ‚Äì 0x7FFF. 
            Property IDs in the range 0x8000 ‚Äì 0x8FFF are reserved for assignment to named properties
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="name">The MAPI name used to refer to the property in the documentation.</param>
            <param name="id">Unsigned 16-bit quantity that identifies a tagged property.</param>
            <param name="type">Specifies the type of values allowed for the property.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.#ctor(System.Int64)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> class
            A property that is defined by a 16-bit property ID and a 16-bit property type. 
            The property ID for a tagged property is in the range 0x001 ‚Äì 0x7FFF. 
            Property IDs in the range 0x8000 ‚Äì 0x8FFF are reserved for assignment to named properties
            </summary>
            <param name="tag">A tag is a 32-bit number that contains a unique property identifier in bits 16 through 31 and a property type in bits 0 through 15</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.#ctor(System.String,System.String,System.Int64)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> class
            A property that is defined by a 16-bit property ID and a 16-bit property type. 
            The property ID for a tagged property is in the range 0x001 ‚Äì 0x7FFF. 
            Property IDs in the range 0x8000 ‚Äì 0x8FFF are reserved for assignment to named properties
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="name">The MAPI name used to refer to the property in the documentation.</param>
            <param name="tag">A tag is a 32-bit number that contains a unique property identifier in bits 16 through 31 and a property type in bits 0 through 15</param>
        </member>
        <member name="P:Aspose.Email.Mapi.PidTagPropertyDescriptor.Id">
            <summary>
            Gets an unsigned 16-bit quantity that identifies a tagged property. 
            Property IDs are not necessarily unique. 
            With the exception of property IDs in the range from 0x6800 to 0x7BFF, 
            the combination of property ID and data type are unique. 
            Property IDs in the range from 0x6800 to 0x7BFF are defined by the message class.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.PidTagPropertyDescriptor.Tag">
            <summary>
            A property tag is a 32-bit number that contains a unique property identifier in bits 16 through 31 and a property type in bits 0 through 15.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.op_Equality(Aspose.Email.Mapi.PidTagPropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.op_Explicit(System.Int64)~Aspose.Email.Mapi.PidTagPropertyDescriptor">
            <summary>
            Converts tag value to tagged property
            </summary>
            <param name="tag">tag value of a tag property</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.op_Inequality(Aspose.Email.Mapi.PidTagPropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are not equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is not equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.Equals(System.Object)">
            <summary>
            Determines whether the specified System.Object is equal to the current System.Object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified System.Object is equal to the current System.Object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.Equals(Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Indicates whether the current object is equal to another object of the same type.
            </summary>
            <param name="other">An object to compare with this object.</param>
            <returns>true if the current object is equal to the other parameter; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.GetHashCode">
            <summary>
            Serves as a hash function for a type.
            </summary>
            <returns>A hash code for the current object.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PidTagPropertyDescriptor.ToString">
            <summary>
            Returns a string that represents the property description.
            </summary>
            <returns>A string that represents the property description.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.DeliveryReportMailMessageInterpretor">
            <summary>
            Represents a Delivery Report MailMesssage interpretor.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.DeliveryReportMailMessageInterpretor.Clone">
            <summary>
            Creates a copy of the current instance.
            </summary>
            <returns>A copy of DeliveryReportMailMessageInterpretor.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.DeliveryReportMailMessageInterpretor.LoadMessageHeader(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the headers of MIME protocol to a MailMessage from the MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.OpaqueSignedMailMessageInterpretor">
            <summary>
            Represents the interpretor of the opaque-signed mail messages specified 
            in [MS-OXOSMIME] (S/MIME E-Mail object protocol specification)
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.OpaqueSignedMailMessageInterpretor.Interpret(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Interprets the given <see cref="T:Aspose.Email.Mapi.MapiMessage"/> like opaque-signed mail message
            </summary>
            <param name="mapiMessage">A mapi message</param>
            <exception cref="T:System.ArgumentNullException"><paramref name="mapiMessage"/> is <c>null</c></exception>
            <returns>A <see cref="T:Aspose.Email.MailMessage"/> created from the given mapi message</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.OpaqueSignedMailMessageInterpretor.Clone">
            <summary>
            Returns a new <see cref="T:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor"/>
            </summary>
            <returns>A new <see cref="T:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor"/></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.OpaqueSignedMailMessageInterpretor.IsOpaqueSigned(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Determines whether the specified MSG is opaque signed.
            </summary>
            <param name="msg">The MapiMessage.</param>
            <returns>
            </returns>
        </member>
        <member name="T:Aspose.Email.Mapi.PropertyDataType">
            <summary>
            [MS-OXCDATA]: Data Structures
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Unspecified">
            <summary>
            Any: this property type value matches any type; 
            a server MUST return the actual type in its response. 
            Servers MUST NOT return this type in response to a client request other than NspiGetIDsFromNames 
            or the RopGetPropertyIdsFromNames ROP request ([MS-OXCROPS] section 2.2.8.1).
            Specification name: PtypUnspecified; Alternate names: PT_UNSPECIFIED;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Null">
            <summary> 
            None: This property is a placeholder. 
            Specification name: PtypNull; Alternate names: PT_NULL;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Integer16">
            <summary> 
            2 bytes; a 16-bit integer 
            Specification name: PtypInteger16; Alternate names: PT_SHORT, PT_I2, i2, ui2;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Integer32">
            <summary> 
            4 bytes; a 32-bit integer 
            Specification name: PtypInteger32; Alternate names: PT_LONG, PT_I4, int, ui4;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Floating32">
            <summary> 
            4 bytes; a 32-bit floating point number
            Specification name: PtypFloating32; Alternate names: PT_FLOAT, PT_R4, float, r4;
             </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Floating64">
            <summary> 
            8 bytes; a 64-bit floating point number 
            Specification name: PtypFloating64; Alternate names: PT_DOUBLE, PT_R8, r8;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Currency">
            <summary> 
            8 bytes; a 64-bit signed, 
            scaled integer representation of a decimal currency value, 
            with four places to the right of the decimal point
            Specification name: PtypCurrency; Alternate names: PT_CURRENCY, fixed.14.4;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.FloatingTime">
            <summary>
            8 bytes; a 64-bit floating point number in which the whole number part represents the number of days since December 30, 1899, 
            and the fractional part represents the fraction of a day since midnight
            Specification name: PtypFloatingTime; Alternate names: PT_APPTIME;
            The date information is represented by whole-number increments, starting with December 30, 1899 midnight as time zero. 
            The time information is represented by the fraction of a day since the preceding midnight. 
            For example, 6:00 A.M. on January 4, 1900 would be represented by the value 5.25 (5 and 1/4 of a day past December 30, 1899). 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.ErrorCode">
            <summary> 
            4 bytes; a 32-bit integer encoding error information 
            Specification name: PtypErrorCode; Alternate names: PT_ERROR;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Boolean">
            <summary> 
            1 byte; restricted to 1 or 0 
            Specification name: PtypBoolean; Alternate names: PT_BOOLEAN. bool;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Integer64">
            <summary> 
            8 bytes; a 64-bit integer  
            Specification name: PtypInteger64; Alternate names: PT_LONGLONG, PT_I8, i8, ui8;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.String">
            <summary>
            Variable size; a string of Unicode characters in UTF-16LE format encoding with terminating null character (0x0000).
            Specification name: PtypString; Alternate names: PT_UNICODE, string;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.String8">
            <summary>
            Variable size; a string of multibyte characters in externally specified encoding with terminating null character (single 0 byte).
            Specification name: PtypString8; Alternate names: PT_STRING8;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Time">
            <summary>
            8 bytes; a 64-bit integer representing the number of 100-nanosecond intervals since January 1, 1601 
            Specification name: PtypTime; Alternate names: PT_SYSTIME, time, datetime, datetime.tz, datetime.rfc1123, Date, time, time.tz;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Guid">
            <summary> 
            16 bytes; a GUID with Data1, Data2, and Data3 fields in little-endian format 
            Specification name: PtypGuid; Alternate names: PT_CLSID, UUID;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.ServerId">
            <summary> 
            Variable size; a 16-bit COUNT field followed by a structure 
            Specification name: PtypServerId; Alternate names: PT_SVREID;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Restriction">
            <summary> 
            Variable size; a byte array representing one or more Restriction structures 
            Specification name: PtypRestriction; Alternate names: PT_SRESTRICT;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.RuleAction">
            <summary> 
            Variable size; a 16-bit COUNT field followed by that many rule action structures 
            Specification name: PtypRuleAction; Alternate names: PT_ACTIONS;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Binary">
            <summary> 
            Variable size; a COUNT field followed by that many bytes. 
            Specification name: PtypBinary; Alternate names: PT_BINARY;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleInteger16">
            <summary> 
            Variable size; a COUNT field followed by that many PtypInteger16 values. 
            Specification name: PtypMultipleInteger16; Alternate names: PT_MV_SHORT, PT_MV_I2, mv.i2;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleInteger32">
            <summary> 
            Variable size; a COUNT field followed by that many PtypInteger32 values. 
            Specification name: PtypMultipleInteger32; Alternate names: PT_MV_LONG, PT_MV_I4, mv.i4;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleFloating32">
            <summary> 
            Variable size; a COUNT field followed by that many PtypFloating32 values. 
            Specification name: PtypMultipleFloating32; Alternate names: PT_MV_FLOAT, PT_MV_R4, mv.float;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleFloating64">
            <summary> 
            Variable size; a COUNT field followed by that many PtypFloating64 values. 
            Specification name: PtypMultipleFloating64; Alternate names: PT_MV_DOUBLE, PT_MV_R8;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleCurrency">
            <summary> 
            Variable size; a COUNT field followed by that many PtypCurrency values. 
            Specification name: PtypMultipleCurrency; Alternate names: PT_MV_CURRENCY, mv.fixed.14.4;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleFloatingTime">
            <summary> 
            Variable size; a COUNT field followed by that many PtypFloatingTime values. 
            Specification name: PtypMultipleFloatingTime; Alternate names: PT_MV_APPTIME;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleBoolean">
            <summary> 
            Variable size; a COUNT field followed by that many PtypBoolean values. 
            Specification name: PtypMultipleBoolean; Alternate names: PT_MV_BOOLEAN;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleInteger64">
            <summary> 
            Variable size; a COUNT field followed by that many PtypInteger64 values. 
            Specification name: PtypMultipleInteger64; Alternate names: PT_MV_I8, PT_MV_LONGLONG;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleString">
            <summary> 
            Variable size; a COUNT field followed by that many PtypString values. 
            Specification name: PtypMultipleString; Alternate names: PT_MV_UNICODE;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleString8">
            <summary> 
            Variable size; a COUNT field followed by that many PtypString8 values. 
            Specification name: PtypMultipleString8; Alternate names: PT_MV_STRING8, mv.string;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleTime">
            <summary> 
            Variable size; a COUNT field followed by that many PtypTime values. 
            Specification name: PtypMultipleTime; Alternate names: PT_MV_SYSTIME;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleGuid">
            <summary> 
            Variable size; a COUNT field followed by that many PtypGuid values. 
            Specification name: PtypMultipleGuid; Alternate names: PT_MV_CLSID, mv.uuid;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.MultipleBinary">
            <summary> 
            Variable size; a COUNT field followed by that many PtypBinary values. 
            Specification name: PtypMultipleBinary; Alternate names: PT_MV_BINARY, mv.bin.hex;
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.PropertyDataType.Object">
            <summary> 
            The property value is a Component Object Model (COM) object. 
            Specification name: PtypObject or PtypEmbeddedTable; Alternate names: PT_OBJECT;
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.PropertyDescriptor">
            <summary>
            Class contains property description information.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.PropertyDescriptor.Use8BitStringAsUnicode">
            <summary>
            Specifies if PropertyDataType.String8 has to be interpreted as PropertyDataType.String
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.Parse(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PropertyDescriptor"/> class
            </summary>
            <param name="data">A string that represents the property description.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.#ctor(Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PropertyDescriptor"/> class
            </summary>
            <param name="type">The property value type, as described in [MS-OXCDATA], that specifies the type of values allowed for the property.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.#ctor(System.String,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PropertyDescriptor"/> class
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="type">The property value type, as described in [MS-OXCDATA], that specifies the type of values allowed for the property.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.#ctor(System.String,System.String,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.PropertyDescriptor"/> class
            </summary>
            <param name="canonicalName">The name used to refer to the property in the documentation.</param>
            <param name="name">The MAPI name used to refer to the property in the documentation.</param>
            <param name="type">The property value type, as described in [MS-OXCDATA], that specifies the type of values allowed for the property.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.PropertyDescriptor.DataType">
            <summary>
             The property value type, as described in [MS-OXCDATA], that specifies the type of values allowed for the property.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.PropertyDescriptor.CanonicalName">
            <summary>
            The name used to refer to the property in the documentation.
            The prefix of the canonical name identifies the basic characteristics of a property to the implementer. 
            The canonical naming structure uses three categories that are denoted by the following prefixes to the canonical property name: 
            * PidLid prefix: Properties identified by an unsigned 32-bit quantity along with a property set. 
            * PidName prefix: Properties identified by a string name along with a property set.
            * PidTag prefix: Properties identified by an unsigned 16-bit quantity. 
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.PropertyDescriptor.Name">
            <summary>
            Gets string that, identifies a property.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.Equals(Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Indicates whether the current object is equal to another object of the same type.
            </summary>
            <param name="other">An object to compare with this object.</param>
            <returns>true if the current object is equal to the other parameter; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.Equals(System.Object)">
            <summary>
            Determines whether the specified System.Object is equal to the current System.Object.
            </summary>
            <param name="obj">The object to compare with the current object.</param>
            <returns>true if the specified System.Object is equal to the current System.Object; otherwise, false.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.op_Equality(Aspose.Email.Mapi.PropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.op_Inequality(Aspose.Email.Mapi.PropertyDescriptor,Aspose.Email.Mapi.PropertyDescriptor)">
            <summary>
            Determines whether the specified objects are not equal to each another.
            </summary>
            <param name="pd1">The object to compare with another object.</param>
            <param name="pd2">The object to compare with another object.</param>
            <returns>
            true if the specified PropertyDescriptor is not equal to the another PropertyDescriptor; 
            otherwise, false.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.GetInstance(System.Int32,Aspose.Email.Mapi.PropertyDataType)">
            <summary>
            Retrieves <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> object
            </summary>
            <param name="id">Id of a property</param>
            <param name="dataType">Data type of a property</param>
            <returns><see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> object</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.GetInstance(System.Int64)">
            <summary>
            Retrieves <see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> object
            </summary>
            <param name="tag">Tag of a property</param>
            <returns><see cref="T:Aspose.Email.Mapi.PidTagPropertyDescriptor"/> object</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.GetInstance(System.Int64,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Retrieves <see cref="T:Aspose.Email.Mapi.PidLidPropertyDescriptor"/> object
            </summary>
            <param name="lid">Long id of a property</param>
            <param name="dataType">Data type of a property</param>
            <param name="propertySet">PropertySet of a property</param>
            <returns><see cref="T:Aspose.Email.Mapi.PidLidPropertyDescriptor"/> object</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.GetInstance(System.String,Aspose.Email.Mapi.PropertyDataType,System.Guid)">
            <summary>
            Retrieves <see cref="T:Aspose.Email.Mapi.PidNamePropertyDescriptor"/> object
            </summary>
            <param name="name">Name of a property</param>
            <param name="dataType">Data type of a property</param>
            <param name="propertySet">PropertySet of a property</param>
            <returns><see cref="T:Aspose.Email.Mapi.PidNamePropertyDescriptor"/> object</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.PropertyDescriptor.GetInstance(Aspose.Email.Mapi.MapiProperty)">
            <summary>
            Retrieves <see cref="T:Aspose.Email.Mapi.PropertyDescriptor"/> object from MAPI property
            </summary>
            <param name="property"><see cref="T:Aspose.Email.Mapi.MapiProperty"/> object</param>
        </member>
        <member name="T:Aspose.Email.Mapi.MailConversionOptions">
            <summary>
            Specify additional options when converting from MapiMessage to MailMessage.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MailConversionOptions.ConvertAsTnef">
            <summary>
            Set to true to import the MapiMessage information into a MailMessage object with MapiMessage as TNEF attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MailConversionOptions.PreserveEmbeddedMessageFormat">
            <summary>
            Gets or sets a value indicating whether it is necessary to preserve format  of 
            embedded message at converting to MailMessage.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.NamespaceDoc">
            <summary>
            The <b>Aspose.Email.Mapi</b> namespace contains classes that represent Outlook messages,
            contacts, appointments and classes for work with Microsoft Outlook PST\OST file format.  
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiContactOtherPropertySet">
            <summary>
            The properties are used to specify additional properies of contact. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactOtherPropertySet.#ctor">
            <summary>
            Initializes a new instance of <see cref="T:Aspose.Email.Mapi.MapiContactOtherPropertySet"/> class
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactOtherPropertySet.#ctor(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Initializes a new instance of <see cref="T:Aspose.Email.Mapi.MapiContactOtherPropertySet"/> class
            </summary>
            <param name="msg">A <see cref="T:Aspose.Email.Mapi.MapiMessage"/> containing contact name properties</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.Private">
            <summary>
            Indicates whether the end-user wants this message object hidden from other users who have access to the message object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.Journal">
            <summary>
            Specifies whether to create a journal for each action associated with this contact.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.ReminderTime">
            <summary>
            Specifies the initial signal time for a reminder.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.ReminderTopic">
            <summary>
            Represents the status of a meeting request.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.UserField1">
            <summary>
            Specifies the first field on the contact that is intended for miscellaneous use for the contact.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.UserField2">
            <summary>
            Specifies the second field on the contact that is intended for miscellaneous use for the contact.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.UserField3">
            <summary>
            Specifies the third field on the contact that is intended for miscellaneous use for the contact.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactOtherPropertySet.UserField4">
            <summary>
            Specifies the forth field on the contact that is intended for miscellaneous use for the contact.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactOtherPropertySet.SetProperties(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Sets the message properties.
            </summary>
            <param name="msg">The MapiMessage.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiElectronicAddress">
            <summary>
            Refers to the group of properties that 
            define the e-mail address or fax address.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiElectronicAddress.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiElectronicAddress"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiElectronicAddress.#ctor(System.String,System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiElectronicAddress"/> class.
            </summary>
            <param name="displayName">The display name.</param>
            <param name="addressType">Type of the address.</param>
            <param name="emailAddress">The email address.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiElectronicAddress.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiElectronicAddress"/> class.
            </summary>
            <param name="emailAddress">The email address.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiElectronicAddress.#ctor(System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiElectronicAddress"/> class.
            </summary>
            <param name="faxNumber">The fax number.</param>
            <param name="emailAddress">The email address.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiElectronicAddress.op_Implicit(System.String)~Aspose.Email.Mapi.MapiElectronicAddress">
            <summary>
            Performs an implicit conversion from <see cref="T:System.String"/> to <see cref="T:Aspose.Email.Mapi.MapiElectronicAddress"/>.
            </summary>
            <param name="emailAddress">The email address.</param>
            <returns>The result of the conversion.</returns>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.IsEmpty">
            <summary>
            Shows if MapiElectronicAddress is empty
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.DisplayName">
            <summary>
            Gets or sets the user-readable 
            display name for the e-mail address.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.OriginalDisplayName">
            <summary>
            Gets or sets the SMTP e-mail address that 
            corresponds to the e-mail address .
            </summary>
            <value>The SMTP e-mail address.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.AddressType">
            <summary>
            Gets or sets the address type 
            of an electronic address.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.EmailAddress">
            <summary>
            Gets or sets the e-mail address.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiElectronicAddress.FaxNumber">
            <summary>
            Gets or sets the telephone number 
            of the mail user's primary fax machine.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiContactPhoto">
            <summary>
            Contains data and type of contact's photo. 
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactPhoto.#ctor(System.Byte[],Aspose.Email.Mapi.MapiContactPhotoImageFormat)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiContactPhoto"/> class
            </summary>
            <param name="data">Image data of photo.</param>
            <param name="photoImageFormat">Image format of photo <see cref="T:Aspose.Email.Mapi.MapiContactPhotoImageFormat"/>.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactPhoto.FromMapiMessage(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Gets MapiContactPhoto from MapiMessage.
            </summary>
            <param name="msg">MapiMessage.<see cref="T:Aspose.Email.Mapi.MapiMessage"/><param/>
            <returns></returns></param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactPhoto.FromVCardPhoto(Aspose.Email.PersonalInfo.VCard.VCardPhoto)">
            <summary>
            Gets MapiContactPhoto from VCardPhoto.
            </summary>
            <param name="photo">VCardPhoto.<see cref="T:Aspose.Email.PersonalInfo.VCard.VCardPhoto"/></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactPhoto.SetProperties(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Sets the message properties.
            </summary>
            <param name="msg">The MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactPhoto.ToVCard(Aspose.Email.PersonalInfo.VCard.VCardHeaderList)">
            <summary>
            Converts this <see cref="T:Aspose.Email.Mapi.MapiContactPhoto"/> into vCard properties and adds them to the specified. <see cref="T:Aspose.Email.PersonalInfo.VCard.VCardHeaderList"/>
            </summary>
            <param name="vCardProperties">A <see cref="T:Aspose.Email.PersonalInfo.VCard.VCardHeaderList"/></param>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiDistributionListEntryIdType">
            <summary>
            Specifies the type of EntryID.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListEntryIdType.OneOff">
            <summary>
            Designates a one-off EntryID.
            The EntryID must be a One-Off EntryID structure.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListEntryIdType.Contact">
            <summary>
            EntryID of a Contact object.
            The EntryID must be a Message EntryID structure.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListEntryIdType.DistributionList">
            <summary>
            EntryID of a Personal Distribution List object.
            The EntryID must be a Message EntryID structure.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListEntryIdType.GalMailUser">
            <summary>
            EntryID of a mail user in the GAL.
            The EntryID must be an Address Book EntryID structure.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListEntryIdType.GalDistributionList">
            <summary>
            EntryID of a distribution list in the GAL.
            The EntryID must be an Address Book EntryID structure.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiCalendarExceptionInfo">
            <summary>
            An exception specifies changes to an instance of a recurring series.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiCalendarExceptionInfo.#ctor(System.IO.BinaryReader)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiCalendarExceptionInfo"/> class.
            </summary>
            <param name="reader">The reader.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.StartDateTime">
            <summary>
            Gets the start date.
            </summary>
            <value>The start date time.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.EndDateTime">
            <summary>
            Gets the end date.
            </summary>
            <value>The end date time.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.OriginalStartDate">
            <summary>
            Gets the original start date.
            </summary>
            <value>The original start date.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.OverrideFlags">
            <summary>
            Gets the override flags.
            </summary>
            <value>The override flags.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.Subject">
            <summary>
            Gets the subject.
            </summary>
            <value>The subject.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.Body">
            <summary>
            Gets the body.
            </summary>
            <value>The body.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.MeetingType">
            <summary>
            Gets the type of the meeting.
            </summary>
            <value>The type of the meeting.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.ReminderDelta">
            <summary>
            Gets the reminder delta.
            </summary>
            <value>The reminder delta.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.ReminderSet">
            <summary>
            Gets a value for the PidLidReminderSet property.
            </summary>
            <value><c>true</c> if [reminder set]; otherwise, <c>false</c>.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.Location">
            <summary>
            Gets the location.
            </summary>
            <value>The location.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.BusyStatus">
            <summary>
            Gets the busy status.
            </summary>
            <value>The busy status.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.HasAttachment">
            <summary>
            Gets a value of this field specifies whether the 
            Exception Embedded Message object contains attachments
            </summary>
            <value>
            	<c>true</c> if the Exception Embedded Message object has attachment; otherwise, <c>false</c>.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiCalendarExceptionInfo.SubType">
            <summary>
            Gets the subtype.
            </summary>
            <value>The subtype.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiCalendarExceptionInfo.ParseExceptionEmbeddedMessage(Aspose.Email.Mapi.MapiCalendar)">
            <summary>
            Retrieves data from a message.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiCalendarOverrideFlags">
            <summary>
            Specifies what data in the MapiCalendarOverrideFlags structure has a value different from the recurring series.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.Subject">
            <summary>
            Indicates that the Subject, SubjectLength, and SubjectLength2 fields are present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.MeetingType">
            <summary>
            Indicates that the MeetingType field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.ReminderDelta">
            <summary>
            Indicates that the ReminderDelta field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.Reminder">
            <summary>
            Indicates that the ReminderSet field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.Location">
            <summary>
            Indicates that the Location, LocationLength, and LocationLength2 fields are present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.BusyStatus">
            <summary>
            Indicates that the BusyStatus field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.Attachment">
            <summary>
            Indicates that the attachment field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.Subtype">
            <summary>
            Indicates that the SubType field is present.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.AppointmentColor">
            <summary>
            Reserved for future use and MUST NOT be set.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiCalendarOverrideFlags.ExceptionalBody">
            <summary>
            Indicates that the Exception Embedded Message object has the PidTagRtfCompressed property set on it.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiDistributionList">
            <summary>
            Represents the Personal Distribution List object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionList.DistListClass">
            <summary>
            Represents message class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiDistributionList"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.#ctor(System.String,Aspose.Email.Mapi.MapiDistributionListMemberCollection)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiDistributionList"/> class.
            </summary>
            <param name="displayName">The display namme.</param>
            <param name="members">The recipiens.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.#ctor(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiDistributionList"/> class.
            </summary>
            <param name="msg">The MSG.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionList.Members">
            <summary>
            Gets the list of the members of the personal distribution list.
            </summary>
            <value>The collection of MapiDistributionListMember.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionList.DisplayName">
            <summary>
            Gets or sets the user-visible name of the personal distribution list.
            </summary>
            <value>The display name.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.Save(System.String)">
            <summary>
            Saves the specified file name.
            </summary>
            <param name="fileName">Name of the file.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.Save(System.IO.Stream)">
            <summary>
            Saves the specified stream.
            </summary>
            <param name="stream">The stream.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.ReadWrappedEntryIdStructure(System.Byte[],System.Byte[])">
            <summary>
            Reads the wrapped entry id structure.
            </summary>
            <param name="data">The data.</param>
            <param name="oneOffEntryIdData">The one off entry id data.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.ReadOneOffEntryIdStructure(System.Byte[],Aspose.Email.Mapi.MapiDistributionListMember)">
            <summary>
            Reads recipient from One-Off EntryID Structure.
            A One-Off EntryID structure specifies a set of data 
            representing recipients that do not exist in the directory. 
            </summary>
            <param name="data">The data.</param>
            <param name="member"></param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionList.ConvertToMapiMessage">
            <summary>
            Converts contact object to mapi message
            </summary>
            <returns><see cref="T:Aspose.Email.Mapi.MapiMessage"/> that represents a MAPI message</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiDistributionListContactAddressType">
            <summary>
            Represents the address type of 
            a personal distribution list member.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.BusinessFax">
            <summary>
            Business Fax electronic address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.HomeFax">
            <summary>
            Home Fax electronic address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.PrimaryFax">
            <summary>
            Primary Fax electronic address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.Email1">
            <summary>
            Email1 address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.Email2">
            <summary>
            Email2 address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.Email3">
            <summary>
            Email3 address.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiDistributionListContactAddressType.None">
            <summary>
            None.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiDistributionListMember">
            <summary>
            Represents the members of the personal distribution list.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionListMember.#ctor(System.String,System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiDistributionListMember"/> class.
            </summary>
            <param name="displayName">The display name.</param>
            <param name="emailAddress">The email address.</param>
            <exception cref="T:System.ArgumentException">If <paramref name="displayName"/> is null or empty.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="emailAddress"/> is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionListMember.#ctor(System.Byte[],Aspose.Email.Mapi.MapiDistributionListEntryIdType,Aspose.Email.Mapi.MapiDistributionListContactAddressType)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiDistributionListMember"/> class.
            </summary>
            <param name="entryId">The entry id.</param>
            <param name="entryIdType">Type of the entry id.</param>
            <param name="contactAddressType">Type of the contact address.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.DisplayName">
            <summary>
            Gets or sets the recipient's display name.
            </summary>
            <value>The display name.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.EmailAddress">
            <summary>
            Gets or sets the recipient's e-mail address.
            </summary>
            <value>The email address.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.AddressType">
            <summary>
            Gets or sets the recipient's e-mail address type.
            </summary>
            <value>The type of the address.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.EntryId">
            <summary>
            Gets or sets the EntryID of 
            a member of a personal distribution list.
            </summary>
            <value>The entry id.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.EntryIdType">
            <summary>
            Gets or sets the type of EntryID.
            </summary>
            <value>The type of the entry id.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiDistributionListMember.ContactAddressType">
            <summary>
            Gets or sets the type of the  address,
            when EntryId property contains a the EntryID of a Contact object.
            </summary>
            <value>The type of the  address.</value>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionListMember.CreateOneOffEntryIdStructure">
            <summary>
            Creates the one off entry id structure.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiDistributionListMember.CreateWrappedEntryIdStructure">
            <summary>
            Creates the one off entry id structure.
            </summary>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiDistributionListMemberCollection">
            <summary>
            Represents a collection of <see cref="T:Aspose.Email.Mapi.MapiDistributionListMember"/> objects.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiContactPhotoImageFormat">
            <summary>
            Enumerates MapiContact photo image format.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Undefined">
            <summary>
            Undefined format.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Jpeg">
            <summary>
            Jpeg format
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Gif">
            <summary>
            Graphics interchange format.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Wmf">
            <summary>
            MS windows metafile.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Bmp">
            <summary>
            MS windows bitmap.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiContactPhotoImageFormat.Tiff">
            <summary>
            Tagged image file format.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiConversionOptions">
            <summary>
            This class allows the user to specify additional options when converting from MailMessage to MapiMessage.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiConversionOptions.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiConversionOptions"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiConversionOptions.#ctor(Aspose.Email.Mapi.OutlookMessageFormat)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiConversionOptions"/> class with specified OutlookMessageFormat.
            </summary>
            <param name="format">Format of MapiMessage <see cref="T:Aspose.Email.Mapi.OutlookMessageFormat"/>.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.Format">
            <summary>
            Represents outlook message format.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.PreserveSignature">
            <summary>
            Set to true, if signature is to be preserved.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.UseBodyCompression">
            <summary>
            Set to true, if need RTF body compression.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.PreserveOriginalDates">
            <summary>
            Gets or sets a value indicating whether it is necessary to generate 
            new saving and modification dates when converting a message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.PreserveOriginalAddresses">
            <summary>
            Gets or sets a value indicating whether it is necessary to keep 
            original value of mail addresses (without validation).
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.PreserveEmbeddedMessageFormat">
            <summary>
            Gets or sets a value indicating whether it is necessary to preserve 
            conversion .eml attachment to .msg attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.ASCIIFormat">
            <summary>
            Returns MapiConversionOptions with OutlookMessageFormat is ASCII(PreserveSignature is False, UseBodyCompression is False).
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiConversionOptions.UnicodeFormat">
            <summary>
            Returns MapiConversionOptions with OutlookMessageFormat is Unicode(PreserveSignature is False, UseBodyCompression is False).
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiMessageItemBase">
            <summary>
            Represents the base class for all MapiMessageItem classes and keeps common collections of mapi properties, attachments, recipients.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiMessageItemBase.CategoryPropertyId">
            <summary>
            Name of property that contains keywords or categories for the message object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiMessageItemBase.attachments">
            <summary>
            The collection of attachments.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiMessageItemBase.recipients">
            <summary>
            The collection of recipients.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiMessageItemBase.namedPropertyMappingStorage">
            <summary>
            The named property mapping storage.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiMessageItemBase.disposed">
            <summary>
            Indicates that this instance is disposed.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiMessageItemBase"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.#ctor(Aspose.Email.Mapi.MapiPropertyCollection)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiMessageItemBase"/> class.
            </summary>
            <param name="properties">MapiPropertyCollection</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetPriority(Aspose.Email.Mapi.MapiMessageItemBase,Aspose.Email.MailPriority)">
            <summary>
            Sets MailPriority value for MapiMessageItemBase
            See more PidTagPriority mapi property:      https://msdn.microsoft.com/en-us/library/ee159473(v=exchg.80).aspx
            See more PidTagImportance mapi property:    https://msdn.microsoft.com/en-us/library/ee237166(v=exchg.80).aspx
            </summary>
            <param name="message">Mapi object</param>
            <param name="priority">Mail priority</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetProperty(Aspose.Email.Mapi.PropertyDescriptor,System.Object)">
            <summary>
            Sets MAPI property.
            </summary>
            <param name="pd">The property descriptor.</param>
            <param name="value">The property data.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Attachments">
            <summary>
            Gets the attachments in the message.
            </summary>
            <value>
            The attachment collection.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.PropertyStream">
            <summary>
            Gets the property stream.
            </summary>
            <value>
            The property stream.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.NamedProperties">
            <summary>
            Gets the named properties of message.
            </summary>
            <value>
            The collection of named properties.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Recipients">
            <summary>
            Gets the recipients of the message.
            </summary>
            <value>
            The collection of recipients.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.SubStorages">
            <summary>
            Gets the sub storages.
            </summary>
            <value>The sub storages.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.NamedPropertyMapping">
            <summary>
            Gets the named property mapping.
            </summary>
            <value>The named property mapping.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.SubjectPrefix">
            <summary>
            Gets a subject prefix that typically indicates some action on a message, such as "FW: " for forwarding. 
            </summary>
            <value>
            The string that represents subject prefix.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.BodyType">
            <summary>
            Gets the type of the body.
            </summary>
            <value>The type of the body.</value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.BodyRtf">
            <summary>
            Gets or sets the RTF formatted message text.
            </summary>
            <remarks>
            When setting a value, the values of PR_RTF_COMPRESSED, 
            PR_RTF_DECOMPRESSES, PR_BODY properties are updated. 
            A string value being set must have RTF format. 
            Thus, if it is necessary to set a value in HTML format, 
            the value must be first to encoded within RTF, 
            according to RTF Extensions Specification. 
            To set the content of the body message in HTML or Plain Text formats quickly, 
            please, use SetBodyContent method. 
            When setting a null value or empty string, 
            the values of BodyRtf and Body properties are set null.
            </remarks>
            <value>
            The string that represents message body rtf.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.BodyHtml">
            <summary>
            Gets the <see cref="P:Aspose.Email.Mapi.MapiMessageItemBase.BodyRtf"/> of the message converted to HTML, if present, otherwise an empty string.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Companies">
            <summary>
            Contains the names of the companies that are associated with an item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Categories">
            <summary>
            Contains keywords or categories for the message object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Mileage">
            <summary>
            Contains the mileage information that is associated with an item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Billing">
            <summary>
            Contains the billing information associated with an item.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Sensitivity">
            <summary>
            Gets the Sensitivity.
            </summary>
            <value>
            The sensitivity.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.MessageClass">
            <summary>
            Gets a case-sensitive string that identifies the sender-defined message class, such as IPM.Note.
            The message class specifies the type, purpose, or content of the message.
            </summary>
            <value>
            The string that represents message class.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Body">
            <summary>
            Gets the message text.
            </summary>
            <value>
            The string that represents message body.
            </value>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiMessageItemBase.Subject">
            <summary>
            Gets or sets the subject of the message.
            </summary>
            <remarks>
            When setting a value, the values of SubjectPrefix(PR_SUBJECT_PREFIX) 
            and NormalizedSubject(PR_NORMALIZED_SUBJECT) properties are updated as well. 
            If Subject has no prefix, the value of SubjectPrefix property is set null. 
            When setting a null value or empty string, the  values 
            of Subject, SubjectPrefix, NormalizedSubject properties are set null.
            </remarks>
            <value>
            The string that represents message subject.
            </value>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetsIMapiMessageItemMembers(System.String,System.String,System.String)">
            <summary>
            Sets MessageClass,Body and Subject.
            </summary>
            <param name="messageClass"></param>
            <param name="body"></param>
            <param name="subject"></param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.Dispose">
            <summary>
            Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.CheckIsDisposed">
            <summary>
            Checks if the object is disposed and raised exception in this case.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.ConvertToMapiMessage">
            <summary>
            Convert item to MapiMessage. Set MessageClass, Subject, Mileage and Billing.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.InitNamedPropertyMappingStorage">
            <summary>
            Inits the named property mapping storage.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetNamedPropertyMapping(Aspose.Email.Mapi.MapiNamedPropertyMappingStorage)">
            <summary>
            Sets the named property mapping.
            </summary>
            <param name="value">The MapiNamedPropertyMappingStorage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.GetTagFromNamedProperty(Aspose.Email.Mapi.MapiNamedPropertyId)">
            <summary>
            Gets the tag from named property.
            </summary>
            <param name="propertyId">The property id.</param>
            <returns>The property tag value.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.GetTagFromNamedProperty(System.String)">
            <summary>
            Gets the tag from named property.
            </summary>
            <param name="name">The property name</param>
            <returns>The property tag value.</returns>
            <exception cref="T:System.ArgumentException"><paramref name="name"/> is <c>null</c> or <c>empty</c></exception>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(Aspose.Email.Mapi.MapiPropertyType,System.Byte[],System.Int64,System.Guid)">
            <summary>
            Adds the named property.
            </summary>
            <param name="type">The data type.</param>
            <param name="data">The property data.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(Aspose.Email.Mapi.MapiPropertyType,System.Byte[],System.Int64,System.Guid,System.Collections.Generic.IList{System.Object})">
            <summary>
            Adds the named property.
            </summary>
            <param name="type">The data type.</param>
            <param name="data">The property data.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
            <param name="mvEntries"></param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(Aspose.Email.Mapi.MapiPropertyType,System.Byte[],System.String,System.Guid)">
            <summary>
            Adds the named property.
            </summary>
            <param name="type">The data type.</param>
            <param name="data">The property data.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedPropertyToEmbeddedMsg(Aspose.Email.Mapi.MapiMessage,Aspose.Email.Mapi.MapiPropertyType,System.Byte[],System.Object,System.Guid)">
            <summary>
            Adds the named property to embedded message.
            </summary>
            <param name="msg">The embedded message.</param>
            <param name="type">The property type.</param>
            <param name="data">The property data.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetBodyContent(System.String,Aspose.Email.Mapi.BodyContentType)">
            <summary>
            Sets the content of the body.
            </summary>
            <remarks>
            It is provided for setting of the content of the body message in RTF, HTML or Plain Text formats. 
            When setting a value, the values of PR_RTF_COMPRESSED, PR_RTF_DECOMPRESSES, PR_BODY properties 
            are updated as well. 
            Note, after the value in HTML format is set, BodyRtf property returns 
            the value which is encoded within RTF.
            </remarks>
            <param name="content">The content.</param>
            <param name="contentType">Type of the content.</param>
            <exception cref="T:System.ArgumentNullException">throws if the specified content string is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.SetMessageFlags(Aspose.Email.Mapi.MapiMessageFlags)">
            <summary>
            Sets the message flags.
            </summary>
            <param name="flags">The message flags.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.RemoveProperty(System.Int64)">
            <summary>
            Provides correctly removing property from all collections.
            </summary>
            <param name="tag">The tag of MapiProperty.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.UpdateHasAttach">
            <summary>
            Updates the PR_HASATTACH property value.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.UpdateDisplayNames(Aspose.Email.Mapi.MapiRecipientType)">
            <summary>
            Updates the display names.
            </summary>
            <param name="recipientType">
            The recipient Type.
            </param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.DateTime,System.Int64,System.Guid)">
            <summary>
            Adds the named datetime property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.DateTime,Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named datetime property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.Boolean,Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named bool property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.Boolean,System.Int64,System.Guid)">
            <summary>
            Adds the named bool property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedPropertyLong(System.Int64,Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named long property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedPropertyLong(System.Int64,System.Int64,System.Guid)">
            <summary>
            Adds the named long property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.String,Aspose.Email.Mapi.OutlookMessageFormat,Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named string property.
            </summary>
            <param name="value">The value.</param>
            <param name="format">The encoding format.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.String,Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named string property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.String,Aspose.Email.Mapi.OutlookMessageFormat,System.Int64,System.Guid)">
            <summary>
            Adds the named string property.
            </summary>
            <param name="value">The value.</param>
            <param name="format">The encoding format.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.Byte[],System.Int64,System.Guid)">
            <summary>
            Adds the named binary property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiMessageItemBase.AddNamedProperty(System.Byte[],Aspose.Email.Mapi.MapiNamedPropertyId,System.Guid)">
            <summary>
            Adds the named binary property.
            </summary>
            <param name="value">The value.</param>
            <param name="nameId">The name id.</param>
            <param name="guid">The property GUID.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.Nodes.IMapiNodeFactory">
            <summary>
            Represents the MAPI node factory.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.Nodes.IMapiNodeFactory.CreateMapiNode(System.String)">
            <summary>
            Creates the mapi node.
            </summary>
            <param name="key">The node key.</param>
            <returns>The IMapiNode interface.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.Nodes.AttachmentDirectory.SfnFromLfn(System.String,System.String)">
            <summary>
            Convert long File Name to Short File name (8.3)
            </summary>
            <param name="longFileName"></param>
            <param name="extension"></param>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiRecipientTrackStatus">
            <summary>
            Represents the response status returned by the attendee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiRecipientTrackStatus.None">
            <summary>
            No response is required for this object. This is the case for appointment objects and meeting response objects.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiRecipientTrackStatus.Tentative">
            <summary>
            This value on the attendee‚Äôs meeting object indicates that the attendee has tentatively accepted the meeting request object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiRecipientTrackStatus.Accepted">
            <summary>
            This value on the attendee‚Äôs meeting object indicates that the attendee has accepted the meeting request object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiRecipientTrackStatus.Declined">
            <summary>
            This value on the attendee‚Äôs meeting object indicates that the attendee has declined the meeting request object.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.NoteSaveFormat">
            <summary>
            Enumerates NoteSaveFormat
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.NoteSaveFormat.Msg">
            <summary>
            MSG format.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.TaskSaveFormat">
            <summary>
            Enumerates TaskSaveFormat
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.TaskSaveFormat.Msg">
            <summary>
            MSG format.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiContactSaveOptions">
            <summary>
            Specifies the contact save options.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiContactSaveOptions.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiContactSaveOptions"/> class.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiContactSaveOptions.Default">
            <summary>
            Gets the default options.
            </summary>
            <value>The <see cref="T:Aspose.Email.Mapi.MapiContactSaveOptions"/> by default.</value>
        </member>
        <member name="T:Aspose.Email.Mapi.PSETID">
            <summary>
            Static class that contains guids of mapi properties sets.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.RtfCompressor">
            <summary>
            Contains methods for compress and decompress RTF streams that are compressed as 
            per the <a href="http://msdn.microsoft.com/en-us/library/cc463890%28v=EXCHG.80%29.aspx">[MS-OXRTFCP] 
            Rich Text Format (RTF) Compression Algorithm</a>.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.FollowUpFlagString">
            <summary>
            Represents predefined text string which is
            associated with the flag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.Call">
            <summary>
            "Call".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.DoNotForward">
            <summary>
            "Do not forward".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.FollowUp">
            <summary>
            "Follow up".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.ForYourInformation">
            <summary>
            "For your information".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.Forward">
            <summary>
            "Forward".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.NoResponseNecessary">
            <summary>
            "No response necessary".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.Read">
            <summary>
            "Read".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.Reply">
            <summary>
            "Reply".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.ReplyToAll">
            <summary>
            "Reply to all".
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpFlagString.Review">
            <summary>
            "Review".
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.FollowUpManager">
            <summary>
            Provides the ability to set and handle follow-up Outlook flags and categories.
            Supports the features to add and remove a flag in 
            <see cref="T:Aspose.Email.Mapi.MapiMessage"/>, and mark it as completed as well.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.CategoryPropertyId">
            <summary>
            Name of property that contains keywords or categories for the message object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.StringsStreamId">
            <summary>
            Strings stream identifier inside the named property storage.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.EntryStreamId">
            <summary>
            Entries stream identifier inside the named property storage.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.PsetidCommon">
            <summary>
            PSETID COMMON.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.PsetidTask">
            <summary>
            PSETID TASK.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpManager.PspublicStrings">
            <summary>
            PS_PUBLIC_STRINGS
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetFlag(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Sets the follow-up flag for a message.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag will be set.</param>
            <param name="flagRequest">A string indicating the requested 
            action for an e-mail message.</param>
            <exception cref="T:System.ArgumentException">If <paramref name="flagRequest"/> is null or empty.</exception>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetFlag(Aspose.Email.Mapi.MapiMessage,System.String,System.DateTime,System.DateTime)">
            <summary>
            Sets the follow-up flag for a message.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag will be set.</param>
            <param name="flagRequest">A string indicating the requested 
            action for an e-mail message.</param>
            <param name="startDate">The start date.</param>
            <param name="dueDate">The due date.</param>
            <exception cref="T:System.ArgumentException">If <paramref name="flagRequest"/> is null or empty.</exception>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetFlagForRecipients(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Sets the flag for a draft message 
            to remind recipients to follow-up.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag will be set.</param>
            <param name="flagRequest">A string indicating the requested 
            action action for recipients of an e-mail message.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="flagRequest"/> is null or empty.</exception>
            <exception cref="T:System.InvalidOperationException">If message is not set on a draft mode.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetFlagForRecipients(Aspose.Email.Mapi.MapiMessage,System.String,System.DateTime)">
            <summary>
            Sets the flag for a draft message 
            to remind recipients to follow-up.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag will be set.</param>
            <param name="flagRequest">A string indicating the requested 
            action action for recipients of an e-mail message.</param>
            <param name="reminderTime">A date indicating the date and time 
            at which the reminder should occur.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="flagRequest"/> is null or empty.</exception>
            <exception cref="T:System.InvalidOperationException">If message is not set on a draft mode.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.MarkAsCompleted(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Marks the flagged message as completed.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag is set.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.ClearFlag(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Clears the follow-up flag and reminder.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag is set.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.AddCategory(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Adds the category for a message.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a category will be added.</param>
            <param name="categoryName">Category name.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="categoryName"/> is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.RemoveCategory(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Removes the category.
            </summary>
            <param name="message">The message.</param>
            <param name="categoryName">Name of the category.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="categoryName"/> is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.ClearCategories(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Clears the categories.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the categories will be cleared.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.GetCategories(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Get the available message categories.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the categories are added.</param>
            <returns>The list of added categories.</returns>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.AddVotingButton(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Adds the voting button.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the voting button is added.</param>
            <param name="displayName">The display name of button.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="displayName"/> is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.ClearVotingButtons(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Deletes the voting buttons.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the categories will be cleared.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.RemoveVotingButton(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Removes the voting button.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the voting button is removed.</param>
            <param name="displayName">The display name of button.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentException">If <paramref name="displayName"/> is null or empty.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.GetVotingButtons(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Get the available message voting buttons.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which the buttons are added.</param>
            <returns>The list of added voting buttons.</returns>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetOptions(Aspose.Email.Mapi.MapiMessage,Aspose.Email.Mapi.FollowUpOptions)">
            <summary>
            Sets the additional follow-up options for a message.
            </summary>
            <param name="message">The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which a flag will be set.</param>
            <param name="options">The <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/>  that represents options for using 
            follow-up flags and reminders.</param>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
            <exception cref="T:System.ArgumentNullException">If <paramref name="options"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.GetOptions(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Gets the follow-up options of a message.
            </summary>
            <param name="message">
            The <see cref="T:Aspose.Email.Mapi.MapiMessage"/> in which options is set.
            </param>
            <returns>
            The <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/>  that represents options for using 
            follow-up flags, reminders, category and voting buttons.
            </returns>
            <exception cref="T:System.ArgumentNullException">If <paramref name="message"/> is null.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.GetSeparatedString(System.Collections.Generic.IList{System.Object})">
            <summary>
            Gets the separated string.
            </summary>
            <param name="list">The list.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.TryToGetPropertyTag(Aspose.Email.Mapi.MapiMessageItemBase,Aspose.Email.Mapi.MapiPropertyType,System.Int64@)">
            <summary>
            Tries to get property tag.
            </summary>
            <param name="msg">The MSG.</param>
            <param name="type">The type.</param>
            <param name="tag">The tag.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.IsCategoryExists(Aspose.Email.Mapi.MapiMessageItemBase,System.Int64,System.String)">
            <summary>
            Determines whether [is category exists] [the specified MSG].
            </summary>
            <param name="msg">The MSG.</param>
            <param name="tag">The tag.</param>
            <param name="categoryName">Name of the category.</param>
            <returns>
            	<c>true</c> if [is category exists] [the specified MSG]; otherwise, <c>false</c>.
            </returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.DeleteProperty(Aspose.Email.Mapi.MapiMessage,System.Int64)">
            <summary>
            Deletes the property.
            </summary>
            <param name="msg">The message.</param>
            <param name="tag">The property tag.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.DeleteNamedProperty(Aspose.Email.Mapi.MapiMessage,System.Int64)">
            <summary>
            Deletes the named property from message.
            </summary>
            <param name="msg">The message.</param>
            <param name="propertyId">The property id.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.DeleteNamedProperty(Aspose.Email.Mapi.MapiMessage,System.String)">
            <summary>
            Deletes the named property from message.
            </summary>
            <param name="msg">The message.</param>
            <param name="propertyId">The property id.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetFlagRequest(Aspose.Email.Mapi.MapiMessage,System.String,System.UInt32,System.Boolean)">
            <summary>
            Sets the flag request string.
            </summary>
            <param name="msg">
            The message.
            </param>
            <param name="flagRequest">
            The string that represents flag request.
            </param>
            <param name="todoItemFlags">
            The todoItemFlags.
            </param>
            <param name="completed">
            True, if task was completed.
            </param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetPredefinedFlagString(Aspose.Email.Mapi.MapiMessage,System.Int32,System.UInt32,System.Boolean)">
            <summary>
            Sets the predefined flag string.
            </summary>
            <param name="msg">
            The message.
            </param>
            <param name="flagString">
            The flag string.
            </param>
            <param name="todoItemFlags">
            The TodoItemFlags.
            </param>
            <param name="completed">
            True, if task was completed.
            </param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetDates(Aspose.Email.Mapi.MapiMessage,System.DateTime,System.DateTime)">
            <summary>
            Sets the start and due dates for the message.
            </summary>
            <param name="msg">The message.</param>
            <param name="start">The start date.</param>
            <param name="due">The due date.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpManager.SetReminder(Aspose.Email.Mapi.MapiMessage,System.DateTime)">
            <summary>
            Sets the reminder.
            </summary>
            <param name="msg">The message.</param>
            <param name="reminder">The reminder time.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.FollowUpOptions">
            <summary>
            Represents options for using follow-up flags and reminders in a message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.flagRequest">
            <summary>A string indicating the requested action for an e-mail message.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.recipientsDescription">
            <summary>A string indicating the requested action for recipients of an e-mail message.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.startDate">
            <summary>A date specifying the starting date and time for the task.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.dueDate">
            <summary>A date indicating the due date for the task.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.reminderDate">
            <summary>A date indicating the date and time at which the reminder should occur.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.recipientsReminderDate">
            <summary>A date for recipients indicating the date and time at which the reminder should occur.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.iscompleted">
            <summary>The value indicating whether the Message object was flagged as completed.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.categories">
            <summary>A list of categories.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.votingButtons">
            <summary>A list of voting buttons.</summary>
        </member>
        <member name="F:Aspose.Email.Mapi.FollowUpOptions.codePage">
            <summary>The code page.</summary>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.#ctor(System.String)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/> class.
            </summary>
            <param name="flagRequest">The flag request.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.#ctor(System.String,System.DateTime,System.DateTime)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/> class.
            </summary>
            <param name="flagRequest">The flag request.</param>
            <param name="startDate">The start Date.</param>
            <param name="dueDate">The due Date.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.#ctor(System.String,System.DateTime,System.DateTime,System.DateTime)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.FollowUpOptions"/> class.
            </summary>
            <param name="flagRequest">The flag request.</param>
            <param name="startDate">The start date.</param>
            <param name="dueDate">The due date.</param>
            <param name="reminderTime">The reminder time.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.FlagRequest">
            <summary>
            Gets or sets a string indicating the requested action for an e-mail message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.StartDate">
            <summary>
            Gets or sets a date specifying the starting date and time for the flagged message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.DueDate">
            <summary>
            Gets or sets a date indicating the due date for the flagged message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.ReminderTime">
            <summary>
            Gets or sets a date indicating the date and time at which the reminder should occur.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.RecipientsFlagRequest">
            <summary>
            Gets or sets a string indicating the requested action for recipients of an e-mail message.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.RecipientsReminderTime">
            <summary>
            Gets or sets a date for recipients indicating the date and time at which the reminder should occur.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.IsCompleted">
            <summary>
            Gets a value indicating whether the Message object was flagged as completed.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.Categories">
            <summary>
            Gets or sets string that represents list of the categories, separated by semicolons (;).
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.VotingButtons">
            <summary>
            Gets or sets string that represents list of the voting buttons names, separated by semicolons (;).
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.FollowUpOptions.CodePage">
            <summary>
            Gets or sets the code page.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.MarkAsCompleted(System.Boolean)">
            <summary>
            Marks as completed.
            </summary>
            <param name="value">The value.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.CreatePidLidVerbStream">
            <summary>
            Creates the pidlidverbstream data.
            </summary>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.ReadVotingButtons(System.Byte[])">
            <summary>
            Reads the voting buttons.
            </summary>
            <param name="verbStreamData">The verb stream data.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.ReadSwappedToDoData(System.Byte[])">
            <summary>
            Reads the swapped to do data.
            </summary>
            <param name="data">The swapped to do data.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.CreateSwappedToDoDataProperty(System.UInt32)">
            <summary>
            Creates the swappedtododata property.
            </summary>
            <param name="flags">The flags.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.CreateSwappedToDoData(System.UInt32)">
            <summary>
            Sets the swapped todo data.
            </summary>
            <param name="flags">The flags.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.CreateVoteOptionStructure(System.String,System.Int32)">
            <summary>
            Creates the vote option structure.
            </summary>
            <param name="displayName">The display name.</param>
            <param name="optionId">The option id.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.CreateVoteOptionExtrasStructure(System.String)">
            <summary>
            Creates the vote option extras structure.
            </summary>
            <param name="displayName">The display name.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.GetIdentifier(System.Int64)">
            <summary>
            Gets the property identifier.
            </summary>
            <param name="tag">The property tag.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.GetDataType(System.Int64)">
            <summary>
            Gets the type of the property data.
            </summary>
            <param name="tag">The tag.</param>
            <returns></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.FollowUpOptions.FormatDate(System.DateTime)">
            <summary>
            Formats the date.
            </summary>
            <param name="date">The date.</param>
            <returns></returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskAcceptanceState">
            <summary>
            Indicates the acceptance state of the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskAcceptanceState.NotAssigned">
            <summary>
            The Task object is not assigned.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskAcceptanceState.Unknown">
            <summary>
            The Task object's acceptance status is unknown.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskAcceptanceState.Accepted">
            <summary>
            The task assignee has accepted the Task object. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskAcceptanceState.Rejected">
            <summary>
            The task assignee has rejected the Task object. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskFlags">
            <summary>
            Contains indication flags of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.Complete">
            <summary>
            Indicates whether the task has been completed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.Accepted">
            <summary>
            Indicates whether a task assignee has replied 
            to a task request for this Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.Updates">
            <summary>
            Indicates whether the task assignee has been requested 
            to send a task update when the assigned Task object changes.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.Recurring">
            <summary>
            Indicates whether the task includes a recurrence pattern.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.StatusOnComplete">
            <summary>
            Indicates whether the task assignee has been requested to 
            send an e-mail message update when the task assignee completes the assigned task. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.DeadOccurrence">
            <summary>
            Indicates whether new occurrences 
            remain to be generated.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskFlags.ResetReminder">
            <summary>
            Indicates whether future instances 
            of recurring tasks need reminders.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskHistory">
            <summary>
            Indicates the type of change that was last made to the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.DueDateChanged">
            <summary>
            The PidLidTaskDueDate property changed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.AnotherPropertyChanged">
            <summary>
            Another property was changed.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.Accepted">
            <summary>
            The task assignee accepted this Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.Rejected">
            <summary>
            The task assignee rejected this Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.Assigned">
            <summary>
            The Task object has been assigned to a task assignee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskHistory.NoChanges">
            <summary>
            No changes were made.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskMode">
            <summary>
            Represents the assignment 
            statuses of the task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.NotAssigned">
            <summary>
            The Task object is not assigned.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.RequestEmbedded">
            <summary>
            The Task object is embedded 
            in a task request.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.Accepted">
            <summary>
            The Task object has been accepted 
            by the task assignee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.Rejected">
            <summary>
            The Task object was rejected 
            by the task assignee.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.UpdateEmbedded">
            <summary>
            The Task object is embedded 
            in a task update.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskMode.Assigned">
            <summary>
            The Task object was assigned 
            to the task assigner (self-delegation).
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.InlineAttachmentExtractor">
            <summary>
            Provides ability to extract files from MSO packages.
            Can be used to process "oledata.mso" and similar files typically attached to messages created using Outlook.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.InlineAttachmentExtractor.EnumerateMsoPackage(System.IO.Stream)">
            <summary>
            Enumerates the MSO package and returns a dictionary containing files data.
            The key is file identifier and value contains actual data.Files are usually referenced in message body using the identifiers provided.
            </summary>
            <param name="stream">The stream to parse.</param>
            <returns>Dictionary with files data.</returns>
            <exception cref="T:System.ArgumentNullException">If <paramref name="stream"/> is null.</exception>
            <exception cref="T:System.IO.InvalidDataException">If given <paramref name="stream"/> has data in incorrect format.</exception>
            <remarks>While in evaluation mode only one file is extracted from given MSO stream.</remarks>
        </member>
        <member name="M:Aspose.Email.Mapi.InlineAttachmentExtractor.DecompressMsoZlibStream(System.IO.Stream)">
            <summary>
            Decompresses the mso zlib stream, it's the stream starting with 4 byte header that holds the size of the decompressed data,
            this stream uses Zlib compression.
            </summary>
            <param name="msoStream">The mso stream.</param>
            <returns>Decompressed data of the mso stream.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTask">
            <summary>
            Represents the Outlook Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.TaskClass">
            <summary>
            Represents message class.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.flags">
            <summary>
            Contains indication flags of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.percentComplete">
            <summary>
            Indicates the progress the user has made on a task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.actualEffort">
            <summary>
            Indicates the number of minutes that 
            the user actually spent working on a task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.estimatedEffort">
            <summary>
            Indicates the number of minutes 
            that the user expects to work on a task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.dueDate">
            <summary>
            The date by which the user expects work 
            on the task to be complete.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.startDate">
            <summary>
            The date on which the user 
            expects work on the task to begin.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.dateCompleted">
            <summary>
            The date when the user completed work on the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.lastUpdate">
            <summary>
            The date and time of the most 
            recent change made to the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.recurrence">
            <summary>
            Specifies the recurrence properties.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.history">
            <summary>
            Indicates the type of change 
            that was last made to the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.users">
            <summary>
            Represents information about task users.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.status">
            <summary>
            Specifies the status of the user's progress on the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.mode">
            <summary>
            Specifies the assignment status of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.state">
            <summary>
            Indicates the current assignment 
            state of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.acceptanceState">
            <summary>
            Indicates the acceptance state of the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.reminderSet">
            <summary>
            Specifies whether a reminder is set on the object
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.reminderTime">
            <summary>
            Specifies the initial signal time for a reminder
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTask.reminderFileParameter">
            <summary>
            Specifies the full path of the sound that a client SHOULD play when the reminder becomes overdue.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiTask"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.#ctor(System.String,System.String,System.DateTime,System.DateTime)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiTask"/> class.
            </summary>
            <param name="subject">The subject.</param>
            <param name="body">The message body.</param>
            <param name="startDate">The start date.</param>
            <param name="dueDate">The due date.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.#ctor(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiTask"/> class.
            </summary>
            <param name="msg">The MapiMessage that represents IPM.Task message class.</param>
            <exception cref="T:System.ArgumentException"> throws when message class has unexpected value.</exception>
            <exception cref="T:System.ArgumentNullException"> throws when <paramref name="msg"/> is <c>null</c>.</exception>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.PercentComplete">
            <summary>
            Gets or sets the progress the user has made on a task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.ActualEffort">
            <summary>
            Gets or sets the number of minutes that 
            the user actually spent working on a task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.EstimatedEffort">
            <summary>
            Gets or sets the number of minutes 
            that the user expects to work on a task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.DueDate">
            <summary>
            Gets or sets the date by which the user expects work 
            on the task to be complete.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.StartDate">
            <summary>
            Gets or sets the date on which the user 
            expects work on the task to begin.
            </summary>
            <exception cref="T:System.ArgumentException"> trows when start date is greater than date completed.</exception>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.DateCompleted">
            <summary>
            Gets or sets the date when 
            the user completed work on the task.
            </summary>
            <exception cref="T:System.ArgumentException"> trows when start date is less than date completed.</exception>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.LastUpdate">
            <summary>
            Gets or sets the date and time of the most 
            recent change made to the Task object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Recurrence">
            <summary>
            Gets or sets the recurrence properties.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.History">
            <summary>
            Gets or sets the type of change 
            that was last made to the Task object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Users">
            <summary>
            Gets or sets information about task users.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Status">
            <summary>
            Gets or sets the status of the user's progress on the task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Mode">
            <summary>
            Gets or sets the assignment status of the Task object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.State">
            <summary>
            Gets or sets the current assignment 
            state of the Task object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.AcceptanceState">
            <summary>
            Gets or sets the acceptance state of the task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Flags">
            <summary>
            Gets the indication flags of the Task object.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.ReminderTime">
            <summary>
            Gets or sets the initial signal time for a reminder
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.ReminderSet">
            <summary>
            Gets or sets a value indicating whether a reminder is set on the object
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.ReminderFileParameter">
            <summary>
            Specifies the full path of the sound that a client SHOULD play when the reminder becomes overdue.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTask.Attachments">
            <summary>
            Gets the attachments collection.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.Save(System.IO.Stream,Aspose.Email.Mapi.TaskSaveFormat)">
            <summary>
            Saves this <see cref="T:Aspose.Email.Mapi.MapiTask"/> to the given stream using specified format.
            </summary>
            The supported save format is MSG.
            <param name="stream">A stream to save to.</param>
            <param name="saveFormat">A save format.</param>
            <exception cref="T:System.ArgumentNullException"><paramref name="stream"/> is <c>null</c>. </exception>
            <exception cref="T:System.NotSupportedException"><paramref name="stream"/> does not support writing.</exception>
            <exception cref="T:System.NotSupportedException">The specified format is not supported.</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.Save(System.String,Aspose.Email.Mapi.TaskSaveFormat)">
            <summary>
            Saves this <see cref="T:Aspose.Email.Mapi.MapiTask"/> into file using specified format.
            </summary>
            The supported save format is MSG.
            <param name="filePath">A file name.</param>
            <param name="saveFormat">A save format.</param>
            <exception cref="T:System.ArgumentException"><paramref name="filePath"/> is <c>null</c> or <c>empty</c>.</exception>
            <exception cref="T:System.NotSupportedException">some save option is not supported</exception>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.ConvertToMapiMessage">
            <summary>
            Converts the task object to mapi message
            </summary>
            <returns><see cref="T:Aspose.Email.Mapi.MapiMessage"/> that represents a MAPI message</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.GetsFlags(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Gets the flags.
            </summary>
            <param name="msg">The MapiMessage.</param>
            <returns>The MapiTaskFlags.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.SetFlags(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Sets the flags.
            </summary>
            <param name="msg">The MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.FromVTodo(System.String)">
            <summary>
            Creates an instance of MapiTask from the specified .ics file.
            </summary>
            <param name="filePath">The path to the file to be loaded.</param>
            <returns>Returns a MapiTask instance which is loaded from the specified file.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.FromVTodo(System.String,System.Boolean)">
            <summary>
            Creates an instance of MapiTask from the specified .ics file.
            </summary>
            <param name="filePath">The path to the file to be loaded.</param>
            <param name="detectEncoding">Determines a data encoding by analyzing its byte order mark (BOM)</param>
            <returns>Returns a MapiTask instance which is loaded from the specified file.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.FromVTodo(System.IO.Stream)">
            <summary>
            Creates an instance of MapiTask from the specified stream.
            </summary>
            <param name="stream">The stream to be loaded.</param>
            <returns>Returns a MapiTask instance which is loaded from the specified stream.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTask.FromVTodo(System.IO.Stream,System.Boolean)">
            <summary>
            Creates an instance of MapiTask from the specified stream.
            </summary>
            <param name="stream">The stream to be loaded.</param>
            <param name="detectEncoding">Determines a data encoding by analyzing its byte order mark (BOM)</param>
            <returns>Returns a MapiTask instance which is loaded from the specified stream.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskOwnership">
            <summary>
            Indicates the role of the current user 
            relative to the Task object. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskOwnership.NotAssigned">
            <summary>
            The Task object is not assigned.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskOwnership.AssignersCopy">
            <summary>
            The Task object is the task assigner's 
            copy of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskOwnership.AssigneesCopy">
            <summary>
            The Task object is the task assignee's 
            copy of the Task object.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskState">
            <summary>
            Indicates the assignment state of the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskState.NotAssigned">
            <summary>
            The Task object is not assigned.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskState.AssigneesCopyOfAssignedTask">
            <summary>
            The Task object is the task assignee's
             copy of an assigned Task object. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskState.AssignersCopyOfAssignedTask">
            <summary>
            The Task object is the task assigner's 
            copy of an assigned Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskState.AssignersCopyOfRejectedTask">
            <summary>
            The Task object is the task assigner's 
            copy of a rejected Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskState.EmbeddedInTaskRejection">
            <summary>
            This Task object was created to correspond 
            to a Task object that was embedded in a task 
            rejection but could not be found locally.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskStatus">
            <summary>
            Represents the statuses of the user's progress on the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskStatus.NotStarted">
            <summary>
            The user has not started work on the Task object.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskStatus.InProgress">
            <summary>
            The user's work on this Task object is in progress.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskStatus.Complete">
            <summary>
            The user's work on this Task object is complete.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskStatus.Waiting">
            <summary>
            The user is waiting on somebody else.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskStatus.Deferred">
            <summary>
            The user has deferred work on the Task object. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiTaskUsers">
            <summary>
            Represents information about task users.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.delegator">
            <summary>
            The name of task delegator.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.lastAssigner">
            <summary>
            The name of the user 
            that last assigned the task.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.lastUser">
            <summary>
            The name of the most recent user 
            to have been the task owner.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.lastDelegate">
            <summary>
            The name of the mailbox's delegate who most 
            recently assigned the task, 
            or an empty string if there is no delegate.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.owner">
            <summary>
            The name of the task owner.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.ownership">
            <summary>
            Indicates the role of the current user 
            relative to the Task object. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.attendees">
            <summary>
            Specifies the attendees.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiTaskUsers.assigner">
            <summary>
            Specifies the group of properties that 
            defines the display name and e-mail address of user who created task.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTaskUsers.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiTaskUsers"/> class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTaskUsers.#ctor(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MapiTaskUsers"/> class.
            </summary>
            <param name="msg">The MapiMessage object.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTaskUsers.SetProperties(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Sets the message properties.
            </summary>
            <param name="msg">The MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MapiTaskUsers.SetStringNamedProperty(System.String,Aspose.Email.Mapi.MapiNamedPropertyId,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Sets the string named property.
            </summary>
            <param name="value">The value.</param>
            <param name="propId">The property id.</param>
            <param name="msg">The MapiMessage.</param>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.Assigner">
            <summary>
            Specifies the group of properties that 
            defines the display name and e-mail address of user who created task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.Attendees">
            <summary>
            Gets the attendees.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.LastAssigner">
            <summary>
            Gets or sets the name of the user 
            that last assigned the task.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.Delegator">
            <summary>
            Gets or sets task delegator.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.LastUser">
            <summary>
            Gets or sets the name of the most recent user 
            to have been the task owner.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.LastDelegate">
            <summary>
            Gets or sets the name of the mailbox's delegate who most 
            recently assigned the task, 
            or an empty string if there is no delegate.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.Owner">
            <summary>
            Gets or sets the name of the task owner.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MapiTaskUsers.Ownership">
            <summary>
            Gets or sets the role of the current user 
            relative to the Task object. 
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.ActivityMailMessageInterpretor">
            <summary>
            Represents a MailMessage interpretor for the activity message type of Outlook MapiMessage.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.ActivityMailMessageInterpretor.#ctor">
            <summary>
            Initializes a new instance of the ActivityMailMessageInterpretor class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.ActivityMailMessageInterpretor.Clone">
            <summary>
            Creates a copy of the current instance.
            </summary>
            <returns>A copy of MailMessageInterpretor.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.ActivityMailMessageInterpretor.LoadMessageHeader(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the headers of MIME protocol to a MailMessage from the MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.ActivityMailMessageInterpretor.LoadMessageBodyHtml(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Creates the HtmlBody property of the MailMessage according to the specified MapiMessage instance.
            </summary>
            <param name="mailMessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.ActivityMailMessageInterpretor.Save(Aspose.Email.Mapi.MapiMessage,System.IO.Stream,Aspose.Email.MessageFormat)">
            <summary>
            Saves the specified MapiMessage to a Stream.
            </summary>
            <param name="mapiMessage">The source MapiMessage instance.</param>
            <param name="stream">The target stream</param>
            <param name="messageFormat">The message format.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.AppointmentMailMessageInterpretor">
            <summary>
            Represents an appointment mail message.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.AppointmentMailMessageInterpretor.Clone">
            <summary>
            Creates a copy of current instance.
            </summary>
            <returns>A copy of MailMessageInterpretor.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.AppointmentMailMessageInterpretor.Interpret(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Interprets the given <see cref="T:Aspose.Email.Mapi.MapiMessage"/> to appointment mail message.
            </summary>
            <param name="mapiMessage">The source <see cref="T:Aspose.Email.Mapi.MapiMessage"/>.</param>
            <returns>The resultant <see cref="T:Aspose.Email.MailMessage"/>.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.AppointmentMailMessageInterpretor.Save(Aspose.Email.Mapi.MapiMessage,System.IO.Stream,Aspose.Email.MessageFormat)">
            <summary>
            Saves the specified MapiMessage to a Stream.
            </summary>
            <param name="mapiMessage">The source MapiMessage instance.</param>
            <param name="stream">The target stream</param>
            <param name="messageFormat">The message format.</param>
        </member>
        <member name="T:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor">
            <summary>
            Represents the interpretor of the clear-signed mail messages specified in [MS-OXOSMIME] (S/MIME E-Mail object protocol specification)
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor.Interpret(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Interprets the given <see cref="T:Aspose.Email.Mapi.MapiMessage"/> like clear-signed mail message
            </summary>
            <param name="mapiMessage">A mapi message</param>
            <exception cref="T:System.ArgumentNullException"><paramref name="mapiMessage"/> is <c>null</c></exception>
            <returns>A <see cref="T:Aspose.Email.MailMessage"/> created from the given mapi message</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor.Clone">
            <summary>
            Returns a new <see cref="T:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor"/>
            </summary>
            <returns>A new <see cref="T:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor"/></returns>
        </member>
        <member name="M:Aspose.Email.Mapi.ClearSignedMailMessageInterpretor.IsClearSigned(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Determines whether the specified MSG is clear signed.
            </summary>
            <param name="msg">The MapiMessage.</param>
            <returns>
            </returns>
        </member>
        <member name="T:Aspose.Email.Mapi.ContactMailMessageInterpretor">
            <summary>
            Represents a Contact message type interpretor.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.ContactMailMessageInterpretor.#ctor">
            <summary>
            Initializes a new instance of the ContactMailMessageInterpretor class.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.ContactMailMessageInterpretor.Clone">
            <summary>
            Creates a copy of the current instance.
            </summary>
            <returns>A ContactMailMessageInterpretor copy.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.ContactMailMessageInterpretor.Interpret(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Interprets the given <see cref="T:Aspose.Email.Mapi.MapiMessage"/> to appointment mail message.
            </summary>
            <param name="mapiMessage">The source <see cref="T:Aspose.Email.Mapi.MapiMessage"/>.</param>
            <returns>The resultant <see cref="T:Aspose.Email.MailMessage"/>.</returns>
        </member>
        <member name="T:Aspose.Email.Mapi.MailMessageInterpretor">
            <summary>
            The base class for MailMessage interpretor.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachContentDispositionTag">
            <summary>
            Attach content disposition tag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachmentContentDisposition">
            <summary>
            Attachment content disposition.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.ContentsStreamTag">
            <summary>
            Represents CONTENTS stream tag.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.PictKeyword">
            <summary>
            The pict rtf keyword.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.JpegKeyword">
            <summary>
            The jpegblip rtf keyword.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.BinKeyword">
            <summary>
            The Bin rtf keyword.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.ImageUidKeyword">
            <summary>
            The image uid rtf keyword.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.ImageContentType">
            <summary>
            The image content type.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.GuidPrefix">
            <summary>
            The Guid prefix.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.Placeholder">
            <summary>
            The image placeholder.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.Spliter">
            <summary>
            The splitter.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.#ctor">
            <summary>
            Initializes a new instance of the <see cref="T:Aspose.Email.Mapi.MailMessageInterpretor"/> class.
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod">
            <summary>
            The attach method.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.NoAttachment">
            <summary>
            No attachment.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachByValue">
            <summary>
            Attach by value.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachByReference">
            <summary>
            Attach by reference.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachByRefResolve">
            <summary>
            Attach by reference resolve.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachByRefOnly">
            <summary>
            Attach by reference only.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachEmbeddedMsg">
            <summary>
            Attach is embedded message.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MailMessageInterpretor.AttachMethod.AttachOle">
            <summary>
            Ole attachment.
            </summary>
        </member>
        <member name="P:Aspose.Email.Mapi.MailMessageInterpretor.PreserveEmbeddedMessageFormat">
            <summary>
            Gets or sets a value indicating whether it is necessary to preserve format  of 
            embedded message at loading in MailMessage.
            </summary>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.Interpret(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the MapiMessage information into a MailMessage object.
            </summary>
            <param name="mapiMessage">The source MapiMessage.</param>
            <returns>The MailMessage.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.InterpretAsTnef(Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the MapiMessage information into a MailMessage object with MapiMessage as TNEF attachment.
            </summary>
            <param name="msg">The source MapiMessage.</param>
            <returns>The MailMessage.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.Save(Aspose.Email.Mapi.MapiMessage,System.IO.Stream,Aspose.Email.MessageFormat)">
            <summary>
            Saves the specified MapiMessage to a Stream.
            </summary>
            <param name="mapiMessage">The source MapiMessage instance.</param>
            <param name="stream">The target stream.</param>
            <param name="messageFormat">The message format.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.LoadMessageHeader(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the headers of MIME protocol to a MailMessage from the MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.LoadMessageBodyHtml(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Creates the HtmlBody property of the MailMessage 
            according to the specified MapiMessage instance.
            </summary>
            <param name="mailMessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.Clone">
            <summary>
            Creates a copy of the current instance.
            </summary>
            <returns>A copy of MailMessageInterpretor.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.RenderEMail(Aspose.Email.MailAddressCollection)">
            <summary>
            Renders the E mail addresses.
            </summary>
            <param name="addresses">The address collection.</param>
            <returns>The string that represents email address.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.LoadMessageBodyText(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Creates the TextBody property of the MailMessage according to the specified MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.LoadAttachment(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports the attachments from to the specified MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.ImportHeaders(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Imports TransportMessageHeaders from MapiMessage to MailMessage.
            </summary>
            <param name="mailmessage">MailMessage <see cref="T:Aspose.Email.MailMessage"/>.</param>
            <param name="mapiMessage">MapiMessage <see cref="T:Aspose.Email.Mapi.MapiMessage"/>.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.LoadEachAttachment(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage,System.Int32)">
            <summary>
            Imports each attachment from to the specified MapiMessage instance.
            </summary>
            <param name="mailmessage">The target MailMessage.</param>
            <param name="mapiMessage">The source MapiMessage.</param>
            <param name="index">The attachment index.</param>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.GetAttachmentMime(Aspose.Email.Mapi.MapiAttachment)">
            <summary>
            Gets the attachment MIME content.
            </summary>
            <param name="attach">The attachment.</param>
            <returns>The attachment mime.</returns>
        </member>
        <member name="M:Aspose.Email.Mapi.MailMessageInterpretor.GetBodyHtmlFlag(Aspose.Email.MailMessage,Aspose.Email.Mapi.MapiMessage)">
            <summary>
            Gets true if message body is html other                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ëoü  ƒÚ†æ   ëoü ƒÚ†æ    sü ƒÚ†æ    sü               Ú†æ    R,S,0R01£Rü1NSNRRRS£Rü     ˇÚ†æ    rüsü"7sü  ˇÚ†æ   rü  ˇÚ†æ   rü  Û†æ    sü Û†æ    sü Û†æ    ëoü Û†æ    sü Û†æ    ëoü        Û†æ    ëoü+ëoü+/Q/0ëoü      Û†æ    rhü&rhü&/sHü  Û†æ   
	ˇü  Û†æ   
rxü 	 Û†æ   
	ˇü 	 Û†æ   
rxü   Û†æ    ëoü6Û†æ    ëoü   Û†æ    ëoü"/ëoü Û†æ    sü6Û†æ    sü Û†æ    sü6Û†æ    sü               @Ú†æ    R/S/1£Rü1NSNP£RüPXSÄˆ®æ   S       @Ú†æ    QX£QüÄˆ®æ   £Qü  FÚ†æ    R    	 	    VÚ†æ    rüsü3sü:BsüÄˆ®æ   sü VÚ†æ    ë_ü VÚ†æ    ë_ü            VÚ†æ    ë_ü'ë_ü'.Q./ë_ü:Bë_üÄˆ®æ   ë_ü      VÚ†æ    phüR.R  VÚ†æ   phü   aÚ†æ   R  aÚ†æ   1ü  aÚ†æ   pxü  aÚ†æ   1ü  aÚ†æ   pxü           qÚ†æ    ë_üQë_ü'ë_üÄˆ®æ   ë_ü   qÚ†æ   R     fÚ†æ    P#P     fÚ†æ    sü#sü fÚ†æ    süÖÚ†æ    sü fÚ†æ    süÖÚ†æ    sü   jÚ†æ    ë_üâÚ†æ    ë_ü   jÚ†æ    ë_ü&ë_ü Â=        `‘¶æ   rü  `‘¶æ   1ü  `‘¶æ   rü n‘¶æ    rü  Xûæ   rü  Xûæ   rü  ˚Xûæ    rü     Ä‘¶æ    Q£Qü    Ä‘¶æ    Q£Qü  Ä‘¶æ   rü             @ÿ¶æ    RSR£Rü$S¯®æ   S             pÿ¶æ    RaSafrêüfg£RügoS¿¯®æ   0S  úÿ¶æ   
XØæ   ü  úÿ¶æ   S  úÿ¶æ   
pØæ   ü  úÿ¶æ   sü  ≥ÿ¶æ    
`Øæ   ü  ≥ÿ¶æ    S    ≥ÿ¶æ    #R#$£R#pü       œ¯®æ    s üRs ü           ‡ÿ¶æ    RÅSÅÑ£RüÑåS‡˝®æ   S           ‡ÿ¶æ    QÇTÇÑ£QüÑåT‡˝®æ   T   Ÿ¶æ   Ktü   Ÿ¶æ   KS   ,Ÿ¶æ   t ü   ,Ÿ¶æ   sü   AŸ¶æ   tü   AŸ¶æ   S             †‘¶æ    #R#›S›‰}hü‰Â£RüÂ˝Sê˝®æ   AS                     †‘¶æ    *Q*ﬁTﬁÂ£QüÂËTËÌ£QüÌTı£Qüı¯T¯˝£Qüê˝®æ   A£Qü           †‘¶æ    *X*‡V‡Â£XüÂ˝Vê˝®æ   AV                 †‘¶æ    *Y*¨\¨Â£YüÂÌ\Ìı£Yüı˝\ê˝®æ    	\	A£Yü     ¨‘¶æ    r ü]U         	’¶æ    "0ü|Ñ0üåî0üê˝®æ   	0ü         	’¶æ    "
XØæ   ü|Ñ
XØæ   üåî
XØæ   üê˝®æ   	
XØæ   ü         	’¶æ    "S|ÑSåîSê˝®æ   	S    	’¶æ    0ü|Ñ0ü    	’¶æ    
`Øæ   ü|Ñ
`Øæ   ü    	’¶æ    S|ÑS       ’¶æ    0üáè0üê˝®æ   	0ü       ’¶æ    
pØæ   üáè
pØæ   üê˝®æ   	
pØæ   ü       ’¶æ    süáèsüê˝®æ   	sü   ê˝®æ   	
`Øæ   ü   ê˝®æ   	S  6’¶æ    1ü  6’¶æ    \   ô˝®æ   U             Ä÷¶æ    R”S”ÿ|hüÿŸ£RüŸÈSP˝®æ   ;S           Ä÷¶æ    Q‘T‘Ÿ£QüŸÈTP˝®æ   ;T                 Ä÷¶æ    >X>’U’Ÿ£XüŸ‰U‰È£XüÈÈUP˝®æ    U;£Xü           Ä÷¶æ    >Y>÷V÷Ÿ£YüŸÈVP˝®æ   ;V         ä÷¶æ    v0üœ◊0üﬂﬂ0üP˝®æ   0ü           ä÷¶æ    qüvtüœ◊tüﬂﬂtüP˝®æ   tü           ä÷¶æ    RvSœ◊SﬂﬂSP˝®æ   S  ä÷¶æ   50ü    ä÷¶æ    qü5tü    ä÷¶æ    R5S         ø÷¶æ    0üö¢0ü™™0üP˝®æ   0ü         ø÷¶æ    t üö¢t ü™™t üP˝®æ   t ü         ø÷¶æ    süö¢sü™™süP˝®æ   sü   P˝®æ   tü   P˝®æ   S   ◊¶æ    1ü   ◊¶æ    ë              †’¶æ    R∑S∑πuhüπª£RüªÿS ˝®æ   GS     ®’¶æ    r üTT         ¸’¶æ    "0ü_g0üw|0ü ˝®æ   0ü         ¸’¶æ    "
XØæ   ü_g
XØæ   üw|
XØæ   ü ˝®æ   
XØæ   ü         ¸’¶æ    "S_gSw|S ˝®æ   S    ¸’¶æ    0ü_g0ü    ¸’¶æ    
`Øæ   ü_g
`Øæ   ü    ¸’¶æ    S_gS       ÷¶æ    0ürw0ü ˝®æ   0ü       ÷¶æ    
pØæ   ürw
pØæ   ü ˝®æ   
pØæ   ü       ÷¶ [È    Hâ¡Ë    Ë    Îêêêêêêêêêêê 20    ˇõAß         ∂       SHÉÏ Hç   Hç@   fHn¬HâHÉ¿PHâÀHçIHâÅ¿   Hç   fHn»fl¡A¯Ë    HçK`Ë    Hã    HçKPHÉ¿HâCË    Hç   H«C    Hçãÿ   HâCHç   HâHã    HÉ¿HâÉÿ   Ë    HâŸHÉƒ [È    Hâ¡Ë    Ë    Îàêê 20    ˇõAØ         æ       VSHÉÏ(Hç   Hç@   fHn¬HâAHÉ¿PHâÀHçqHâÅ»   Hç   HçIfHn»fl¡A¯Ë    HçKPË    Hã    HçK@HÉ¿HâCË    Hç   H«C¯    Hçã»   HâHç   HâCHã    HÉ¿HâÉ»   Ë    HâÒHÉƒ([^È    Hâ¡Ë    Ë    Îáêêêêêêêêêêê B0`      ˇõG∂         ≈       SHÉÏ Hç@   fHn¬HãHâÀHXËHç   HâHÉ¿PHçKHâÉÿ   Hç   fHn»fl¡CË    HçK`Ë    Hã    HçKPHÉ¿HâCË    Hç   Hçãÿ   H«C    HâCHç   HâHã    HÉ¿HâÉÿ   HÉƒ [È    Hâ¡Ë    Ë    Îêêêê 20    ˇõHÆ         Ω       VSHÉÏ(HãHâ÷HâHã@ËHâÀHãR@HçIHâTËHãFHHâA¯Hç   HâË    HçK`Ë    Hã    HçKPHÉ¿HâCË    HãFHâHã@ËHãV0HâHãF8HâCHãF HâCHã@ËHãV(HâTHãFHâHã@ËHãVHâH«C    HÉƒ([^√Hâ¡Ë    Ë    È{ˇˇˇê B0`      ˇõ5≠         ø       SHÉÏ Hç@   fHn¬HãHâÀHXËHç   HâHÉ¿PHçKHâÉÿ   Hç   fHn»fl¡CË    HçK`Ë    Hã    HçKPHÉ¿HâCË    Hç   H«C    Hçãÿ   HâCHç   HâHã    HÉ¿HâÉÿ   Ë    HâŸHÉƒ [È    Hâ¡Ë    Ë    Îàêêêêêêêêêêê 20    ˇõH∂         ≈       St13basic_filebufIcSt11char_traitsIcEE                                                         St14basic_ifstreamIcSt11char_traitsIcEE                                                        St14basic_ofstreamIcSt11char_traitsIcEE                                                        St13basic_fstreamIcSt11char_traitsIcEE                                                         St13basic_filebufIwSt11char_traitsIwEE                                                         St14basic_ifstreamIwSt11char_traitsIwEE                                                        St14basic_ofstreamIwSt11char_traitsIwEE                                                        St13basic_fstreamIwSt11char_traitsIwEE                                                                                                                                                                                         –                                       0ˇˇˇˇˇˇˇ0ˇˇˇˇˇˇˇ                                      @       @       –                                       0ˇˇˇˇˇˇˇ0ˇˇˇˇˇˇˇ                        »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                                      @       @       »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                        »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                        ÿ                                       (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                        ÿ                                       »       ˇˇˇˇˇˇˇ                        (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                                                     @              @       h       @       h       @       ÿ                                       »       ˇˇˇˇˇˇˇ                        (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                                                                                                                                                                –                                       0ˇˇˇˇˇˇˇ0ˇˇˇˇˇˇˇ                                      @       @       –                                       0ˇˇˇˇˇˇˇ0ˇˇˇˇˇˇˇ                        »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                                      @       @       »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                        »                                       8ˇˇˇˇˇˇˇ8ˇˇˇˇˇˇˇ                        ÿ                                       (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                        ÿ                                       »       ˇˇˇˇˇˇˇ                        (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                                                     @              @       h       @       h       @       ÿ                                       »       ˇˇˇˇˇˇˇ                        (ˇˇˇˇˇˇˇ(ˇˇˇˇˇˇˇ                                GCC: (GNU) 13.1.0                                                                                                                                   Ò                     ı      ó                     ˘      ó       
       
       ˝      ó   \   ò   ö   ô                            ó   d   ò   ¢   ô                                          	                        ¬  ö   N     S  õ   o  ú   ë  ã   ò     ü  ù   º  ö   !     &  õ   4  û   Q  ü   ≥  †   Ï  û     û     ú   %     *  õ   /  ô                        {   °     ô   ∫   ¢                        Å   °     ô   ¬   £                        ÷  ö   b     g  õ   $  ö   ø  ú   ·  ã   Ë     Ô  ù   a     f  õ   î  û   ≠  ü   –  û   Â  ú   ˚  †   ,  û   ;     @  õ   E  ô       "       "          À   §   ≠  ö     ú     ã   &     -  ù   2  ô       %       %       #   »   •   J  ú   ~  ö   ˘  ã           ù     ô       (       (       '       +       +       +       .       .       /      ]   K   ¶   R   ^   j   ß   |   _   ¿   ®       1       1       3      ]   K   ¶   R   ^   j   ß   |   _   ¿   ®       :       :       7      ©      ^       =       =       ;      ©      ^       @       @       ?   Ñ   ™   è   ´   ö   ´   ¢   ¨       C       C       C      ó       F       F       G   %   û       I       I       K      ü   5   ü       L       L       O   U   å   ∑   ≠   ˜   ≠   P  ≠   \     a  õ   f  ô       O       O       S       R       R       W   Á   ≠   ¸   ô       U       U       [   &   W    K   Æ       X       X       _   \   ó   ∂   T    ◊   Æ   ò  Z    Â  T        [       [       c      _      ®   ,   ó     W    Ó  †   ı  ô       ^       ^       g   /   ó   á   W    ∫   Æ       a       a       k   j   T    w   W    º   Q    _  Q    Ü  Æ       d       d       o       g       g       s   F   Ø   U   ∞   µ   B       ±      ç       j       j       w      `   "   ≤   t   Ø   É   ∞   «   a   ‚   B      b     ≥   '  ±      ç       m       m       {   )   ¥   8   ∞   G   ∞   º   E       ç       v       v              y       y       É      ó       |       |       á      ó                     ã   9   Ø   H   ∞   °   B    ÷   ±      ç       Ç       Ç       è      c   "   ≤   l   Ø   {   ∞   ø   d   “   B    ˆ   b   	  ≥     ±      ç       Ö       Ö       ì   )   ¥   8   ∞   G   ∞   ¨   E       ç       å       å       ó       è       è       õ      ó       í       í       ü      ó       ï       ï       £   F   Ø   U   ∞   Ì   B      µ     ±      ç       ò       ò       ß      ≤   0   e   q   Ø   Ä   ∞   ƒ   f   Á   B      g     µ     b   (  ≥   0  ±      ç       õ       õ       ´   )   ¥   8   ∞   G   ∞   º   E       ç       §       §       Ø       ß       ß       ≥      ó       ™       ™       ∑      ó       ≠       ≠       ª       ∞       ∞       ø       ≥       ≥       √      h   K   ¶   R   i   j   ß   Å   j   …   ®       ∂       ∂       «      h   K   ¶   R   i   j   ß   Å   j   …   ®       ø       ø       À      ∂      i       ¬       ¬       œ      ∂      i       ≈       ≈       ”   Ñ   ™   è   ´   ö   ´   ¢   ¨       »       »       ◊      ó       À       À       €   7   û   J   ∑       Œ       Œ       ﬂ      ü   5   ü       —       —       „   U   å   ∑   ≠   ˜   ≠   P  ≠   \     a  õ   f  ô       ‘       ‘       Á       ◊       ◊       Î   Á   ≠   ¸   ô       ⁄       ⁄       Ô   &   ‹    K   Æ       ›       ›       Û   \   ó   ∂   Ÿ    ⁄   Æ   ¶  ﬂ    ı  Ÿ        ‡       ‡       ˜      j      ®   ,   ó     ‹    Ó  †   ı  ô       „       „       ˚   /   ó   ä   ‹    ¬   Æ       Ê       Ê       ˇ   m   Ÿ    z   ‹    ¡   ÷    ó  ÷    ∆  Æ       È       È              Ï       Ï          F   Ø   U   ∏   ≈   «       ±      ç       Ô       Ô             k   "   ≤   {   Ø   ä   ∏   €   l   ˆ   «       m   3  ≥   ;  ±      ç       Ú       Ú          )   ¥   8   ∏   G   ∏   æ           ç       ˚       ˚              ˛       ˛             ó                         ó                      9   Ø   H   ∏   ∞   «    Â   ±      ç                   #      n   "   ≤   s   Ø   Ç   ∏   ”   o   Ê   «    
  m     ≥   %  ±      ç       
      
      '   )   ¥   8   ∏   G   ∏   Æ           ç                   +                   /      ó                   3      ó                   7   F   Ø   U   ∏   ¸   «    %  π   -  ±      ç                   ;      ≤   0   p   x   Ø   á   ∏   ÿ   q   ˚   «      r   "  π   )  m   <  ≥   D  ±      ç                     ?   )   ¥   8   ∏   G   ∏   æ           ç       )      )      C       ,      ,      G      ó       /      /      K      ó       2      2      O   *   ü   G   ü       5      5      S      ó   '   W    N   ü   k   ü   À   ∫   ˘   ª     ∫     º     Ω     7      ±      ç       8      8      W      ^      :      æ   #   ]   @   ª   E   Ω   8   ¨      ç       ;      ;      [      ^      :      æ   #   ]   @   ª   E   Ω   8   ¨      ç       >      >      _   7   ø   Q   <    c   ø   x   @   ô   ±      ç       A      A      c   *   ø   D   <    V   ø   k   @   Ü   ±      ç       D      D      g   3   ø   R   ø   ì   <    •   ø   ◊   ±   ﬂ   @   Î   µ   Û   ±      ç       G      G      k      `      ≤   e   ø   l   a   Ü   <    ë   ø   ≠   @   Ω   b   –   ≥   ÿ   ±      ç       J      J      o      c      ≤   ]   ø   d   d   ~   <    â   ø   •   @   Ø   b   ¬   ≥       ±      ç       M      M      s      e      ≤   c   ø   j   s   É   ø   ä   f   ¨   <    ∑   ø   ﬁ   b   Ò   ≥   ˘   ±     @     g     µ      ç       P      P      w      :      ¿       U      U      {   )   ¥   8   ∞   G   ∞   ¥   W      ç       X      X         )   ¥   8   ∞   G   ∞   ¥   W      ç       [      [      É   )   ¥   8   ∞   G   ∞   §   W      ç       ^      ^      á      ó   5   ¡   =   ó   ◊   :   Ì   û       a      a      ã      c       d      d      è      c   /   ¬   K   ¬       g      g      ì      c   /   ¬   K   ¬       j      j      ó      c   +   ¬   C   ¬       m      m      õ      c   ,   ¬   C   ¬       p      p      ü      c   ,   ¬   C   ¬       s      s      £      c   (   ¬   C   ¬       v      v      ß      e   %   ≤   k   ø   r   s   ã   ø   í   f   ¥   <    ø   ø   Õ   c   „   ¬   ˇ   ¬     @   &  g   .  µ   5  b   H  ≥   P  ±      ç       y      y      ´   ;   ø   Z   ø   õ   <    ≠   ø   ª   c   —   ¬   Ô   ¬     @     µ   !  ±   ?  ±      ç       |      |      Ø      e   %   ≤   k   H>L>P>T>X>\>`>d>h>l>p>t>x>|>Ä>Ñ>à>å>ê>î>ò>ú>†>§>®>¨>∞>¥>∏>º>¿>ƒ>»>Ã>–>‘>ÿ>‹>‡>‰>Ë>Ï>>Ù>¯>¸> ???????? ?$?(?,? p  ,   <<@<`<l<ê<»< =$=(=,=0=4=8=<=@=D=   ¿  $   @?L?Ä?å?ê?ú?†?¨?∞?º?¿?Ã?–?‹? ‡     ®5∞5»5–5   4   §0¨0¥009<9H9T9`9l9x9Ñ9ê9ú9∞9∏9¿9»9–9ÿ9‡9D:     H   |;à;î;†;¨;∏;ƒ;–;‹;Ë;Ù; <<<$<0<<<H<T<`<l<x<Ñ<ê<ú<®<P>‹>–?‹?Ë?Ù?  ,    000$000<0H0T0`0l0x0Ñ0ê0ú0®0¥0¿0     <   5$5,545<5D5L5T5\5d5l5t5Ñ546<6D6L6‡6‰6Ë6Ï66Ù6¯6¸6 7 0 ,   `:d:h:l:p:t:|:Ä:Ñ:à:å:P;T;X;\;h;Ñ;   @ (   à=å=ê=î=ò=§=®=¨=∞=>x>|>Ä>Ñ>ê>¨> P    Ù?   ` Ù  00$040D0T0d0t0‡3‰3¥7∏7¿788 8$8,8084888<8@8H8L8P8T8\8t8x8ê8î8¨8∞8»8Ã8‰8Ë8 99999,909H9L9P9T9X9\9`9t9x9|9Ä9Ñ9à9å9†9§9¥9∏9º9¿9ƒ9Ã9–9ÿ9‹9‡9‰9Ë99::(:,:0:8:P:T:l:p:à:å:§:®:¨:∞:¥:∏:º:¿:ƒ:»:Ã:–:‘:ÿ:‹:‡:‰:Ë:Ï::Ù:¯:¸: ;;;;;;;; ;$;8;H;L;d;h;Ä;ê;î;¨;º;¿;ÿ;Ë;Ï;;<<<<0<@<D<H<`<d<h<p<t<x<|<ê<î<¨<∞<»<Ã<‰<Ù<¯<¸< ==== =0=4=8=<=@=D=H=P=h=l=Ñ=à=†=§=º=¿=ÿ=Ë=Ï==>>>4>D>H>`>h>l>p>t>x>|>Ä>Ñ>à>å>ê>î>ò>ú>†>§>®>¨>∞>¥>∏>º>¿>ƒ>»>Ã>–>‘>ÿ>‹>‡>Ë>>Ù>¯>???,?<?@?D?\?`?x?|?Ñ?ú?†?∏?»?ÿ?Ë?Ï?   p l  0000,000H0L0d0t0x0ê0î0¨0º0¿0ƒ0‹0‡0¯0111 1014181<1@1D1H1L1`1p1Ä1ê1î1§1®1∏1»1ÿ1‹1Ù1¯1¸12 2$2(2,20282P2`2p2t2x2å2ê2®2∏2º2¿2ÿ2‹2Ù2¯2¸2 3333 303@3P3T3X3p3t3å3ê3®3¨3ƒ3»3‡33Ù3¯344,404H4L4d4t4x4ê4†4§4®4¨4∞4¥4∏4¿4ÿ4‹4Ù4¯455(5,50545@5D5H5L5P5T5X5\5`5d5h5l5p5t5x5|5Ä5Ñ5à5å5ê5î5ò5ú5†5§5®5¨5∞5¥5∏5º5–5‘5ÿ5‹5‡5‰5Ë5Ï55Ù5¯5¸5 6666666 6$6(6,60646<6T6X6l6p6à6å6§6®6¿6ƒ6‹6‡6‰6Ë6Ï66Ù6¯6¸6 7777 787<7T7X7p7t7å7ê7®7¨7¿7ƒ7‹7‡7¯7¸7880848L8P8T8X8\8`8d8h8l8p8t8x8å8ê8®8¨8ƒ8‘8‰8Ù8¯8999 9094989P9T9X9l9p9à9å9ê9î9ò9¨9∞9»9Ã9–9‘9Ë9Ï9::::::,:<:@:D:\:`:d:h:l:p:t:à:å:§:®:¨:∞:ƒ:»:‡:‰:Ë:Ï::Ù:¯:¸:; ;$;(;@;D;H;L;P;d;h;Ä;Ñ;à;å;†;§;º;¿;ƒ;»;Ã;–;‰;Ù;¯;¸;<<< <$<(<,<@<D<\<`<d<h<|<Ä<ò<ú<†<¥<∏<–<‘<Ï<<====== =$=8=H=L=P=h=l=Ä=Ñ=ú=†=§=∏=»=Ã=–=‘=ÿ=‹=‡=‰=Ë=Ï==Ù=¯= >>>4>8>P>T>h>l>Ñ>à>†>§>®>¨>∞>ƒ>»>‡>‰>¸> ???????? ?$?8?<?T?X?p?Ä?ê?î?§?®?¨?ƒ?»?Ã?–?‰?Ù?¯?¸? Ä å   0000000 0$0(00080<0@0H0`0d0|0Ä0ò0ú0¥0∏0–0‘0Ë0Ï0111 1$1<1@1X1h1x1à1ò1®1¨1∞1¥1∏1º1¿1ƒ1»1–1‘1ÿ1‹1‡1‰1Ï1Ù1¯1 2224282P2T2l2p2à2ò2®2∏2»2ÿ2‹2‡2¯2¸2 333(3,303H3L3P3d3t3x3|3Ä3Ñ3à3å3ê3î3ú3†3§3®3¨3∞3∏3¿3ÿ3‹3Ù3¯344,4<4L4\4l4p4Ø5¡5Œ5◊5›5‚5Û5	666&626C6I6N6_6e6j6o6Ä6ä6õ6•6∑6º6¬6∆6À6—6„6Ù6˛6ö7Ò78<8ù8Ÿ8˝89999%9.959`9Ω9Ê9/:5:ê:>;ì;ô;Õ;Ú;:<E<ç<î<¶<≠<“<·<>=t=€=>>,>å>À>Ú>
??è?»?˚? ê †   L0`0d0k0r00à0è0ì0ô0ù0£0ß0≠0∂0Ω0”0ˇ0:1ä1§1∑1≈122Y2À2‚2484W4‹45†5É6ﬂ6'727?7t7§78o8®8ı89ë9¢9¡9˘9Z:g:|:*;R;i;z;ÿ;Á;Ó;¸;ì<ö<ª<¬<Å=†=∏=	>>=>L>y>å>O?h?õ? † ¨   ï011\1n1ç1 1Â1c2®2¸23v3r4y4ñ4†4≥4H5∑6772777L7÷7„78L8h8o8|8ã8í8‚89939f9l9ö9∆9/:]:Ÿ:¯:ˇ:;;;;B;I;P;W;‡;Á;Ù;°<∞<µ<∆<‘<›<‰<Í<â=±=∑=Ì=Û=!>E>b>Ø>¬>˛>??ï?Ω?’?˙? ∞ $  "0:0_0á0ü0ƒ0Ï01)1Q1i1ú1£1√1J2[2d2k2~2§2‚233O3V3p3w3~3Ö3å3ì3ô3•3È34$4j4Ü4©4π4¿4«4Œ4’4‹4Ì435K5m5Ö5ú5´5≤5π5¿5«5Œ5€5ˆ566^6v6∆6I7P7x77®7Á78$8µ88%9.969B9H9O9h9p9v9|9Ç9ã9õ9†9™9≤9π9¡9»9–9◊9ﬁ9Ê9Ó9˙9 :::¬:s=ï=¢=Ø=º=…=÷=˙=>
>>)>5>;>M>R>k>p>Ü>ì>ü>•>˘>>?C?T?b?k?r?x?¶?´?º? ?”?⁄?‡?˚?   ¿ ∏  0ç0í0ö0±0∫0¡0«0‰0È01111-121<1B1K1Q1[1e1k1q1v1|1Ü1ê1ö1†1¶1´1±1ª1≈1œ1’1€1‡1Ê11˙12
2222%2/292?2E2J2P2Z2d2n2t22333&3/363<3_3d3u3É3å3ì3ô3ﬁ3¢4‹45	555)5;5G5M5–5
66606>6J6P6x6}6Ö6ú6®6Æ6¬6‚67"7B7Ä7ç7í7¶7¥7¿7∆7˛78D8I8e8s88Ö8î8û8æ8‰8È8˛899!9/9;9A9\9§9´9≥9¿9»9ﬁ9Í99:(:5:A:G:|:â:ï:õ:·:Ê:˜:;;;O;õ;†;∂;√;œ;’;±<∂<«<‘<‡<Ê<==$=2=>=D=m=r=É=ê=ú=¢=Œ=”=‰=Ú=˛=>->2>C>P>\>b>ä>è>†>Æ>∫>¿>È>Ó>ˇ>???F?K?\?j?v?|?Ø?¥?»?÷?‚?Ë?   –   00-0;0G0M0Ä0Ö0ú0™0∂0º0Ì0Ú0111#1L1Q1b1o1{1Å1™1Ø1¿1Œ1⁄1‡1222'202{2∏2›2˝23o3344K4©45525@5I5P5V5í5©5∂5Ò56&6>6T6[6a6m6ã6≥6·6Ë6 777#7/7M7u7Ö7å7ù7‰7¸7868F8M8^8Ü8≥8∫8Ô8ˆ8X9Ä9ò9@:Ä:ò:;/;Å;<:<A<]<c<o<Â<<9=@=f=v=á=Ú='>.>x>>í>ô>ø>Á>ˇ>?2?a?h?Ñ?ä?ñ?   ‡ 4  00`0g0z0ä0õ0171=1P1V1e1l1ä1è1ô1∂1º1ÿ1(212?2w2¶2 2È2 3w3≥3≈3Ë3Ò344O4í4û4”455C5k5Ü5Õ56f6m6§6´6œ6 77747V7]7Ä7á7û7Á7Û7˚768C8b8|8Ç8á8û8œ8÷8Î8˚89%919?9P9Y9e9°9ª9È9˘9:Q:a:’:È:;<;^;Ã;—;„;Ì;ˆ;<<<<'<5<><E<K<É<à<ú<™<≥<∫<¿<◊<Ò<8=Q=a=h=u=Ü=ã=ú=©=≤=π=ø=·=Í=Û=¯=
>>>(>1>8>>>]>e>Ω>—>??É?ï??ı?    ‹   00(0/050\00Ü0‡1122ö2‡2[3Ä3Ω3¬3ÿ3‰3Ï3˜3 44#4)40454P4]4k45Ç5è5ù56<6A6G6P6U6i6v66Ü6å6V7é7≠7≤7ﬁ78?8S8∑8ƒ8Â8¸89É9Ω9!:+:∏: :’:Ê:ı:;;;Æ;Í;¶<˜<£=¿=‘=ˆ=˝=>&>?>H>f>m>w>Ä>ã>í>†>∏>Ê>?.?3?D?p?â?é?†?¨?¥?¿?∆?˜?¸?   t  00)0/0W0g0l0Å0í0õ0¢0®0·0Ë0Û0¯011"1)1/1V1[1u1Å1â1ï1õ1≤1∑1…1◊1„1È122.2<2E2L2R2|2ü2§2º2 2”2⁄2‡2˚233$323;3B3H3p3z33ë3ü3®3Ø3µ3‘3€3Ë3Ô3Œ4;5@5Q5^5g5n5t5ñ5õ5≠5ª5ƒ5À5—5`6e6v6Ç6â6ï6õ6ø6ƒ6÷6‰66ˆ67737@7I7P7V7`7n7w7~7Ñ7–7⁄7Ì7˙78
88b8l88å8ï8ú8¢899@9¥9π9ﬁ9Ï9ı9¸9:.:}:Ñ:;?;^;g;l;à;ñ;ü;¶;¨;‚;È;Ù;v<‡<Á<Ù<˚<I=P=Ñ=Œ=’=Í=>>;>O>q>x>ö>°>∫>√>·>Ë>˜>?	?+?Y?}?û?£?¥?‡?    à  000+040;0A0i0p0u0é0ú0•0¨0≤0—0ÿ0Ó01$1<1J1S1Z1`1Ù1˘12?2F2c2j2è2î2™2∏2¡2»2Œ2-3´3∞3≈3”3‹3„3È3Q4·5Ê5˛5666"6d6i6~6ã6î6õ6°6™6Ø6 6ÿ6·6Ë6Ó6	7z77ó7•7Æ7µ7ª7888(81888>8G8L8e8s8|8É8â8§8˙89z9Ü9ç9Ø9º9≈9Ã9“9:::$:-:4::::ê:∑:‚:Á:ˆ:
;;(;6;?;F;L;Ä;Ö;î;®;≠;∆;‘;›;‰;Í;<#<2<F<K<d<r<{<Ç<à<∫<ø<◊<‰<Ì<Ù<˙<==(=6=?=F=L=o=è=º=«=“=◊=Â=Í=ı=>>>>C>N>g>é>∏>Ω>»>Á>Ï> ???"?(?R?v?{?î?¢?´?≤?∏?„?   ∏  00%030<0C0I0z0Ä0ü0§0Ω0À0‘0€0·011<1A1Z1h1q1x1~1Ø1∑1÷1€1Ù1222272<2T2a2j2q2w2à2ç2•2≥2º2√2…2Ó23	3P3\3c33â3í3†3©3∞3∂3‡3Î34)4X4]4s4á4å4•4≥4º4√4…4Ë4Ì4555"5(595>5V5d5m5t5z5ù5Ω5ﬂ5‰56666%6|6Å6ô6¶6Ø6∂6º677(747;7G7M77Ñ7ù7´7∑7Ω7‰7È7	888&8,8}8Ç8ö8ß8∞8∑8Ω8€8È8Ú8˘8ˇ89979E9N9U9[9ä9ø9ƒ9‹9Í9Û9˙9 :Õ:Ï:Ò:
;; ;';-;T;b;k;r;x;≠;≤;»;÷;ﬂ;Ê;Ï;V<Ñ<£<¨<±<’<„<Ï<Û<˘<:=F=X=â=>5>G>N>S>m>z>É>ä>ê>¥>¬>À>“>ÿ>?&?=?T?c?k?w?}?≥?∏?÷?„?Ô?ı?   0 \  (0-0E0S0\0c0i0º0…0’0€0.131S1`1i1p1v1¡1Œ1◊1ﬁ1‰1'242=2D2J2l2q2â2ó2†2ß2≠2æ2√2‚22˘2 33/3=3F3M3S3ô3û3∫3»3—3ÿ3ﬁ3444%4+4`4e4Ñ4í4õ4¢4®4∆4‘4›4‰4Í455 525?5X5A67K7[7µ7º7‘7Ÿ7˙7888!8F8K8´8∞8Ã8⁄8Ê8Ì8Û89!9=9K9W9^9d9ï9ö9ª9…9’9‹9‚9:Â:ô;Á;Ï;<<<"<l<q<ì<°<≠<≥<‘<‚<Ó<Ù<=,=8=>=ï=ö=µ=√=Ã=”=Ÿ=f>w>|>ï>£>¨>≥>π>Ê>Î>
???8?F?O?V?\?à?è?î?¨?∫?√? ?–?Ì? @ §  '000p0w0≈0‹051:1O1\1e1l1r1ì1ò1∞1æ1«1Œ1‘1Ò1(2›2‚2˜23333ù3¢3∫3»3—3ÿ3ﬁ3˘3˛34$4-444:4U4Z4r4Ä4â4ê4ñ4±4∂4Œ4‹4Â4Ï4Ú45585E5N5U5[5}5Ç5ö5®5±5∏5æ5Â576<6T6b6n6t6Ö6ä6¢6∞6º6¬6·6W7\7v7Ñ7ç7î7ö7π7«7–7◊7›788.8<8E8L8R8[8`8{8â8í8ô8ü8œ8999/9=9F9M9S9´9∞9≈9“9€9‚9Ë9Ò9ˆ9::%:,:2:ß:æ:;;.;;;D;K;Q;b;p;y;Ä;Ü;¿;⁄;Ë;Ú;˘;ˇ; <7<I<P<V<á<†<≠<∂<Ω<√<‘<‚<Î<Ú<¯<*=D=R=[=b=h=Â=Ó=>>'>>>V>m>~>á>é>î>µ>œ>›>Ê>Ì>Û>+?G?^?p?y?Ä?Ü?ƒ?›?Í?Û?˙? P î   000(0/050i0Ä0ç0ñ0ù0£0¨0ƒ0“0€0‚0Ë0G1Ø1¥1 1ÿ1·1Ë1Ó1=2B2Z2h2q2x2~2–2’2Ô2˝2333K3e3s3|3É3â3”3ÿ33˛3444Ä4â4í4ü4§4ø4Õ4÷4›4„45&545=5D5J5b5o5É5£5>6Z6g6{6Ä6ó6•6Æ6µ6ª6Í6Ò67 7-7A7F7`7n7w7~7Ñ7≤7π7∆7⁄7ﬂ7¯78888Q8s8x8ë8ü8®8Ø8µ8ÿ8ﬂ8Ï8Û89¸9T:Y:u:É:å:ì:ô:ª:≈:˚: ;;%;.;5;;;V;c;s;å;©;Æ;ƒ;–;ÿ;‰;Í;<!<;<@<X<f<r<x<ë<ú<Õ<“<Í<¯<=
=2=S=X=p=~=á=é=î=Î=ˆ=>>,>:>C>J>P>i>t>•>™>¬>–>Ÿ>‡>Ê>??:?U?d?ú?–?⁄?Ï?ˆ? ` ‹   00&0-030]0k0ú0°0∂0«0–0◊0›0¸011D1I1^1l1u1|1Ç1˜1334	4_4ç4î4´4∫4ƒ4À4—4›4˚4#535:5K5a5õ5≥5’56	6L6n6ñ6ª6˘699‹9„9ˇ9=:I:Q:a:s:y::ò:◊:‰:Ò:;≥;…;G<N<€<ˆ<%=R=Y=e={=È=Ó=
>>!>(>.>Q>V>w>Ö>é>ï>õ>æ>≈>ÿ>Á>Ó>
?ó?¶?≠?»? p   W0^0o0v0}0⁄0˝091\1¶1´1Ω1∆1œ1›1Ê1Ì1Û1]2ü2◊2
33%333<3C3I3o3v33°34b4Ö4õ4∏45 5y5Ä5ì5ö56656?6}6ô6≠6¥67V7]7á7é7±7∑7‰7¯7˝728?8]8q8~8Ñ8≠8√8Õ8÷8€8‡8Ê8Î8˙89999!949K9R9g9â9é9´9¥9‡9Ò9 :
:>:F:L:ﬂ:;;&;R;c;Ö;Æ;√;À;—;ñ<õ<¥<√<‚<5=;=]=ï=ß=…=◊=È=>G>ƒ>?]?y?Ñ?ª?◊?Í? Ä ‘   70©0Ω0Ê0D1R1i1ì1¿1Ë1¯1˛1
222h2Å2à2—2X34H4¬455i5‹5G6§6Â677-7≈7œ7◊7ﬂ78z89f9m9w9É9ƒ9_:f:ñ:ù:÷:Ë:Ô:;;; ;d;ù;Ò;¯;T<`<|<á<û<ß<∫<Ì<=,=3=U={=ç=ò=§=π=«=> >M>o>v>î>±>∏>¬>“>€>??3?`?w?~?ó?º?√?Õ?€?Ê?Ô?   ê D  )0C0l0ã0í0Ì0å1ƒ1Ó1ı122D2¡2Ô2%3ô3•3º3…3Ó344q4â4ß4Ø4∏4¬4÷4ﬁ4Á4Ò45&5;5D5N5b5p5Å5ã5õ5¡5ı56)6K6Ä6©6∑6›6&7;7Z7∞7”7ﬂ7Ê7˙78 8w8Å8ù8≥8”88˜89989B9a9}9â9î9û9Æ9À9Ô9:@:L:n:z:ò:†:™:∞:ª:¬:«:Õ:”:ÿ:ﬂ:Ê:;H;Z;ç;π;<n<á<±<Õ<÷<›<Â<Î<ı<=====H=]=é=ò=£=≠=¬=œ=÷=ﬁ=Á=Ô=¯=>>>!>z>Ä>è>ô>¬> >”>›>Ú>˘> ??C?W?s?z?Å?è?Ω?’?‡?Á?Ó?¸? †   ]0r0y0ú0¨0¬0…0“0›0‰0Ï0¸01C1\1g1n1v11å1õ1§1Æ1∆1Á1Ó1 2/292^2Á2˚2
3H3D4,5w5î5Æ5⁄5‡5Û5˘56666"6)6.686<6C6J6O6X6p6x6Ö6è6Ω6“6˛6777;7U7r7x7á7ç7ô7û7¶7Ø7∑7¿7»7“7÷7›7‰7Í7Ú7˚7 88
888(808@8F8R8m8v8}8å8ñ8£8·8Á8U9è9°9®9∑9À9“9~:ç:î:ú:¬:;?;+<2<B<I<^<e<=!=`>>?E?˘? ∞ Ä    02T2[2≤2π2¡2G3N3í3ô3°3˙45ñ5ù5™5±5:6A6V6]6Ø7∂7“8‹8D:c:™:Ω:Õ:‘:Í:;;$;,;<;Q;—;X<≠<¥<ˇ<=¡=»=÷=›=->M>\>Ä>º>√>›>‰>?^?   ¿ l   0%0j0q011:2¬2…24{4ì4ö455Z5g5n526O6]6û6⁄6Ô6"737D7d7q7Ø7m8t8‚8È8 :∂:á;”;u<ô<†<M=Ü=ç= =—=¸=>à>_? – p   k0Á1Ó1i2ß23&3[3ô3ß3454ú4 4÷4‚4È45}5Ì5F6¥6;7u7›7^8e89Æ9¸:;;$;Ÿ;<<2<9<Î<==!=(=H=ÿ=>Y>`>ä>§>œ?Ò? ‡ X     C o d e = "   "   M a c h i n e = "   " > < f : M e s s a g e >   < f : P r o v i d e r F a u l t   p r o v i d e r = "   "   p a t h = "     < / f : P r o v i d e r F a u l t >     < / f : M e s s a g e > < / f : W S M a n F a u l t >   < f : E x t e n d e d E r r o r >   < / f : E x t e n d e d E r r o r >     ú(M4^4©(LRjR§äÙ÷àRﬂ,Y∑ 1A{
^"<!!A‡@'TfSÎRô
@Ad_ïz(ê(TèAôAª!m|Sˇ¡É.‘”„◊ bN t d s a p i . d l l   \ N t d s a p i . d l l     DsBindW DsCrackNamesW   DsWriteAccountSpnW  DsFreeNameResultW   DsUnBindW   c r e d u i . d l l     \ c r e d u i . d l l   CredUnPackAuthenticationBufferW s h e l l 3 2 . d l l   \ s h e l l 3 2 . d l l     SHGetSpecialFolderPathW u s e r 3 2 . d l l     \ u s e r 3 2 . d l l   PostMessageW    PostThreadMessageW  I p H l p A p i . d l l     \ I p H l p A p i . d l l   CancelMibChangeNotify2  GetAdaptersAddresses    NotifyUnicastIpAddressChange    1Q¶\/Q¶4.Q¶Q¶Q¶√+Q¶ˇ(Q¶¨w*€£´¡Y”3±I6 1         a d m i n \ w m i \ w m x \ s t d l i b \ w s m a n e v e n t h a n d l e r . c p p     1 7 9   1 8 5   1 9 4   5 9 7   6 2 4   6 4 4   6 9 1   7 2 8   7 7 5   8 0 2   9ÙaÉ !=ß ∆Ù·=1 1 7   a d m i n \ w m i \ w m x \ s t d l i b \ c h a n n e l . h     1 2 0   a d m i n \ w m i \ w m x \ s t d l i b \ r o b u s t c o n n e c t i o n . c p p   1 2 1   ˇ˛< s : E n v e l o p e     > < s : H e a d e r > < a : T o >   < / a : T o >       < w : R e s o u r c e U R I   s : m u s t U n d e r s t a n d = " t r u e " >   < / w : R e s o u r c e U R I >         < a : A c t i o n   s : m u s t U n d e r s t a n d = " t r u e " >     < / a : A c t i o n >   < a : M e s s a g e I D > u u i d :     < / a : M e s s a g e I D >     < p : O p e r a t i o n I D > u u i d :     < / p : O p e r a t i o n I D >     < / s : H e a d e r > < s : B o d y >   < p : L a s t S e q u e n c e I d R e c e i v e d >     < / p : L a s t S e q u e n c e I d R e c e i v e d >   < / s : B o d y > < / s : E n v e l o p e >     1 8 3   2 1 0   h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 8 / a d d r e s s i n g / f a u l t     3 7 2   3 7 6   3 9 1   3 9 2   3 9 3   4 0 2   4 1 8   4 3 6   4 7 9   5 3 3   5 3 7   5 9 9   6 0 5   6 2 5   6 2 6   7 0 7   7 6 2   8 1 6   8 1 7   8 1 8   8 1 9   8 3 7   8 8 8   8 9 5   9 0 4   9 1 3   9 3 0   1 0 2 3     1 0 2 8     1 0 4 2     1 0 6 8     1 0 9 8     1 1 5 8     1 3 1 8     1 3 5 7     1 3 8 3     1 3 9 1     1 4 0 0     1 4 0 2     1 4 3 6     1 5 6 0     1 5 7 0     1 6 0 5     1 6 5 2     1 7 1 2     1 7 3 3     1 8 2 3     `©`I5I5Œ‰Œ‰Œ‰€Ç;Itv$Z±H ]Œ‰πHwg«g√HÂHŒ‰kyŒ‰Œ‰yŒ‰pNãI†I®IºI“Is[Ω[ \y@\˝`–gâj°käl'pÖs$uŒ‰Œ‰ÈIŒ‰Œ‰Œ‰Œ‰ÒII5˘II5ƒyŒ‰Œ‰1nçn˝nqo_wÚb˝aˇcecI5I5Œ‰Œ‰nfc{©`ó{§{wIæJ*{Q{”Jnl£8Ë◊}õ’¥SOI;IŒ‰I±HŒ‰Œ‰πHŒ‰Œ‰√HÂHŒ‰5 1     a d m i n \ w m i \ w m x \ s t d l i b \ s e c . c p p     5 2     7 9     2 8 8   3 5 3   4 5 6   6 8 4   7 6 9   8 6 3   9 1 2   9 1 4   9 4 7   1 0 0 7     1 0 3 6     1 0 6 1     1 0 6 2     ÑìÜÒ√óGT~B£q‹z£w i n r m       h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1   w s m a n   s h e l l   w m i       h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w m i   c i m v 2   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s c i m / 1 / c i m - s c h e m a / 2   w m i c i m v 2     h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w m i / r o o t / c i m v 2     1 9 0       a d m i n \ w m i \ w m x \ s t d l i b \ c r e s o u r c e a l i a s . c p p   ›m0f–yz;©_∏í%P4 0     a d m i n \ w m i \ w m x \ s t d l i b \ w s m a n s e c u r i t y u i . c p p     4 1     4 2     8 3     9 6     ç¨n≠±≠>•˛•˝¶´‹´¨R¨Aÿ:OeyiÑ?Í•€Áo`√_ñˇ–ëÀ ™ ª∑#7 5         a d m i n \ w m i \ w m x \ s t d l i b \ s o a p s e m a n t i c c o n v e r t e r . c p p     7 6     < i : I n t e r a c t i v e E v e n t   x m l n s : i = " h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / c i m / i n t e r a c t i v e . x s d " > < i : E v e n t T y p e >   D e b u g   < / i : E v e n t T y p e > < i : D e s c r i p t i o n >       < / i : D e s c r i p t i o n > < / i : I n t e r a c t i v e E v e n t >   V e r b o s e   W a r n i n g   1 0 8   C o n f i r m   < / i : D e s c r i p t i o n > < i : P r o m p t T y p e >     N o r m a l     C r i t i c a l     < / i : P r o m p t T y p e > < / i : I n t e r a c t i v e E v e n t >     P r o g r e s s     < / i : E v e n t T y p e > < i : A c t i v i t y >     < / i : A c t i v i t y > < i : C u r r e n t O p e r a t i o n >       < / i : C u r r e n t O p e r a t i o n > < i : S t a t u s D e s c r i p t i o n >     < / i : S t a t u s D e s c r i p t i o n > < i : P e r c e n t C o m p l e t e >   % I 3 2 u   < / i : P e r c e n t C o m p l e t e > < i : S e c o n d s R e m a i n i n g >         < / i : S e c o n d s R e m a i n i n g > < / i : I n t e r a c t i v e E v e n t >     E r r o r A c t i o n   < / i : D e s c r i p t i o n > < i : A c t i o n T y p e >     I n q u i r e   < / i : A c t i o n T y p e > < / i : I n t e r a c t i v e E v e n t >     S t r e a m i n g O u t p u t   < / i : E v e n t T y p e > < i : N a m e >     < / i : N a m e > < i : T y p e >   < / i : T y p e >       < / i : V a l u e > < / i : I n t e r a c t i v e E v e n t >   1 7 2   1 8 0   < i : I n t e r a c t i v e R e s p o n s e   x m l n s : i = " h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / c i m / i n t e r a c t i v e . x s d " > < i : E v e n t T y p e >     1 9 5   < / i : E v e n t T y p e > < i : R e s p o n s e >     n o     y e s       < / i : R e s p o n s e > < / i : I n t e r a c t i v e R e s p o n s e >   2 2 0   2 2 1   2 4 1   2 5 0   C o n t i n u e     S t o p     2 7 7   2 7 8   2 7 9   2 8 0   I n t e r a c t i v e R e s p o n s e       h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / c i m / i n t e r a c t i v e . x s d   E v e n t T y p e   R e s p o n s e     I n t e r a c t i v e E v e n t     4 0 7   D e s c r i p t i o n   5 0 5   5 0 6   5 0 7   A c t i v i t y     C u r r e n t O p e r a t i o n     S t a t u s D e s c r i p t i o n   P e r c e n t C o m p l e t e   S e c o n d s R e m a i n i n g     A c t i o n T y p e     P r o m p t T y p e     V a l u e   8 0 8   8 0 9   Épï÷Pˆ‚&v.ÑlxpZÆ1 6 9   a d m i n \ w m i \ w m x \ s t d l i b \ f u l l d u p l e x c h a n n e l . c p p     2 4 6   2 5 3   2 5 9   2 6 6   2 8 6   3 6 9   3 9 6   4 2 0   4 6 4   5 7 2   5 8 2   5 8 3   h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w s m a n / F u l l D u p l e x     h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w s m a n / K e e p a l i v e       h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w s m a n / E n d   6 7 7   ﬂk®Œ‰
ﬂ;IŒ‰›Œ±HŒ‰N [ á—ì—√HÂH“h I5É *·®i,XQ~ºµQB?î9∑' k®Œ‰2 4         a d m i n \ w m i \ w m x \ s t d l i b \ c s t a t u s s t r u c t . c p p     3 2     O É w Q‡5 5     a d m i n \ w m i \ w m x \ s t d l i b \ h a n d l e . c p p   ∑‡      x m l n s : s = " h t t p : / / w w w . w 3 . o r g / 2 0 0 3 / 0 5 / s o a p - e n v e l o p e "       x m l n s : a = " h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 8 / a d d r e s s i n g "     x m l n s : x = " h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 9 / t r a n s f e r "         x m l n s : e = " h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 8 / e v e n t i n g "         x m l n s : n = " h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 9 / e n u m e r a t i o n "           x m l n s : w = " h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n . x s d "         x m l n s : p = " h t t p : / / s c h e m a s . m i c r o s o f t . c o m / w b e m / w s m a n / 1 / w s m a n . x s d "       x m l n s : b = " h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / c i m b i n d i n g . x s d "     8 1     a d m i n \ w m i \ w m x \ s t d l i b \ s o a p u t i l s . c p p     1 0 0   a d m i n \ w m i \ w m x \ s t d l i b \ b a s e 6 4 e n c o d i n g . c p p   1 4 1   1 8 4   2 0 6   3 7     a d m i n \ w m i \ w m x \ s t d l i b \ e t w c o r r e l a t i o n h e l p e r . c p p   s : V e r s i o n M i s m a t c h   s : M u s t U n d e r s t a n d     s : S e n d e r     w : A c c e s s D e n i e d     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t     a : A c t i o n N o t S u p p o r t e d     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / A c t i o n M i s m a t c h   w : A l r e a d y E x i s t s   n : C a n n o t P r o c e s s F i l t e r   h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 9 / e n u m e r a t i o n / f a u l t   w : C o n c u r r e n c y       e : D e l i v e r y M o d e R e q u e s t e d U n a v a i l a b l e     h t t p : / / s c h e m a s . x m l s o a p . o r g / w s / 2 0 0 4 / 0 8 / e v e n t i n g / f a u l t     s : R e c e i v e r     w : D e l i v e r y R e f u s e d   a : D e s t i n a t i o n U n r e a c h a b l e         h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / I n v a l i d R e s o u r c e U R I   w : E n c o d i n g L i m i t       h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / U R I L i m i t E x c e e d e d   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / M i n i m u m E n v e l o p e L i m i t   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / M a x E n v e l o p e S i z e     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / M a x E n v e l o p e S i z e E x c e e d e d     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / S e r v i c e E n v e l o p e L i m i t   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / S e l e c t o r L i m i t         h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / O p t i o n L i m i t     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / C h a r a c t e r S e t   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / U n r e p o r t a b l e S u c c e s s     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / W h i t e s p a c e       h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / E n c o d i n g T y p e   a : E n d p o i n t U n a v i l a b l e         h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / I n v a l i d V a l u e s     e : E v e n t S o u r c e U n a b l e T o P r o c e s s     h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / f a u l t D e t a i l / U n u s a b l e A d d r e s s     n : F i l t e r D i a l e c t R e q u e s t e d U n a v a i l a b l e   e : F i l t e r i n g N o t S u p p o r t e d   n : F i l t e r i n g N o t S u p p o r t e d   w : C a n n o t P r o c e s s F i l t e r       e : F i l t e r i n g R e q u e s t e d U n a v a i l a b l e   h t t p : / / s c h e m a s . d m t f . o r g / w b e m / w s m a n / 1 / w s m a n / : f a u l t D e t a i l / F i l t     , r í  ˝  f fˇ    , r í f f  ˝  v ˇ    , r í f f  f ¨   Z   N  O 4 P A Q N ° Q Q X Q Z Q [ O ~ O  N õ S ü ¢ ∑ £ Œ T œ U “ V Ë T Ì £  § • N ≠   ¨  Q  |   N 
 } ~  4 '    A  Ä Å 	 1 * Ç É   k Ñ   Œ  Ö  
 À " } Ü 	 ∑ L á     à â  ¥ O ä Ü  ü e ã   ú h å ç           é    ! è    ê   ∞      ±        ≤                 ≥     <  %    •  B { ¶  ¥    ß µ  pSMAP
sslFormats.kt
Kotlin
*S Kotlin
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$DER
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
+ 3 sslErrors.kt
com/intellij/httpClient/execution/ssl/SslErrorsKt
*L
1#1,160:1
1#2:161
24#3,4:162
*S KotlinDebug
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$DER
*L
83#1:162,4
*E
 ∂   O  ï  ñ[ I óI òI ô öI ó õI ú ù[ s û ü[ s s †s °s ¢s s és !s ès ês £s s § ±     ®  ©[ s ™PK          "∆¯    A   com/intellij/httpClient/execution/ssl/CertificateFormat$P12.class ˛∫æ   = æ ;com/intellij/httpClient/execution/ssl/CertificateFormat$P12  7com/intellij/httpClient/execution/ssl/CertificateFormat  <init> (Ljava/lang/String;I)V ()V D(Ljava/lang/String;ILkotlin/jvm/internal/DefaultConstructorMarker;)V  
  	 this =Lcom/intellij/httpClient/execution/ssl/CertificateFormat$P12; 
$enum$name Ljava/lang/String; $enum$ordinal I (readToStore$intellij_httpClient_executor õ(Ljava/nio/file/Path;Lcom/intellij/httpClient/execution/ssl/SslConfigurationContext;Ljava/lang/String;)Lcom/intellij/httpClient/execution/ssl/SslCertStore; Jcom/intellij/httpClient/execution/ssl/HttpRequestSslConfigurationException  #Lorg/jetbrains/annotations/NotNull; $Lorg/jetbrains/annotations/Nullable; java/lang/Throwable  path  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   context ! kotlin/Result # 	Companion Lkotlin/Result$Companion; % &	 $ ' PKCS12 ) java/security/KeyStore + getInstance ,(Ljava/lang/String;)Ljava/security/KeyStore; - .
 , / java/io/FileInputStream 1 java/nio/file/Path 3 toFile ()Ljava/io/File; 5 6 4 7 (Ljava/io/File;)V  9
 2 : java/io/Closeable < java/io/InputStream >   @ java/lang/String B toCharArray ()[C D E
 C F 'this as java.lang.String).toCharArray() H checkNotNullExpressionValue J 
  K load (Ljava/io/InputStream;[C)V M N
 , O 8com/intellij/httpClient/execution/ssl/SslCertStore$Ready Q keyStore S (Ljava/security/KeyStore;)V  U
 R V kotlin/io/CloseableKt X closeFinally +(Ljava/io/Closeable;Ljava/lang/Throwable;)V Z [
 Y \ constructor-impl &(Ljava/lang/Object;)Ljava/lang/Object; ^ _
 $ ` kotlin/ResultKt b createFailure )(Ljava/lang/Throwable;)Ljava/lang/Object; d e
 c f exceptionOrNull-impl )(Ljava/lang/Object;)Ljava/lang/Throwable; h i
 $ j 8com/intellij/httpClient/execution/ssl/SslErrorDescriptor l CERTIFICATE :Lcom/intellij/httpClient/execution/ssl/SslErrorDescriptor; n o	 m p 0http.request.ssl.cannot.read.p12.key.store.error r java/lang/Object t getLocalizedMessage ()Ljava/lang/String; v w
  x :com/intellij/httpClient/execution/HttpClientExecutorBundle z message 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; | }
 { ~ =com/intellij/httpClient/execution/ssl/SslConfigurationContext Ä getErrorMessage `(Lcom/intellij/httpClient/execution/ssl/SslErrorDescriptor;Ljava/lang/String;)Ljava/lang/String; Ç É Å Ñ *(Ljava/lang/String;Ljava/lang/Throwable;)V  Ü
  á 2com/intellij/httpClient/execution/ssl/SslCertStore â /$i$a$-use-CertificateFormat$P12$readToStore$1$1 stream Ljava/io/FileInputStream; 5$i$a$-runCatching-CertificateFormat$P12$readToStore$1 Ljava/security/KeyStore; B$i$a$-getOrRethrowSslException-CertificateFormat$P12$readToStore$2 it Ljava/lang/Throwable; 9$i$a$-getOrElse-SslErrorsKt$getOrRethrowSslException$1$iv exception$iv LLcom/intellij/httpClient/execution/ssl/HttpRequestSslConfigurationException; it$iv $i$f$getOrRethrowSslException !$this$getOrRethrowSslException$iv Ljava/lang/Object; Ljava/nio/file/Path; ?Lcom/intellij/httpClient/execution/ssl/SslConfigurationContext; 
passphrase Lkotlin/Metadata; mv           k xi   0 d1 d¿Ä$


¿Ä

¿Ä

¿Ä

¿Ä

√Ü¿Ä20J'0202020	H¬¢
¬® d2 9Lcom/intellij/httpClient/execution/ssl/CertificateFormat; readToStore 4Lcom/intellij/httpClient/execution/ssl/SslCertStore; intellij.httpClient.executor P12 Ready sslFormats.kt *Lkotlin/jvm/internal/SourceDebugExtension; valueASMAP
sslFormats.kt
Kotlin
*S Kotlin
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$P12
+ 2 sslErrors.kt
com/intellij/httpClient/execution/ssl/SslErrorsKt
*L
1#1,160:1
24#2,4:161
*S KotlinDebug
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$P12
*L
67#1:161,4
*E
 Code LineNumberTable LocalVariableTable 	Signature StackMapTable 
Exceptions RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 0             ≤   F     *+∑ 
±    ≥       : ¥                         µ         ≤  5    +∏  ,"∏   ≤ (W6*∏ 0:ª 2Y+π 8 ∑ ;¿ =:: ¿ 2:6	¿ ?-Y« WA∂ GYI∏ L∂ Pª RYT∏ L∑ W:∏ ]ß ::ø:∏ ]ø ∏ a:ß :≤ (W∏ g∏ a:: 6:∏ kY« 	Wß T:6¡ ô ¿ ß ::	6
,≤ qsΩ u:	∂ yS∏ π Ö ::ª Y∑ à:ø ¿ ä∞  0 h t  0 h }   t } }   }  }    è í   ∂   Ó 
ˇ J 
  4 Å C , = 2  , ? Cˇ )   4 Å C , =  ˇ    4 Å C , =   ˇ  
  4 Å C , = R  Rˇ    4 Å C  ˝  u uˇ    4 Å C u u  ˝  v ˇ    4 Å C u u  u ≥   V   =  >  ? ; @ B @ S @ V A f ? â ? ä = ¶ C ™ ° ¬ ¢ Ÿ D ⁄ E › F Û D ¯ ¢ £ § = ¥   ò  ; + ã  	 8 . å ç   v é    o S è  Ÿ  ê  
 ÷ " ë í 	 ¬ L ì    î ï  ø O ñ í  ™ e ó   ß h ò ô           ö    ! õ    ú   ∑      ∏        π                 ∫       ¨  R ä ≠  ª    Æ º  ASMAP
sslFormats.kt
Kotlin
*S Kotlin
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$P12
+ 2 sslErrors.kt
com/intellij/httpClient/execution/ssl/SslErrorsKt
*L
1#1,160:1
24#2,4:161
*S KotlinDebug
*F
+ 1 sslFormats.kt
com/intellij/httpClient/execution/ssl/CertificateFormat$P12
*L
67#1:161,4
*E
 Ω   O  ù  û[ I üI †I ° ¢I ü £I § •[ s ¶ ß[ s s ®s ©s ™s s ös !s õs ús @s s ´ ∏     Ø  ∞[ s ±PK          "Ï°¯  ¯  ^   com/intellij/httpClient/execution/ssl/CertificateFormat$PEM$readToStore$1$1$sslObjects$1.class ˛∫æ   = ; Xcom/intellij/httpClient/execution/ssl/CertificateFormat$PEM$readToStore$1$1$sslObjects$1  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/Object;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> '(Lorg/bouncycastle/openssl/PEMParser;)V 
$pemParser $Lorg/bouncycastle/openssl/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       Gets a save format
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiContactCollection">
            <summary>
            Represents the collection of <see cref="T:Aspose.Email.Mapi.MapiContact"/>
            </summary>
        </member>
        <member name="T:Aspose.Email.Mapi.MapiJournalDocumentStatus">
            <summary>
            Indicates the status of document. 
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiJournalDocumentStatus.None">
            <summary>
            The document has not any status.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiJournalDocumentStatus.Printed">
            <summary>
            Indicates whether the document 
            was printed during journaling.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiJournalDocumentStatus.Saved">
            <summary>
            Indicates whether the document 
            was saved during journaling.
            </summary>
        </member>
        <member name="F:Aspose.Email.Mapi.MapiJournalDocume