erKt H Logger A(Ljava/lang/String;)Lorg/jetbrains/projector/util/logging/Logger; J K
 I L 2org/jetbrains/projector/server/core/util/SizeAware N *java/util/concurrent/ConcurrentLinkedQueue P
 Q  java/util/Collection S .org/jetbrains/projector/server/ProjectorServer U :Lorg/jetbrains/projector/server/ProjectorServer$Companion; 4 W	 V X 8org/jetbrains/projector/server/ProjectorServer$Companion Z  getENABLE_BIG_COLLECTIONS_CHECKS ()Z \ ]
 [ ^ $getBIG_COLLECTIONS_CHECKS_START_SIZE ()I ` a
 [ b java/lang/Integer d valueOf (I)Ljava/lang/Integer; f g
 e h Y(Ljava/util/Collection;Ljava/lang/Integer;Lorg/jetbrains/projector/util/logging/Logger;)V  j
 O k $i$f$Logger ILorg/jetbrains/projector/server/core/util/SizeAware<Ljava/util/concurrent/ConcurrentLinkedQueue<Lkotlin/Pair<Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target;Ljava/util/List<Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent;>;>;>;>; Lkotlin/Metadata; mv           k xi   0 d1 \��


��



�� 20:B0¢J0HR0X¢
��¨	 d2 4Lorg/jetbrains/projector/awt/service/DrawEventQueue; CLorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; CommandBuilder projector-server-common ProjectorDrawEventQueue.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1       4 5  �     	    
   �     	    $ %  �     	    * +  �    o �     	        �   D     +� *� *+� �    �      + �               
   �     	       �   9     � Y*� � � !�    �       - �            �     	   " #  �         � '�    �       + ( )  �         � -�    �       +  .   �   �     O� 0Y� 3� 7;� =� C Y� G� M� '� OY� QY� R� T� Y� _� � Y� c� i� � '� l� -�    �   ' � D   ! ! T�     ! ! T e �   "   �  �  � ! � % � / � E � H � �       m n    �       }  0  4  �     �  rSMAP
ProjectorDrawEventQueue.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue
+ 2 ReifiedLogger.kt
org/jetbrains/projector/util/logging/ReifiedLoggerKt
*L
1#1,182:1
27#2:183
*S KotlinDebug
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue
*L
171#1:183
*E
 �   I  p  q[ I rI sI t uI r vI w x[ s y z[ 
s s {s 
s s s s |s }s 4s ~PK          �2(T#  #  M   org/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage.class����   7 n Gorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage  java/lang/Object  <init> X(Ljava/lang/ref/SoftReference;Lorg/jetbrains/projector/common/protocol/data/ImageData;)V j(Ljava/lang/ref/SoftReference<Ljava/awt/Image;>;Lorg/jetbrains/projector/common/protocol/data/ImageData;)V #Lorg/jetbrains/annotations/NotNull; 	reference 	 kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   data  ()V  
   Ljava/lang/ref/SoftReference; 	 	   8Lorg/jetbrains/projector/common/protocol/data/ImageData;  	   this ILorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage; getReference ()Ljava/lang/ref/SoftReference; 1()Ljava/lang/ref/SoftReference<Ljava/awt/Image;>; getData :()Lorg/jetbrains/projector/common/protocol/data/ImageData; 
component1 
component2 copy �(Ljava/lang/ref/SoftReference;Lorg/jetbrains/projector/common/protocol/data/ImageData;)Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage; �(Ljava/lang/ref/SoftReference<Ljava/awt/Image;>;Lorg/jetbrains/projector/common/protocol/data/ImageData;)Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage;  
  ( copy$default �(Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage;Ljava/lang/ref/SoftReference;Lorg/jetbrains/projector/common/protocol/data/ImageData;ILjava/lang/Object;)Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage; % &
  , toString ()Ljava/lang/String;  LivingImage(reference=, data=) 0 $java/lang/invoke/StringConcatFactory 2 makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; 4 5
 3 6 7 i(Ljava/lang/ref/SoftReference;Lorg/jetbrains/projector/common/protocol/data/ImageData;)Ljava/lang/String; 4 9   : hashCode ()I java/lang/ref/SoftReference > < =
 ? @ 6org/jetbrains/projector/common/protocol/data/ImageData B
 C @ result I equals (Ljava/lang/Object;)Z $Lorg/jetbrains/annotations/Nullable; areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z J K
  L other Ljava/lang/Object; /Ljava/lang/ref/SoftReference<Ljava/awt/Image;>; Lkotlin/Metadata; mv           k xi   0 d1��0

��
��


��

	



��

����20B000¢J00HÆJ	0HÆJ#0��20020HÆJ020HÖJ	0HÖJ	0HÖR0¢
��	R00¢
��
¨ d2   Ljava/awt/Image; projector-server-common ;org/jetbrains/projector/server/service/ProjectorImageCacher _ LivingImage ProjectorImageCacher.kt 	Signature RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 0       	   c    P d            d        
     e   Y     +
� ,� *� *+� *,� �    f      J g                	         c     h                e   /     *� �    f       J g            c      d         ! "  e   /     *� �    f       J g            d         #   e   #     *� �    g            c      d         $ "  e   #     *� �    g            d         % &  e   H     +
� ,� � Y+,� )�    g                	         c    ' d        h           	 * +  e   3     ~� *� L~� *� M*+,� -�    i    
  . /  e   ,     *� *� � ;  �    g            d         < =  e   ?     *� � A<h*� � D`<�    g       E F          G H  e   p     7*+� �+� � �+� M*� ,� � M� �*� ,� � M� ��    i    �   g       7       7 N O  h     I    j   
   ` a  k    b l   p  Q  R[ I SI TI U VI S WI X Y[ s Z [[ s s \s 	s s ]s s s s !s "s s s #s $s %s Gs \s Ns <s \s .s \s ^ m     8  1PK          �0��  �  Y   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldComposite$2.class����   7 E Sorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this ULorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   	Default-B  bold  access$getDefaultBoldFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       > =            ?       A  $  <   /     *� &�    >       > =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          e�e  e  V   org/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2.class����   7 � Porg/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2  `Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/util/List<+Ljava/awt/Font;>;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this RLorg/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2; invoke ()Ljava/util/List; #()Ljava/util/List<Ljava/awt/Font;>; #Lorg/jetbrains/annotations/NotNull; sun/font/PhysicalFont  <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getDefaultRegularFont W(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Lsun/font/PhysicalFont;  
   "access$getDefaultRegularItalicFont  
    access$getDefaultBoldFont " 
  # access$getDefaultBoldItalicFont % 
  & access$getMonoRegularFont ( 
  ) access$getMonoRegularItalicFont + 
  , access$getMonoBoldFont . 
  / access$getMonoBoldItalicFont 1 
  2  kotlin/collections/CollectionsKt 4 listOf %([Ljava/lang/Object;)Ljava/util/List; 6 7
 5 8 java/lang/Iterable : java/util/ArrayList < collectionSizeOrDefault (Ljava/lang/Iterable;I)I > ?
 5 @
 =  java/util/Collection C iterator ()Ljava/util/Iterator; E F ; G java/util/Iterator I hasNext ()Z K L J M next ()Ljava/lang/Object; O P J Q sun/font/Font2D S invoke$toFont "(Lsun/font/Font2D;)Ljava/awt/Font; U V
  W add (Ljava/lang/Object;)Z Y Z D [ java/util/List ] 5$i$a$-map-ProjectorFontProvider$allInstalledFonts$2$1 I p0 Lsun/font/Font2D; 
item$iv$iv Ljava/lang/Object; 
$i$f$mapTo $this$mapTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv java/awt/Font l getFamilyName &(Ljava/util/Locale;)Ljava/lang/String; n o
 T p getStyle ()I r s
 T t (Ljava/lang/String;II)V  v
 m w $this$invoke_u24toFont  
  z <clinit>  	
  }  	   Lkotlin/Metadata; mv           k    xi   0 d1 &��
��
 

����00H
¢ d2 <anonymous>   Ljava/awt/Font; | 	 ProjectorFontProvider.kt Code LocalVariableTable StackMapTable LineNumberTable 	Signature RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 0               	  �   $     *� �    �                �  �     �� L+� � S+� � !S+� � $S+� � 'S+� � *S+� � -S+� � 0S+� � 3S+� 9� ;L =+N� =Y+
� A� B� D:6-� H :� N � +� R :� T::
6	� X
_� \ W���� ^ �    �    � z   ; ; D J  1 �   b    X  Y  X  Z ! X # [ * X , \ 3 X 5 ] < X ? ^ F X I _ P X Q W X ` [ � r � � � � ` � � � � � ` �   \ 	 �  _ ` 	 �  a b  �  c d  r < e `  o ? f g  o ? h i  [ W j `  Y Y k g    �     �     �         U V  �   =     � mY*� q*� u� x�    �       U �        y b  A  P  �   /     *� {�    �       T �             | 	  �         � Y� ~� ��      �   
        �     � �     �    � �  �SMAP
ProjectorFontProvider.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorFontProvider.kt
org/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
*L
1#1,221:1
1547#2:222
1618#2,3:223
*S KotlinDebug
*F
+ 1 ProjectorFontProvider.kt
org/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2
*L
96#1:222
96#1:223,3
*E
 �   7  �  �[ I �I �I � �I � �I � �[ s � �[ s �s �s �s PK          W�8�  �  b   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicComposite$2.class����   7 E \org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this ^Lorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   
Default-RI  italic  "access$getDefaultRegularItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       : =            ?       A  $  <   /     *� &�    >       : =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          �9Q�  �  Z   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFile$2.class����   7 A Torg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this VLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   
Default-BI  /fonts/Default-BI.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       @ 9            ;       A     8   /     *� "�    :       @ 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          h��	  �	  W   org/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$1.class����   7 \ Qorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$1  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lorg/jetbrains/projector/awt/image/PVolatileImage$Descriptor;Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorAwtInitializer$initProjectorAwt$1; invoke (Lorg/jetbrains/projector/awt/image/PVolatileImage$Descriptor;)Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   >org/jetbrains/projector/server/service/ProjectorDrawEventQueue  Yorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target$Offscreen  ;org/jetbrains/projector/awt/image/PVolatileImage$Descriptor  getPVolatileImageId ()J   !
  " getWidth ()I $ %
  & 	getHeight ( %
  ) (JII)V  +
  , Oorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target . T(Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target;)V  0
  1 =Lorg/jetbrains/projector/awt/image/PVolatileImage$Descriptor; &(Ljava/lang/Object;)Ljava/lang/Object;  
  5 p1 Ljava/lang/Object; <clinit>  	
  : INSTANCE < 	  = Lkotlin/Metadata; mv           k    xi   0 d1 +��
��

��

����020H
¢ d2 <anonymous> @Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue; >org/jetbrains/projector/server/service/ProjectorAwtInitializer M initProjectorAwt O 	 ProjectorAwtInitializer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       <        	  R   $     *� �    S                R   p     $+� � Y� Y+� #+� '+� *� -� /� 2�    T      ' 
 (  )  *  +  (   ' S       $       $  3  U        V       A  4  R   =     	*+� � 6�    T       & S       	       	 7 8   9 	  R         � Y� ;� >�      W   
        X    N P Y     Z    Q [   :  ?  @[ I AI BI C DI E FI G H[ s I J[ s Ks Ls s 3s PK          �&,�  �  W   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFile$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   	Default-R  /fonts/Default-R.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       4 9            ;       A     8   /     *� "�    :       4 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �k�CR  R  W   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFont$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getMonoBoldItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       Q 9            ;       A     8   /     *� "�    :       Q 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          aȍ  �  V   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldComposite$2.class����   7 E Porg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this RLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-B  bold  access$getMonoBoldFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       N =            ?       A  $  <   /     *� &�    >       N =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          �F}*�  �  ]   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFile$2.class����   7 A Worg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this YLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   
Default-RI  /fonts/Default-RI.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       8 9            ;       A     8   /     *� "�    :       8 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          ��5e8  8  S   org/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder.class����   7� Morg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder  java/lang/Object  Aorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder  <init> T(Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target;)V #Lorg/jetbrains/annotations/NotNull; target 
 kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   ()V  
   QLorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target; 
 	   java/util/ArrayList 
   java/util/List  events Ljava/util/List;  	   this OLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder; 	getTarget S()Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target; setClip U(Ljava/awt/Shape;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; $Lorg/jetbrains/annotations/Nullable; >org/jetbrains/projector/server/core/convert/toClient/ConvertKt ( createSetClipEvent [(Ljava/awt/Shape;)Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowStateEvent; * +
 ) , add (Ljava/lang/Object;)Z . /  0 identitySpaceClip Ljava/awt/Shape; setTransform U(Ljava/util/List;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; i(Ljava/util/List<Ljava/lang/Double;>;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; tx 7 Horg/jetbrains/projector/common/protocol/toClient/ServerSetTransformEvent 9 (Ljava/util/List;)V  ;
 : < 	setStroke V(Ljava/awt/Stroke;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; stroke @ toSetStrokeEvent \(Ljava/awt/Stroke;)Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowStateEvent; B C
 ) D Ljava/awt/Stroke; setPaint U(Ljava/awt/Paint;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; paint I Dorg/jetbrains/projector/common/protocol/toClient/ServerSetPaintEvent K toPaintValue K(Ljava/awt/Paint;)Lorg/jetbrains/projector/common/protocol/data/PaintValue; M N
 ) O <(Lorg/jetbrains/projector/common/protocol/data/PaintValue;)V  Q
 L R Ljava/awt/Paint; setComposite Y(Ljava/awt/Composite;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; 	composite W Horg/jetbrains/projector/common/protocol/toClient/ServerSetCompositeEvent Y toCommonComposite T(Ljava/awt/Composite;)Lorg/jetbrains/projector/common/protocol/data/CommonComposite; [ \
 ) ] A(Lorg/jetbrains/projector/common/protocol/data/CommonComposite;)V  _
 Z ` Ljava/awt/Composite; setFont T(Ljava/awt/Font;)Lorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder; font e Corg/jetbrains/projector/common/protocol/toClient/ServerSetFontEvent g .org/jetbrains/projector/server/util/FontCacher i INSTANCE 0Lorg/jetbrains/projector/server/util/FontCacher; k l	 j m getId "(Ljava/awt/Font;)Ljava/lang/Short; o p
 j q java/awt/Font s getSize ()I u v
 t w getAttributes ()Ljava/util/Map; y z
 t { java/awt/font/TextAttribute } 	LIGATURES Ljava/awt/font/TextAttribute;  �	 ~ � java/util/Map � get &(Ljava/lang/Object;)Ljava/lang/Object; � � � � java/lang/Integer � intValue � v
 � � (Ljava/lang/Short;IZ)V  �
 h � Ljava/awt/Font; java/lang/Short � build >org/jetbrains/projector/server/service/ProjectorDrawEventQueue � 	Companion JLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion; � �	 � � Horg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion � getCommands .()Ljava/util/concurrent/ConcurrentLinkedQueue; � �
 � � kotlin/TuplesKt � to 3(Ljava/lang/Object;Ljava/lang/Object;)Lkotlin/Pair; � �
 � � *java/util/concurrent/ConcurrentLinkedQueue �
 � 0  kotlin/collections/CollectionsKt � asReversedMutable "(Ljava/util/List;)Ljava/util/List; � �
 � � java/lang/Iterable � java/util/Collection � isEmpty ()Z � � � � iterator ()Ljava/util/Iterator; � � � � java/util/Iterator � hasNext � � � � next ()Ljava/lang/Object; � � � � Borg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent � Gorg/jetbrains/projector/common/protocol/toClient/ServerWindowPaintEvent � access$getLogger$cp /()Lorg/jetbrains/projector/util/logging/Logger; � �
 � � Uorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder$build$2 � WLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder$build$2; k �	 � � kotlin/jvm/functions/Function0 � 8org/jetbrains/projector/util/logging/Logger$DefaultImpls � info$default x(Lorg/jetbrains/projector/util/logging/Logger;Ljava/lang/Throwable;Lkotlin/jvm/functions/Function0;ILjava/lang/Object;)V � �
 � � 9$i$a$-none-ProjectorDrawEventQueue$CommandBuilder$build$1 I it DLorg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent; 
element$iv Ljava/lang/Object; 	$i$f$none $this$none$iv Ljava/lang/Iterable; drawRenderedImage Morg/jetbrains/projector/common/protocol/toClient/ServerDrawRenderedImageEvent � OLorg/jetbrains/projector/common/protocol/toClient/ServerDrawRenderedImageEvent; k �	 � � � 
  � drawRenderableImage Oorg/jetbrains/projector/common/protocol/toClient/ServerDrawRenderableImageEvent � QLorg/jetbrains/projector/common/protocol/toClient/ServerDrawRenderableImageEvent; k �	 � � 
drawString (Ljava/lang/String;DDD)V string � Forg/jetbrains/projector/common/protocol/toClient/ServerDrawStringEvent �  �
 � � Ljava/lang/String; x D y desiredWidth copyArea 	(IIIIII)V Dorg/jetbrains/projector/common/protocol/toClient/ServerCopyAreaEvent   �
 width height dx dy drawLine (IIII)V Dorg/jetbrains/projector/common/protocol/toClient/ServerDrawLineEvent
 	
 x1 y1 x2 y2 	paintRect 6(Lorg/jetbrains/projector/awt/data/AwtPaintType;DDDD)V 	paintType Eorg/jetbrains/projector/common/protocol/toClient/ServerPaintRectEvent -org/jetbrains/projector/server/util/ConvertKt toPaintType i(Lorg/jetbrains/projector/awt/data/AwtPaintType;)Lorg/jetbrains/projector/common/protocol/data/PaintType;
 ?(Lorg/jetbrains/projector/common/protocol/data/PaintType;DDDD)V 
 /Lorg/jetbrains/projector/awt/data/AwtPaintType; paintRoundRect 8(Lorg/jetbrains/projector/awt/data/AwtPaintType;IIIIII)V Jorg/jetbrains/projector/common/protocol/toClient/ServerPaintRoundRectEvent$ A(Lorg/jetbrains/projector/common/protocol/data/PaintType;IIIIII)V &
%' arcWidth 	arcHeight 	paintOval 6(Lorg/jetbrains/projector/awt/data/AwtPaintType;IIII)V Eorg/jetbrains/projector/common/protocol/toClient/ServerPaintOvalEvent- ?(Lorg/jetbrains/projector/common/protocol/data/PaintType;IIII)V /
.0 paintArc Dorg/jetbrains/projector/common/protocol/toClient/ServerPaintArcEvent3
4' 
startAngle arcAngle drawPolyline J(Ljava/util/List<Lkotlin/Pair<Ljava/lang/Integer;Ljava/lang/Integer;>;>;)V points: Horg/jetbrains/projector/common/protocol/toClient/ServerDrawPolylineEvent< access$toPoints l(Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion;Ljava/util/List;)Ljava/util/List;>?
 �@
= < paintPolygon B(Lorg/jetbrains/projector/awt/data/AwtPaintType;Ljava/util/List;)V y(Lorg/jetbrains/projector/awt/data/AwtPaintType;Ljava/util/List<Lkotlin/Pair<Ljava/lang/Integer;Ljava/lang/Integer;>;>;)V Horg/jetbrains/projector/common/protocol/toClient/ServerPaintPolygonEventF K(Lorg/jetbrains/projector/common/protocol/data/PaintType;Ljava/util/List;)V H
GI 	drawImage D(Ljava/lang/Object;Lorg/jetbrains/projector/awt/data/AwtImageInfo;)V imageIdM awtImageInfoO 4org/jetbrains/projector/common/protocol/data/ImageIdQ Failed requirement.S "java/lang/IllegalArgumentExceptionU toString ()Ljava/lang/String;WX
 Y (Ljava/lang/String;)V [
V\ Eorg/jetbrains/projector/common/protocol/toClient/ServerDrawImageEvent^ toImageEventInfo n(Lorg/jetbrains/projector/awt/data/AwtImageInfo;)Lorg/jetbrains/projector/common/protocol/data/ImageEventInfo;`a
b v(Lorg/jetbrains/projector/common/protocol/data/ImageId;Lorg/jetbrains/projector/common/protocol/data/ImageEventInfo;)V d
_e /Lorg/jetbrains/projector/awt/data/AwtImageInfo; 	paintPath B(Lorg/jetbrains/projector/awt/data/AwtPaintType;Ljava/awt/Shape;)V pathj Eorg/jetbrains/projector/common/protocol/toClient/ServerPaintPathEventl toCommonPath K(Ljava/awt/Shape;)Lorg/jetbrains/projector/common/protocol/data/CommonPath;no
 )p t(Lorg/jetbrains/projector/common/protocol/data/PaintType;Lorg/jetbrains/projector/common/protocol/data/CommonPath;)V r
ms VLjava/util/List<Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent;>; Lkotlin/Metadata; mv           k xi   0 d1c��


��


!






��
��


 








	







��20B0¢J
0HJ80202020202020HJ02020HJ(020202020HJ"02000!0 HJ"0HJ#0HJ($02%0&20'20'2(0'HJ@)02*0+202020202,02-0HJ0.02*0+20202020HJ/02*0+2001HJ*202*0+2000!0 HJ0302*0+20'20'20'20'HJ@402*0+20202020250260HJ702801HJ902:0;HJ<02=0>HJ?02@0AHJB02C0DHJE02F0'0 HR00X¢
��R0¢
��	¨G d2 CLorg/jetbrains/projector/awt/service/DrawEventQueue$CommandBuilder;   Lkotlin/Pair; projector-server-common CommandBuilder ProjectorDrawEventQueue.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 0       
  �     	      �   u�     	       �   ^     +� *� *+� *� Y� � �  �   �      /  1  1  /�        ! "      
  �     	    # $ �   /     *� �   �       /�        ! "  �     	    % & �   K     *�  +� -� 1 W*� �   �   
    4  5�        ! "      2 3 �     	  �     '    4 5 �   U     +8� *�  � :Y+� =� 1 W*� �   �   
   9  :�        ! "      7  �    6�     	  �     	    > ? �   Q     +A� *�  +� E� 1 W*� �   �   
   >  ?�        ! "      @ F �     	  �     	    G H �   X      +J� *�  � LY+� P� S� 1 W*� �   �   
   C  D�         ! "       I T �     	  �     	    U V �   X      +X� *�  � ZY+� ^� a� 1 W*� �   �   
   H  I�         ! "       W b �     	  �     	    c d �       J+f� *�  � hY� n+� r+� x+� |� �� � � �Y� W� � �� � � �� 1 W*� �   �   o � 1   t   
 
 � ��    t   
 
 ��    t   
 
 ��     t   
 
 ��      M  N  O  P < M E Q�       J ! "     J e � �     	  �     	    �  �       {� �� �*� *�  � �� �W*�  � �� �L=+� �� +� �� � � � 2+� � N-� � � !-� � :� �:6� ș��� � � �� �� �� ٱ   �     � 9 ��  �&�     � �   & 	   U  W " � 9 � [ W g � h W k X z Z�   >  [  � �  X  � �  Q  � �  " F � �    H � �    { ! "    �  �   D     *�  � � 1 W*� �   �       ]  ^  _�        ! "    �  �   D     *�  � � 1 W*� �   �       b  c  d�        ! "    � � �   | 
    "+�� *�  � �Y+(� �� 1 W*� �   �      g  h ! i�   4    " ! "     " � �    " � �    " � �    " � � �     	          � � �   � 	    *�  �Y�� 1 W*� �   �       l  m  n�   H     ! "      � �     � �     �     �     �     �  	 �   u     *�  �Y�� 1 W*� �   �       q  r  s�   4     ! "      �     �     �     �   �   �  
   (+� *�  �Y+�(� � 1 W*� �   �      v # w ' x�   >    ( ! "     (!    ( � �    ( � �    ( �    ( � �     	           "# �   � 
    ++� *�  �%Y+��(� 1 W*� �   �   "   {  |  }  ~  |   { & � * ��   R    + ! "     +!    + � �    + � �    + �    + �    +) �    +* � �     	               +, �   �     '+� *�  �.Y+��1� 1 W*� �   �      � " � & ��   >    ' ! "     '!    ' � �    ' � �    ' �    ' � �     	           2# �   � 
    ++� *�  �4Y+��5� 1 W*� �   �   "   �  �  �  �  �   � & � * ��   R    + ! "     +!    + � �    + � �    + �    + �    +6 �    +7 � �     	               8 ; �   `     $+;� *�  �=Y� �+�A�B� 1 W*� �   �      �  � # ��       $ ! "     $:  �   9�     	   CD �   u     /+� ,;� *�  �GY+�� �,�A�J� 1 W*� �   �      � * � . ��        / ! "     /!    /:  �   E�     	    	   KL �   �     C+N� ,P� +�R� TN�VY-�Z�]�*�  �_Y+�R,�c�f� 1 W*� �   �    %�      � % � > � B ��        C ! "     CM �    COg �     	    	   hi �   r     ,+� ,k� *�  �mY+�,�q�t� 1 W*� �   �      � ' � + ��        , ! "     ,!    ,j 3 �     	    	   �     �       �� �   ��  �SMAP
ProjectorDrawEventQueue.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
*L
1#1,182:1
2468#2,3:183
*S KotlinDebug
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder
*L
87#1:183,3
*E
�   v w[ IxIyIz{Ix|I}~[ s�[ Hs "s�s 
s s s s�s �s #s $s �s�s �s �s�s �sssssKsMs�sOsgssssss8s:s�s�s �s �s �s �s�s�s �s2ss!s6s7s+shsjs 3sCss"s)s*s %s 2s Us Ws bs cs es �s Gs Is Ts >s @s Fs 4s 7s�PK          ���׵  �  W   org/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2$1.class����   7 I Qorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2$1  gLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lsun/font/PhysicalFont;Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2$1; invoke +(Lsun/font/PhysicalFont;)Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   sun/font/PhysicalFont  getFamilyName &(Ljava/util/Locale;)Ljava/lang/String;  
   Lsun/font/PhysicalFont; &(Ljava/lang/Object;)Ljava/lang/Object;  
  " p1 Ljava/lang/Object; <clinit>  	
  ' INSTANCE ) 	  * Lkotlin/Metadata; mv           k    xi   0 d1 4��
��



����
 *0020H
¢ d2 <anonymous>   kotlin.jvm.PlatformType Oorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2 ; ()Ljava/util/Set;  = ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       )        	  @   $     *� �    A                @   @     +� +� �    B      j A                   C       A  !  @   =     	*+� � #�    B       j A       	       	 $ %   & 	  @         � Y� (� +�      D           <      E    < > F     G    ? H   =  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s :s s  s PK          �\��f  �f  B   org/jetbrains/projector/server/service/ProjectorFontProvider.class����   7
 <org/jetbrains/projector/server/service/ProjectorFontProvider  java/lang/Object  0org/jetbrains/projector/awt/service/FontProvider  <init> ()V  
  	 this >Lorg/jetbrains/projector/server/service/ProjectorFontProvider; isAgent ()Z isAgent$delegate %Lkotlin/properties/ReadWriteProperty;  	   $$delegatedProperties [Lkotlin/reflect/KProperty;  	   #kotlin/properties/ReadWriteProperty  getValue @(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/lang/Object;     java/lang/Boolean  booleanValue  
    setAgent (Z)V valueOf (Z)Ljava/lang/Boolean; $ %
  & setValue A(Ljava/lang/Object;Lkotlin/reflect/KProperty;Ljava/lang/Object;)V ( )  * <set-?> Z getCjkRegularFile ()Ljava/io/File; cjkRegularFile$delegate Lkotlin/Lazy; 0 1	  2 kotlin/Lazy 4 ()Ljava/lang/Object;  6 5 7 java/io/File 9 getCjkRegularFont ()Lsun/font/PhysicalFont; cjkRegularFont$delegate = 1	  > sun/font/PhysicalFont @ getSymbolsRegularFile symbolsRegularFile$delegate C 1	  D getSymbolsRegularFont symbolsRegularFont$delegate G 1	  H getDefaultRegularFile defaultRegularFile$delegate K 1	  L getDefaultRegularFont defaultRegularFont$delegate O 1	  P getDefaultRegularComposite ()Lsun/font/CompositeFont;  defaultRegularComposite$delegate T 1	  U sun/font/CompositeFont W getDefaultRegularItalicFile !defaultRegularItalicFile$delegate Z 1	  [ getDefaultRegularItalicFont !defaultRegularItalicFont$delegate ^ 1	  _  getDefaultRegularItalicComposite &defaultRegularItalicComposite$delegate b 1	  c getDefaultBoldFile defaultBoldFile$delegate f 1	  g getDefaultBoldFont defaultBoldFont$delegate j 1	  k getDefaultBoldComposite defaultBoldComposite$delegate n 1	  o getDefaultBoldItalicFile defaultBoldItalicFile$delegate r 1	  s getDefaultBoldItalicFont defaultBoldItalicFont$delegate v 1	  w getDefaultBoldItalicComposite #defaultBoldItalicComposite$delegate z 1	  { getMonoRegularFile monoRegularFile$delegate ~ 1	   getMonoRegularFont monoRegularFont$delegate � 1	  � getMonoRegularComposite monoRegularComposite$delegate � 1	  � getMonoRegularItalicFile monoRegularItalicFile$delegate � 1	  � getMonoRegularItalicFont monoRegularItalicFont$delegate � 1	  � getMonoRegularItalicComposite #monoRegularItalicComposite$delegate � 1	  � getMonoBoldFile monoBoldFile$delegate � 1	  � getMonoBoldFont monoBoldFont$delegate � 1	  � getMonoBoldComposite monoBoldComposite$delegate � 1	  � getMonoBoldItalicFile monoBoldItalicFile$delegate � 1	  � getMonoBoldItalicFont monoBoldItalicFont$delegate � 1	  � getMonoBoldItalicComposite  monoBoldItalicComposite$delegate � 1	  � getAllInstalledFonts ()Ljava/util/List; #()Ljava/util/List<Ljava/awt/Font;>; allInstalledFonts$delegate � 1	  � java/util/List � getAllMonoFontNames ()Ljava/util/Set; %()Ljava/util/Set<Ljava/lang/String;>; allMonoFontNames$delegate � 1	  � java/util/Set � getInstalledFonts #Lorg/jetbrains/annotations/NotNull; � �
  � getDefaultPhysicalFont N <
  � getDefaultPlatformFont ()[Ljava/lang/String; java/lang/String � 	Default-R � /fonts/Default-R.ttf � 
findFont2D '(Ljava/lang/String;II)Lsun/font/Font2D; name � kotlin/jvm/internal/Intrinsics � checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V � �
 � � hashCode ()I � �
 � � 
Default-RI � equals (Ljava/lang/Object;)Z � �
 � � 
Default-BI � Mono-RI � Mono-BI � CJK-R � Mono-B � Mono-R � 	Default-B � 	Symbols-R � u <
  � sun/font/Font2D � i <
  � ] <
  � � <
  � � <
  � � <
  � � <
  � ; <
   F <
  isMonospacedFont (Ljava/lang/String;)Z
  � S
  findFont2D$headlessOrAgent 5(Lsun/font/Font2D;Lsun/font/Font2D;)Lsun/font/Font2D;

  � S
  � S
  � S
  y S
  m S
  a S
  R S
  #kotlin/NoWhenBranchMatchedException
 	 Ljava/lang/String; style I fallback java/util/Locale# ROOT Ljava/util/Locale;%&	$' toLowerCase &(Ljava/util/Locale;)Ljava/lang/String;)*
 �+ 2this as java.lang.String).toLowerCase(Locale.ROOT)- checkNotNullExpressionValue/ �
 �0 java/lang/CharSequence2 mono4 kotlin/text/StringsKt6 contains$default G(Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZILjava/lang/Object;)Z89
7: menlo< areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z>?
 �@ � �
 B containsD � �E createFontFile 4(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File; .ttfI createTempFileKH
 :L deleteOnExitN 
 :O -org/jetbrains/projector/awt/font/PFontManagerQ java/lang/ClassS getResourceAsStream )(Ljava/lang/String;)Ljava/io/InputStream;UV
TW getAbsoluteFileY /
 :Z toPath ()Ljava/nio/file/Path;\]
 :^ java/nio/file/CopyOption`  java/nio/file/StandardCopyOptionb REPLACE_EXISTING "Ljava/nio/file/StandardCopyOption;de	cf java/nio/file/Filesh copy G(Ljava/io/InputStream;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Jjk
il tempFilen ;$i$a$-apply-ProjectorFontProvider$createFontFile$tempFile$1 #$this$createFontFile_u24lambda_u2d0 Ljava/io/File; link Ljava/io/InputStream; fontName fontPath loadPhysicalFont '(Ljava/io/File;)Lsun/font/PhysicalFont; INSTANCE /Lorg/jetbrains/projector/awt/font/PFontManager;yz	R{ createFont2D B(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;}~
R 4PFontManager.createFont2…FONT, false, false, null)� [Ljava/lang/Object;� kotlin/collections/ArraysKt� single '([Ljava/lang/Object;)Ljava/lang/Object;��
�� java/lang/NullPointerException� :null cannot be cast to non-null type sun.font.PhysicalFont� (Ljava/lang/String;)V �
�� [Lsun/font/Font2D;� createCompositeFont L(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont; .� $java/lang/invoke/StringConcatFactory� makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;��
��� 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;��  � getAbsolutePath ()Ljava/lang/String;��
 :� B /
 � . /
 � sun/font/SunFontManager� Z(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I[I[IZLsun/font/SunFontManager;)V �
 X�y 	 �  
 � headless Lsun/font/Font2D; agent access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;GH
 � $this access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;wx
 � access$getCjkRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File; access$getSymbolsRegularFile access$getDefaultRegularFile J /
 � access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;��
 � "access$getDefaultRegularItalicFile Y /
 � access$getDefaultBoldFile e /
 � access$getDefaultBoldItalicFile q /
 � access$getMonoRegularFile } /
 � access$getMonoRegularItalicFile � /
 � access$getMonoBoldFile � /
 � access$getMonoBoldItalicFile � /
 � access$getDefaultRegularFont W(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Lsun/font/PhysicalFont; "access$getDefaultRegularItalicFont access$getDefaultBoldFont access$getDefaultBoldItalicFont access$getMonoRegularFont access$getMonoRegularItalicFont access$getMonoBoldFont access$getMonoBoldItalicFont <clinit> kotlin/reflect/KProperty� 1kotlin/jvm/internal/MutablePropertyReference1Impl�  
isAgent()Z� 9(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V �
�� -kotlin/jvm/internal/MutablePropertyReference1� kotlin/jvm/internal/Reflection� mutableProperty1 S(Lkotlin/jvm/internal/MutablePropertyReference1;)Lkotlin/reflect/KMutableProperty1;��
��
  	 kotlin/properties/Delegates� Lkotlin/properties/Delegates;y�	�� notNull '()Lkotlin/properties/ReadWriteProperty; 
� Morg/jetbrains/projector/server/service/ProjectorFontProvider$cjkRegularFile$2 OLorg/jetbrains/projector/server/service/ProjectorFontProvider$cjkRegularFile$2;y	 kotlin/jvm/functions/Function0	 kotlin/LazyKt lazy /(Lkotlin/jvm/functions/Function0;)Lkotlin/Lazy;
 Morg/jetbrains/projector/server/service/ProjectorFontProvider$cjkRegularFont$2 OLorg/jetbrains/projector/server/service/ProjectorFontProvider$cjkRegularFont$2;y	 Qorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFile$2 SLorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFile$2;y	 Qorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFont$2 SLorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFont$2;y	 Qorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFile$2  SLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFile$2;y"	!# Qorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFont$2% SLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFont$2;y'	&( Vorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularComposite$2* XLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularComposite$2;y,	+- Worg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFile$2/ YLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFile$2;y1	02 Worg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFont$24 YLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFont$2;y6	57 \org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicComposite$29 ^Lorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicComposite$2;y;	:< Norg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFile$2> PLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFile$2;y@	?A Norg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFont$2C PLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldFont$2;yE	DF Sorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldComposite$2H ULorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldComposite$2;yJ	IK Torg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFile$2M VLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFile$2;yO	NP Torg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFont$2R VLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFont$2;yT	SU Yorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicComposite$2W [Lorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicComposite$2;yY	XZ Norg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFile$2\ PLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFile$2;y^	]_ Norg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFont$2a PLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFont$2;yc	bd Sorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularComposite$2f ULorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularComposite$2;yh	gi Torg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFile$2k VLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFile$2;ym	ln Torg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFont$2p VLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicFont$2;yr	qs Yorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicComposite$2u [Lorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularItalicComposite$2;yw	vx Korg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFile$2z MLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFile$2;y|	{} Korg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFont$2 MLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFont$2;y�	�� Porg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldComposite$2� RLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldComposite$2;y�	�� Qorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFile$2� SLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFile$2;y�	�� Qorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFont$2� SLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFont$2;y�	�� Vorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicComposite$2� XLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicComposite$2;y�	�� Porg/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2� RLorg/jetbrains/projector/server/service/ProjectorFontProvider$allInstalledFonts$2;y�	�� Oorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2� QLorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2;y�	�� /[Lkotlin/reflect/KProperty<Ljava/lang/Object;>; DEFAULT_R_NAME DEFAULT_R_PATH DEFAULT_RI_NAME DEFAULT_RI_PATH /fonts/Default-RI.ttf� DEFAULT_B_NAME DEFAULT_B_PATH /fonts/Default-B.ttf� DEFAULT_BI_NAME DEFAULT_BI_PATH /fonts/Default-BI.ttf� MONO_R_NAME MONO_R_PATH /fonts/Mono-R.ttf� MONO_RI_NAME MONO_RI_PATH /fonts/Mono-RI.ttf� MONO_B_NAME MONO_B_PATH /fonts/Mono-B.ttf� MONO_BI_NAME MONO_BI_PATH /fonts/Mono-BI.ttf� 
CJK_R_NAME 
CJK_R_PATH /fonts/CJK-R.otf� SYMBOLS_R_NAME DEFAULT_FONT_NAME DEFAULT_FONT_PATH DEFAULT_SIZE    Lkotlin/Metadata; mv           k xi   0 d1>��`








 


"










7

Æ��20B¢J$03202020)HJ0)2020HJ%0202020HJ0a20HJ0.20)HR0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R	0XT¢
��R
0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R0XT¢
��R!008BX¢
 !R)"
 $*000#8BX¢
'!%&R(0)8BX¢
,!*+R-0.8BX¢
1!/0R2038BX¢
6!45R70)8BX¢
9!8+R:0.8BX¢
<!;0R=038BX¢
?!>5R@0)8BX¢
B!A+RC0.8BX¢
E!D0RF0.8VX¢G0RH00I8VX¢JKRL038BX¢
N!M5RO0)8BX¢
Q!P+RR0.8BX¢
T!S0RU038BX¢
W!V5RX0)8BX¢
Z!Y+R[0.8BX¢
]!\0R^008VX¢_R+b0a2`0a8F@FX¢
fgbc"deRh038BX¢
j!i5Rk0)8BX¢
m!l+Rn0.8BX¢
p!o0Rq038BX¢
s!r5Rt0)8BX¢
v!u+Rw0.8BX¢
y!x0Rz038BX¢
|!{5R}0)8BX¢
!~+R0.8BX¢
!0R038BX¢
!5R0)8BX¢
!+R0.8BX¢
!0R0)8BX¢
!+R0.8BX¢
!0¨ d2 2Lorg/jetbrains/projector/awt/service/FontProvider;   allInstalledFonts Ljava/awt/Font; allMonoFontNames kotlin.jvm.PlatformType cjkRegularFile cjkRegularFont Lsun/font/PhysicalFont; defaultBoldComposite Lsun/font/CompositeFont; defaultBoldFile defaultBoldFont defaultBoldItalicComposite defaultBoldItalicFile defaultBoldItalicFont defaultPhysicalFont defaultPlatformFont defaultRegularComposite defaultRegularFile defaultRegularFont defaultRegularItalicComposite defaultRegularItalicFile defaultRegularItalicFont installedFonts monoBoldComposite monoBoldFile monoBoldFont monoBoldItalicComposite monoBoldItalicFile monoBoldItalicFont monoRegularComposite monoRegularFile monoRegularFont monoRegularItalicComposite monoRegularItalicFile monoRegularItalicFont symbolsRegularFile symbolsRegularFont projector-server-common ProjectorFontProvider.kt RuntimeInvisibleAnnotations 	Signature ConstantValue Code LineNumberTable LocalVariableTable StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 1     7 y  �     �     �   �    �     �    0 1 �     �    = 1 �     �    C 1 �     �    G 1 �     �    K 1 �     �    O 1 �     �    T 1 �     �    Z 1 �     �    ^ 1 �     �    b 1 �     �    f 1 �     �    j 1 �     �    n 1 �     �    r 1 �     �    v 1 �     �    z 1 �     �    ~ 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �    � 1 �     �   �      ��     �   �      ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �     ��     �   �      ��     �   �      ��     �   �      ��     �   �!     � @       /     *� 
�          '                  G     � *� 2�  � � !�          )    )             " #    O     � *� 2� '� + �          )    )               , -   . /    <     � 3L+� 8 � :�      
    +  +             ; <    <     � ?L+� 8 � A�      
    ,  ,             B /    <     � EL+� 8 � :�      
    1  1             F <    <     � IL+� 8 � A�      
    2  2             J /    <     � ML+� 8 � :�      
    4  4             N <    <     � QL+� 8 � A�      
    5  5             R S    <     � VL+� 8 � X�      
    6  6             Y /    <     � \L+� 8 � :�      
    8  8             ] <    <     � `L+� 8 � A�      
    9  9             a S    <     � dL+� 8 � X�      
    :  :             e /    <     � hL+� 8 � :�      
    <  <             i <    <     � lL+� 8 � A�      
    =  =             m S    <     � pL+� 8 � X�      
    >  >             q /    <     � tL+� 8 � :�      
    @  @             u <    <     � xL+� 8 � A�      
    A  A             y S    <     � |L+� 8 � X�      
    B  B             } /    <     � �L+� 8 � :�      
    D  D             � <    <     � �L+� 8 � A�      
    E  E             � S    <     � �L+� 8 � X�      
    F  F             � /    <     � �L+� 8 � :�      
    H  H             � <    <     � �L+� 8 � A�      
    I  I             � S    <     � �L+� 8 � X�      
    J  J             � /    <     � �L+� 8 � :�      
    L  L             � <    <     � �L+� 8 � A�      
    M  M             � S    <     � �L+� 8 � X�      
    N  N             � /    <     � �L+� 8 � :�      
    P  P             � <    <     � �L+� 8 � A�      
    Q  Q             � S    <     � �L+� 8 � X�      
    R  R             � �    <     � �L+� 8 � ��      
    T  T           �    �  � �    <     � �L+� 8 � ��      
    c  c           �    �  � �    /     *� ��          m           �    ��     �    � <    /     *� ð          o           �     �    � �    ;     � �L+�S+�S+�          q           �     �    � �   f    m+ϸ �+:� ٫   l   
����   ���    ��D�s   g�D�c   Z���Q   ���A   t��   ��o�   ��o�   �_/X�   �۶ ߚ {�� ߚ n� �� ߚ �� �� ߚ �� �� ߚ ǧ �� ߚ z� �� ߚ m� �ɶ ߚ  � ��� ߚ � �� ߚ �� ��   7         #   -   *� �� � *� �� � *� �� � 
*� �� ��   7         #   -   *� �� � *� �� � *� �� � 
*� �� �*�� �*�� �*+�6� p�      X         0   D   *�	� �*� �� �� �*�� �*� �� �� �*�� �*� �� �� �*�� �*� �� �� {� n�    V         .   B   *�� �*� �� �� G*�� �*� �� �� 3*�� �*� �� �� *�� �*� �� �� �Y���      C $� h �			F � 			F � � )   �  G �   n   t � u v w x" y) u* {D |N }X ~b i {j �r �z �� �� �� �� �� �� � �( �< �P �l �   *   m      m �   m !   m"! �     �       �           �     N+�(�,M,.�1,�35�3�;� )+�(�,M,.�1,=�A� *�C+�F � � �       � H �@       �  � 2 �       N       N �  GH    �     J+J�M::6�P NR,�X:-�[�_�a:�g�aS�mX-o�1-�      "    �  �  �  �  �  � " � A �   H   p!   	qr   1nr  " (st    J       Ju    Jv  wx    }     .�|+��M,��1,����Y� W��Y����� A�       � *   :�         �       .       .nr  ��    � 
    X� XY+,��  � �:-��S*����S*����S� �:+S�S�S�|�����      * 
   �  �  � 1 � J � K � L � M � N � T �   *    X       Xu    X     Xnr  
    r     !����=� *� � +� �Y���       � G �       �  �  �   �       !��     !�� ��    E     *+,���         '        �      u    v ��    :     *+���         '       �      nr ��    /     *���         '       �   ��    /     *���         '       �   ��    /     *�İ         '       �   ��    P     *+,-�Ȱ         '   *    �      u         nr ��    /     *�˰         '       �   ��    /     *�ΰ         '       �   ��    /     *�Ѱ         '       �   ��    /     *�԰         '       �   ��    /     *�װ         '       �   ��    /     *�ڰ         '       �   ��    /     *�ݰ         '       �   ��    /     *� ð         '       �   ��    /     *� ��         '       �   ��    /     *� ��         '       �   ��    /     *� �         '       �   ��    /     *� ��         '       �   ��    /     *� ��         '       �   ��    /     *� ��         '       �   ��    /     *� ��         '       �    �    1    ���K*��Y���������S*� � Y�������� ��
�� 3��
�� ?��
�� E��
�� I�$�
�� M�)�
�� Q�.�
�� V�3�
�� \�8�
�� `�=�
�� d�B�
�� h�G�
�� l�L�
�� p�Q�
�� t�V�
�� x�[�
�� |�`�
�� ��e�
�� ��j�
�� ��o�
�� ��t�
�� ��y�
�� ��~�
�� ����
�� ����
�� ����
�� ����
�� ����
�� ����
�� ����
�� ��      ~   ) 8 + D , P 1 \ 2 h 4 t 5 � 6 � 8 � 9 � : � < � = � > � @ � A � B � D E F H( I4 J@ LL MX Nd Pp Q| R� T� c    �                     !     &     +     0     5     :     ?     D     I     N     S     X     ]     b     g     l     q     v     {     �     �     �     �     �     �     �        �   � �[ I�I�I��I��I��[ s��[ �s s�s s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s�s �s �s �s 1s�s�s�s �s �s �s�srs .s /s 0s�s�s ;s <s =s�s�s ms Ss ns�s es fs�s is js�s ys zs�s qs rs�s us vs�s �s�s�s �s �s�s Rs Ts�s Js Ks�s Ns Os�s as bs�s Ys Zs�s ]s ^s�s �s ,s�s s s "s #s s s�s �s �s�s �s �s�s �s �s�s �s �s�s �s �s�s �s �s�s �s �s�s }s ~s�s �s �s�s �s �s�s �s �s�s �s �s�s Bs Cs�s Fs Gs�sus snsGsvs �s�s �s"ssws�	    � �PK          x�&�
  �
  Q   org/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId.class����   7 V Korg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId  java/lang/Object  <init> (II)V ()V  
   identityHash I 
 	   	stateHash  	   this MLorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId; getIdentityHash ()I getStateHash 
component1 
component2 copy Q(II)Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId; #Lorg/jetbrains/annotations/NotNull;  
   copy$default �(Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId;IIILjava/lang/Object;)Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId;  
   toString ()Ljava/lang/String; ,IdentityImageId(identityHash=, stateHash=) # $java/lang/invoke/StringConcatFactory % makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; ' (
 & ) * (II)Ljava/lang/String; ' ,   - hashCode java/lang/Integer 0 (I)I / 2
 1 3 result equals (Ljava/lang/Object;)Z $Lorg/jetbrains/annotations/Nullable; other Ljava/lang/Object; Lkotlin/Metadata; mv           k xi   0 d1 ��� 

��
��

	



����20B00¢J		0HÆJ	
0HÆJ0��2020HÆJ020HÖJ	0HÖJ	0HÖR0¢
��R0¢
��¨ d2   projector-server-common ;org/jetbrains/projector/server/service/ProjectorImageCacher H IdentityImageId ProjectorImageCacher.kt Code LineNumberTable LocalVariableTable RuntimeInvisibleAnnotations StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 0       
         
     L   M     *� 	*� *� �    M       L N                
             L   /     *� �    M       L N                L   /     *� �    M       L N                L   #     *� �    N                L   #     *� �    N                L   <     
� Y� �    N        
       
 
     
    O       	    L   3     ~� *� <~� *� =*�  �    P    
  ! "  L   ,     *� *� � .  �    N            O         /   L   ?     *� � 4<h*� � 4`<�    N       5           6 7  L   j     1*+� �+� � �+� M*� ,� � �*� ,� � ��    P    �   N       1       1 9 :  Q     8    R   
   I J  S    K T   d  ;  <[ I =I >I ? @I = AI B C[ s D E[ s s Fs 
s Fs s s s s s s s s 6s Fs 9s /s !s Fs G U     +  $PK          9�|��  �  W   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFile$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-BI  /fonts/Mono-BI.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       P 9            ;       A     8   /     *� "�    :       P 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          @��d  d  ]   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFont$2.class����   7 A Worg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this YLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularItalicFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   "access$getDefaultRegularItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       9 9            ;       A     8   /     *� "�    :       9 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �b���  �  Q   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFile$2.class����   7 A Korg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this MLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-B  /fonts/Mono-B.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       L 9            ;       A     8   /     *� "�    :       L 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �*]H�  �  W   org/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFile$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$symbolsRegularFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   	Symbols-R  /fonts/Mono-R.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       1 9            ;       A     8   /     *� "�    :       1 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          3�ϑ�  �  _   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicComposite$2.class����   7 E Yorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this [Lorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   
Default-BI  
bolditalic  access$getDefaultBoldItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       B =            ?       A  $  <   /     *� &�    >       B =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          �u7�  �  T   org/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFile$2.class����   7 A Norg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFile$2  LLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/io/File;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this PLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoRegularFile$2; invoke ()Ljava/io/File; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-R  /fonts/Mono-R.ttf  access$createFontFile r(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Ljava/io/File; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   5     � � �    :       D 9            ;       A     8   /     *� "�    :       D 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          Mq�  �  \   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularComposite$2.class����   7 E Vorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this XLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   	Default-R  plain  access$getDefaultRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       6 =            ?       A  $  <   /     *� &�    >       6 =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          S\��R  R  W   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFont$2.class����   7 A Qorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this SLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultRegularFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getDefaultRegularFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       5 9            ;       A     8   /     *� "�    :       5 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �@w[�  �  N   org/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion.class����   7 � Horg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion  java/lang/Object  <init> ()V  
   this JLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion; toPoints "(Ljava/util/List;)Ljava/util/List; �(Ljava/util/List<Lkotlin/Pair<Ljava/lang/Integer;Ljava/lang/Integer;>;>;)Ljava/util/List<Lorg/jetbrains/projector/common/protocol/data/Point;>; java/lang/Iterable  java/util/ArrayList   kotlin/collections/CollectionsKt  collectionSizeOrDefault (Ljava/lang/Iterable;I)I  
   (I)V  
   java/util/Collection  iterator ()Ljava/util/Iterator;     java/util/Iterator ! hasNext ()Z # $ " % next ()Ljava/lang/Object; ' ( " ) kotlin/Pair + 
component1 - (
 , . java/lang/Number 0 intValue ()I 2 3
 1 4 
component2 6 (
 , 7 2org/jetbrains/projector/common/protocol/data/Point 9 (DD)V  ;
 : < add (Ljava/lang/Object;)Z > ?  @ java/util/List B 6$i$a$-map-ProjectorDrawEventQueue$Companion$toPoints$1 I x y 	$dstr$x$y Lkotlin/Pair; 
item$iv$iv Ljava/lang/Object; 
$i$f$mapTo $this$mapTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv $this$toPoints Ljava/util/List; getCommands .()Ljava/util/concurrent/ConcurrentLinkedQueue; �()Ljava/util/concurrent/ConcurrentLinkedQueue<Lkotlin/Pair<Lorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target;Ljava/util/List<Lorg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent;>;>;>; #Lorg/jetbrains/annotations/NotNull; >org/jetbrains/projector/server/service/ProjectorDrawEventQueue Y access$getCommands$delegate$cp 6()Lorg/jetbrains/projector/server/core/util/SizeAware; [ \
 Z ] $$delegatedProperties [Lkotlin/reflect/KProperty; _ `	  a 2org/jetbrains/projector/server/core/util/SizeAware c getValue D(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/util/Collection; e f
 d g *java/util/concurrent/ConcurrentLinkedQueue i access$toPoints l(Lorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion;Ljava/util/List;)Ljava/util/List;  
  m $this 	$receiver 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; <clinit> kotlin/reflect/KProperty v *kotlin/jvm/internal/PropertyReference1Impl x commands z 9getCommands()Ljava/util/concurrent/ConcurrentLinkedQueue; | 9(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V  ~
 y  &kotlin/jvm/internal/PropertyReference1 � kotlin/jvm/internal/Reflection � 	property1 E(Lkotlin/jvm/internal/PropertyReference1;)Lkotlin/reflect/KProperty1; � �
 � � /[Lkotlin/reflect/KProperty<Ljava/lang/Object;>; Lkotlin/Metadata; mv           k xi   0 d1 ���4

��




 



��


����20B¢J$00*0000HR30
00008FX¢
	
R0X¢
��¨ d2   ,Ljava/util/concurrent/ConcurrentLinkedQueue; QLorg/jetbrains/projector/common/protocol/toClient/ServerDrawCommandsEvent$Target; DLorg/jetbrains/projector/common/protocol/toClient/ServerWindowEvent; commands$delegate 4Lorg/jetbrains/projector/server/core/util/SizeAware; logger -Lorg/jetbrains/projector/util/logging/Logger; 4Lorg/jetbrains/projector/common/protocol/data/Point; projector-server-common 	Companion ProjectorDrawEventQueue.kt 	Signature Code LineNumberTable LocalVariableTable StackMapTable RuntimeInvisibleAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1      _ `  �    �      �   /     *� �    �       � �        	 
       �  ]     �+� M>,:� Y,
� � � :6�   :� & � M� * :� ,:	:6
	� /� 1� 56	� 8� 1� 56� :Y��� =_� A W���� C �    �     � (   C    "  � S �   "    �  �  � ; � I � | � � � � � �   z  I ' D E 
 V  F E  c  G E  F * H I 	 ; > J K   _ L E   b M N   b O P   { Q E   } R N    � 	 
     � S T  �      U V  �   B     � ^*� b2� h� j�    �       �    � �        	 
   �    W �     X   k l  �   :     *+� n�    �      � �        o 
      p T   q  �   -     *� r�    �        	 
      s t   u   �   <     $� wK*� yY{}� �� �� �� wS*� b�    �      �  �   
   Z �  �    � �  �SMAP
ProjectorDrawEventQueue.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
*L
1#1,182:1
1547#2:183
1618#2,3:184
*S KotlinDebug
*F
+ 1 ProjectorDrawEventQueue.kt
org/jetbrains/projector/server/service/ProjectorDrawEventQueue$Companion
*L
173#1:183
173#1:184,3
*E
 �   d  �  �[ I �I �I � �I � �I � �[ s � �[ s 
s �s s zs �s Is �s �s �s Us Vs �s �s �s �s s �s �s �PK          �B��  �  [   org/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder$build$2.class����   7 < Uorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder$build$2  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this WLorg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder$build$2; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; pPerformance problem detected: draw commands are added but they only change drawing state but don't draw anything  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   Morg/jetbrains/projector/server/service/ProjectorDrawEventQueue$CommandBuilder + build - 	 >org/jetbrains/projector/server/service/ProjectorDrawEventQueue / CommandBuilder ProjectorDrawEventQueue.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  3   $     *� �    4                3   -     �    5       X 4            6       A    3   /     *� �    5       X 4              	  3         � Y� � �      7           , 0 1  8    , . 9     :    2 ;   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          �!֨  �  \   org/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicComposite$2.class����   7 E Vorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicComposite$2  VLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/CompositeFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this XLorg/jetbrains/projector/server/service/ProjectorFontProvider$monoBoldItalicComposite$2; invoke ()Lsun/font/CompositeFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   Mono-BI  
bolditalic  access$getMonoBoldItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$createCompositeFont �(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Lsun/font/CompositeFont;   !
  " ()Ljava/lang/Object;  
  % <clinit>  	
  (  	  * Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/CompositeFont; ' 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  <   $     *� �    =                <   ;     � � � � #�    >       R =            ?       A  $  <   /     *� &�    >       R =             ' 	  <         � Y� )� +�      @   
        A     : B     C    ; D   4  ,  -[ I .I /I 0 1I 2 3I 4 5[ s 6 7[ s 8s 9s PK          o,/�2  2  A   org/jetbrains/projector/server/service/ProjectorImageCacher.class����   7� ;org/jetbrains/projector/server/service/ProjectorImageCacher  java/lang/Object  /org/jetbrains/projector/awt/service/ImageCacher  <init> ()V  
  	 this =Lorg/jetbrains/projector/server/service/ProjectorImageCacher; 
getImageId Z(Ljava/awt/Image;Ljava/lang/String;)Lorg/jetbrains/projector/common/protocol/data/ImageId; #Lorg/jetbrains/annotations/NotNull; image  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   
methodName  java/awt/image/BufferedImage  putImage V(Ljava/awt/image/BufferedImage;)Lorg/jetbrains/projector/common/protocol/data/ImageId;  
   sun/awt/image/ToolkitImage   getBufferedImage  ()Ljava/awt/image/BufferedImage; " #
 ! $ image.bufferedImage & checkNotNullExpressionValue ( 
  ) java/awt/Image + ,, extracted BufferedImage from ToolkitImage - $java/lang/invoke/StringConcatFactory / makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; 1 2
 0 3 4 &(Ljava/lang/String;)Ljava/lang/String; 1 6   7  
  9 0org/jetbrains/projector/awt/image/PVolatileImage ; Eorg/jetbrains/projector/common/protocol/data/ImageId$PVolatileImageId = getId ()J ? @
 < A (J)V  C
 > D 4org/jetbrains/projector/common/protocol/data/ImageId F sun/awt/image/SunVolatileImage H getSnapshot J #
 I K image.snapshot M +, extracted snapshot from SunVolatileImage O  7 #java/awt/image/MultiResolutionImage R getResolutionVariants ()Ljava/util/List; T U S V image.resolutionVariants X  kotlin/collections/CollectionsKt Z singleOrNull $(Ljava/util/List;)Ljava/lang/Object; \ ]
 [ ^ INSTANCE ` 	  a , extracted single variant c  7 <org/jetbrains/projector/common/protocol/data/ImageId$Unknown f java/util/List h size ()I j k i l = received MultiResolutionImage with bad variant count ():  n 7(Ljava/lang/String;ILjava/awt/Image;)Ljava/lang/String; 1 p  q (Ljava/lang/String;)V  s
 g t getClass ()Ljava/lang/Class; v w
  x kotlin/jvm/internal/Reflection z getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass; | }
 { ~ kotlin/reflect/KClass � getQualifiedName ()Ljava/lang/String; � � � �  received :  � H(Ljava/lang/String;Ljava/lang/String;Ljava/awt/Image;)Ljava/lang/String; 1 �  � +$i$a$-let-ProjectorImageCacher$getImageId$1 I it Ljava/awt/Image; Ljava/lang/String; java/lang/String � getNewImages .()Ljava/util/concurrent/ConcurrentLinkedQueue; |()Ljava/util/concurrent/ConcurrentLinkedQueue<Lorg/jetbrains/projector/common/protocol/toClient/ServerImageDataReplyEvent;>; newImages$delegate 4Lorg/jetbrains/projector/server/core/util/SizeAware; � �	  � $$delegatedProperties [Lkotlin/reflect/KProperty; � �	  � 2org/jetbrains/projector/server/core/util/SizeAware � getValue D(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/util/Collection; � �
 � � *java/util/concurrent/ConcurrentLinkedQueue � putImageIfNeeded �(Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId;Ljava/awt/Image;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;)V#<T:Ljava/awt/Image;>(Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId;TT;Lkotlin/jvm/functions/Function1<-TT;+Lorg/jetbrains/projector/common/protocol/data/ImageId;>;Lkotlin/jvm/functions/Function1<-TT;+Lorg/jetbrains/projector/common/protocol/data/ImageData;>;)V identityIdToImageId Ljava/util/Map; � �	  � java/util/Map � containsKey (Ljava/lang/Object;)Z � � � � kotlin/jvm/functions/Function1 � invoke &(Ljava/lang/Object;)Ljava/lang/Object; � � � � put 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; � � � � 	idToImage � �	  � 6org/jetbrains/projector/common/protocol/data/ImageData � Gorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage � java/lang/ref/SoftReference � (Ljava/lang/Object;)V  �
 � � X(Ljava/lang/ref/SoftReference;Lorg/jetbrains/projector/common/protocol/data/ImageData;)V  �
 � � � �
  � Jorg/jetbrains/projector/common/protocol/toClient/ServerImageDataReplyEvent � q(Lorg/jetbrains/projector/common/protocol/data/ImageId;Lorg/jetbrains/projector/common/protocol/data/ImageData;)V  �
 � � add � �
 � � kotlin/Unit � Lkotlin/Unit; ` �	 � � 	imageData 8Lorg/jetbrains/projector/common/protocol/data/ImageData; imageId 6Lorg/jetbrains/projector/common/protocol/data/ImageId; :$i$a$-synchronized-ProjectorImageCacher$putImageIfNeeded$1 identityImageId MLorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId; imageIdBuilder  Lkotlin/jvm/functions/Function1; imageConverter Korg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId � java/lang/Throwable � java/lang/System � identityHashCode (Ljava/lang/Object;)I � �
 � � =org/jetbrains/projector/server/service/ProjectorImageCacherKt � getStateHash !(Ljava/awt/image/BufferedImage;)I � �
 � � (II)V  �
 � � Forg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$1 � HLorg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$1; ` �	 � � Forg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$2 � HLorg/jetbrains/projector/server/service/ProjectorImageCacher$putImage$2; ` �	 � � � �
  get � � checkNotNull �
  id Ljava/awt/image/BufferedImage; getImage p(Lorg/jetbrains/projector/common/protocol/data/ImageId;)Lorg/jetbrains/projector/common/protocol/data/ImageData; $Lorg/jetbrains/annotations/Nullable;	 getData :()Lorg/jetbrains/projector/common/protocol/data/ImageData;
 � collectGarbage filterNullsOutOfMutableMap (Ljava/util/Map;)V
  removeAllImageIdsWithoutImages
  8$i$a$-synchronized-ProjectorImageCacher$collectGarbage$1 isAlive (Ljava/util/Map$Entry;)Z }<K:Ljava/lang/Object;>(Ljava/util/Map$Entry<+TK;Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage;>;)Z java/util/Map$Entry ()Ljava/lang/Object; �! " getReference ()Ljava/lang/ref/SoftReference;$%
 �&!
 �( entry Ljava/util/Map$Entry; v<K:Ljava/lang/Object;>(Ljava/util/Map<TK;Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage;>;)V entrySet ()Ljava/util/Set;-. �/ java/util/Set1 iterator ()Ljava/util/Iterator;3425 java/util/Iterator7 hasNext ()Z9:8; next=!8>
 @ removeB 8C Ljava/util/Iterator; map c<K:Ljava/lang/Object;>(Ljava/util/Map<TK;Lorg/jetbrains/projector/common/protocol/data/ImageId;>;)V $$this$removeAllImageIdsWithoutImages 6(Ljava/awt/Image;Ljava/lang/String;)Ljava/lang/Object; <clinit> kotlin/reflect/KPropertyK *kotlin/jvm/internal/PropertyReference1ImplM 	newImagesO :getNewImages()Ljava/util/concurrent/ConcurrentLinkedQueue;Q 9(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V S
NT &kotlin/jvm/internal/PropertyReference1V 	property1 E(Lkotlin/jvm/internal/PropertyReference1;)Lkotlin/reflect/KProperty1;XY
 {Z
  	
 � 	 java/util/Collection^ .org/jetbrains/projector/server/ProjectorServer` 	Companion :Lorg/jetbrains/projector/server/ProjectorServer$Companion;bc	ad 8org/jetbrains/projector/server/ProjectorServer$Companionf  getENABLE_BIG_COLLECTIONS_CHECKSh:
gi $getBIG_COLLECTIONS_CHECKS_START_SIZEk k
gl java/lang/Integern valueOf (I)Ljava/lang/Integer;pq
or getSimpleNamet � �u -org/jetbrains/projector/util/logging/LoggerKtw Logger A(Ljava/lang/String;)Lorg/jetbrains/projector/util/logging/Logger;yz
x{ Y(Ljava/util/Collection;Ljava/lang/Integer;Lorg/jetbrains/projector/util/logging/Logger;)V }
 �~ java/util/LinkedHashMap�
� 	 $i$f$Logger � /[Lkotlin/reflect/KProperty<Ljava/lang/Object;>; �Ljava/util/Map<Lorg/jetbrains/projector/common/protocol/data/ImageId;Lorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage;>; �Ljava/util/Map<Lorg/jetbrains/projector/server/service/ProjectorImageCacher$IdentityImageId;Lorg/jetbrains/projector/common/protocol/data/ImageId;>; Lkotlin/Metadata; mv           k xi   0 d1 ��h



%


��

��








��

��

��
&
��




Æ��20:,-B¢J0J"0"��2H00HJ020J02020HJ"0"��2H00 HJ!020"JY#0"��$*02%02H$2&H$00'¢(2)H$00'¢(H¢*J+0"��*H00HR000X¢
��R000X¢
��R!	00
8FX¢
¨. d2 1Lorg/jetbrains/projector/awt/service/ImageCacher;   ILorg/jetbrains/projector/server/service/ProjectorImageCacher$LivingImage; ,Ljava/util/concurrent/ConcurrentLinkedQueue; LLorg/jetbrains/projector/common/protocol/toClient/ServerImageDataReplyEvent; K T Lkotlin/Function1; Lkotlin/ExtensionFunctionType; IdentityImageId LivingImage projector-server-common ProjectorImageCacher.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations BootstrapMethods 1       `  �        � � �   �  � � �        
 � � �   ��         � � �   ��            �   /     *� 
�   �       0�               �    	  +� ,� +N-� � *+� � � �-� !� %*+� !� %:'� *� ,,� 8  � :� �-� <� � >Y+� <� B� E� G� �-� I� %*+� I� L:N� *� ,,� Q  � :� �-� S� l+� S� W :Y� *� _� ,:� � :6� b,� e  � : :� %� gY,+� S� W � m +� r  � u� G� %�  � gY,+� y� � � +� �  � u� G�   �   < 	�   ,((� +  , iU G� (   , � , G , i  � \ G�   ^   2  3   5 I 7 d 9 � ; � < � = � < � = � < � = � � � = � = � = � ; � > � ? � > � ; � A B�   4  �  � �  �  � �           �     � �       �             � � �   B     � �*� �2� �� ��   �       D    D�           �    ��         � � �  k  
   �*� 6� �+� � � n-,� � � G:� �+� � W� �� � � I,� � � �:� �:� �Y� �Y,� �� �:		� � W� b� ̻ �Y� Ѷ �W � �:*ç 
:*���   � �   � � �   �   % � }� 
   � , � �  ��  ��   6    X  Y  Y  Z  \ * ] 4 ] 7 ^ D _ h a } d � X � e�   R  D 9 � �   _ � �   x � �    �       � � �    �  �    � � �    � � � �    �    �   �     <+� � �Y+� �+� � �M*,+� ,� �� �� � ��� �,� Y�� G�   �      h 
 i  j  h  m + o�       &	 �    <       < 
 �       �         �   d      +� � �+� � �Y� W� ��   �   
 \ �B ��      s�                	 � �      �          �   �     '*� <� b� ��� b� �� � �L*ç L*�+��    !   ! " !   �    a ��  ��       w  x  y  z  w & {�       �    '      �   W     +�# � ¶'�)� � �   �    @�       ~�              *+ �     �   �     1+�0 �6 M,�< � ,�? � N*-�A���,�D ��߱   �   	 � 8#�       �  �  �  �  � ' � 0 ��   *   =+   %3E    1       1F � �   ,  �   �     :+�0 �6 M,�< � ',�? � N� �-�# � � ���,�D ��ֱ   �   	 � 8,�   "    �  �  �  �  � - � 0 � 9 ��   *   =+   .3E    :       :H � �   GA I �   E     *+,� :�   �       0�                 �      �  J  �       ��LK*�NYPR�U�W�[�LS*� �� Y�\� b� �Y� �Y�]�_�e�j� �e�m�s� ;� �v Y��|�� ���Y��� �� ���Y��� �� ��   �   + � R �  / /_�   �  / /_o�   * 
  D 3 E = F S G Z � f D l N v N y P � P�     U � �   �   "  �      �      � �  � � �   ��  �SMAP
ProjectorImageCacher.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorImageCacher.kt
org/jetbrains/projector/server/service/ProjectorImageCacher
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
+ 3 ReifiedLogger.kt
org/jetbrains/projector/util/logging/ReifiedLoggerKt
*L
1#1,213:1
1#2:214
27#3:215
*S KotlinDebug
*F
+ 1 ProjectorImageCacher.kt
org/jetbrains/projector/server/service/ProjectorImageCacher
*L
71#1:215
*E
�   � � �[ I�I�I��I��I��[ s��[ /s s�s s �s�s �s�s �s �sOs�s�s �s �s �s �ss�ss�sFss �s	s s s �s s�ss�s*s�s s
s �s�s �s �s�s�s �s �ss�s�s��      5  . 5  P 5  d 5  o 5  �PK          r��n[  [  Z   org/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFont$2.class����   7 A Torg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFont$2  ULkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lsun/font/PhysicalFont;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this VLorg/jetbrains/projector/server/service/ProjectorFontProvider$defaultBoldItalicFont$2; invoke ()Lsun/font/PhysicalFont; #Lorg/jetbrains/annotations/NotNull; <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getDefaultBoldItalicFile N(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Ljava/io/File;  
   access$loadPhysicalFont e(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;Ljava/io/File;)Lsun/font/PhysicalFont;  
   ()Ljava/lang/Object;  
  ! <clinit>  	
  $  	  & Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous> Lsun/font/PhysicalFont; # 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  8   $     *� �    9                8   7     � � � � �    :       A 9            ;       A     8   /     *� "�    :       A 9             # 	  8         � Y� %� '�      <   
        =     6 >     ?    7 @   4  (  )[ I *I +I , -I . /I 0 1[ s 2 3[ s 4s 5s PK          �XW��  �  U   org/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2.class����   7 _ Oorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2  bLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/util/Set<+Ljava/lang/String;>;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this QLorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2; invoke ()Ljava/util/Set; %()Ljava/util/Set<Ljava/lang/String;>; #Lorg/jetbrains/annotations/NotNull; sun/font/PhysicalFont  <org/jetbrains/projector/server/service/ProjectorFontProvider  INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider;  	   access$getMonoRegularFont W(Lorg/jetbrains/projector/server/service/ProjectorFontProvider;)Lsun/font/PhysicalFont;  
   access$getMonoRegularItalicFont  
    access$getMonoBoldFont " 
  # access$getMonoBoldItalicFont % 
  & kotlin/sequences/SequencesKt ( 
sequenceOf 0([Ljava/lang/Object;)Lkotlin/sequences/Sequence; * +
 ) , Qorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2$1 . SLorg/jetbrains/projector/server/service/ProjectorFontProvider$allMonoFontNames$2$1;  0	 / 1 kotlin/jvm/functions/Function1 3 map X(Lkotlin/sequences/Sequence;Lkotlin/jvm/functions/Function1;)Lkotlin/sequences/Sequence; 5 6
 ) 7 toSet ,(Lkotlin/sequences/Sequence;)Ljava/util/Set; 9 :
 ) ; ()Ljava/lang/Object;  
  > <clinit>  	
  A  	  C Lkotlin/Metadata; mv           k    xi   0 d1 /��
��
"

��
 *000H
¢ d2 <anonymous>   kotlin.jvm.PlatformType @ 	 ProjectorFontProvider.kt Code LocalVariableTable LineNumberTable 	Signature RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 
SourceFile RuntimeVisibleAnnotations 0               	  V   $     *� �    W                V   �     :� L+� � S+� � !S+� � $S+� � 'S+� -� 2� 4� 8� <�    X   & 	   f  g  f  h   f " i ) f * e - j