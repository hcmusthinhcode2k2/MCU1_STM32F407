Shift ()Ljava/awt/Point;��
�� <org/jetbrains/projector/server/core/convert/toClient/ShiftKt� shiftBounds d(Ljava/awt/Component;Ljava/awt/Point;)Lorg/jetbrains/projector/common/protocol/data/CommonRectangle;��
�� getHeaderHeight ()Ljava/lang/Integer;��
o� 	getCursor ()Ljava/awt/Cursor;��
o� java/awt/Cursor� getType��
�� >org/jetbrains/projector/server/core/convert/toClient/ConvertKt� toCursorType <(I)Lorg/jetbrains/projector/common/protocol/data/CursorType;��
�� getResizable� �
o� getModal� �
o� getUndecorated� �
o� -org/jetbrains/projector/server/util/ConvertKt� getWindowType d(Lorg/jetbrains/projector/awt/PWindow;)Lorg/jetbrains/projector/common/protocol/toClient/WindowType;��
�� getWindowClass e(Lorg/jetbrains/projector/awt/PWindow;)Lorg/jetbrains/projector/common/protocol/toClient/WindowClass;��
�� isAutoRequestFocus� �
o� isAlwaysOnTop� �
o� getParentWindow '()Lorg/jetbrains/projector/awt/PWindow;��
o� java/lang/Integer� valueOf (I)Ljava/lang/Integer;��
�� getRenderingScale ()F��
o� ;org/jetbrains/projector/common/protocol/toClient/WindowData�F(ILjava/lang/String;Ljava/util/List;ZILorg/jetbrains/projector/common/protocol/data/CommonRectangle;Lorg/jetbrains/projector/common/protocol/data/CursorType;ZZZLorg/jetbrains/projector/common/protocol/toClient/WindowType;Ljava/lang/Integer;Lorg/jetbrains/projector/common/protocol/toClient/WindowClass;ZZLjava/lang/Integer;F)V �
�� areChangedWindows (Ljava/util/List;)Z��
 � Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowSetChangedEvent� (Ljava/util/List;)V �
�� listOf�9
7� ;org/jetbrains/projector/server/service/ProjectorImageCacher� =Lorg/jetbrains/projector/server/service/ProjectorImageCacher; �	�� getNewImages b
� size� � createListBuilder (I)Ljava/util/List;
7 addAll (Ljava/util/Collection;)Z
 � windowColorsEvent JLorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent;	  build �
