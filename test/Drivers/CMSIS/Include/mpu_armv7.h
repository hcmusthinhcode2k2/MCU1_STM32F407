tlin
*S Kotlin
*F
+ 1 ChatModificationsListPersistence.kt
circlet/m2/ChatModificationSerializer$getDeserializer$1
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,102:1
1#2:103
*E
 Code LocalVariableTable 	Signature StackMapTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 0        + ,    5 6           	  �   >     *+� *,� �    �                         �    
     �  _     � *W*� .�      �           +� 4*� 8� :M,� @B� HN,� @J� N:,� @P� H:,� @R� HY� .:*� ::	6
� XY� 	� ] � _� W � W:� � a� J-� 8� 3� .� _Y� cY-e� k� q� s � v� |� � a� � _Y� |� � a�� �Y�� ��    �   f 	� ]   a : � g �  � T �  ZA _�    a : � g �  �A _�  _8M a�     a   �   B     ( ! 2 " = # H $ a g d $ | $ � $ � % � & � ' � ( � * � % �   �   �  ( ) � �  2 J � �  |  � �  }  � �  � 9 � �  = ? I �  |  I �  }  I �  � 9 I �  H 4 O �  |  O �  }  O �  � 9 O �  �  � �  a  � � 	 d  � , 
   �       � � 6  �     #   �     $    � �  �   Y     � Y*� -� �:+� 8� �� ��    �   *            � �     � �     �   �    � �     #   �     $    $    #  A � �  �   M     *+� :,� �-� �� ��    �   *            � 6     � 6     � 6   �           m      �    T � �     �     �   �SMAP
ChatModificationsListPersistence.kt
Kotlin
*S Kotlin
*F
+ 1 ChatModificationsListPersistence.kt
circlet/m2/ChatModificationSerializer$getDeserializer$1
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,102:1
1#2:103
*E
 �   d    s  [   [   [   [    s  !s " �  �[ I �I �I � �I � �I � �[ s � �[ s �s �s �s �s �s � �     �  �[ s �PK          "h	    ;   circlet/m2/ChatModificationSerializer$getSerializer$1.class����   7 � 5circlet/m2/ChatModificationSerializer$getSerializer$1  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function3<Ljava/lang/Object;Lruntime/json/JsonBuilderContext;Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function3  <init> *(Lcirclet/m2/ChatModificationSerializer;)V this$0 'Lcirclet/m2/ChatModificationSerializer; 
 	   (I)V  
   this 7Lcirclet/m2/ChatModificationSerializer$getSerializer$1; 	$receiver invoke z(Ljava/lang/Object;Lruntime/json/JsonBuilderContext;Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;)V #Lorg/jetbrains/annotations/NotNull; value  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   builder  registry ! (circlet/m2/attachments/LoadingAttachment # 	getStatus ()Lruntime/reactive/Property; % &
 $ ' runtime/reactive/Property ) getValue ()Ljava/lang/Object; + , * - -circlet/m2/attachments/AttachmentUploadStatus / 0circlet/m2/attachments/AttachmentUploadCompleted 1 	className 3 getAttachment #()Lcirclet/client/api/AttachmentIn; 5 6
 2 7 java/lang/Object 9 getClass ()Ljava/lang/Class; ; <
 : = kotlin/jvm/internal/Reflection ? getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass; A B
 @ C kotlin/reflect/KClass E getSimpleName ()Ljava/lang/String; G H F I checkNotNull (Ljava/lang/Object;)V K L
  M runtime/json/JsonBuilderContext O put '(Ljava/lang/String;Ljava/lang/String;)V Q R
 P S %circlet/m2/ChatModificationSerializer U 	getParent F()Lcirclet/platform/api/serialization/ExtendableSerializationRegistry; W X
 V Y Bcirclet/platform/api/serialization/ExtendableSerializationRegistry [ getSerializer 4(Ljava/lang/String;)Lkotlin/jvm/functions/Function3; ] ^
 \ _ J(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;  a  b *access$getLOADING_ATTACHMENT_CLASS_NAME$cp d H
 V e #access$getLoadingAttachmentsCache$p 8(Lcirclet/m2/ChatModificationSerializer;)Ljava/util/Map; g h
 V i libraries/io/random/Random k INSTANCE Llibraries/io/random/Random; m n	 l o 
nextString (I)Ljava/lang/String; q r
 l s uniqueId u java/util/Map w 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; Q y x z name | getName ~ H 0  size � getSizeBytes ()J � � 0 � (Ljava/lang/String;J)V Q �
 P � type � getType � H 0 � Ljava/lang/String; 7$i$a$-with-ChatModificationSerializer$getSerializer$1$1 I $this$invoke_u24lambda_u240 !Lruntime/json/JsonBuilderContext; status /Lcirclet/m2/attachments/AttachmentUploadStatus; Ljava/lang/Object; DLcirclet/platform/api/serialization/ExtendableSerializationRegistry;  
  � kotlin/Unit � Lkotlin/Unit; m �	 � � p1 p2 p3 Lkotlin/Metadata; mv           k    xi   0 d1 J��
��

��
��
��

��

����0202020H
¢ d2 <anonymous>   #ChatModificationsListPersistence.kt Code LocalVariableTable StackMapTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  �   3     *+� *� �    �                      �  �  	   �+� , � -"� +� $� (� . � 0:*� :,:6� 2� ]4� 2� 8� >� D� J Y� N� T� Z� 2� 8� >� D� J Y� N� `:� {� 2� 8-� c W� e4� f� T� j� $� p� t:v� T� j+� { W� -}� � � T�� � � ��� � � T  �    �   ! � �   : P \ 0 V P  2. �   V   5 # 6 / 7 7 8 U : U 9 v : { 9 } : � < � = � > � ? � @ � B � C � D � E � H � 6 � I �   R  �  u �  / � � �  , � � �  # � � �    �       �  �    �  �    � ! �  �               A  a  �   Y     *+,� P-� \� �� ��    �       4 �   *            � �     � �     � �   �   
        �    V _ �     �    � �   F  �  �[ I �I �I � �I � �I � �[ s � �[ 	s �s �s s �s s �s !s �s PK          @K���  �  +   circlet/m2/ChatModificationSerializer.class����   7 � %circlet/m2/ChatModificationSerializer  Bcirclet/platform/api/serialization/ExtendableSerializationRegistry  <init> V(Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;Ljava/util/Map;)V �(Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;Ljava/util/Map<Ljava/lang/String;Lcirclet/m2/attachments/LoadingAttachment;>;)V #Lorg/jetbrains/annotations/NotNull; $Lorg/jetbrains/annotations/Nullable; parent 
 kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   ()V  
   DLcirclet/platform/api/serialization/ExtendableSerializationRegistry; 
 	   loadingAttachmentsCache Ljava/util/Map;  	   this 'Lcirclet/m2/ChatModificationSerializer; �(Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;Ljava/util/Map;ILkotlin/jvm/internal/DefaultConstructorMarker;)V  
   	getParent F()Lcirclet/platform/api/serialization/ExtendableSerializationRegistry; getDeserializer 4(Ljava/lang/String;)Lkotlin/jvm/functions/Function3; �<T:Ljava/lang/Object;>(Ljava/lang/String;)Lkotlin/jvm/functions/Function3<Lruntime/json/JsonElement;Lcirclet/platform/api/CallContext;Lkotlin/coroutines/Continuation<-TT;>;Ljava/lang/Object;>; name & LOADING_ATTACHMENT_CLASS_NAME Ljava/lang/String; ( )	  * areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z , -
  . 7circlet/m2/ChatModificationSerializer$getDeserializer$1 0 J(Lcirclet/m2/ChatModificationSerializer;Lkotlin/coroutines/Continuation;)V  2
 1 3 kotlin/jvm/functions/Function3 5 # $
  7 getSerializer �(Ljava/lang/String;)Lkotlin/jvm/functions/Function3<Ljava/lang/Object;Lruntime/json/JsonBuilderContext;Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;Lkotlin/Unit;>; 5circlet/m2/ChatModificationSerializer$getSerializer$1 ; *(Lcirclet/m2/ChatModificationSerializer;)V  =
 < > 9 $
  @ #access$getLoadingAttachmentsCache$p 8(Lcirclet/m2/ChatModificationSerializer;)Ljava/util/Map; $this *access$getLOADING_ATTACHMENT_CLASS_NAME$cp ()Ljava/lang/String; <clinit> /circlet/m2/ChatModificationSerializer$Companion H 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V  J
 I K 	Companion 1Lcirclet/m2/ChatModificationSerializer$Companion; M N	  O (circlet/m2/attachments/LoadingAttachment Q kotlin/jvm/internal/Reflection S getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass; U V
 T W kotlin/reflect/KClass Y getSimpleName [ F Z \ checkNotNull (Ljava/lang/Object;)V ^ _
  ` MLjava/util/Map<Ljava/lang/String;Lcirclet/m2/attachments/LoadingAttachment;>; Lkotlin/Metadata; mv           k xi   0 d11��B



%







��
��



�� 20:B%0000¢JB
&00
H000"��20Hø��¢J*0000020HR000X¢
��R0¢
��	
¨ d2   *Lcirclet/m2/attachments/LoadingAttachment; Lkotlin/Function3; Lruntime/json/JsonElement; "Lcirclet/platform/api/CallContext;  Lkotlin/coroutines/Continuation; T !Lruntime/json/JsonBuilderContext; 	app-state #ChatModificationsListPersistence.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile RuntimeVisibleAnnotations 1       M N  x         
   x            y    b x     	    ( )  x             z   _     +� *� *+� *,� �    {       
      |                
         y     }         	      z   <     ~� M*+,�  �    ~     {             e  ! "  z   /     *� �    {        |            x         # $  z   u     (+'� +� +� /� � 1Y*� 4� 6� *� +� 8�    ~    G 6 {           . '  |       (       ( & )  y    % x     	   }         9 $  z   t     '+'� +� +� /� � <Y*� ?� 6� *� +� A�    ~    G 6 {      3  4  K & 3 |       '       ' & )  y    : x     	   }        B C  z   /     *� �    {        |        D    E F  z         � +�    {         G   z   5      � IY� L� PR� X� ] Y� a� +�    {      P       I  M  1      <      �    w �   s  c  d[ I eI fI g hI e iI j k[ s l m[ s s s 
s s ns ns os s !s "s #s ps qs rs ss ts ns &s $s 9s us ns Ms vPK          �^�!�  �  3   circlet/m2/ChatModificationsListPersistenceKt.class����   7 � -circlet/m2/ChatModificationsListPersistenceKt  java/lang/Object  	serialize �(Lcirclet/client/api/ChatModification;Lcirclet/platform/api/serialization/ExtendableSerializationRegistry;)Lruntime/json/JsonElement; 3com/fasterxml/jackson/databind/node/JsonNodeFactory  <init> (Z)V 	 

   
objectNode 2()Lcom/fasterxml/jackson/databind/node/ObjectNode;  
   runtime/json/JsonBuilderContext  rootNode  kotlin/jvm/internal/Intrinsics  checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V  
   runtime/json/JsonDslKt  getJsonTreeParser /()Lcom/fasterxml/jackson/databind/ObjectMapper;  
   �(Lcom/fasterxml/jackson/databind/node/ObjectNode;Lcom/fasterxml/jackson/databind/node/JsonNodeFactory;Lcom/fasterxml/jackson/databind/ObjectMapper;)V 	 !
  " #circlet/client/api/ChatModification $ kotlin/jvm/internal/Reflection & getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass; ( )
 ' * Bcirclet/pla