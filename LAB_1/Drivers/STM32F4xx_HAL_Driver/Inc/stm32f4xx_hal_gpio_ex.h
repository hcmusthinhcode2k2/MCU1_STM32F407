3  4[ I 5I 6I 7 8I 9 :I ; <[ s = >[ s ?s @s s "s PK          h��Y  Y  U   org/jetbrains/projector/server/platform/CompatibilityKt$isColorSchemeRequired$2.class����   7 B Oorg/jetbrains/projector/server/platform/CompatibilityKt$isColorSchemeRequired$2  QLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/Boolean;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this QLorg/jetbrains/projector/server/platform/CompatibilityKt$isColorSchemeRequired$2; invoke ()Ljava/lang/Boolean; #Lorg/jetbrains/annotations/NotNull; 202.6397.94  7org/jetbrains/projector/server/platform/CompatibilityKt  buildAtLeast (Ljava/lang/String;)Z  
   java/lang/Boolean  valueOf (Z)Ljava/lang/Boolean;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $ INSTANCE & 	  ' Lkotlin/Metadata; mv           k    xi   0 d1 ��

��

��0H
¢ d2 <anonymous>   # 	 Compatibility.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       &        	  9   $     *� �    :                9   3     	� � �    ;       * :       	     <       A     9   /     *� "�    ;       * :             # 	  9         � Y� %� (�      =   
        >     7 ?     @    8 A   7  )  *[ I +I ,I - .I / 0I 1 2[ s 3 4[ s 5s 6s s PK          J��]k  k  =   org/jetbrains/projector/server/platform/CompatibilityKt.class����   7 � 7org/jetbrains/projector/server/platform/CompatibilityKt  java/lang/Object  buildAtLeast (Ljava/lang/String;)Z #Lorg/jetbrains/annotations/NotNull; version  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   %com/intellij/openapi/util/BuildNumber  
fromString ;(Ljava/lang/String;)Lcom/intellij/openapi/util/BuildNumber;  
   "java/lang/IllegalArgumentException  Invalid version string   $java/lang/invoke/StringConcatFactory  makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;  
    &(Ljava/lang/String;)Ljava/lang/String;  !   " <init> (Ljava/lang/String;)V $ %
  & 0com/intellij/openapi/application/ApplicationInfo ( getInstance 4()Lcom/intellij/openapi/application/ApplicationInfo; * +
 ) , getBuild )()Lcom/intellij/openapi/util/BuildNumber; . /
 ) 0 getInstance().build 2 checkNotNullExpressionValue 4 
  5 	compareTo *(Lcom/intellij/openapi/util/BuildNumber;)I 7 8
  9 versionToCheck 'Lcom/intellij/openapi/util/BuildNumber; currentVersion Ljava/lang/String; isColorSchemeRequired ()Z isColorSchemeRequired$delegate Lkotlin/Lazy; A B	  C kotlin/Lazy E getValue ()Ljava/lang/Object; G H F I java/lang/Boolean K booleanValue M @
 L N getTextAttributesCompat �(Lcom/intellij/openapi/editor/markup/RangeHighlighter;Lcom/intellij/openapi/editor/colors/EditorColorsScheme;)Lcom/intellij/openapi/editor/markup/TextAttributes; $Lorg/jetbrains/annotations/Nullable; <this> S colorScheme U ? @
  W 3com/intellij/openapi/editor/markup/RangeHighlighter Y getTextAttributes l(Lcom/intellij/openapi/editor/colors/EditorColorsScheme;)Lcom/intellij/openapi/editor/markup/TextAttributes; [ \ Z ] 5()Lcom/intellij/openapi/editor/markup/TextAttributes; [ _ Z ` $this$getTextAttributesCompat 5Lcom/intellij/openapi/editor/markup/RangeHighlighter; 7Lcom/intellij/openapi/editor/colors/EditorColorsScheme; 1com/intellij/openapi/editor/markup/TextAttributes e <clinit> ()V Oorg/jetbrains/projector/server/platform/CompatibilityKt$isColorSchemeRequired$2 i INSTANCE QLorg/jetbrains/projector/server/platform/CompatibilityKt$isColorSchemeRequired$2; k l	 j m kotlin/jvm/functions/Function0 o kotlin/LazyKt q lazy /(Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy; s t
 r u 9Lorg/jetbrains/projector/util/loading/UseProjectorLoader; attachPackage    Lkotlin/Metadata; mv        k    xi   0 d1 s�� 
��



��


��

��0200	*0
20"��08BX¢
��¨ d2   3Lcom/intellij/openapi/editor/markup/TextAttributes; projector-server-common Compatibility.kt RuntimeInvisibleAnnotations Code StackMapTable LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 1       A B  �             �   �     ;*	� *� Y� W� Y*� #  � '�L� -� 1N-3� 6-M,+� :� � �    �    ] �    @ �      $  % - ' �        ; <  -  = <    ;  >   �         ? @  �   -     � DK*� J � L� O�    �   
    *  *  P Q  �   d     #*T� +V� � X� *+� ^ � 	*� a �    �    E f �      . �       # b c     # U d  �     R   �             g h  �   %      � n� p� v� D�    �       *  �   
  j      �    � �   ^  w  xZ y z  {[ I yI |I } ~I  �I � �[ s � �[ s ?s �s @s As Bs s s �s Ps �s cs Us ds � �        PK          ��S�s  s  7   org/jetbrains/projector/server/platform/ContextKt.class����   7 P 1org/jetbrains/projector/server/platform/ContextKt  java/lang/Object  
readAction 4(Lkotlin/jvm/functions/Function0;)Ljava/lang/Object; A<T:Ljava/lang/Object;>(Lkotlin/jvm/functions/Function0<+TT;>;)TT; #Lorg/jetbrains/annotations/NotNull; 
computable 	 kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   3com/intellij/openapi/application/ApplicationManager  getApplication 0()Lcom/intellij/openapi/application/Application;  
   ()Ljava/lang/Object;  readAction$lambda-0  
    "java/lang/invoke/LambdaMetafactory  metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;   
  ! " compute H(Lkotlin/jvm/functions/Function0;)Lcom/intellij/openapi/util/Computable; $ %   & ,com/intellij/openapi/application/Application ( runReadAction :(Lcom/intellij/openapi/util/Computable;)Ljava/lang/Object; * + ) ,  Lkotlin/jvm/functions/Function0; $computable / kotlin/jvm/functions/Function0 1 invoke 3  2 4 9Lorg/jetbrains/projector/util/loading/UseProjectorLoader; attachPackage    Lkotlin/Metadata; mv        k    xi   0 d1 7��


��H"��2H0¢¨ d2 T Lkotlin/Function0; projector-server-common 
Context.kt Code LineNumberTable LocalVariableTable 	Signature $RuntimeInvisibleParameterAnnotations 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 1            H   ?     *
� � *� '  � - �    I        J        	 .   K     L            H   7     *0� *� 5 �    I        J        / .    M    G N   F  6  7Z 8 9  :[ I 8I ;I < =I > ?I @ A[ s B C[ s s Ds 	s Es s F O     #    PK          Q?K�  �  I   org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1.class����   7 � Corg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1  KLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this ELorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1; 	$receiver invoke ()V java/lang/InterruptedException  java/lang/Throwable  .org/jetbrains/projector/server/ProjectorServer  access$getLogger$cp /()Lorg/jetbrains/projector/util/logging/Logger;  
   Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$1   INSTANCE GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$1; " #	 ! $ 8org/jetbrains/projector/util/logging/Logger$DefaultImpls & debug$default x(Lorg/jetbrains/projector/util/logging/Logger;Ljava/lang/Throwable;Lkotlin/jvm/functions/Function0;ILjava/lang/Object;)V ( )
 ' * java/lang/Thread , currentThread ()Ljava/lang/Thread; . /
 - 0 isInterrupted ()Z 2 3
 - 4 access$createDataToSend B(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/List; 6 7
  8 access$sendPictures C(Lorg/jetbrains/projector/server/ProjectorServer;Ljava/util/List;)V : ;
  < Jorg/jetbrains/projector/server/core/util/DistinctUpdatedOnscreenSurfacesKt > distinctUpdatedOnscreenSurfaces "(Ljava/util/List;)Ljava/util/List; @ A
 ? B java/lang/Iterable D java/util/ArrayList F  kotlin/collections/CollectionsKt H collectionSizeOrDefault (Ljava/lang/Iterable;I)I J K
 I L
 G  java/util/Collection O iterator ()Ljava/util/Iterator; Q R E S java/util/Iterator U hasNext W 3 V X next ()Ljava/lang/Object; Z [ V \ Xorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target$Onscreen ^ 6org/jetbrains/projector/common/protocol/toClient/Flush ` 8Lorg/jetbrains/projector/common/protocol/toClient/Flush; " b	 a c listOf $(Ljava/lang/Object;)Ljava/util/List; e f
 I g kotlin/TuplesKt i to 3(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair; k l
 j m add (Ljava/lang/Object;)Z o p P q java/util/List s isEmpty u 3 P v  invoke$lambda-3$lambda-2 (Ljava/util/List;)V y z
  { | "java/lang/invoke/LambdaMetafactory ~ metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; � �
  � � run &(Ljava/util/List;)Ljava/lang/Runnable; � �   � javax/swing/SwingUtilities � invokeLater (Ljava/lang/Runnable;)V � �
 � �       
 sleep (J)V � �
 - � 	interrupt � 
 - � Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$5 � GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$5; " �	 � � +org/jetbrains/projector/util/logging/Logger � error 8(Ljava/lang/Throwable;Lkotlin/jvm/functions/Function0;)V � � � � Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$6 � GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$6; " �	 � � 0$i$a$-map-ProjectorServer$createUpdateThread$1$2 I it ZLorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target$Onscreen; 
item$iv$iv Ljava/lang/Object; 
$i$f$mapTo $this$mapTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv 3$i$a$-takeIf-ProjectorServer$createUpdateThread$1$3 Ljava/util/List; 0$i$a$-let-ProjectorServer$createUpdateThread$1$4 
dataToSend ex  Ljava/lang/InterruptedException; t Ljava/lang/Throwable; $it � kotlin/jvm/internal/Intrinsics � checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V � �
 � � >org/jetbrains/projector/server/service/ProjectorDrawEventQueue � 	Companion JLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion; � �	 � � Horg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion � getCommands .()Ljava/util/concurrent/ConcurrentLinkedQueue; � �
 � � *java/util/concurrent/ConcurrentLinkedQueue � addAll (Ljava/util/Collection;)Z � �
 � �  
  � kotlin/Unit � Lkotlin/Unit; " �	 � � Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   createUpdateThread � / ProjectorServer.kt Code LocalVariableTable StackMapTable LineNumberTable InnerClasses EnclosingMethod 	Signature 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations BootstrapMethods 0      
        	  �   3     *+� *� �    �                      �  �    � � %� � +� 1� 5� � *� � 9L*� +� =+� C� EN 6-:� GY-
� M� N� P:6� T :� Y � 1� ] :		� _:
:6
� d� h� n_� r W���� t N-:6� P� w � �  � -� M,� � ,:6� �  � �   �� ���9L� 1� ���/L� +� �� � � ��� � �� � +�   � �   � �   �   t � F 	  t  E E P V  7�  	  t  t t P V  @@ t�  	  t t t t P V  �     I  �   � #   �  �  �  � ! � ) � * � 1 � 5� M� i� w � �� �� � � �� � � � � � � � � � � � � � � � � � � � � � � � � � � � � �  � � � �   �  w  � �  t  � � 
 i " � � 	 M C � �  J F � �  J F � �  5 _ � �  2 b � �  �  � �  �  � �  �  � �  �  � �  ! � � �  �  � �  �  � �         y z  �   C     *�� Ĳ ʶ �*� P� �W�    �   
   �  � �        � �  A  [  �   2     *� ز ݰ    �       � �             �   "  !      �      �            �     � �     �    � �  �SMAP
ProjectorServer.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,967:1
1547#2:968
1618#2,3:969
1#3:972
*S KotlinDebug
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1
*L
241#1:968
241#1:969,3
*E
 �   4  �  �[ I �I �I � �I � �I � �[ s � �[ s �s �s  �     �  x } xPK          '� R	  R	  6   org/jetbrains/projector/server/ProjectorServer$2.class����   7 g 0org/jetbrains/projector/server/ProjectorServer$2  rLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function2<Ljava/lang/Integer;Ljava/awt/Dimension;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function2  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this 2Lorg/jetbrains/projector/server/ProjectorServer$2; 	$receiver invoke (ILjava/awt/Dimension;)V #Lorg/jetbrains/annotations/NotNull; size  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   .org/jetbrains/projector/server/ProjectorServer  access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue; ! "
   # ^org/jetbrains/projector/common/protocol/toClient/ServerMarkdownEvent$ServerMarkdownResizeEvent % >org/jetbrains/projector/server/core/convert/toClient/ConvertKt ' toCommonIntSize R(Ljava/awt/Dimension;)Lorg/jetbrains/projector/common/protocol/data/CommonIntSize; ) *
 ( + @(ILorg/jetbrains/projector/common/protocol/data/CommonIntSize;)V  -
 & . *java/util/concurrent/ConcurrentLinkedQueue 0 add (Ljava/lang/Object;)Z 2 3
 1 4 id I Ljava/awt/Dimension; 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; java/lang/Number : intValue ()I < =
 ; > java/awt/Dimension @  
  B kotlin/Unit D INSTANCE Lkotlin/Unit; F G	 E H p1 Ljava/lang/Object; p2 Lkotlin/Metadata; mv           k    xi   0 d1 :��
��

��

��

����02020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  [ ProjectorServer.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  ^   3     *+� *� �    _                      ^   `     ,� *� � $� &Y,� ,� /� 5W�    `   
   �  � _                6 7      8  a   	      A  9  ^   Q     *+� ;� ?,� A� C� I�    `        _                J K     L K   b   
        c      \ d     e    ] f   @  M  N[ I OI PI Q RI S TI U V[ s W X[ s Ys Zs 6s Zs s 8s PK          �� �a  a  E   org/jetbrains/projector/server/ProjectorServer$processMessage$9.class����   7 : ?org/jetbrains/projector/server/ProjectorServer$processMessage$9  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this ALorg/jetbrains/projector/server/ProjectorServer$processMessage$9; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; /Client keymap was ignored (property specified)!  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer + processMessage z(Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)V - . ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  1   $     *� �    2                1   -     �    3      � 2            4       A    1   /     *� �    3      � 2              	  1         � Y� � �      5   
        6    , / 7     8    0 9   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          ��3�3  3  T   org/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$3.class����   7 5 Norg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$3  java/lang/Thread  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V $server 0Lorg/jetbrains/projector/server/ProjectorServer;  	  	 ()V  
   this PLorg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$3; run .org/jetbrains/projector/server/ProjectorServer  stop$default G(Lorg/jetbrains/projector/server/ProjectorServer;IILjava/lang/Object;)V  
   Lkotlin/Metadata; mv           k xi   0 d1 /��
��

��

��*��
��20J0H¨ d2 Ljava/lang/Thread;   projector-server-common 9org/jetbrains/projector/server/ProjectorStarter$Companion % runProjectorServer P(Lorg/jetbrains/projector/server/PAwtProvider;Lkotlin/jvm/functions/Function1;)Z ' ( /org/jetbrains/projector/server/ProjectorStarter * 	Companion ProjectorStarter.kt Code LineNumberTable LocalVariableTable InnerClasses EnclosingMethod 
SourceFile RuntimeVisibleAnnotations 1                .   >     
*+� 
*� �    /      Z 0       
       
        .   9     *� 
� �    /   
    ] 
 ^ 0             1           & + ,  2    & ) 3    - 4   :    [ I I I  I  I  [ s   ![ s s "s s #s $PK          �Jag`  `  B   org/jetbrains/projector/server/ProjectorServer$setUpClient$4.class����   7 : <org/jetbrains/projector/server/ProjectorServer$setUpClient$4  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this >Lorg/jetbrains/projector/server/ProjectorServer$setUpClient$4; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; #User has allowed this connection...  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer + setUpClient �(Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings;Ljava/lang/String;)V - . ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  1   $     *� �    2                1   -     �    3      { 2            4       A    1   /     *� �    3      { 2              	  1         � Y� � �      5   
        6    , / 7     8    0 9   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          �=�Y�  �  A   org/jetbrains/projector/server/ProjectorServer$ideaColors$1.class����   7 Q ;org/jetbrains/projector/server/ProjectorServer$ideaColors$1  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this =Lorg/jetbrains/projector/server/ProjectorServer$ideaColors$1; 	$receiver invoke [(Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage;)V #Lorg/jetbrains/annotations/NotNull; colors  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   Horg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent   
   ! .org/jetbrains/projector/server/ProjectorServer # access$setWindowColorsEvent$p }(Lorg/jetbrains/projector/server/ProjectorServer;Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent;)V % &
 $ ' XLorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage; &(Ljava/lang/Object;)Ljava/lang/Object; Vorg/jetbrains/projector/common/protocol/toClient/ServerWindowColorsEvent$ColorsStorage +  
  - kotlin/Unit / INSTANCE Lkotlin/Unit; 1 2	 0 3 p1 Ljava/lang/Object; Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  E ProjectorServer.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  H   3     *+� *� �    I                      H   N     +� *� �  Y+� "� (�    J   
   x  y I                )  K       A  *  H   @     *+� ,� .� 4�    J       w I               5 6   L   
        M    $ F N     O    G P   :  7  8[ I 9I :I ; <I = >I ? @[ s A B[ s Cs Ds s )s PK          eEH  H  1   org/jetbrains/projector/server/PAwtProvider.class����   7 ! +org/jetbrains/projector/server/PAwtProvider  java/lang/Object  createToolkit ,()Lorg/jetbrains/projector/awt/PToolkitBase; #Lorg/jetbrains/annotations/NotNull; getToolkitClass ()Ljava/lang/Class; @()Ljava/lang/Class<+Lorg/jetbrains/projector/awt/PToolkitBase;>; Lkotlin/Metadata; mv           k xi   0 d1 P��

��
��


f��20J0H&R
00X¦¢¨ d2 -Lorg/jetbrains/projector/server/PAwtProvider;   toolkitClass Ljava/lang/Class; *Lorg/jetbrains/projector/awt/PToolkitBase; projector-server-common PAwtProvider.kt RuntimeInvisibleAnnotations 	Signature 
SourceFile RuntimeVisibleAnnotations                    	      
                   F    [ I I I  I  I  [ s  [ 	s s s s s s s 	s s PK          �>��  �  K   org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$1.class����   7 8 Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$1  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$1; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; Daemon thread starts  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   Corg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1 +  	 ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  /   $     *� �    0                /   -     �    1       � 0            2       A    /   /     *� �    1       � 0              	  /         � Y� � �      3           ,      4    , - 5     6    . 7   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          �@��K  �K  >   org/jetbrains/projector/server/ProjectorServer$Companion.class����   7� 8org/jetbrains/projector/server/ProjectorServer$Companion  java/lang/Object  <init> ()V  
   this :Lorg/jetbrains/projector/server/ProjectorServer$Companion; 	isEnabled ()Z %org.jetbrains.projector.server.enable  java/lang/System  getProperty &(Ljava/lang/String;)Ljava/lang/String;  
   java/lang/Boolean  parseBoolean (Ljava/lang/String;)Z  
   java/lang/String  isEnabled$annotations Lkotlin/jvm/JvmStatic; toServerClipboardEvent m(Ljava/awt/datatransfer/Transferable;)Lorg/jetbrains/projector/common/protocol/toClient/ServerClipboardEvent;  java/awt/datatransfer/DataFlavor ! stringFlavor "Ljava/awt/datatransfer/DataFlavor; # $	 " % "java/awt/datatransfer/Transferable ' isDataFlavorSupported %(Ljava/awt/datatransfer/DataFlavor;)Z ) * ( + Eorg/jetbrains/projector/common/protocol/toClient/ServerClipboardEvent - getTransferData 6(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object; / 0 ( 1 java/lang/NullPointerException 3 2null cannot be cast to non-null type kotlin.String 5 (Ljava/lang/String;)V  7
 4 8
 . 8 #kotlin/NoWhenBranchMatchedException ;
 <  $this$toServerClipboardEvent $Ljava/awt/datatransfer/Transferable; "updateToolkitKeyboardModifiersMode <(Lorg/jetbrains/projector/common/protocol/data/UserKeymap;)V (org/jetbrains/projector/awt/PToolkitBase B 	Companion 4Lorg/jetbrains/projector/awt/PToolkitBase$Companion; D E	 C F Eorg/jetbrains/projector/server/ProjectorServer$Companion$WhenMappings H $EnumSwitchMapping$0 [I J K	 I L 7org/jetbrains/projector/common/protocol/data/UserKeymap N ordinal ()I P Q
 O R 2org/jetbrains/projector/awt/PToolkitBase$Companion T setMacKeyboardModifiersMode (Z)V V W
 U X keymap 9Lorg/jetbrains/projector/common/protocol/data/UserKeymap; &getMainWindows$projector_server_common ()Ljava/util/List; 9()Ljava/util/List<Lorg/jetbrains/projector/awt/PWindow;>; #Lorg/jetbrains/annotations/NotNull; #org/jetbrains/projector/awt/PWindow ` /Lorg/jetbrains/projector/awt/PWindow$Companion; D b	 a c -org/jetbrains/projector/awt/PWindow$Companion e 
getWindows g ]
 f h java/lang/Iterable j java/util/ArrayList l
 m  java/util/Collection o iterator ()Ljava/util/Iterator; q r k s java/util/Iterator u hasNext w  v x next ()Ljava/lang/Object; z { v | -org/jetbrains/projector/server/util/ConvertKt ~ getWindowType d(Lorg/jetbrains/projector/awt/PWindow;)Lorg/jetbrains/projector/common/protocol/toClient/WindowType; � �
  � ;org/jetbrains/projector/common/protocol/toClient/WindowType � IDEA_WINDOW =Lorg/jetbrains/projector/common/protocol/toClient/WindowType; � �	 � � add (Ljava/lang/Object;)Z � � p � java/util/List � isEmpty �  p �  kotlin/collections/CollectionsKt � firstOrNull $(Ljava/util/List;)Ljava/lang/Object; � �
 � � listOf $(Ljava/lang/Object;)Ljava/util/List; � �
 � � 	emptyList � ]
 � � B$i$a$-filter-ProjectorServer$Companion$getMainWindows$ideWindows$1 I it %Lorg/jetbrains/projector/awt/PWindow; element$iv$iv Ljava/lang/Object; $i$f$filterTo $this$filterTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$filter $this$filter$iv 4$i$a$-let-ProjectorServer$Companion$getMainWindows$1 p0 
ideWindows Ljava/util/List; calculateMainWindowShift 6org/jetbrains/projector/awt/image/PGraphicsEnvironment � BLorg/jetbrains/projector/awt/image/PGraphicsEnvironment$Companion; D �	 � � @org/jetbrains/projector/awt/image/PGraphicsEnvironment$Companion � getClientDoesWindowManagement � 
 � � getDefaultDevice 5()Lorg/jetbrains/projector/awt/image/PGraphicsDevice; � �
 � � 1org/jetbrains/projector/awt/image/PGraphicsDevice � getClientShift ()Ljava/awt/Point; � �
 � � java/awt/Point � setLocation (II)V � �
 � � \ ]
  � 	getTarget ()Ljava/awt/Component; � �
 a � java/awt/Component � getTreeLock � {
 � � window.treeLock � kotlin/jvm/internal/Intrinsics � checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V � �
 � � java/awt/Frame � 	getInsets ()Ljava/awt/Insets; � �
 � � java/awt/Insets � left � �	 � � top � �	 � � 	getBounds ()Ljava/awt/Rectangle; � �
 � � java/awt/Rectangle � x � �	 � � y � �	 � � (DD)V � �
 � � kotlin/Unit � INSTANCE Lkotlin/Unit; � �	 �  B$i$a$-let-ProjectorServer$Companion$calculateMainWindowShift$1$1$1 Ljava/awt/Insets; B$i$a$-let-ProjectorServer$Companion$calculateMainWindowShift$1$1$2 Ljava/awt/Rectangle; I$i$a$-synchronized-ProjectorServer$Companion$calculateMainWindowShift$1$1 D >$i$a$-let-ProjectorServer$Companion$calculateMainWindowShift$1 window Ljava/awt/Component; java/lang/Throwable resize java/awt/GraphicsEnvironment getLocalGraphicsEnvironment  ()Ljava/awt/GraphicsEnvironment;
 setDefaultDeviceSize �
 � � 
  collectionSizeOrDefault (Ljava/lang/Iterable;I)I
 � (I)V 
 m  resize$lambda-9$lambda-8 (Ljava/util/List;II)V!"
 #$ "java/lang/invoke/LambdaMetafactory& metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;()
'*+ run ((Ljava/util/List;II)Ljava/lang/Runnable;-.  / javax/swing/SwingUtilities1 invokeLater (Ljava/lang/Runnable;)V34
25 ,$i$a$-map-ProjectorServer$Companion$resize$1 
item$iv$iv 
$i$f$mapTo $this$mapTo$iv$iv $i$f$map $this$map$iv ,$i$a$-let-ProjectorServer$Companion$resize$2 mainWindows ge Ljava/awt/GraphicsEnvironment; width height startServer {(ZLkotlin/jvm/functions/Function1;Ljava/lang/Runnable;Ljava/lang/Runnable;)Lorg/jetbrains/projector/server/ProjectorServer; �(ZLkotlin/jvm/functions/Function1<-Ljava/lang/String;+Lorg/jetbrains/projector/util/logging/Logger;>;Ljava/lang/Runnable;Ljava/lang/Runnable;)Lorg/jetbrains/projector/server/ProjectorServer; 
logFactoryF checkNotNullParameterH �
 �I generalInitializerK fullInitializerM -org/jetbrains/projector/util/logging/LoggerKtO setLoggerFactory #(Lkotlin/jvm/functions/Function1;)VQR
PS >org/jetbrains/projector/server/service/ProjectorAwtInitializerU @Lorg/jetbrains/projector/server/service/ProjectorAwtInitializer; �W	VX initProjectorAwtZ 
V[ java/lang/Runnable]- ^_ 3org/jetbrains/projector/util/loading/state/IdeStatea ?Lorg/jetbrains/projector/util/loading/state/IdeState$Companion; Dc	bd =org/jetbrains/projector/util/loading/state/IdeState$Companionf isIdeAttachedh 
gi Aorg/jetbrains/projector/server/core/ij/IjInjectorAgentInitializerk CLorg/jetbrains/projector/server/core/ij/IjInjectorAgentInitializer; �m	ln init (ZZ)Vpq
lr .org/jetbrains/projector/server/ProjectorServert access$getLogger$cp /()Lorg/jetbrains/projector/util/logging/Logger;vw
ux Forg/jetbrains/projector/server/ProjectorServer$Companion$startServer$1z HLorg/jetbrains/projector/server/ProjectorServer$Companion$startServer$1; �|	{} kotlin/jvm/functions/Function0 8org/jetbrains/projector/util/logging/Logger$DefaultImpls� info$default x(Lorg/jetbrains/projector/util/logging/Logger;Ljava/lang/Throwable;Lkotlin/jvm/functions/Function0;ILjava/lang/Object;)V��
�� initDefaults� 
V� :org/jetbrains/projector/server/core/ij/SettingsInitializer� <Lorg/jetbrains/projector/server/core/ij/SettingsInitializer; ��	�� -org/jetbrains/projector/awt/image/PGraphics2D� 9Lorg/jetbrains/projector/awt/image/PGraphics2D$Companion; D�	�� 7org/jetbrains/projector/awt/image/PGraphics2D$Companion� getDefaultAa� {
�� addTaskToInitializeIdea (Ljava/lang/Object;)V��
�� 3ORG_JETBRAINS_PROJECTOR_SERVER_DISABLE_IDEA_UPDATES� true� -org/jetbrains/projector/util/loading/OptionKt� 	getOption 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;��
�� 3org/jetbrains/projector/server/idea/UpdatesConfigKt� forbidUpdates� 
��  getENABLE_BIG_COLLECTIONS_CHECKS� 
 � Forg/jetbrains/projector/server/ProjectorServer$Companion$startServer$2� HLorg/jetbrains/projector/server/ProjectorServer$Companion$startServer$2; ��	�� 7org/jetbrains/projector/server/core/util/LaterInvokator� CLorg/jetbrains/projector/server/core/util/LaterInvokator$Companion; D�	�� Aorg/jetbrains/projector/server/core/util/LaterInvokator$Companion� getDefaultLaterInvokator ;()Lorg/jetbrains/projector/server/core/util/LaterInvokator;��
�� k(Lorg/jetbrains/projector/server/core/util/LaterInvokator;ZLkotlin/jvm/internal/DefaultConstructorMarker;)V �
u� D 
	u� access$setLastStartedServer$cp 3(Lorg/jetbrains/projector/server/ProjectorServer;)V��
u� start� 
u� 2$i$a$-also-ProjectorServer$Companion$startServer$3 0Lorg/jetbrains/projector/server/ProjectorServer; isAgent Z  Lkotlin/jvm/functions/Function1; Ljava/lang/Runnable; getLastStartedServer 2()Lorg/jetbrains/projector/server/ProjectorServer; $Lorg/jetbrains/annotations/Nullable; access$getLastStartedServer$cp��
u�  getLastStartedServer$annotations *access$getENABLE_BIG_COLLECTIONS_CHECKS$cp� 
u�  setENABLE_BIG_COLLECTIONS_CHECKS *access$setENABLE_BIG_COLLECTIONS_CHECKS$cp� W
u� <set-?> $getBIG_COLLECTIONS_CHECKS_START_SIZE .access$getBIG_COLLECTIONS_CHECKS_START_SIZE$cp� Q
u� $setBIG_COLLECTIONS_CHECKS_START_SIZE .access$setBIG_COLLECTIONS_CHECKS_START_SIZE$cp�
u� "getEnvHost$projector_server_common ()Ljava/net/InetAddress; #ORG_JETBRAINS_PROJECTOR_SERVER_HOST�� 
�� #org.jetbrains.projector.server.host� java/net/InetAddress� 	getByName *(Ljava/lang/String;)Ljava/net/InetAddress;��
�� getByName(host)� 6org/jetbrains/projector/server/core/util/HostAddressKt� getWildcardHostAddress��
�� host Ljava/lang/String; 
getEnvPort #ORG_JETBRAINS_PROJECTOR_SERVER_PORT  #org.jetbrains.projector.server.port 8887 java/lang/Integer parseInt (Ljava/lang/String;)I	

 getLOCAL_ADDRESSES *()Ljava/util/List<Ljava/net/InetAddress;>; -org/jetbrains/projector/server/util/NetworkKt getLocalAddresses (Z)Ljava/util/List;
 java/net/InterfaceAddress 
getAddress�
 5$i$a$-map-ProjectorServer$Companion$LOCAL_ADDRESSES$1 Ljava/net/InterfaceAddress; isLocalAddress (Ljava/net/InetAddress;)Z address ]
  contains! � �" Ljava/net/InetAddress; isMac os.name& getProperty("os.name")( Mac OS* kotlin/text/StringsKt, startsWith$default ;(Ljava/lang/String;Ljava/lang/String;ZILjava/lang/Object;)Z./
-0 $mainWindows2 (Ljava/awt/Point;)V 4
 �5	 � �	 � � right9 �	 �: bottom< �	 �= setExtendedState?
 �@ 	setBounds (IIII)VBC
 �D 
revalidateF 
 �G 2$i$a$-let-ProjectorServer$Companion$resize$2$1$1$1 i 4$i$a$-forEach-ProjectorServer$Companion$resize$2$1$1 point Ljava/awt/Point; widthWithInsets heightWithInsets 
element$iv $i$f$forEach $this$forEach$iv $width $height access$toServerClipboardEvent �(Lorg/jetbrains/projector/server/ProjectorServer$Companion;Ljava/awt/datatransfer/Transferable;)Lorg/jetbrains/projector/common/protocol/toClient/ServerClipboardEvent;   
 W $this 	$receiver access$calculateMainWindowShift =(Lorg/jetbrains/projector/server/ProjectorServer$Companion;)V )access$updateToolkitKeyboardModifiersMode v(Lorg/jetbrains/projector/server/ProjectorServer$Companion;Lorg/jetbrains/projector/common/protocol/data/UserKeymap;)V @ A
 _ access$isMac =(Lorg/jetbrains/projector/server/ProjectorServer$Companion;)Z% 
 c access$resize ?(Lorg/jetbrains/projector/server/ProjectorServer$Companion;II)V �
 g 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; Lkotlin/Metadata; mv           k xi   0 d1/��r

��






	
 





��



	






��


����20B¢J.0/HJ00H��¢1J20J3040H��¢5J60270J80/2902:0HJC;0'2<02!=0¢?@(A0-0>2B0C2D0CHJE0/2F0GHJH0I*0JHR0X¢
��"R	0XT¢
��R
0XT¢
��R0XT¢
��R0XT¢
��R0X¢
��"R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R"
 *0008BX¢R0XT¢
��R0XT¢
��R 0XT¢
��R!0XT¢
��R"0XT¢
��R#08FX¢$#R%08BX¢%R((0'2&0'@BX¢
��)*+R,0-X¢
��¨K d2   !BIG_COLLECTIONS_CHECKS_START_SIZE #DEFAULT_BIG_COLLECTIONS_CHECKS_SIZE DEFAULT_PORT "DISABLE_IDEA_UPDATES_PROPERTY_NAME ENABLE_AUTO_KEYMAP_SETTING ENABLE_BIG_COLLECTIONS_CHECKS ENABLE_CONNECTION_CONFIRMATION ENABLE_PROPERTY_NAME HOST_PROPERTY_NAME HOST_PROPERTY_NAME_OLD LOCAL_ADDRESSES kotlin.jvm.PlatformType MAC_KEYBOARD_MODIFIERS_MODE PORT_PROPERTY_NAME PORT_PROPERTY_NAME_OLD RO_TOKEN_ENV_NAME TOKEN_ENV_NAME lastStartedServer logger -Lorg/jetbrains/projector/util/logging/Logger; 
getEnvHost getMainWindows Lkotlin/Function1; Lkotlin/ParameterName; name tag GLorg/jetbrains/projector/common/protocol/toClient/ServerClipboardEvent; projector-server-common WhenMappings ProjectorServer.kt Code LineNumberTable LocalVariableTable StackMapTable 
Deprecated RuntimeVisibleAnnotations 	Signature RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension BootstrapMethods 1           �   /     *� �   �      "�        	 
      �   S     � L+� � 	+� =�   �   
 �  E�   
   ( (�        	 
  	   �          �    �    �            �   �     E+� &� , =� � 5� (� .Y+� &� 2 Y� W� 4Y6� 9�� � :� � <Y� =��   �   " � �     (    G .�      * 
+ , D-�       E 	 
     E > ?   @ A �   �     <� G+� M_� S.�      $                � � � <Y� =�� Y�   �    h UC UC U�    O  U�      0 (1 ,2 80 ;4�       < 	 
     < Z [   \ ] �  �     �� d� i� kM>,:� mY� n� p:6� t :� y � 6� } :� a:	6
	� �� �� � ���� � W���� � L+� p� � � � � +� � d� i� �� aY� W� :6� �Y� W� ��   �   l 
� '    k k p v  � +  a@� �    � k k p v  @U a� 	   � k   v  �G ��   B   7 � � D7 d� i� j7 k9 |9 : �= �= �� �= �= �=�   z  D  � � 
 A  � � 	 : ' � �   H � �   K � �   K � �   ^ � �  
 ` � �  �  � �  �  � �  k ? � �    � 	 
  �    ^�     _    �  �  (     Ҳ �� �� � �� �� �� ˱*� ͸ �� aY� W� �� �Y� W� �L=+� �N-ظ �-N-� 699	+� �� /+� � �Y� W�  :6� �c9	� �c9	  +� �Y� W�  :6� ��c9	� ��c9	  � �� �� �	� � �:-ç 
:-��  �  G � �   � � �   �   ` 
Q aJ �� 1 	  �     �K ��    �  �  	  �  �    �     �   b   A 	B C F 8G KH NI QK XL lM wN �O �L �R �S �T �U �R �W �X �G �Y �F �Z�   f 
 l  �  i  �  �  �  �  �  K s �  N p �  Q m � 	 8 � �  6 �	
    � 	 
    � �  �     ��N-� �� -� ��*�� �� �� �*� �� k:6:� mY
��� p:6� t :		� y � +	� } :

� a::6� �_� � W���� � :6�0  �6  �   �   ' � � . 
  k k p v  1�   F   ] ^ _ b d "f .� H� d� rf �� �� �f �g �| �f �}�   �  r 7 �  o  � �  d 8 � 
 H =9 �  E @: �  E @ � �  . [; �  + ^< �  � = �  � > �   �?@    � 	 
     �A �    �B �  CD �  {     �,G�J-L�JN�J,�T�Y�\-�` �e�j� �o�e�j�s� �y�~�����` �Y����������� ����� � ��*��� �y�������uY������::6��W���� �   �    ?.�   R  � �  � &� /� ?� N� U� [� g� w� z� }� �� �� �� �� �� �� ���   H  � � �  �  ��    � 	 
     ���    �F�    �K�    �M� �   E�       �     _  �       _    _    _   �� �   .     �ְ   �      ��        	 
  �    �  	�  �          �    �     �  �   .     �ڬ   �      ��        	 
   � W �   9     �ޱ   �      ��        	 
     ��  � Q �   .     ��   �      ��        	 
   � �   =     ��   �   
   � ��        	 
     � �  �� �   x     *��Y� 
W��L+� +��M,�� �,� ���   �    Q �  B��   
   � ��      ��    * 	 
  �     _   � Q �   R     ��Y� W����   �    T �   
   � ��        	 
    ] �       b�� kL=+N� mY+
��� p:6-� t :� y � +� } :�::
6	�
_� � W���� � �   �    � )   k k p v  1�   "   � 
� !� <� J� [� `� a��   \ 	 J  � 	 G  �  < 8 �  ! <9 �   ?: �   ? � �  
 W; �   Y< �    b 	 
  �     �   F     +�J*� +�# �   �     ��        	 
     $ �     _   %  �   C     '� L+)� �++�1�   �      ��        	 
   !" �       �*3�J*� kN6-� t :� y � �� } :� �:6� �Y� �� �� ŷ6:	6
6
66� �� c� � �Y� W� J:6		�7� �d�7		�8� �d�8
� ��;``6
� ��>``6  � ��A	�7	�8
�E�H ��D �   �   E �  k v� R  � k v  � �  �� F�   � k v  �   N  h � 4i Fj Lk Rl Zm on o �r �s �t �m �u �x �y �z �� �{�   �  o AI �  l DJ  4 �K �  F �LM 	 I �N � 
 O �O �  1 � �
  * �P �   �Q �   �R �    �2 �     �S �    �T � UV �   :     *+�X�   �     "�       Y 
     Z ? [\ �   /     *��   �     "�       Y 
  ]^ �   :     *+�`�   �     "�       Y 
      Z [ ab �   /     *�d�   �     "�       Y 
  ef �   E     *�h�   �     "�        Y 
     A �    B �  i �   -     *�j�   �        	 
     kl  �   " {     �      I � u D �   ��  SMAP
ProjectorServer.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer$Companion
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,967:1
764#2:968
855#2,2:969
1547#2:972
1618#2,3:973
1547#2:976
1618#2,3:977
1849#2,2:980
1#3:971
*S KotlinDebug
*F
+ 1 ProjectorServer.kt
org/jetbrains/projector/server/ProjectorServer$Companion
*L
823#1:968
823#1:969,2
870#1:972
870#1:973,3
960#1:976
960#1:977,3
872#1:980,2
*E
�   m n[ IoIpIqrIosItu[ svw[ Ls 
sxs sysxs�s Qs�sszs{sxs|s}s~sxs�s s�s Wss�s�s�s�sxs$s�ss ]s�s�s�s�s�s s s%s�s�s�s�s�s�s�s�s �sxs�s�s�s�s �s \ssssAsBsCs�sFs�s�s�s�sKs�sMs @s Zs [s s�s ?s��    ,  % PK          ��F��  �  6   org/jetbrains/projector/server/ProjectorServer$4.class����   7 P 0org/jetbrains/projector/server/ProjectorServer$4  ^Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/lang/Integer;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this 2Lorg/jetbrains/projector/server/ProjectorServer$4; 	$receiver invoke .org/jetbrains/projector/server/ProjectorServer  access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue;  
   _org/jetbrains/projector/common/protocol/toClient/ServerMarkdownEvent$ServerMarkdownDisposeEvent 
   *java/util/concurrent/ConcurrentLinkedQueue  add (Ljava/lang/Object;)Z   !
  " id I &(Ljava/lang/Object;)Ljava/lang/Object; java/lang/Number ' intValue ()I ) *
 ( +  
  - kotlin/Unit / INSTANCE Lkotlin/Unit; 1 2	 0 3 p1 Ljava/lang/Object; Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  E ProjectorServer.kt Code LocalVariableTable LineNumberTable InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  H   3     *+� *� �    I                      H   L     *� � � Y� � #W�    J   
    �  � I               $ % A  &  H   C     *+� (� ,� .� 4�    J       � I               5 6   K   
        L     F M     N    G O   :  7  8[ I 9I :I ; <I = >I ? @[ s A B[ s Cs Ds $s Ds PK          Fx�g�  �  K   org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$6.class����   7 8 Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$6  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$6; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; Daemon thread finishes  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   Corg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1 +  	 ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  /   $     *� �    0                /   -     �    1       0            2       A    /   /     *� �    1       0              	  /         � Y� � �      3           ,      4    , - 5     6    . 7   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          Ci��>  >  :   org/jetbrains/projector/server/ProjectorLauncherBase.class����   7 F 4org/jetbrains/projector/server/ProjectorLauncherBase  java/lang/Object  <init> ()V  
   this 6Lorg/jetbrains/projector/server/ProjectorLauncherBase; start C([Ljava/lang/String;Lorg/jetbrains/projector/server/PAwtProvider;)V Lkotlin/jvm/JvmStatic; #Lorg/jetbrains/annotations/NotNull; 	Companion @Lorg/jetbrains/projector/server/ProjectorLauncherBase$Companion;  	   >org/jetbrains/projector/server/ProjectorLauncherBase$Companion   
   args [Ljava/lang/String; awtProvider -Lorg/jetbrains/projector/server/PAwtProvider; runProjectorServer 0(Lorg/jetbrains/projector/server/PAwtProvider;)Z  
   getStarterClass ()Ljava/lang/Class; ()Ljava/lang/Class<*>; access$getStarterClass S(Lorg/jetbrains/projector/server/ProjectorLauncherBase$Companion;)Ljava/lang/Class; " #
  $ <clinit> 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V  '
  ( MAIN_CLASS_PROPERTY_NAME Ljava/lang/String; ,org.jetbrains.projector.server.classToLaunch , Lkotlin/Metadata; mv           k xi   0 d1 *��

��
&�� 20:B¢¨ d2   projector-server-common ProjectorLauncherBase.kt RuntimeInvisibleAnnotations ConstantValue Code LineNumberTable LocalVariableTable RuntimeVisibleAnnotations $RuntimeInvisibleParameterAnnotations 	Signature InnerClasses 
SourceFile!          <         * +  =    - <             >   /     *� �    ?        @        	 
       >   1     	� *+� �    @       	       	    A        B                >   &     � *� �    @            A        B             >         � � %�     C    ! A         &   >         � Y� )� �      D   
      E    ; A   :  .  /[ I 0I 1I 2 3I 0 4I 5 6[ s 7 8[ s 
s 9s s s :PK          6T�:	  :	  G   org/jetbrains/projector/server/ProjectorServer$disconnectByIp$1$1.class����   7 i Aorg/jetbrains/projector/server/ProjectorServer$disconnectByIp$1$1  ~Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lorg/jetbrains/projector/server/core/ClientWrapper;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> (Ljava/lang/String;)V $ip Ljava/lang/String; 
 	   (I)V  
   this CLorg/jetbrains/projector/server/ProjectorServer$disconnectByIp$1$1; invoke 6(Lorg/jetbrains/projector/server/core/ClientWrapper;)V #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   1org/jetbrains/projector/server/core/ClientWrapper  getConfirmationRemoteIp ()Ljava/net/InetAddress;   !  " java/net/InetAddress $ getHostAddress ()Ljava/lang/String; & '
 % ( areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z * +
  , )The host has disconnected the address: . . $java/lang/invoke/StringConcatFactory 0 makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; 2 3
 1 4 5 &(Ljava/lang/String;)Ljava/lang/String; 2 7   8 
disconnect : 	  ; 3Lorg/jetbrains/projector/server/core/ClientWrapper; java/lang/String > &(Ljava/lang/Object;)Ljava/lang/Object;  
  A kotlin/Unit C INSTANCE Lkotlin/Unit; E F	 D G p1 Ljava/lang/Object; Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer Y disconnectByIp [ 	 ProjectorServer.kt Code LocalVariableTable StackMapTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 0      
        	  ^   3     *+� *� �    _               
       ^        2+� +� # Y� W� � )*� � -� +*� � 9  � < �    `    U %B ? a      " 1 _       2       2  =  b       A  @  ^   @     *+� � B� H�    a       _               I J   c   
        d    Z \ e     f    ] g   :  K  L[ I MI NI O PI Q RI S T[ s U V[ s Ws Xs s =s  h     6  /PK          �{���  �  K   org/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$5.class����   7 8 Eorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$5  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this GLorg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1$5; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; 'Unhandled in daemon thread has happened  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   Corg/jetbrains/projector/server/ProjectorServer$createUpdateThread$1 +  	 ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  /   $     *� �    0                /   -     �    1       0            2       A    /   /     *� �    1       0              	  /         � Y� � �      3           ,      4    , - 5     6    . 7   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          .XX)x  x  B   org/jetbrains/projector/server/ProjectorServer$setUpClient$1.class����   7 : <org/jetbrains/projector/server/ProjectorServer$setUpClient$1  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this >Lorg/jetbrains/projector/server/ProjectorServer$setUpClient$1; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; ;Asking for connection confirmation because of agent mode...  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer + setUpClient �(Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings;Ljava/lang/String;)V - . ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  1   $     *� �    2                1   -     �    3      g 2            4       A    1   /     *� �    3      g 2              	  1         � Y� � �      5   
        6    , / 7     8    0 9   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          yY.�@  @  Q   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFont$2.class����   7 A Korg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this MLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getMonoBoldFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       M 9            ;       A     8   /     *� "�    :       M 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          =���{  {  D   org/jetbrains/projector/server/service/ProjectorAwtInitializer.class����   7 � >org/jetbrains/projector/server/service/ProjectorAwtInitializer  java/lang/Object  <init> ()V  
   this @Lorg/jetbrains/projector/server/service/ProjectorAwtInitializer; initProjectorAwt 2org/jetbrains/projector/awt/service/DrawEventQueue  	Companion >Lorg/jetbrains/projector/awt/service/DrawEventQueue$Companion;  	   Qorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$1  INSTANCE SLorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$1;  	   kotlin/jvm/functions/Function1  <org/jetbrains/projector/awt/service/DrawEventQueue$Companion  setCreateOffScreen #(Lkotlin/jvm/functions/Function1;)V  
   Qorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$2   SLorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$2;  "	 ! # setCreateOnScreen % 
  & 0org/jetbrains/projector/awt/service/FontProvider ( <Lorg/jetbrains/projector/awt/service/FontProvider$Companion;  *	 ) + <org/jetbrains/projector/server/service/ProjectorFontProvider - >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  /	 . 0 :org/jetbrains/projector/awt/service/FontProvider$Companion 2 setInstance 5(Lorg/jetbrains/projector/awt/service/FontProvider;)V 4 5
 3 6 /org/jetbrains/projector/awt/service/ImageCacher 8 ;Lorg/jetbrains/projector/awt/service/ImageCacher$Companion;  :	 9 ; ;org/jetbrains/projector/server/service/ProjectorImageCacher = =Lorg/jetbrains/projector/server/service/ProjectorImageCacher;  ?	 > @ 9org/jetbrains/projector/awt/service/ImageCacher$Companion B 4(Lorg/jetbrains/projector/awt/service/ImageCacher;)V 4 D
 C E initDefaults ,org/jetbrains/projector/awt/service/Defaults H .Lorg/jetbrains/projector/awt/service/Defaults;  J	 I K java/lang/Integer M valueOf (I)Ljava/lang/Integer; O P
 N Q java/lang/Number S >org/jetbrains/projector/server/core/convert/toClient/ConvertKt U toColor $(Ljava/lang/Number;)Ljava/awt/Color; W X
 V Y setBACKGROUND_COLOR_ARGB (Ljava/awt/Color;)V [ \
 I ]�    setFOREGROUND_COLOR_ARGB ` \
 I a ,org/jetbrains/projector/common/misc/Defaults c .Lorg/jetbrains/projector/common/misc/Defaults;  e	 d f 	getSTROKE A()Lorg/jetbrains/projector/common/protocol/data/StrokeData$Basic; h i
 d j 7org/jetbrains/projector/common/protocol/data/StrokeData l toStroke L(Lorg/jetbrains/projector/common/protocol/data/StrokeData;)Ljava/awt/Stroke; n o
 V p 	setSTROKE (Ljava/awt/Stroke;)V r s
 I t <clinit>
    
	  x #Lorg/jetbrains/annotations/NotNull; Lkotlin/Metadata; mv           k xi   0 d1 A��

��


Æ��20B¢J0J0¨ d2   projector-server-common ProjectorAwtInitializer.kt RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable InnerClasses 
SourceFile RuntimeVisibleAnnotations 1        
  �     z        �   /     *� �    �       # �        	 
       �   k     1� � � � � � $� � '� ,� 1� )� 7� <� A� 9� F�    �       &  /  1 $ 3 0 4 �       1 	 
    G   �   j     4� L� R� T� Z� ^� L_� R� T� Z� b� L� g� k� m� q� u�    �       7  8 ! 9 3 : �       4 	 
    v   �         � Y� w� y�      �           !      �    � �   @  {  |[ I }I ~I  �I } �I � �[ s � �[ s 
s �s s Gs �s s �PK          }	�CR  R  W   org/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFont$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getSymbolsRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       2 9            ;       A     8   /     *� "�    :       2 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          ��J�  �  L   org/jetbrains/projector/server/service/ProjectorImageCacher$putImage$2.class����   7 I Forg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$2  �Lkotlin/jvm/internal/FunctionReferenceImpl;Lkotlin/jvm/functions/Function1<Ljava/awt/image/BufferedImage;Lorg/jetbrains/projector/common/protocol/data/ImageData;>; )kotlin/jvm/internal/FunctionReferenceImpl  kotlin/jvm/functions/Function1  <init> ()V =org/jetbrains/projector/server/service/ProjectorImageCacherKt 
 toImageData  ctoImageData(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageData;  :(ILjava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V  
   this HLorg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$2; invoke X(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageData; #Lorg/jetbrains/annotations/NotNull; p0  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
    
    Ljava/awt/image/BufferedImage; &(Ljava/lang/Object;)Ljava/lang/Object; java/awt/image/BufferedImage $  
  & p1 Ljava/lang/Object; <clinit>  	
  + INSTANCE - 	  . Lkotlin/Metadata; mv           k    xi   0 ;org/jetbrains/projector/server/service/ProjectorImageCacher 9 putImage V(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageId; ; < ProjectorImageCacher.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations0       -        	  ?   +     *� �    @                ?   ?     +� +� !�    A      m @                "  B        C       A  #  ?   =     	*+� %� '�    A       m @       	       	 ( )   * 	  ?         � Y� ,� /�      D   
        E    : = F     G    > H     0  1[ I 2I 3I 4 5I 6 7I 8PK          ���I  I  T   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFont$2.class����   7 A Norg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this PLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getMonoRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       E 9            ;       A     8   /     *� "�    :       E 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          ����;  ;  C   org/jetbrains/projector/server/service/ProjectorImageCacherKt.class����   7 � =org/jetbrains/projector/server/service/ProjectorImageCacherKt  java/lang/Object  toPngBase64 2(Ljava/awt/image/BufferedImage;)Ljava/lang/String; java/io/ByteArrayOutputStream  <init> ()V 	 

   java/awt/image/RenderedImage  png  java/io/OutputStream  javax/imageio/ImageIO  write I(Ljava/awt/image/RenderedImage;Ljava/lang/String;Ljava/io/OutputStream;)Z  
   flush  

   toByteArray ()[B  
   this.toByteArray()   kotlin/jvm/internal/Intrinsics " checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V $ %
 # & close ( 

  ) java/util/Base64 + 
getEncoder ()Ljava/util/Base64$Encoder; - .
 , / java/util/Base64$Encoder 1 encode ([B)[B 3 4
 2 5 java/lang/String 7 encoded 9 kotlin/text/Charsets ; UTF_8 Ljava/nio/charset/Charset; = >	 < ? ([BLjava/nio/charset/Charset;)V 	 A
 8 B 0$i$a$-apply-ProjectorImageCacherKt$toPngBase64$1 I  $this$toPngBase64_u24lambda_u2d0 Ljava/io/ByteArrayOutputStream; imageInByte Ljava/lang/Object; [B $this$toPngBase64 Ljava/awt/image/BufferedImage; toImageData X(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageData; #Lorg/jetbrains/annotations/NotNull; <this> P checkNotNullParameter R %
 # S @org/jetbrains/projector/common/protocol/data/ImageData$PngBase64 U  
  W (Ljava/lang/String;)V 	 Y
 V Z 6org/jetbrains/projector/common/protocol/data/ImageData \ $this$toImageData 
getImageId V(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageId; java/awt/image/BufferedImage a 	getRaster !()Ljava/awt/image/WritableRaster; c d
 b e java/awt/image/WritableRaster g getDataBuffer ()Ljava/awt/image/DataBuffer; i j
 h k java/awt/image/DataBufferByte m dataFieldByte Ljava/lang/reflect/Field; o p	  q java/lang/reflect/Field s get &(Ljava/lang/Object;)Ljava/lang/Object; u v
 t w java/lang/NullPointerException y 5null cannot be cast to non-null type kotlin.ByteArray {
 z Z J Dorg/jetbrains/projector/common/protocol/data/ImageId$BufferedImageId  java/util/Arrays � hashCode ([B)I � �
 � � (II)V 	 �
 � � 4org/jetbrains/projector/common/protocol/data/ImageId � java/awt/image/DataBufferInt � dataFieldInt � p	  � 4null cannot be cast to non-null type kotlin.IntArray � [I � ([I)I � �
 � � java/lang/IllegalStateException � Unsupported BufferedImage type � toString ()Ljava/lang/String; � �
  �
 � Z pixels $this$imageId java/awt/image/DataBuffer � getStateHash !(Ljava/awt/image/BufferedImage;)I theTrackableField � p	  � >null cannot be cast to non-null type sun.java2d.StateTrackable � sun/java2d/StateTrackable � getStateTracker ()Lsun/java2d/StateTracker; � � � � java/lang/System � identityHashCode (Ljava/lang/Object;)I � �
 � � stateTrackable Lsun/java2d/StateTrackable; stateTracker Lsun/java2d/StateTracker; $this$stateHash <clinit> data � java/lang/Class � getDeclaredField -(Ljava/lang/String;)Ljava/lang/reflect/Field; � �
 � �   � .org/jetbrains/projector/util/loading/ReflectKt � 	unprotect (Ljava/lang/reflect/Field;)V � �
 � � theTrackable � 2$i$a$-apply-ProjectorImageCacherKt$dataFieldByte$1 "$this$dataFieldByte_u24lambda_u2d1 1$i$a$-apply-ProjectorImageCacherKt$dataFieldInt$1 !$this$dataFieldInt_u24lambda_u2d2 6$i$a$-apply-ProjectorImageCacherKt$theTrackableField$1 &$this$theTrackableField_u24lambda_u2d3 Lkotlin/Metadata; mv           k    xi   0 d1 ���*
��








��

��
0*00*0H"��
 *00X¢
��"
 *00X¢
��"
 *00X¢
��"0*08F¢	"
0*08F¢¨ d2 kotlin.jvm.PlatformType imageId 6Lorg/jetbrains/projector/common/protocol/data/ImageId; 	stateHash 8Lorg/jetbrains/projector/common/protocol/data/ImageData; projector-server-common ProjectorImageCacher.kt Code LineNumberTable LocalVariableTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations StackMapTable 
SourceFile RuntimeVisibleAnnotations 1       o p    � p    � p        �   �     QL� Y� M,N6*� -� � W-� -� :!� 'L-� *  � 0+� 6M� 8Y,:� ',� @� C�    �   .    �  �  �  � ! � 1 � 5 � 6 � 7 � C � P � �   4   ' D E   * F G   O H I  ?  9 J    Q K L    M N  �   ?     *Q� T� VY*� X� [� ]�    �      � �        ^ L   �     O   �     O    _ `  �  7     �*Q� T*� f� lL+� n� 6� r*� f� l� xY� W� zY|� }�� ~M� �Y,�,� �� �� �� J+� �� 6� �*� f� l� xY� W� zY�� }�� �M� �Y,�,� �� �� �� � �Y�� �� ���    �   + � 1  b �  b �   b �   � �   >   �  �  � 5 � 9 � ; � ? � H � O � o � s � u � y � � � � � �      5  � J  o  � �    � � L   �     O   �     O    � �  �   �     2*Q� T� �*� f� l� xY� W� zY�� }�� �L+� � M,� ��    �    b  �      � & � - � �      &  � �  -  � �    2 � L   �     O    � 
  �   �     Rn�� �K*L=+Ǹ '+� � *� r��� �K*L=+Ǹ '+� � *� ��϶ �K*L=+Ǹ '+� � *� ��    �   >    �  �  �  �  �  � ' � 1 � 2 � 3 � 6 � B � L � M � N � �   >    � E  
  � p  '  � E  %  � p  B  � E  @  � p   �    � �   d  �  �[ I �I �I � �I � �I � �[ s � �[ s os ps �s �s �s �s �s Ls _s `s �s �s �s �s Ms �s s �s �PK          HMz�I  I  T   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFont$2.class����   7 A Norg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this PLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getDefaultBoldFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       = 9            ;       A     8   /     *� "�    :       = 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          ����  �  T   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFile$2.class����   7 A Norg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this PLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   	Default-B  /fonts/Default-B.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       < 9            ;       A     8   /     *� "�    :       < 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          vv��  �  W   org/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$2.class����   7 S Qorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$2  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lorg/jetbrains/projector/awt/PWindow$Descriptor;Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$2; invoke r(Lorg/jetbrains/projector/awt/PWindow$Descriptor;)Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   >org/jetbrains/projector/server/service/ProjectorDrawEventQueue  Xorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target$Onscreen  .org/jetbrains/projector/awt/PWindow$Descriptor  getWindowId ()I   !
  "
   Oorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target % T(Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target;)V  '
  ( 0Lorg/jetbrains/projector/awt/PWindow$Descriptor; &(Ljava/lang/Object;)Ljava/lang/Object;  
  , p1 Ljava/lang/Object; <clinit>  	
  1 INSTANCE 3 	  4 Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous> @Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue; >org/jetbrains/projector/server/service/ProjectorAwtInitializer D initProjectorAwt F 	 ProjectorAwtInitializer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       3        	  I   $     *� �    J                I   P     +� � Y� Y+� #� $� &� )�    K      / J                *  L        M       A  +  I   =     	*+� � -�    K       / J       	       	 . /   0 	  I         � Y� 2� 5�      N   
        O    E G P     Q    H R   :  6  7[ I 8I 9I : ;I < =I > ?[ s @ A[ s Bs Cs s *s PK          /-��[  [  Z   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFont$2.class����   7 A Torg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this VLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getMonoRegularItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       I 9            ;       A     8   /     *� "�    :       I 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �p�O�  �  _   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicComposite$2.class����   7 E Yorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this [Lorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-RI  italic  access$getMonoRegularItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       J =            ?       A  $  <   /     *� &�    >       J =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          &�Ԗ�  �  Y   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularComposite$2.class����   7 E Sorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this ULorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-R  plain  access$getMonoRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       F =            ?       A  $  <   /     *� &�    >       F =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          ���  �  Z   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFile$2.class����   7 A Torg/jetbrains/proje