7 collectGarbage 
� ;$i$a$-let-ProjectorServer$createDataToSend$clipboardEvent$1 p0 e !Ljava/lang/IllegalStateException; ;$i$a$-let-ProjectorServer$createDataToSend$clipboardEvent$2 systemClipboard !Ljava/awt/datatransfer/Clipboard; clipboardEvent 6$i$a$-map-ProjectorServer$createDataToSend$windows$1$1 
item$iv$iv 
$i$f$mapTo $this$mapTo$iv$iv destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv ;$i$a$-mapIndexed-ProjectorServer$createDataToSend$windows$1 i window %Lorg/jetbrains/projector/awt/PWindow; $i$f$mapIndexedTo index$iv$iv $this$mapIndexedTo$iv$iv $i$f$mapIndexed $this$mapIndexed$iv 8$i$a$-let-ProjectorServer$createDataToSend$allEvents$1$1 <$i$a$-buildList-ProjectorServer$createDataToSend$allEvents$1 %$this$createDataToSend_u24lambda_u2d6 drawCommands windows windowSetChangedEvent newImagesCopy commonEvents commandsCount 	allEvents Eorg/jetbrains/projector/common/protocol/toClient/ServerClipboardEvent; java/lang/String= <org/jetbrains/projector/common/protocol/data/CommonRectangle? 7org/jetbrains/projector/common/protocol/data/CursorTypeA ;org/jetbrains/projector/common/protocol/toClient/WindowTypeC <org/jetbrains/projector/common/protocol/toClient/WindowClassE Horg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEventG processMessage z(Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)V 7org/jetbrains/projector/server/core/ReadyClientSettingsK getSetUpClientData 7()Lorg/jetbrains/projector/server/core/SetUpClientData;MN
LO 3org/jetbrains/projector/server/core/SetUpClientDataQ getHasWriteAccessS �
RT Lorg/jetbrains/projector/common/protocol/toServer/ClientRequestImageDataEventV Gorg/jetbrains/projector/common/protocol/toServer/ClientRequestPingEventX &org/jetbrains/projector/common/misc/DoZ (Lorg/jetbrains/projector/common/misc/Do; \	[] Borg/jetbrains/projector/common/protocol/toServer/ClientResizeEvent_  processMessage$lambda-7 A(Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)Vbc
 de "java/lang/invoke/LambdaMetafactoryg metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;ij
hkl run T(Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)Ljava/lang/Runnable;no  p javax/swing/SwingUtilitiesr invokeLater (Ljava/lang/Runnable;)Vtu
sv Lorg/jetbrains/projector/common/protocol/toServer/ClientDisplaySetChangeEventx processMessage$lambda-9zc
 {| p Aorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent processMessage$lambda-10 �(Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/server/ProjectorServer;)V��
 �� �(Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/lang/Runnable;n� � Aorg/jetbrains/projector/common/protocol/toServer/ClientWheelEvent� processMessage$lambda-11��
 �� � ?org/jetbrains/projector/common/protocol/toServer/ClientKeyEvent� getConnectionMillis ()J��
L� last $(Ljava/util/List;)Ljava/lang/Object;��
7� .org/jetbrains/projector/server/core/util/AwtKt� focusOwnerOrTarget *(Ljava/awt/Component;)Ljava/awt/Component;��
�� 7org/jetbrains/projector/server/core/convert/toAwt/KeyKt� toAwtKeyEvent q(Lorg/jetbrains/projector/common/protocol/toServer/ClientKeyEvent;JLjava/awt/Component;)Ljava/awt/event/KeyEvent;��
�� "processMessage$lambda-13$lambda-12 L(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/awt/event/KeyEvent;)V��
 �� _(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/awt/event/KeyEvent;)Ljava/lang/Runnable;n� � Dorg/jetbrains/projector/common/protocol/toServer/ClientKeyPressEvent� v(Lorg/jetbrains/projector/common/protocol/toServer/ClientKeyPressEvent;JLjava/awt/Component;)Ljava/awt/event/KeyEvent;��
�� "processMessage$lambda-15$lambda-14��
 �� � Borg/jetbrains/projector/common/protocol/toServer/ClientRawKeyEvent� processMessage$lambda-16 �(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings;)V��
 �� �(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings;)Ljava/lang/Runnable;n� � 
getImageId 8()Lorg/jetbrains/projector/common/protocol/data/ImageId;��
W� getImage p(Lorg/jetbrains/projector/common/protocol/data/ImageId;)Lorg/jetbrains/projector/common/protocol/data/ImageData;��
�� <org/jetbrains/projector/common/protocol/data/ImageData$Empty� >Lorg/jetbrains/projector/common/protocol/data/ImageData$Empty; �	�� 6org/jetbrains/projector/common/protocol/data/ImageData� Jorg/jetbrains/projector/common/protocol/toClient/ServerImageDataReplyEvent� q(Lorg/jetbrains/projector/common/protocol/data/ImageId;Lorg/jetbrains/projector/common/protocol/data/ImageData;)V �
�� getRequestedData�b
L�
 . � java/lang/Boolean� (Z)Ljava/lang/Boolean;��
�� Eorg/jetbrains/projector/common/protocol/toServer/ClientClipboardEvent� Lorg/jetbrains/projector/server/ProjectorServer$processMessage$transferable$1� c
�� setContents M(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/ClipboardOwner;)V��
G� $putContentsWithoutLastContentsUpdate '(Ljava/awt/datatransfer/Transferable;)V��
%� Eorg/jetbrains/projector/common/protocol/toClient/ServerPingReplyEvent� getClientTimeStamp��
Y� java/lang/System� currentTimeMillis��
�� (II)V �
�� Dorg/jetbrains/projector/common/protocol/toServer/ClientOpenLinkEvent� getLink��
�� openInExternalBrowser (Ljava/lang/String;)V� 
 O Eorg/jetbrains/projector/common/protocol/toServer/ClientSetKeymapEvent logger -Lorg/jetbrains/projector/util/logging/Logger;	  ?org/jetbrains/projector/server/ProjectorServer$processMessage$8	 ALorg/jetbrains/projector/server/ProjectorServer$processMessage$8; 	
 8org/jetbrains/projector/util/logging/Logger$DefaultImpls info$default x(Lorg/jetbrains/projector/util/logging/Logger;Ljava/lang/Throwable;Lkotlin/jvm/functions/Function0;ILjava/lang/Object;)V
 *ORG_JETBRAINS_PROJECTOR_SERVER_AUTO_KEYMAP true -org/jetbrains/projector/util/loading/OptionKt 	getOption 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 parseBoolean (Ljava/lang/String;)Z
�  3org/jetbrains/projector/server/core/ij/KeymapSetter" 5Lorg/jetbrains/projector/server/core/ij/KeymapSetter; $	#% 	getKeymap ;()Lorg/jetbrains/projector/common/protocol/data/UserKeymap;'(
) 	setKeymap <(Lorg/jetbrains/projector/common/protocol/data/UserKeymap;)V+,
#- ?org/jetbrains/projector/server/ProjectorServer$processMessage$9/ ALorg/jetbrains/projector/server/ProjectorServer$processMessage$9; 1	02 @org/jetbrains/projector/server/ProjectorServer$processMessage$104 BLorg/jetbrains/projector/server/ProjectorServer$processMessage$10; 6	57 +ORG_JETBRAINS_PROJECTOR_SERVER_MAC_KEYBOARD9 &(Ljava/lang/String;)Ljava/lang/String;;
< checkNotNull (Ljava/lang/Object;)V>?
 "@ @org/jetbrains/projector/server/ProjectorServer$processMessage$11B (Z)V D
CE 7org/jetbrains/projector/common/protocol/data/UserKeymapG MAC 9Lorg/jetbrains/projector/common/protocol/data/UserKeymap;IJ	HK )access$updateToolkitKeyboardModifiersMode v(Lorg/jetbrains/projector/server/ProjectorServer$Companion;Lorg/jetbrains/projector/common/protocol/data/UserKeymap;)VMN
1O LINUXQJ	HR Forg/jetbrains/projector/common/protocol/toServer/ClientWindowMoveEventT processMessage$lambda-18Vc
 WX p Horg/jetbrains/projector/common/protocol/toServer/ClientWindowResizeEvent[ processMessage$lambda-20]c
 ^_ p Korg/jetbrains/projector/common/protocol/toServer/ClientWindowSetBoundsEventb processMessage$lambda-23dc
 ef 	p Gorg/jetbrains/projector/common/protocol/toServer/ClientWindowCloseEventi processMessage$lambda-24kc
 lm 
p Jorg/jetbrains/projector/common/protocol/toServer/ClientWindowInterestEventp processMessage$lambda-25rJ
 st �(Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)Ljava/lang/Runnable;nv w Morg/jetbrains/projector/common/protocol/toServer/ClientWindowsActivationEventy getWindowIds{ 
z| updateWindowsState (Ljava/util/List;I)V~
 � Oorg/jetbrains/projector/common/protocol/toServer/ClientWindowsDeactivationEvent�
�| Horg/jetbrains/projector/common/protocol/toServer/ClientNotificationEvent� 3org/jetbrains/projector/util/loading/state/IdeState� ?Lorg/jetbrains/projector/util/loading/state/IdeState$Companion; ��	�� =org/jetbrains/projector/util/loading/state/IdeState$Companion� isIdeAttached� �
�� getNotificationType K()Lorg/jetbrains/projector/common/protocol/toServer/ClientNotificationType;��
�� ;org/jetbrains/projector/server/ProjectorServer$WhenMappings� $EnumSwitchMapping$0 [I��	�� Gorg/jetbrains/projector/common/protocol/toServer/ClientNotificationType� ordinal��
�� *com/intellij/notification/NotificationType� INFORMATION ,Lcom/intellij/notification/NotificationType;��	�� WARNING��	�� ERROR��	�� &com/intellij/notification/Notification� ProjectorClient�
�� 
getMessage��
�� e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/intellij/notification/NotificationType;)V �
�� +com/intellij/notification/Notifications$Bus� notify +(Lcom/intellij/notification/Notification;)V��
�� *$i$a$-let-ProjectorServer$processMessage$5 Ljava/awt/event/KeyEvent; *$i$a$-let-ProjectorServer$processMessage$6 	imageData 8Lorg/jetbrains/projector/common/protocol/data/ImageData; resource LLorg/jetbrains/projector/common/protocol/toClient/ServerImageDataReplyEvent; transferable NLorg/jetbrains/projector/server/ProjectorServer$processMessage$transferable$1; 	pingReply GLorg/jetbrains/projector/common/protocol/toClient/ServerPingReplyEvent; $i$f$exhaustive this_$iv any$iv mode intellijNotificationType notification (Lcom/intellij/notification/Notification; clientSettings 9Lorg/jetbrains/projector/server/core/ReadyClientSettings; message >Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent; <org/jetbrains/projector/common/protocol/toServer/ClientEvent� )(Ljava/util/List<Ljava/lang/Integer;>;I)V getSystemEventQueue ()Ljava/awt/EventQueue;��
=� � � java/lang/Number� intValue��
�� 	getWindow ((I)Lorg/jetbrains/projector/awt/PWindow;��
t� java/awt/Window� java/awt/event/WindowEvent� (Ljava/awt/Window;I)V �
�� java/awt/AWTEvent� java/awt/EventQueue� 	postEvent (Ljava/awt/AWTEvent;)V��
�� Ljava/awt/Window; windowId /$i$a$-with-ProjectorServer$updateWindowsState$1 ($this$updateWindowsState_u24lambda_u2d26 Ljava/awt/EventQueue; 	windowIds windowEventId checkHandshakeVersion �(Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/ConnectedClientSettings;Ljava/lang/String;)V java/lang/CharSequence� ;� kotlin/text/StringsKt  split$default R(Ljava/lang/CharSequence;[Ljava/lang/String;ZIILjava/lang/Object;)Ljava/util/List;
 get (I)Ljava/lang/Object; � <org/jetbrains/projector/common/protocol/handshake/ConstantKt
 getHANDSHAKE_VERSION�
 (I)Ljava/lang/String;�
> getHandshakeVersionList 
 indexOf (Ljava/lang/Object;)I � AIncompatible handshake versions: server -  (#), client -  (#) $java/lang/invoke/StringConcatFactory makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;
  :(IILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;" # 1org/jetbrains/projector/server/core/ClientWrapper% 
disconnect' &( Dorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings* ;org/jetbrains/projector/server/core/ConnectedClientSettings,
-� 
getAddress/�
-0 (JLjava/lang/String;)V 2
+3 2org/jetbrains/projector/server/core/ClientSettings5 setSettings 7(Lorg/jetbrains/projector/server/core/ClientSettings;)V78&9 reason Ljava/lang/String; handshakeVersion handshakeVersionId conn 3Lorg/jetbrains/projector/server/core/ClientWrapper; connectedClientSettings =Lorg/jetbrains/projector/server/core/ConnectedClientSettings; setUpClient �(Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings;Ljava/lang/String;)V Porg/jetbrains/projector/server/core/protocol/KotlinxJsonToServerHandshakeDecoderE RLorg/jetbrains/projector/server/core/protocol/KotlinxJsonToServerHandshakeDecoder; G	FH decode ^(Ljava/lang/String;)Lorg/jetbrains/projector/common/protocol/handshake/ToServerHandshakeEvent;JK
FL Horg/jetbrains/projector/common/protocol/handshake/ToServerHandshakeEventN getTokenP�
OQ .ORG_JETBRAINS_PROJECTOR_SERVER_HANDSHAKE_TOKENS 1ORG_JETBRAINS_PROJECTOR_SERVER_RO_HANDSHAKE_TOKENU Bad handshake tokenW %setUpClient$sendHandshakeFailureEvent H(Lorg/jetbrains/projector/server/core/ClientWrapper;Ljava/lang/String;)VYZ
 [ getCommonVersion]�
O^ getCOMMON_VERSION`�
a getCommonVersionListc 
d getCommonVersionIdf�
Og GIncompatible common protocol versions: server -  (#), client -  (#)i (IIII)Ljava/lang/String;k l Corg/jetbrains/projector/server/core/protocol/HandshakeTypesSelectorn ELorg/jetbrains/projector/server/core/protocol/HandshakeTypesSelector; p	oq  getSupportedToClientCompressionss 
Ot selectToClientCompressor V(Ljava/util/List;)Lorg/jetbrains/projector/common/protocol/compress/MessageCompressor;vw
ox EServer doesn't support any of the following to-client compressions: z $(Ljava/util/List;)Ljava/lang/String;| } getSupportedToClientProtocols 
O� selectToClientEncoder [(Ljava/util/List;)Lorg/jetbrains/projector/common/protocol/toClient/ToClientMessageEncoder;��
o� BServer doesn't support any of the following to-client protocols: � }  getSupportedToServerCompressions� 
O� selectToServerDecompressor X(Ljava/util/List;)Lorg/jetbrains/projector/common/protocol/compress/MessageDecompressor;��
o� EServer doesn't support any of the following to-server compressions: � } getSupportedToServerProtocols� 
O� selectToServerDecoder [(Ljava/util/List;)Lorg/jetbrains/projector/common/protocol/toServer/ToServerMessageDecoder;��
o� BServer doesn't support any of the following to-server protocols: � } getRequiresConfirmation� �&� 6ORG_JETBRAINS_PROJECTOR_SERVER_CONNECTION_CONFIRMATION� <org/jetbrains/projector/server/ProjectorServer$setUpClient$1� >Lorg/jetbrains/projector/server/ProjectorServer$setUpClient$1; �	�� "kotlin/jvm/internal/Ref$BooleanRef�
�  setUpClient$lambda-28 [(ZLkotlin/jvm/internal/Ref$BooleanRef;Lorg/jetbrains/projector/server/core/ClientWrapper;)V��
 �� n(ZLkotlin/jvm/internal/Ref$BooleanRef;Lorg/jetbrains/projector/server/core/ClientWrapper;)Ljava/lang/Runnable;n� � invokeAndWait�u
s� element� 	�� <org/jetbrains/projector/server/ProjectorServer$setUpClient$3� >Lorg/jetbrains/projector/server/ProjectorServer$setUpClient$3; �	�� *Other user has disallowed this connection.� <org/jetbrains/projector/server/ProjectorServer$setUpClient$4� >Lorg/jetbrains/projector/server/ProjectorServer$setUpClient$4; �	�� getConfirmationRemoteIp ()Ljava/net/InetAddress;��&� access$isMac =(Lorg/jetbrains/projector/server/ProjectorServer$Companion;)Z��
1� isLocalAddress (Ljava/net/InetAddress;)Z��
1� � �
 � Borg/jetbrains/projector/common/protocol/compress/MessageCompressor� getCompressionType E()Lorg/jetbrains/projector/common/protocol/handshake/CompressionType;���� Gorg/jetbrains/projector/common/protocol/toClient/ToClientMessageEncoder� getProtocolType B()Lorg/jetbrains/projector/common/protocol/handshake/ProtocolType;���� Dorg/jetbrains/projector/common/protocol/compress/MessageDecompressor��� Gorg/jetbrains/projector/common/protocol/toServer/ToServerMessageDecoder��� -org/jetbrains/projector/awt/font/PFontManager� /Lorg/jetbrains/projector/awt/font/PFontManager; �	�� getAllInstalledFonts ()[Ljava/awt/Font;��
�� .org/jetbrains/projector/server/util/FontCacher� 0Lorg/jetbrains/projector/server/util/FontCacher; �	�� "(Ljava/awt/Font;)Ljava/lang/Short;��
�� 
shortValue ()S��
�� getFontData @(S)Lorg/jetbrains/projector/common/protocol/data/FontDataHolder;��
�� 	getColors Z()Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage;��
 E� Oorg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeSuccessEventq(Lorg/jetbrains/projector/common/protocol/handshake/CompressionType;Lorg/jetbrains/projector/common/protocol/handshake/ProtocolType;Lorg/jetbrains/projector/common/protocol/handshake/CompressionType;Lorg/jetbrains/projector/common/protocol/handshake/ProtocolType;Ljava/util/List;Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage;)V 
 Porg/jetbrains/projector/server/core/protocol/KotlinxJsonToClientHandshakeEncoder RLorg/jetbrains/projector/server/core/protocol/KotlinxJsonToClientHandshakeEncoder; 		 Horg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeEvent encode N(Lorg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeEvent;)[B
 send ([B)V& 7org/jetbrains/projector/server/core/SetUpClientSettings
+�
+0 (ZLorg/jetbrains/projector/common/protocol/toClient/ToClientMessageEncoder;Lorg/jetbrains/projector/common/protocol/compress/MessageCompressor;Lorg/jetbrains/projector/common/protocol/toServer/ToServerMessageDecoder;Lorg/jetbrains/projector/common/protocol/compress/MessageDecompressor;)V 
R K(JLjava/lang/String;Lorg/jetbrains/projector/server/core/SetUpClientData;)V 
 getClientDoesWindowManagement �
O  setClientDoesWindowManagement"D
�# setUpClient$lambda-33 M(Lorg/jetbrains/projector/common/protocol/handshake/ToServerHandshakeEvent;)V%&
 '( `(Lorg/jetbrains/projector/common/protocol/handshake/ToServerHandshakeEvent;)Ljava/lang/Runnable;n* + updateClientsCount-  �. resp $Lkotlin/jvm/internal/Ref$BooleanRef; remoteIp ;$i$a$-mapNotNull-ProjectorServer$setUpClient$successEvent$1 font Ljava/awt/Font; 4$i$a$-let-ArraysKt___ArraysKt$mapNotNullTo$1$1$iv$iv it$iv$iv 6$i$a$-forEach-ArraysKt___ArraysKt$mapNotNullTo$1$iv$iv element$iv$iv element$iv$iv$iv $this$forEach$iv$iv$iv [Ljava/lang/Object; $i$f$mapNotNullTo $this$mapNotNullTo$iv$iv $i$f$mapNotNull $this$mapNotNull$iv 4$i$a$-map-ProjectorServer$setUpClient$successEvent$2 fontId S toServerHandshakeEvent JLorg/jetbrains/projector/common/protocol/handshake/ToServerHandshakeEvent; hasWriteAccess toClientCompressor DLorg/jetbrains/projector/common/protocol/compress/MessageCompressor; toClientEncoder ILorg/jetbrains/projector/common/protocol/toClient/ToClientMessageEncoder; toServerDecompressor FLorg/jetbrains/projector/common/protocol/compress/MessageDecompressor; toServerDecoder ILorg/jetbrains/projector/common/protocol/toServer/ToServerMessageDecoder; successEvent QLorg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeSuccessEvent;  supportedHandshakeClientSettings FLorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings; [Ljava/awt/Font;S Aorg/jetbrains/projector/common/protocol/handshake/CompressionTypeU >org/jetbrains/projector/common/protocol/handshake/ProtocolTypeW java/awt/FontY java/lang/Short[ Vorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage] sendPictures T(Ljava/util/List<+Lorg/jetbrains/projector/common/protocol/toClient/ServerEvent;>;)V ?org/jetbrains/projector/server/ProjectorServer$sendPictures$1$1a
b� forEachOpenedConnectiond = �e ,$i$a$-forEach-ProjectorServer$sendPictures$1 	transport 
dataToSend R(Ljava/util/List<Lorg/jetbrains/projector/common/protocol/toClient/WindowData;>;)Z toSet %(Ljava/lang/Iterable;)Ljava/util/Set;kl
7m set hasDifferentWindowEvents windowEvents start
 s updateThread Ljava/lang/Thread;uv	 wr 
 5y 8org/jetbrains/projector/server/websocket/WebsocketServer{ :Lorg/jetbrains/projector/server/websocket/WebsocketServer; }	|~ /createTransportBuilders$projector_server_common� 
|� @org/jetbrains/projector/server/core/websocket/WsTransportBuilder� � �
 �  attachDefaultServerEventHandlers |(Lorg/jetbrains/projector/server/core/ClientEventHandler;)Lorg/jetbrains/projector/server/core/websocket/WsTransportBuilder;��
�� A()Lorg/jetbrains/projector/server/core/websocket/HttpWsTransport;�
�� addTransport 8(Lorg/jetbrains/projector/server/core/ServerTransport;)V��
 � %$i$a$-forEach-ProjectorServer$start$1 BLorg/jetbrains/projector/server/core/websocket/WsTransportBuilder;h ( � �y removeTransport 9(Lorg/jetbrains/projector/server/core/ServerTransport;I)Z ( � stop�| �� removed 	timeoutMs removeTransport$default |(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/server/core/ServerTransport;IILjava/lang/Object;)Z��
 � Lkotlin/jvm/JvmOverloads; clear�  (�� 
 5�u )throwUninitializedPropertyAccessException� 
 "� java/lang/Thread� 	interrupt� 
�� $$i$a$-forEach-ProjectorServer$stop$1 timeout stop$default G(Lorg/jetbrains/projector/server/ProjectorServer;IILjava/lang/Object;)V
 � 	isStopped getState ()Ljava/lang/Thread$State;��
�� java/lang/Thread$State� 
TERMINATED Ljava/lang/Thread$State;��	�� getClientList ()[[Ljava/lang/String; @org/jetbrains/projector/server/ProjectorServer$getClientList$1$1� (Ljava/util/ArrayList;)V �
�� java/util/HashSet�
�  [Ljava/lang/String;�
� �
 � � toArray (([Ljava/lang/Object;)[Ljava/lang/Object;�� �� java/lang/NullPointerException� mnull cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>�  
�� [[Ljava/lang/String;� -$i$a$-forEach-ProjectorServer$getClientList$1 0$i$a$-distinctBy-ProjectorServer$getClientList$2 key$iv e$iv $i$f$distinctBy set$iv Ljava/util/HashSet; list$iv Ljava/util/ArrayList; $this$distinctBy$iv $i$f$toTypedArray thisCollection$iv $this$toTypedArray$iv s< disconnectAll @org/jetbrains/projector/server/ProjectorServer$disconnectAll$1$1� BLorg/jetbrains/projector/server/ProjectorServer$disconnectAll$1$1; �	�� -$i$a$-forEach-ProjectorServer$disconnectAll$1 disconnectByIp ip� Aorg/jetbrains/projector/server/ProjectorServer$disconnectByIp$1$1�
�� .$i$a$-forEach-ProjectorServer$disconnectByIp$1��
 � $message� getSize >()Lorg/jetbrains/projector/common/protocol/data/CommonIntSize;��
`� :org/jetbrains/projector/common/protocol/data/CommonIntSize getWidth�
 	getHeight�
 access$resize ?(Lorg/jetbrains/projector/server/ProjectorServer$Companion;II)V	

1 getNewDisplays 
y Dorg/jetbrains/projector/common/protocol/handshake/DisplayDescription java/awt/Rectangle getX�
 getY�


 (IIII)V 
 getScaleFactor ()D 
! java/lang/Double# (D)Ljava/lang/Double;�%
$& kotlin/TuplesKt( to 3(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair;*+
), setupDisplays.�
�/ ,$i$a$-map-ProjectorServer$processMessage$2$1 FLorg/jetbrains/projector/common/protocol/handshake/DisplayDescription; $clientSettings3 this$05 Iorg/jetbrains/projector/server/core/convert/toAwt/ClientEventExtensionsKt7 shift �(Lorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent;Ljava/awt/Point;)Lorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent;9:
8; /org/jetbrains/projector/awt/peer/PMouseInfoPeer= 1Lorg/jetbrains/projector/awt/peer/PMouseInfoPeer; ?	>@ getLastMouseCoordsB�
>C
�
� java/awt/PointG setLocationI�
HJ getWindowIdL�
�M setLastWindowUnderMouse (Ljava/awt/Component;)VOP
>Q getTouchState F()Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;ST
LU 9org/jetbrains/projector/server/core/convert/toAwt/MouseKtW calculateNewTouchState(Lorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent;Lorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;)Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;YZ
X[ createMouseEvent �(Ljava/awt/Component;Lorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent;Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;J)Ljava/awt/event/MouseEvent;]^
X_ setTouchState G(Lorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState;)Vab
Lc 7org/jetbrains/projector/server/core/util/LaterInvokatore invokeg�fh shiftedMessage CLorg/jetbrains/projector/common/protocol/toServer/ClientMouseEvent; Ljava/awt/Component; newTouchState DLorg/jetbrains/projector/server/core/ReadyClientSettings$TouchState; 
mouseEvent Ljava/awt/event/MouseEvent; Borg/jetbrains/projector/server/core/ReadyClientSettings$TouchStateq �(Lorg/jetbrains/projector/common/protocol/toServer/ClientWheelEvent;Ljava/awt/Point;)Lorg/jetbrains/projector/common/protocol/toServer/ClientWheelEvent;9s
8t
�
�
�M createMouseWheelEvent z(Ljava/awt/Component;Lorg/jetbrains/projector/common/protocol/toServer/ClientWheelEvent;J)Ljava/awt/event/MouseWheelEvent;yz
X{ CLorg/jetbrains/projector/common/protocol/toServer/ClientWheelEvent; mouseWheelEvent  Ljava/awt/event/MouseWheelEvent; $it� t(Lorg/jetbrains/projector/common/protocol/toServer/ClientRawKeyEvent;JLjava/awt/Component;)Ljava/awt/event/KeyEvent;��
��
UM 	getDeltaX��
U� 	getDeltaY��
U� move��
o� /$i$a$-apply-ProjectorServer$processMessage$12$1 4$this$processMessage_u24lambda_u2d18_u24lambda_u2d17
\M
\�
\� getDirection D()Lorg/jetbrains/projector/common/protocol/toServer/ResizeDirection;��
\� toDirection p(Lorg/jetbrains/projector/common/protocol/toServer/ResizeDirection;)Lorg/jetbrains/projector/awt/data/Direction;��
�� resize 1(IILorg/jetbrains/projector/awt/data/Direction;)V��
o� /$i$a$-apply-ProjectorServer$processMessage$13$1 4$this$processMessage_u24lambda_u2d20_u24lambda_u2d19
cM 	getBounds C()Lorg/jetbrains/projector/common/protocol/data/CommonIntRectangle;��
c� ?org/jetbrains/projector/common/protocol/data/CommonIntRectangle�
�
�
�
� 	setBounds�
o� 0$i$a$-with-ProjectorServer$processMessage$14$1$1 D$this$processMessage_u24lambda_u2d23_u24lambda_u2d22_u24lambda_u2d21 ALorg/jetbrains/projector/common/protocol/data/CommonIntRectangle; /$i$a$-apply-ProjectorServer$processMessage$14$1 4$this$processMessage_u24lambda_u2d23_u24lambda_u2d22
jM close� 
o� getInterestManager N()Lorg/jetbrains/projector/server/core/util/AbstractWindowDrawInterestManager;��
L� Jorg/jetbrains/projector/server/core/util/AbstractWindowDrawInterestManager� processClientEvent O(Lorg/jetbrains/projector/common/protocol/toServer/ClientWindowInterestEvent;)V��
�� Oorg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeFailureEvent�
�� failureEvent QLorg/jetbrains/projector/common/protocol/handshake/ToClientHandshakeFailureEvent; $conn $resp�� 
read-write� 	read-only� 5org/jetbrains/projector/server/util/ConfirmConnection� ALorg/jetbrains/projector/server/util/ConfirmConnection$Companion; ��	�� ?org/jetbrains/projector/server/util/ConfirmConnection$Companion� confirm +(Ljava/net/InetAddress;Ljava/lang/String;)Z��
�� getConfirmationRemoteName��&� '(Ljava/lang/String;Ljava/lang/String;)Z��
�� booleanValue� �
�� )$i$a$-let-ProjectorServer$setUpClient$2$1 
accessType $hasWriteAccess java/net/InetAddress� $toServerHandshakeEvent� getDisplays� 
O� )$i$a$-map-ProjectorServer$setUpClient$5$1 *$i$a$-with-ProjectorServer$setUpClient$5$2 1$this$setUpClient_u24lambda_u2d33_u24lambda_u2d32 	isEnabled� �
1� startServer {(ZLkotlin/jvm/functions/Function1;Ljava/lang/Runnable;Ljava/lang/Runnable;)Lorg/jetbrains/projector/server/ProjectorServer; �(ZLkotlin/jvm/functions/Function1<-Ljava/lang/String;+Lorg/jetbrains/projector/util/logging/Logger;>;Ljava/lang/Runnable;Ljava/lang/Runnable;)Lorg/jetbrains/projector/server/ProjectorServer; Lkotlin/jvm/JvmStatic;��
1� 
logFactory  Lkotlin/jvm/functions/Function1; generalInitializer Ljava/lang/Runnable; fullInitializer access$getLogger$cp /()Lorg/jetbrains/projector/util/logging/Logger; access$createDataToSend B(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/List; 
  $this access$sendPictures C(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/util/List;)V_�
  k(Lorg/jetbrains/projector/server/core/util/LaterInvokator;ZLkotlin/jvm/internal/DefaultConstructorMarker;)V  
  $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; access$getLastStartedServer$cp 2()Lorg/jetbrains/projector/server/ProjectorServer; lastStartedServer �	  *access$getENABLE_BIG_COLLECTIONS_CHECKS$cp ENABLE_BIG_COLLECTIONS_CHECKS 	  *access$setENABLE_BIG_COLLECTIONS_CHECKS$cp <set-?> .access$getBIG_COLLECTIONS_CHECKS_START_SIZE$cp !BIG_COLLECTIONS_CHECKS_START_SIZE �	  .access$setBIG_COLLECTIONS_CHECKS_START_SIZE$cp access$setLastStartedServer$cp access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue; access$setWindowColorsEvent$p }(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent;)V access$checkHandshakeVersion �(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/ConnectedClientSettings;Ljava/lang/String;)V��
 & access$setUpClient �(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings;Ljava/lang/String;)VCD
 *  access$setPreviousWindowEvents$p B(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/util/Set;)V access$getCaretInfoUpdater$p h(Lorg/jetbrains/projector/server/ProjectorServer;)Lorg/jetbrains/projector/server/idea/CaretInfoUpdater; access$getTransports$p A(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/Set; access$notifyObservers S(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/beans/PropertyChangeEvent;)V access$processMessage �(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)VIJ
 6 <clinit> 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V 9
1: kotlin/jvm/internal/Reflection< getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass;>?
=@ kotlin/reflect/KClassB getSimpleNameD�CE -org/jetbrains/projector/util/logging/LoggerKtG Logger A(Ljava/lang/String;)Lorg/jetbrains/projector/util/logging/Logger;IJ
HK 7org.jetbrains.projector.server.debug.collections.checksM getPropertyO;
�P <org.jetbrains.projector.server.debug.collections.checks.sizeR toIntOrNull '(Ljava/lang/String;)Ljava/lang/Integer;TU
V
�� $i$f$Logger FLjava/util/Set<Lorg/jetbrains/projector/server/core/ServerTransport;>; lLjava/util/concurrent/ConcurrentLinkedQueue<Lorg/jetbrains/projector/common/protocol/toClient/ServerEvent;>; $Lorg/jetbrains/annotations/Nullable; 5Ljava/util/List<Ljava/beans/PropertyChangeListener;>; NLjava/util/Set<Lorg/jetbrains/projector/common/protocol/toClient/WindowData;>; ENABLE_PROPERTY_NAME %org.jetbrains.projector.server.enable` HOST_PROPERTY_NAME_OLD #org.jetbrains.projector.server.hostc HOST_PROPERTY_NAME #ORG_JETBRAINS_PROJECTOR_SERVER_HOSTf PORT_PROPERTY_NAME_OLD #org.jetbrains.projector.server.porti PORT_PROPERTY_NAME #ORG_JETBRAINS_PROJECTOR_SERVER_PORTl DEFAULT_PORT 8887o TOKEN_ENV_NAME RO_TOKEN_ENV_NAME #DEFAULT_BIG_COLLECTIONS_CHECKS_SIZE  ' ENABLE_AUTO_KEYMAP_SETTING MAC_KEYBOARD_MODIFIERS_MODE ENABLE_CONNECTION_CONFIRMATION "DISABLE_IDEA_UPDATES_PROPERTY_NAME 3ORG_JETBRAINS_PROJECTOR_SERVER_DISABLE_IDEA_UPDATESy 9Lorg/jetbrains/projector/util/loading/UseProjectorLoader; Lkotlin/Metadata; mv           k xi   0 d1���À

��
��

��



��




��

��

��
!

��
 
��
"

��
#

��







��

��














�� Z20:ZB00¢J(02)0J*0+2,0 J-02.00HJ /0+200122032405HJ600HJ70"HJ80+J90+2:05J;
050<0<¢=J>02?0HJ@0JA0+2B0CHJD0+2E0F240GHJH02)0JI02,0 2J0KJL0+2M0NHJO0+2P00HJ Q0+20012R0S2405HJT0+JU0+2V0KHJW0+2X0K02Y0KHR0X¢
��R	0
¢
��R00X¢
��R0X¢
��R0X¢
��R0X¢
��R0X¢
��R2&
 *00 *
 *0000X¢
��R00X¢
��R0 0X¢
��R!0"X.¢
��R#08F¢$%R&0'X¢
��¨[ d2   >Lorg/jetbrains/projector/common/protocol/toClient/ServerEvent; kotlin.jvm.PlatformType =Lorg/jetbrains/projector/common/protocol/toClient/WindowData; 
wasStarted projector-server-common WhenMappings ProjectorServer.kt RuntimeInvisibleAnnotations 	Signature ConstantValue Code LineNumberTable LocalVariableTable StackMapTable 
Deprecated $RuntimeInvisibleParameterAnnotations RuntimeVisibleAnnotations InnerClasses 
SourceFile SourceDebugExtension BootstrapMethods 1       �- �     �    
  �     �         ) * �   Z�     �   uv    0 1 �   [�     �    @ A �     �    �    \    J K �     �    � � �     �    � � �   ]  �    \    � * �   ^�     �    �     �   
 � �    \   _< �   a�     �   b< �   d�     �   e< �   g�     �   h< �   j�     �   k< �   m�     �   n< �   p�     �   q< �   T�     �   r< �   V�     �   
    s � �   t 
 �   u< �   �     �   v< �   :�     �   w< �   ��     �   x< �   z�     �   A    �  �    $*� 	*+� *� *� Y� � � N- � &-� (� ,*� .Y� /� 3*� 5Y� 7Y*� :� <� ?� C*� EY� GY*� H� <� I� M � R� TY*� U� W� [� R� ]Y*� ^� W� a� R� cY*� d� W� g� R� iY*� j� <� m� R� oY*� p� W� s� R� uY*� v� W� y� R� {Y*� |� W� � R� �Y*� �� W� �� �� �Y*� �� <� � *� �Y*� �� �� �*� �Y� �� �� �� �*� �� ��   �   ^    ^  ` 	 a  c * o 5 q K w a { b | s  � � � � � � � � � � � � � � � � � � � ��# _�       $ � �    $ 
    $     � � �   �     S*� ,� �L=+� �� +� �� � � � 4+� � N-� � � #-� � :� �:6� � ���� �   �    � ! ��  �(�     � �       j 
� !� C j Q� R j�   >  C  � �  @ 
 � �  9  � �  
 H � �   J � �    S � �    � � �   /     *� ��   �       ��        � �  �     �  	 �  �          �    �      � � �   E     +� �*� �+� � �   �      ��        � �      � � �     �    � � �   E     +� �*� �+� � �   �      ��        � �      � � �     �    � � �   �     D*� �M,� &,� �M>,� � :� � � !� � :� �:6+� � ��� �   �    �  � �'�       � � 7 � B� C ��   H  7  � �  4  � �  -  � �   1 � �   3 � �    D � �     D � �   � � �   B     
**+���   �   
    � 	 ��       
 � �     
   �   E     �
Y*����   �   
    � �        � �    �   P     *�+�� � �   �    @�      �        � �         �  	  "  <*� =� &�(�,Y� W� 
�/_�5:6�;� e� X�A�EN -�K:� :�M::� � �/�5:*�O� *�:6�;� �R� �TY�U�L�/�Y�^�d� ��j� ��mM�r�w� �: 6:� �Y
�{�~� �:66	� � :

� � �s
� � :	6`6	6� ���o:6:!6��6��:��Y� W� c� �:6:� �Y
�{�~� �:6� � :� � � (� � :::6��_�� W���� � :����6����������:��:��Y� W� ��6��:��6��6��6��:��:��6��6��Y� W� 	����: ��8��Y ��!_�� W���� � N *-�� ��Y-����� �R:���� ��j:*� 3� ��j:� � `+� `,� `� ``6�	:		:
6
� �� W
� �� W
+� �� W
,� �� W
� �� W*�Y� W� :6
� � W*�  	�:����  8 @ C# �  � �     MF<�    G #�   M�    G MM  G<�    G<MM  �      �     <  �� N   � �  � � � �  � *   � �  � � � �   �� + "  � �  � � � � o>                �  �� * "  � �  � � � � o>  � � � �         �  .�  "  � �  � � � � o>                �  �� 3 "  � �  � � � � o>@�         �    � �IB� @ "  � �  � � � � o>@�BDF  �   � oE�� =   � �  � � � �  �    � � � � � � �  B �� �   � � � � � � � � H�  � g    !� $ ) , 1 8 9 C E K O O T [ ] ` b k q u� x } � � �$ �& �( �) �� �� �� ��
�+,&-<�V�r�}-�����-�.�0�1�2�3�4�5�6�7�8�9:;"*&+(,*-,../0022436485:6<1>7@8B9D:F;H*W�\�])](^?_@uAx?zD�F�H�J�K�L�M�N�O
P�P*P+Q,J1J3S9U�  ~ & $  �  !   E   x  �  u   8 K  b ! }   � z  � � r ! � V :" � S =# � S =$% < X& � 9 [' � 3( � 6) � 6*+  �d! �  ��, �  ��- � 	 ��. �  ��$%  ��/ �  ��0 �  1 �   � � a2 � � d3 � 
 �� �  ��4 � ^ �5 � z �6 � � �7 � � �8 � � 9 � 3 	: �   < � �  �   ! IJ �  U  
  3+�P�U� ,�W� ,�Y� ��^N,:�`� ,�q  �w� ���y� ,�~  �w� ����� ,+*��  �w� ����� ,+*��  �w� ����� 7,��+���r�w���o������:6*��  �w � �r��� 7,��+���r�w���o������:6*��  �w � �6��� *,+��  �w� ��W� >��,�W�Ŷ�Y� 
W����:��Y,�W����:+���ٸާ���� L��Y,��:*� 6� �A�E�M�� � �(�M�� �TY�U�� ���Y� +��Y,�Y���+��e���:+���ٸާY��� � R,������ �>���^:*� � ����� 1��!� �&,��*�.� ��3��� : 6 �^:*� � ��8��� ~:�=� h:�=Y�A�!6��CY�F���^:6� �/�L�P� � �/�S�P� �TY�U�� : 6	 � �/,��*�P� : 6 � �7�U� ,�Z  �w� � �\� ,�a  �w� �	�c� ,�h  �w� � ��j� ,�o  �w� � ��q� +,�x  �w� � ��z� *,�z�} ͷ�� � ���� *,���� η�� � ���� {����� �,������_��.�      .            "   (��� ��� ��� �TY�U�:��Y�,����,������:��� � �TY�U�: 6 �   �   � )� [�;;_�"� /�� /� %[� ' � G 	 L�[�[[  �   L�[�[   � � *G�(G �  r \  Y  Z 
[ \ ^ a  b 7d Nh gy �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� �� ����3�E�T�\�f�l������������������������"�5�I�M�N�S�l�u�������������������������������%�-�<�S�k�s���������������� ���-a1�2�    � � �  �  ��  � � �  �  �� 3 �� E 	�� f 9�� � 	�� M � � J �\ J � � � � � 	� �\ � � � � S�  � � � � �\ � � � � !��  �� 1 � � . �\ . � �   3 � �    3��   3��  ~ �  1  	   s�A��N6+�� :� � � W� � �ܶ�6�r��Y� W� ��:�� �� Y� W���:-��Y�������  �   �   : � � �� )   �� � oB�� �@�G�� �       
 + \ p q r�   H  \ *�  + B� �  
 g� �   j��    s � �     s� �    s� � �   � �� �  5     �-���>:�S�:�	 �>:�	 �>:���� (����� �$  :+�) �+�+Y,�.,�1�4�6�: �   �    � j �>>�   >    % 2 7 E V _ _ a i j o s  w �"�   H  a 	;<  * Y=<  7 L><    � � �     �?@    �AB    ��<  CD �  �  '  V�I-�M:�R:T�=�� � V�=�� � +X�\�6�_�b� ,�b�e�b�� �_�h�m  :+�\��r�u�y:� +�u�~  �\��r����:� +����  �\��r����:� +����  �\��r����:		� +����  �\�*� � �+�� � w��=:

� � 
�!� � � V�������Y��:

+��  ��
��� �����+��\������*� � *+�� :
�/�˙ 
� �/
�ϙ 	*
���� �� �� 	�� ���:::::6:� �Y� �� �:6:6:6�6� ?2:�:6:6����Y� W� :6�� W  ��� � � :  � �:::::6:� �Y
�{�~� �:6� � :� � � 1� � :�ܶ�6: 6���� _�� W���� � :  *� M� :!:":#:$:%:&�Y&%$#"!�:
+�

��� +�Y,�,��RY	���6�: � ���!�$�,  ��*� ��/ �   �    � "O >G� 5  &+>O>  �    &+>O�  �  ��  ��  ��  >@� F  &+>O�����  � -� T   &+>O���� TT �TT       VXVX  � .   &+>O���� TT �TTZZZ  VXVX \�    &+>O���� TT �TT       VXVX  � E ! &+>O����  � � � �         VXVX   7� � ' &+>O���� � � � �         VXVX �^ �XVXV  �  � d  + 	- . "/ 41 ;2 <- >6 I8 Z9 i8 i7 k: q< r? @ �A �B �A �E �H �I �J �K �J �N �Q �R �S �T �S �W �Z �[ �\ �] �\ �` �c �dee'g6i?kLuTvcwjxk{z~�����������������������������.�1�;�<�@�A�F�X�c�}���������������	������� �"�$�'�2�7�B�L�U��  j $ k ;< ? ;01 
� 2 
 3 �  45 1 
6 � . 7 �  (8 �  +9 �  5: � � P � � � S;< � Y= � � \>< � \$% � p? � � s@< � A � � BC � "! � } C" � z F# � z F$% c a& � ` d' �  	MDE  >F   �GH  ��IJ  ��KL  �tMN 	� ^OP 
  V � �    V?@   VQR   V�<  _� �   �     G*� ,� �M>,� � :� � � ,� � :� �:6�bY+�c� <�f  ��� �   �    �  � �2�      � 
� /� A� E� F��   H  / g �  , h �  %  � �  
 < � �   > � �    G � �     Gi � �   ` �� �   �     $+� ��nM,*� ��� � >� *,� ��   �    �  (@� 	�      � � � � "��   *   o *   p     $ � �     $q � �   j r  �   �     V**�t�x*� C�z���� �L=+� � N-� � � ,-� � :��:6**������� ζ� ��� �   �    � " � �1�   "   � � � � =� P� T� U��   >  = � �  :  ��  3  � �   : � �   < � �    V � �   �� �   U     +�� �*� ,+�� W+�� �   �     � � ��        � �     h � �     �   �� �        +�� �*� ,+�� >� 
+�� �   �    � �     � � � ��   *   �      � �     h �    � � �   	  �    	�� �   0     ~� =*+���   �    �      � �| �       f*� ,� �M>,� � :� � � !� � :� �:6�� ��� *� ,�� *� C��*�x� *�xY� W������   �    �  � �'g��   & 	  � 
� /� :� ;� D� K� R� e��   H  / � �  ,  � �  %  � �  
 1 � �   3 � �    f � �     f� � �    �  	�� �   /     ~� <*���   �    �      � � � �   `     &*�x� *�xY� W�������� � �   �   
 W�@�      ��       & � �   �� �  N  
   ջ �Y� �L*� ,� �M>,� � :� � � ,� � :� �:6��Y+��� <�f  ��� +� �M>��Y��:� �Y� �:,� � :� � � 1� � :��:6	2:�Ι����W���� �� �M >,:�͹� Y� W��Y׷ٿ�۰   �   O �    � � �  2� !   � �� � �  7� )   � � � � � ��   V   � � � � 7� I M� N U� ^� g� �� � �� �� �� � �� �� �� ��   �  7 � �  4 h �  -  � �   < � �   > � �  � � � 	 �  ��  � � �  � "� �  U W� �  ^ N��  g E��  S Y� �  � � �  � �%  �  �%   ���    � � �  �     �   �  �   �     ?*� ,� �L=+� � N-� � � &-� � :� �:6��� <�f  ��� �   �    �  � �+�       
  , 9 = >�   >  , � �  ) h �  "  � �  
 4 � �   6 � �    ? � �   �  �   �     N+�� �*� ,� �M>,� � :� � � ,� � :� �:6��Y+��� <�f  ��� �   �    �  � �2�       6 H L M �   H  6 � �  3 h �  ,  � �   < � �   > � �    N � �     N�< �     �   �  �   &     *���   �        � �  �    �   bc �   L     "*�� �/*�`� �*�`� ���   �     b�       "��   zc �  [     �*�� ��*�y�� �L:
=+N� �Y+
�{�~� �:6-� � :� � � L� � :�::6	�Y������"�'�-_�� W���� � 
_�0�   �   # � 8 � � � � �   �  � R�   & 	 e  0 K Ye � � �e �f�   \ 	 Y &1 � 	 V ) �2  K =! �  0 ]" �  - `# �  - `$%   x& �   z' �    ���   �� �  z     �*�� �+4� �,6� �*���������<N�A�D-�E-�F�K�r*���N��Y� W� ��:�A�RY� W�W-*��+�V�\Y� W�:��� �-+�V+���`:+�d,� ��i �   �   ? � M �L � oB��  �L �� �Rr� 
r�   .  i &k 7m Rn Zp cr ws �t �u �v �w�   H  & �jk  R U*l  w 0mn  � op    ���     �3�    �5 �  �� �  1     ~*�� �+4� �,6� �*���������uN�A�D-�v-�w�K�r*���x��Y� W� ��:�A�RY� W�W-+���|:,� ��i �   �   5 � M �L � oB��  �L �� ��   "  z &{ 7} R~ Z� c� o� }��   >  & Xj}  R ,*l  o ~    ~��     ~3�    ~5 �  �� �   T     *6� �+�� �*� +��i �   �   
  � ��       5 �     ��  �� �   T     *6� �+�� �*� +��i �   �   
  � ��       5 �     ��  �� �   �     ?*6� �+�� �,4� �*� +��,���r�w���o��������i �   �     � � !� 3� >��        ?5 �     ?��    ?3�  Vc �   �     5*�� �r*�U����Y� W� L+M>,*�U��*�U���� �   �    \o�     � � !� 3� 4��      ! � �   �+    5��   ]c �   �     ?*�� �r*�\����Y� W� %L+M>,*�\��*�\��*�\������ �   �    \o!�     � � !� =� >��      ! � �   �+    ?��   dc �   �     I*�� �r*�c����Y� W� /L+M>*�c��:6,����������   �   �    \o+�   & 	 � � !� *� -� E� F� G� H��   4  - � �  * ��  ! &� �   (�+    I��   kc �   W      *�� �r*�j����Y� W� ���   �    \o�     ��        ��   rJ �   N     *4� �+�� �*��+�q�±   �     ��       3�     ��  YZ �   `     ��Y+��M*�
,��� �   �      & 	( )�      	 ��    �@     ;<  �� �  l     t+ʸ �,˸ �6� 	ͧ � 	ϧ �TY�U�N+,�� Y� W� ::6��-�ڸ�_ Y� W��,�� -�� ����   �   j �  
G>�  �&> ���  �&> ���  �&> ���  �&> ��   2  l m n 0l 1q C� Hq Wq Xq `r gq ss�   >  H 	� �  E  �  1 C�<    t�      t�1    t�@  %& �  �     �*� ��*��� �L:
=+N� �Y+
�{�~� �:6-� � :� � � L� � :�::6	�Y������"�'�-_�� W���� � 
_�0*���	 �M>�/,�,�� �   �   # � 5 O � � � �   �  � R�   :  � 
�  -	 H
 V� � � �� �� �� �� �� ���   p  V &� � 	 S ) �2  H =! �  - ]" �  * `# �  * `$%   x& �   z' �  � � �  � �2    ��E   � � �         �/��     �� �   G     �/+,-���   �   *           ��    ��    �� �   ��    �  �     �  �       �    �    �  �  �         ��   �       ^ �   /     *��   �      ^�        �   �   :     *+�	�   �      ^�        �     i �  
 �   C     *+��   �   *     � �      
             �         ��   �       ^ � �         ��   �       ^D �   /     ��   �       ^�          � �         ��   �       ^| �   /     ��   �       ^�        �   8 �   /     *��   �       ^�        �   ! �   /     *� 3�   �       ^�        �  "# �   :     *+��   �       ^�        �      $% �   P     *+,-�'�   �      ^�   *     �     ?@    AB    �< () �   P     *+,-�+�   �      ^�   *     �     ?@    QR    �< ,- �   :     *+� ��   �       ^�        �      * ./ �   /     *� C�   �       ^�        �  01 �   /     *� ,�   �       ^�        �  23 �   :     *+��   �      ^�        �      � � 45 �   E     *+,�7�   �      ^�         �     ��    ��  8  �   �     X�1Y�;�/;�A�F Y�A�L�N�Q��S�QK*� 	'� *�WL+� 	'� +�X��   �    � A>� ��  > �   & 	 $  $ !� 0� ;� A� J� P��      Y �   �   � 
     �     
     0     5     C     �     �     �     b     �     �     �     1  � � � 7      G      T      ]      c      i      o      u      {      �      �      �     �   ��  1SMAP
ProjectorServer.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 fake.kt
kotlin/jvm/internal/FakeKt
+ 4 misc.kt
org/jetbrains/projector/common/misc/Do
+ 5 _Arrays.kt
kotlin/collections/ArraysKt___ArraysKt
+ 6 ArraysJVM.kt
kotlin/collections/ArraysKt__ArraysJVMKt
+ 7 ReifiedLogger.kt
org/jetbrains/projector/util/logging/ReifiedLoggerKt
*L
1#1,967:1
1741#2,3:968
1849#2,2:971
1557#2:974
1588#2,3:975
1547#2:978
1618#2,3:979
1591#2:982
1547#2:1000
1618#2,3:1001
1849#2,2:1004
1849#2,2:1006
1849#2,2:1008
1849#2,2:1010
1653#2,8:1012
1849#2,2:1024
1849#2,2:1026
1547#2:1028
1618#2,3:1029
1547#2:1032
1618#2,3:1033
1#3:973
1#3:997
28#4:983
28#4:984
28#4:985
28#4:986
11646#5,9:987
13536#5:996
13537#5:998
11655#5:999
37#6:1020
36#6,3:1021
27#7:1036
*S KotlinDebug
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer
*L
106#1:968,3
225#1:971,2
297#1:974
297#1:975,3
301#1:978
301#1:979,3
297#1:982
655#1:1000
655#1:1001,3
685#1:1004,2
723#1:1006,2
753#1:1008,2
766#1:1010,2
781#1:1012,8
785#1:1024,2
793#1:1026,2
357#1:1028
357#1:1029,3
676#1:1032
676#1:1033,3
654#1:997
459#1:983
469#1:984
464#1:985
353#1:986
654#1:987,9
654#1:996
654#1:998
654#1:999
781#1:1020
781#1:1021,3
804#1:1036
*E
�  C {  | }[ I~II��I~�I��[ s��[ \s �s�s 
s s s�s s @s As �s �s �s s �s �s 0s 1s�s Js Ksss �s�s �s�s�s �s�s�s )s�s �susvs�s �s �sss �s �s�s�shs�sqs�s?s@sAsBs�s�sss�s�s�s�s�s�sss�s �s �s �sIs�s�s�s �s�s�s�s �sss_sisCsQsRsrs�s�s~s�s�s �s��   � m afam a}am a�am a�am a�am a�am a�am aYam a`am agam anam aua! ! j! {! �! �! �m a�am a)aPK          Vqqb�
  �
  6   org/jetbrains/projector/server/ProjectorServer$3.class����   7 y 0org/jetbrains/projector/server/ProjectorServer$3  nLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function2<Ljava/lang/Integer;Ljava/awt/Point;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function2  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this 2Lorg/jetbrains/projector/server/ProjectorServer$3; 	$receiver invoke (ILjava/awt/Point;)V #Lorg/jetbrains/annotations/NotNull; point  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   .org/jetbrains/projector/server/ProjectorServer  access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue; ! "
   # \org/jetbrains/projector/common/protocol/toClient/ServerMarkdownEvent$ServerMarkdownMoveEvent % 6org/jetbrains/projector/awt/image/PGraphicsEnvironment ' 	Companion BLorg/jetbrains/projector/awt/image/PGraphicsEnvironment$Companion; ) *	 ( + @org/jetbrains/projector/awt/image/PGraphicsEnvironment$Companion - getDefaultDevice 5()Lorg/jetbrains/projector/awt/image/PGraphicsDevice; / 0
 . 1 1org/jetbrains/projector/awt/image/PGraphicsDevice 3 getClientShift ()Ljava/awt/Point; 5 6
 4 7 <org/jetbrains/projector/server/core/convert/toClient/ShiftKt 9 shift V(Ljava/awt/Point;Ljava/awt/Point;)Lorg/jetbrains/projector/common/protocol/data/Point; ; <
 : = 8(ILorg/jetbrains/projector/common/protocol/data/Point;)V  ?
 & @ *java/util/concurrent/ConcurrentLinkedQueue B add (Ljava/lang/Object;)Z D E
 C F id I Ljava/awt/Point; 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; java/lang/Number L intValue ()I N O
 M P java/awt/Point R  
  T kotlin/Unit V INSTANCE Lkotlin/Unit; X Y	 W Z p1 Ljava/lang/Object; p2 Lkotlin/Metadata; mv           k    xi   0 d1 :��
��

��

��

����02020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  m ProjectorServer.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  p   3     *+� *� �    q                      p   i     ',� *� � $� &Y,� ,� 2� 8� >� A� GW�    r   
   � & � q        '       ' H I    '  J  s   	      A  K  p   Q     *+� M� Q,� S� U� [�    r       � q                \ ]     ^ ]   t   
        u      n v     w    o x   @  _  `[ I aI bI c dI e fI g h[ s i j[ s ks ls Hs ls s Js PK          ��t  t  K   org/jetbrains/projector/server/ProjectorServer$Companion$WhenMappings.class����   7 3 Eorg/jetbrains/projector/server/ProjectorServer$Companion$WhenMappings  java/lang/Object  <clinit> ()V 7org/jetbrains/projector/common/protocol/data/UserKeymap  values <()[Lorg/jetbrains/projector/common/protocol/data/UserKeymap; 	 

   WINDOWS 9Lorg/jetbrains/projector/common/protocol/data/UserKeymap;  	   ordinal ()I  
   LINUX  	   MAC  	   $EnumSwitchMapping$0 [I  	   Lkotlin/Metadata; mv           k    xi   0 8org/jetbrains/projector/server/ProjectorServer$Companion ( WhenMappings .org/jetbrains/projector/server/ProjectorServer + 	Companion ProjectorServer.kt Code InnerClasses 
SourceFile RuntimeVisibleAnnotations1               /   3     '� ��
K*� � O*� � O*� � O*� �      0      ) * ) , -  1    . 2        [ I !I "I # $I % &I 'PK          �Չ��	  �	  R   org/jetbrains/projector/server/ProjectorServer$processMessage$transferable$1.class����   7 [ Lorg/jetbrains/projector/server/ProjectorServer$processMessage$transferable$1  java/lang/Object  "java/awt/datatransfer/Transferable  <init> A(Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)V $message >Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent; 	 
	   ()V  
   this NLorg/jetbrains/projector/server/ProjectorServer$processMessage$transferable$1; getTransferData 6(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object; #Lorg/jetbrains/annotations/NotNull; $Lorg/jetbrains/annotations/Nullable; isDataFlavorSupported %(Ljava/awt/datatransfer/DataFlavor;)Z  
   0java/awt/datatransfer/UnsupportedFlavorException  %(Ljava/awt/datatransfer/DataFlavor;)V  
   Eorg/jetbrains/projector/common/protocol/toServer/ClientClipboardEvent  getStringContent ()Ljava/lang/String; ! "
   # flavor "Ljava/awt/datatransfer/DataFlavor; getTransferDataFlavors %()[Ljava/awt/datatransfer/DataFlavor; ' (
  ) kotlin/collections/ArraysKt + contains (([Ljava/lang/Object;Ljava/lang/Object;)Z - .
 , /  java/awt/datatransfer/DataFlavor 1 stringFlavor 3 &	 2 4 3 kotlin/jvm/internal/Intrinsics 7 checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V 9 :
 8 ; Lkotlin/Metadata; mv           k xi   0 d1 z��%
��

��
��
��

��



��*��
��20J020HJ00H¢J	0
20H¨ d2 $Ljava/awt/datatransfer/Transferable;   projector-server-common .org/jetbrains/projector/server/ProjectorServer K processMessage z(Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)V M N ProjectorServer.kt Code LineNumberTable LocalVariableTable StackMapTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 
SourceFile RuntimeVisibleAnnotations 1      	 
         Q   >     
*+� *� �    R     � S       
       
 	 
      Q   a     *+� � � Y+� �*� �  � $�    T     R      � � � S               % &  U        V            Q   =     	*� *+� 0�    R      � S       	       	 % &  V         ' (  Q   ?     � 2L+� 5M,6� <,S+�    R      � S            U         W   
        X    L O Y    P Z   O  =  >[ I ?I @I A BI ? CI D E[ s F G[ s s Hs s Is %s &s 's Is (s s Is JPK          �~�  �  6   org/jetbrains/projector/server/ProjectorServer$9.class����   7 W 0org/jetbrains/projector/server/ProjectorServer$9  ]Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/lang/String;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this 2Lorg/jetbrains/projector/server/ProjectorServer$9; 	$receiver invoke (Ljava/lang/String;)V #Lorg/jetbrains/annotations/NotNull; link  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   .org/jetbrains/projector/server/ProjectorServer  access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue; ! "
   # Eorg/jetbrains/projector/common/protocol/toClient/ServerBrowseUriEvent %  
 & ' *java/util/concurrent/ConcurrentLinkedQueue ) add (Ljava/lang/Object;)Z + ,
 * - Ljava/lang/String; &(Ljava/lang/Object;)Ljava/lang/Object; java/lang/String 1  
  3 kotlin/Unit 5 INSTANCE Lkotlin/Unit; 7 8	 6 9 p1 Ljava/lang/Object; Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  K ProjectorServer.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  N   3     *+� *� �    O                      N   R     +� *� � $� &Y+� (� .W�    P   
   �  � O                /  Q       A  0  N   @     *+� 2� 4� :�    P       � O               ; <   R   
        S      L T     U    M V   :  =  >[ I ?I @I A BI C DI E F[ s G H[ s Is Js s Js PK          +�c  c  B   org/jetbrains/projector/server/ProjectorServer$setUpClient$3.class����   7 : <org/jetbrains/projector/server/ProjectorServer$setUpClient$3  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this >Lorg/jetbrains/projector/server/Pr