 d1 ��
��

����0H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer + setUpClient �(Lorg/jetbrains/projector/server/core/ClientWrapper;Lorg/jetbrains/projector/server/core/SupportedHandshakeClientSettings;Ljava/lang/String;)V - . ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  1   $     *� �    2                1   -     �    3      v 2            4       A    1   /     *� �    3      v 2              	  1         � Y� � �      5   
        6    , / 7     8    0 9   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          ��]/    T   org/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$1.class����   7 L Norg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$1  �Lkotlin/jvm/internal/FunctionReferenceImpl;Lkotlin/jvm/functions/Function1<Ljava/lang/String;Lorg/jetbrains/projector/server/core/ij/log/DelegatingJvmLogger;>; )kotlin/jvm/internal/FunctionReferenceImpl  kotlin/jvm/functions/Function1  <init> ()V >org/jetbrains/projector/server/core/ij/log/DelegatingJvmLogger 
  <init>(Ljava/lang/String;)V  :(ILjava/lang/Class;Ljava/lang/String;Ljava/lang/String;I)V  
   this PLorg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$1; invoke T(Ljava/lang/String;)Lorg/jetbrains/projector/server/core/ij/log/DelegatingJvmLogger; #Lorg/jetbrains/annotations/NotNull; p0  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   (Ljava/lang/String;)V  
    Ljava/lang/String; &(Ljava/lang/Object;)Ljava/lang/Object; java/lang/String $  
  & p1 Ljava/lang/Object; <clinit>  	
  + INSTANCE - 	  . Lkotlin/Metadata; mv           k    xi   0 9org/jetbrains/projector/server/ProjectorStarter$Companion 9 runProjectorServer$default �(Lorg/jetbrains/projector/server/ProjectorStarter$Companion;Lorg/jetbrains/projector/server/PAwtProvider;Lkotlin/jvm/functions/Function1;ILjava/lang/Object;)Z ; < /org/jetbrains/projector/server/ProjectorStarter > 	Companion ProjectorStarter.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations0       -        	  B   +     *� �    C                B   C     +� � Y+� !�    D      M C                "  E        F       A  #  B   =     	*+� %� '�    D       M C       	       	 ( )   * 	  B         � Y� ,� /�      G           : ? @  H    : = I     J    A K     0  1[ I 2I 3I 4 5I 6 7I 8PK          �p6��  �  ?   org/jetbrains/projector/server/ProjectorStarter$Companion.class����   72 9org/jetbrains/projector/server/ProjectorStarter$Companion  java/lang/Object  <init> ()V  
   this ;Lorg/jetbrains/projector/server/ProjectorStarter$Companion; start C([Ljava/lang/String;Lorg/jetbrains/projector/server/PAwtProvider;)V Lkotlin/jvm/JvmStatic; #Lorg/jetbrains/annotations/NotNull; args  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   awtProvider  ,org.jetbrains.projector.server.classToLaunch  java/lang/System  getProperty &(Ljava/lang/String;)Ljava/lang/String;  
   xSystem property `org.jetbrains.projector.server.classToLaunch` isn't assigned, so can't understand which class to launch ! "java/lang/IllegalArgumentException # toString ()Ljava/lang/String; % &
  ' (Ljava/lang/String;)V  )
 $ * getMainMethodOf .(Ljava/lang/String;)Ljava/lang/reflect/Method; , -
  . runProjectorServer$default �(Lorg/jetbrains/projector/server/ProjectorStarter$Companion;Lorg/jetbrains/projector/server/PAwtProvider;Lkotlin/jvm/functions/Function1;ILjava/lang/Object;)Z 0 1
  2 java/lang/reflect/Method 4 invoke 9(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object; 6 7
 5 8 exit (I)V : ;
  < java/lang/RuntimeException > ASystem.exit returned normally, while it was supposed to halt JVM. @
 ? * N$i$a$-requireNotNull-ProjectorStarter$Companion$start$canonicalMainClassName$1 I canonicalMainClassName Ljava/lang/String; 
mainMethod Ljava/lang/reflect/Method; [Ljava/lang/String; -Lorg/jetbrains/projector/server/PAwtProvider; java/lang/String K [Ljava/lang/Object; M java/lang/Class O forName %(Ljava/lang/String;)Ljava/lang/Class; Q R
 P S main U I 	getMethod @(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method; X Y
 P Z 4mainClass.getMethod("mai…rray<String>::class.java) \ checkNotNullExpressionValue ^ 
  _ 	mainClass Ljava/lang/Class; canonicalClassName setupSingletons (Ljava/awt/Toolkit;)V 4org/jetbrains/projector/server/HeadlessInitializerKt f setupToolkit h e
 g i setupFontManager k 
 g l setupRepaintManager n 
 g o projectorToolkit Ljava/awt/Toolkit; initializeHeadlessGeneral setupSystemProperties t 
 g u <org/jetbrains/projector/server/service/ProjectorFontProvider w INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider; y z	 x { setAgent (Z)V } ~
 x  initializeHeadlessFull d e
  � runProjectorServer P(Lorg/jetbrains/projector/server/PAwtProvider;Lkotlin/jvm/functions/Function1;)Z �(Lorg/jetbrains/projector/server/PAwtProvider;Lkotlin/jvm/functions/Function1<-Ljava/lang/String;+Lorg/jetbrains/projector/util/logging/Logger;>;)Z Lkotlin/jvm/JvmOverloads; loggerFactory � %org.jetbrains.projector.server.enable � true � setProperty 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; � �
  � .org/jetbrains/projector/server/ProjectorServer � 	Companion :Lorg/jetbrains/projector/server/ProjectorServer$Companion; � �	 � � 8org/jetbrains/projector/server/ProjectorServer$Companion � 	isEnabled ()Z � �
 � � kotlin/_Assertions � ENABLED Z � �	 � � kotlin/jvm/internal/Reflection � getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass; � �
 � � kotlin/reflect/KClass � getSimpleName � & � � *Can't start the  because it's disabled... � $java/lang/invoke/StringConcatFactory � makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; � �
 � � � �    � java/lang/AssertionError � (Ljava/lang/Object;)V  �
 � �  runProjectorServer$lambda-2 � 
  � � "java/lang/invoke/LambdaMetafactory � metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; � �
 � � � run ()Ljava/lang/Runnable; � �  � runProjectorServer$lambda-3 0(Lorg/jetbrains/projector/server/PAwtProvider;)V � �
  � � C(Lorg/jetbrains/projector/server/PAwtProvider;)Ljava/lang/Runnable; � �  � startServer {(ZLkotlin/jvm/functions/Function1;Ljava/lang/Runnable;Ljava/lang/Runnable;)Lorg/jetbrains/projector/server/ProjectorServer; � �
 � � java/lang/Runtime � 
getRuntime ()Ljava/lang/Runtime; � �
 � � Norg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$3 � 3(Lorg/jetbrains/projector/server/ProjectorServer;)V  �
 � � java/lang/Thread � addShutdownHook (Ljava/lang/Thread;)V � �
 � � getWasStarted � �
 � � <$i$a$-assert-ProjectorStarter$Companion$runProjectorServer$2 server 0Lorg/jetbrains/projector/server/ProjectorServer;  Lkotlin/jvm/functions/Function1; Norg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$1 � PLorg/jetbrains/projector/server/ProjectorStarter$Companion$runProjectorServer$1; y �	 � � kotlin/jvm/functions/Function1 � � �
  � 0(Lorg/jetbrains/projector/server/PAwtProvider;)Z /org/jetbrains/projector/server/ProjectorStarter � � 
	 � � s 
  $awtProvider +org/jetbrains/projector/server/PAwtProvider createToolkit ,()Lorg/jetbrains/projector/awt/PToolkitBase;	 java/awt/Toolkit � e
  1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; Lkotlin/Metadata; mv           k xi   0 d1��N

��


��

��

��



��

��






��20B¢J020HJ02	0
HJ0HJ50202#0¢(00HJ02	0
HJ#020020H¢¨ d2   Lkotlin/Function1; Lkotlin/ParameterName; name tag -Lorg/jetbrains/projector/util/logging/Logger; projector-server-common ProjectorStarter.kt Code LineNumberTable LocalVariableTable StackMapTable RuntimeVisibleAnnotations $RuntimeInvisibleParameterAnnotations 	Signature RuntimeInvisibleAnnotations InnerClasses 
SourceFile SourceDebugExtension BootstrapMethods 1           &   /     *� �   '       %(        	 
      &   �     c+� ,� �  Y� W6":� $Y� (� +�N*-� /:*,� 3� � :+S� 9W� � =� ?YA� B��   )    j L� ) L 5�  N'   & 	  )  *  ) * ) + - 2 / = 0 T 3 b 5(   >    C D  + 8 E F  2 1 G H    c 	 
     c  I    c  J *       +             , - &   d     "+� TM,V� P:WS� [N-]� `-�   '   
    8  9(        a b    " 	 
     " c F   d e &   K     +� j� m� p�   '       =  >  ? 
 @(        	 
      q r   s  &   =     � v� |� ��   '       C  D 
 E(        	 
    � e &   >     *+� ��   '   
    H  I(        	 
      q r   � � &   �     m+� ,�� ��� �W� �� �>� �� %� !6�� �� � � �  :� �Y� ��� �,� �  +� �  � �N� � �Y-� �� � �-� �   )    � C'   * 
  N  P % g - P 7 P C U F V M U W Z h a(   4  (  � D  W  � �    m 	 
     m  J    m � � ,    �*       -     �  +           	 0 1 &   5     ~� 
� �� �M*+,� ��   )    '       M  � � &   7     +� *+� 3�   (        	 
       J *       -     �  +         �  &         � ��   '       W  � � &   A     *� � *�
 ���   '      W(        J    &   -     *��   (        	 
       .     �      �       � � /   %0   �SMAP
ProjectorStarter.kt
Kotlin
*S Kotlin
*F
+ 1 ProjectorStarter.kt
org/jetbrains/projector/server/ProjectorStarter$Companion
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,102:1
1#2:103
*E
*     [ IIIII[ s[ s 
ss s ,s Hs css �ss qs rs ss �ss s Js �ss s!s"s#s ds s ss s$1     �  � �  � � � �  � � �PK          ���Tt  t  F   org/jetbrains/projector/server/ProjectorServer$processMessage$10.class����   7 : @org/jetbrains/projector/server/ProjectorServer$processMessage$10  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this BLorg/jetbrains/projector/server/ProjectorServer$processMessage$10; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; @Don't support matching keyboard modifiers mode in agent mode yet  ()Ljava/lang/Object;  
   <clinit>  	
   INSTANCE  	   Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   .org/jetbrains/projector/server/ProjectorServer + processMessage z(Lorg/jetbrains/projector/server/core/ReadyClientSettings;Lorg/jetbrains/projector/common/protocol/toServer/ClientEvent;)V - . ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0               	  1   $     *� �    2                1   -     �    3      � 2            4       A    1   /     *� �    3      � 2              	  1         � Y� � �      5   
        6    , / 7     8    0 9   4    [ I I  I ! "I # $I % &[ s ' ([ s )s *s PK          �Z��  �  .   org/jetbrains/projector/server/util/Host.class����   7 q (org/jetbrains/projector/server/util/Host  java/lang/Object  <init> '(Ljava/lang/String;Ljava/lang/String;)V #Lorg/jetbrains/annotations/NotNull; address  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   name  ()V  
   Ljava/lang/String;  	   	127.0.0.1  areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z  
   	localhost       	  " this *Lorg/jetbrains/projector/server/util/Host; java/lang/String & 
getAddress ()Ljava/lang/String; getName +(Ljava/net/InetAddress;Ljava/lang/String;)V $Lorg/jetbrains/annotations/Nullable; ip - 	Companion 4Lorg/jetbrains/projector/server/util/Host$Companion; / 0	  1 2org/jetbrains/projector/server/util/Host$Companion 3 access$ip2String ^(Lorg/jetbrains/projector/server/util/Host$Companion;Ljava/net/InetAddress;)Ljava/lang/String; 5 6
 4 7 resolving ... 9  
  ; Ljava/net/InetAddress; java/net/InetAddress > Z(Ljava/net/InetAddress;Ljava/lang/String;ILkotlin/jvm/internal/DefaultConstructorMarker;)V  +
  A toString java/lang/CharSequence D length ()I F G E H  (  ) J $java/lang/invoke/StringConcatFactory L makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; N O
 M P Q 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; N S   T <clinit> 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V  W
 4 X Lkotlin/Metadata; mv           k xi   0 d1 ���

��
��

��

	�� 20:B0
0¢B00¢J0HR0¢
��	
R0¢
��
¨ d2 projector-server-common AsyncHostResolver.kt RuntimeInvisibleAnnotations Code StackMapTable LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 1       / 0  g            g            g             h   �     <+	� ,� *� *+� **� � � � ,*� � � !� ,� #�    i   / � '   ' '  O �     ' '   ' j      #  %  & ' ' 7 ( 8 % ; # k        < $ %     <      <    l             ( )  h   /     *� �    j       # k        $ %   g         * )  h   /     *� #�    j       % k        $ %   g          +  h   u     +.� *� 2+� 8,Y� W:� <�    i    �   ? '  ' ' j      + k         $ %      - =        l         ,    @  h   0     ~� M*+,� B�    i     j       +  C )  h   j     ,*� #� E� I � � � 
*� � *� *� #� U  �    i   
 @	L ' j   
    -  - k       , $ %   g         V   h         � 4Y� Y� 2�      m   
  4  /  n    f o   X  Z  [[ I \I ]I ^ _I \ `I a b[ s c d[ s %s  s -s =s s  s +s s s (s )s *s Cs /s e p     R  KPK          ��^�$  $  C   org/jetbrains/projector/server/util/AsyncHostResolver$Request.class����   7 : =org/jetbrains/projector/server/util/AsyncHostResolver$Request  java/lang/Object  <init> U(Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;Ljava/net/InetAddress;)V #Lorg/jetbrains/annotations/NotNull; client  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   ip  ()V  
   <Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;  	   Ljava/net/InetAddress;  	   this ?Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request; 	getClient >()Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber; getIp ()Ljava/net/InetAddress; Lkotlin/Metadata; mv           k xi   0 d1 k��

��
��

��

��20B00¢R0¢
��R0¢
��	
¨ d2   projector-server-common 5org/jetbrains/projector/server/util/AsyncHostResolver . Request AsyncHostResolver.kt RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations 1          2            2             3   Y     +	� ,� *� *+� *,� �    4      ; 5                         6                3   /     *� �    4       ; 5            2             3   /     *� �    4       ; 5            2         7   
   / 0  8    1 9   O  !  "[ I #I $I % &I # 'I ( )[ s * +[ s s ,s s s s s s s s s  s -PK          ��Z��  �  3   org/jetbrains/projector/server/util/ConvertKt.class����   7 -org/jetbrains/projector/server/util/ConvertKt  java/lang/Object  toPaintType i(Lorg/jetbrains/projector/awt/data/AwtPaintType;)Lorg/jetbrains/projector/common/protocol/data/PaintType; #Lorg/jetbrains/annotations/NotNull; <this>  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   :org/jetbrains/projector/server/util/ConvertKt$WhenMappings  $EnumSwitchMapping$0 [I  	   -org/jetbrains/projector/awt/data/AwtPaintType  ordinal ()I  
   6org/jetbrains/projector/common/protocol/data/PaintType  DRAW 8Lorg/jetbrains/projector/common/protocol/data/PaintType;  	    FILL " 	  # #kotlin/NoWhenBranchMatchedException % <init> ()V ' (
 & ) $this$toPaintType /Lorg/jetbrains/projector/awt/data/AwtPaintType; toImageEventInfo n(Lorg/jetbrains/projector/awt/data/AwtImageInfo;)Lorg/jetbrains/projector/common/protocol/data/ImageEventInfo; 3org/jetbrains/projector/awt/data/AwtImageInfo$Point / >org/jetbrains/projector/common/protocol/data/ImageEventInfo$Xy 1 getX 3 
 0 4 getY 6 
 0 7 G(IILjava/lang/Integer;ILkotlin/jvm/internal/DefaultConstructorMarker;)V ' 9
 2 : ;org/jetbrains/projector/common/protocol/data/ImageEventInfo < 7org/jetbrains/projector/awt/data/AwtImageInfo$Rectangle > @org/jetbrains/projector/common/protocol/data/ImageEventInfo$XyWh @
 ? 4
 ? 7 getWidth D 
 ? E 	getHeight G 
 ? H getArgbBackgroundColor ()Ljava/lang/Integer; J K
 ? L (IIIILjava/lang/Integer;)V ' N
 A O 2org/jetbrains/projector/awt/data/AwtImageInfo$Area Q >org/jetbrains/projector/common/protocol/data/ImageEventInfo$Ds S getDx1 U 
 R V getDy1 X 
 R Y getDx2 [ 
 R \ getDy2 ^ 
 R _ getSx1 a 
 R b getSy1 d 
 R e getSx2 g 
 R h getSy2 j 
 R k
 R L (IIIIIIIILjava/lang/Integer;)V ' n
 T o <org/jetbrains/projector/awt/data/AwtImageInfo$Transformation q Gorg/jetbrains/projector/common/protocol/data/ImageEventInfo$Transformed s getTx ()Ljava/util/List; u v
 r w (Ljava/util/List;)V ' y
 t z $this$toImageEventInfo /Lorg/jetbrains/projector/awt/data/AwtImageInfo; -org/jetbrains/projector/awt/data/AwtImageInfo ~ getWindowType d(Lorg/jetbrains/projector/awt/PWindow;)Lorg/jetbrains/projector/common/protocol/toClient/WindowType; #org/jetbrains/projector/awt/PWindow � 	getTarget ()Ljava/awt/Component; � �
 � � getClass ()Ljava/lang/Class; � �
  � java/lang/Class � getSimpleName ()Ljava/lang/String; � �
 � � target::class.java.simpleName � checkNotNullExpressionValue � 
  � java/lang/CharSequence � IdeFrameImpl � kotlin/text/StringsKt � contains$default G(Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZILjava/lang/Object;)Z � �
 � � ;org/jetbrains/projector/common/protocol/toClient/WindowType � IDEA_WINDOW =Lorg/jetbrains/projector/common/protocol/toClient/WindowType; � �	 � � java/awt/Window � getType ()Ljava/awt/Window$Type; � �
 � � java/awt/Window$Type � POPUP Ljava/awt/Window$Type; � �	 � � � �	 � � WINDOW � �	 � �  $i$a$-let-ConvertKt$windowType$1 I it Ljava/awt/Component; $this$windowType %Lorg/jetbrains/projector/awt/PWindow; java/lang/String � java/awt/Component � getWindowClass e(Lorg/jetbrains/projector/awt/PWindow;)Lorg/jetbrains/projector/common/protocol/toClient/WindowClass; java/awt/Frame � <org/jetbrains/projector/common/protocol/toClient/WindowClass � FRAME >Lorg/jetbrains/projector/common/protocol/toClient/WindowClass; � �	 � � java/awt/Dialog � DIALOG � �	 � � javax/swing/JWindow � JWINDOW � �	 � � OTHER � �	 � � $this$windowClass toDirection p(Lorg/jetbrains/projector/common/protocol/toServer/ResizeDirection;)Lorg/jetbrains/projector/awt/data/Direction; $EnumSwitchMapping$1 � 	  � @org/jetbrains/projector/common/protocol/toServer/ResizeDirection �
 �  *org/jetbrains/projector/awt/data/Direction � NW ,Lorg/jetbrains/projector/awt/data/Direction; � �	 � � SW � �	 � � NE � �	 � � SE � �	 � � N � �	 � � W � �	 � � S � �	 � � E � �	 � � $this$toDirection BLorg/jetbrains/projector/common/protocol/toServer/ResizeDirection; Lkotlin/Metadata; mv           k    xi   0 d1 ���4
��







��


��


��
	0
*0
0*0
0*0"��0*08F¢"0*08F¢¨ d2 windowClass 
windowType =Lorg/jetbrains/projector/common/protocol/data/ImageEventInfo; projector-server-common WhenMappings 
Convert.kt Code StackMapTable LineNumberTable LocalVariableTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1              ~     9*	� *� _� .�   !            � !� � $� � &Y� *��      	 $G       * $ + * , 8 -       9 + ,                  - .   @     �*	� *L+� 0� !� 2Y*� 0� 5*� 0� 8� ;� =� �+� ?� 3� AY*� ?� B*� ?� C*� ?� F*� ?� I*� ?� M� P� =� y+� R� O� TY*� R� W*� R� Z*� R� ]*� R� `*� R� c*� R� f*� R� i*� R� l*� R� m� p� =� &+� r� � tY*� r� x� {� =� � &Y� *��       � - 6� RG =   * 
  /  0 - 1 d 2 o 3 � 4 � 5 � 2 � 7 � 8       � | }                  � �    �     ^*	�  *� �� �� �L+�� �+� ��� �� �� 	� �� 0*� �M>,� �� ,� �� �� �� �  � 	� �� � ��      " � 0 ��  �@	�   � �  �   & 	  ;  < 0 = 5 T 7 = P = Q = Z > ] ?      7  � �  5  � �    ^ � �                  � �    �     6*	� *� �L+� ř 	� ˧  +� ͙ 	� Ч +� ҙ 	� է � ذ       �  �B �      B  C  D % E 2 F 5 G       6 � �                  � �    �     u*	� *� �_� �.�   ]         -   3   9   ?   E   K   Q   W� � 5� � /� �� )� � #� � � �� � �� � �� � &Y� *��       
<G �   * 
  I < J B K H L N M T N Z O ` P f Q t R       u � �                    
         �SMAP
Convert.kt
Kotlin
*S Kotlin
*F
+ 1 Convert.kt
org/jetbrains/projector/server/util/ConvertKt
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,83:1
1#2:84
*E
   d  �  [ IIIII[ s	
[ ss �s �s �s �ss �s �s �s �s �s �s -ss }s s s ,sPK          R>r�  �  G   org/jetbrains/projector/server/util/WindowDrawInterestManagerImpl.class����   7 3 Aorg/jetbrains/projector/server/util/WindowDrawInterestManagerImpl  Jorg/jetbrains/projector/server/core/util/AbstractWindowDrawInterestManager  <init> ()V  
   this CLorg/jetbrains/projector/server/util/WindowDrawInterestManagerImpl; redrawWindow (I)V #org/jetbrains/projector/awt/PWindow  	Companion /Lorg/jetbrains/projector/awt/PWindow$Companion;  	   -org/jetbrains/projector/awt/PWindow$Companion  	getWindow ((I)Lorg/jetbrains/projector/awt/PWindow;  
   repaint  
   id I Lkotlin/Metadata; mv           k xi   0 d1 B��




��

����20B¢J020H¨ d2 LLorg/jetbrains/projector/server/core/util/AbstractWindowDrawInterestManager;   projector-server-common  WindowDrawInterestManagerImpl.kt Code LineNumberTable LocalVariableTable StackMapTable 
SourceFile RuntimeVisibleAnnotations 1            -   /     *� �    .        /        	 
       -   X     � � Y� W� � �    0    O  .   
        /        	 
          1    , 2   C    [ I  I !I " #I   $I % &[ s ' ([ s 
s )s s s *s s *s +PK          ĉ�v�  �  G   org/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$3.class����   7 Q Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$3  lLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/net/InterfaceAddress;Ljava/lang/Boolean;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> (Z)V 	$keepIpv6 Z 
 	   (I)V  
   this CLorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$3; invoke 0(Ljava/net/InterfaceAddress;)Ljava/lang/Boolean; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/net/InterfaceAddress  
getAddress ()Ljava/net/InetAddress;   !
  " java/net/Inet4Address $ java/lang/Boolean & valueOf (Z)Ljava/lang/Boolean; ( )
 ' * Ljava/net/InterfaceAddress; &(Ljava/lang/Object;)Ljava/lang/Object;  
  . p1 Ljava/lang/Object; Lkotlin/Metadata; mv           k    xi   0 d1 .��
��

��

��020H
¢ d2 <anonymous>   -org/jetbrains/projector/server/util/NetworkKt @ getLocalAddresses (Z)Ljava/util/List; B C 
Network.kt Code LocalVariableTable StackMapTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  F   3     *� *� �    G               
       F   `      +� *� � +� #� %� � � +�    H    @ I      , G                  ,  J        K       A  -  F   =     	*+� � /�    I       , G       	       	 0 1   L   
        M    A D N     O    E P   =  2  3[ I 4I 5I 6 7I 8 9I : ;[ s < =[ s >s ?s s ,s s PK          3a/�	  	  G   org/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$2.class����   7 c Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$2  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/net/NetworkInterface;Lkotlin/sequences/Sequence<+Ljava/net/InterfaceAddress;>;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this CLorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$2; invoke 8(Ljava/net/NetworkInterface;)Lkotlin/sequences/Sequence; U(Ljava/net/NetworkInterface;)Lkotlin/sequences/Sequence<Ljava/net/InterfaceAddress;>; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/net/NetworkInterface  getInterfaceAddresses ()Ljava/util/List;  
   java/lang/Iterable !  kotlin/collections/CollectionsKt # 
asSequence 1(Ljava/lang/Iterable;)Lkotlin/sequences/Sequence; % &
 $ ' kotlin/sequences/SequencesKt ) filterNotNull 8(Lkotlin/sequences/Sequence;)Lkotlin/sequences/Sequence; + ,
 * - emptySequence ()Lkotlin/sequences/Sequence; / 0
 * 1 Ljava/net/NetworkInterface; java/util/List 4 kotlin/sequences/Sequence 6 &(Ljava/lang/Object;)Ljava/lang/Object;  
  9 p1 Ljava/lang/Object; <clinit>  	
  > INSTANCE @ 	  A Lkotlin/Metadata; mv           k    xi   0 d1 5��
��


��

����0020H
¢ d2 <anonymous> Lkotlin/sequences/Sequence; Ljava/net/InterfaceAddress; -org/jetbrains/projector/server/util/NetworkKt R getLocalAddresses (Z)Ljava/util/List; T U 
Network.kt Code LocalVariableTable StackMapTable LineNumberTable 	Signature RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 
SourceFile RuntimeVisibleAnnotations 0       @        	  X   $     *� �    Y                X   z     .+� +�  Y� W� � "� (Y� W� � .Y� W� 2�    Z    S 5N 7B 7G 7 [      + Y       .       .  3  \     ]        ^       A  8  X   =     	*+� � :�    [       + Y       	       	 ; <   = 	  X         � Y� ?� B�      _   
        `    S V \     a    W b   =  C  D[ I EI FI G HI I JI K L[ s M N[ s Os Ps Qs s 3s PK          $?eN�  �  :   org/jetbrains/projector/server/util/ServerMessagesKt.class����   7 Q 4org/jetbrains/projector/server/util/ServerMessagesKt  java/lang/Object  clientsCountMessage 5(Ljava/lang/Object;I)Ljava/beans/PropertyChangeEvent; #Lorg/jetbrains/annotations/NotNull; source  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/beans/PropertyChangeEvent  clientsCount  java/lang/Integer  valueOf (I)Ljava/lang/Integer;  
   <init> K(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V  
   Ljava/lang/Object; I macLocalConnectionMessage J(Ljava/lang/Object;Ljava/net/InetAddress;)Ljava/beans/PropertyChangeEvent; address " macLocalConnection $ Ljava/net/InetAddress; isClientsCountMessage #(Ljava/beans/PropertyChangeEvent;)Z <this> ) getPropertyName ()Ljava/lang/String; + ,
  - areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z / 0
  1 $this$isClientsCountMessage  Ljava/beans/PropertyChangeEvent; isMacLocalConnectionMessage !$this$isMacLocalConnectionMessage CLIENTS_COUNT Ljava/lang/String; MAC_LOCAL_CONNECTION Lkotlin/Metadata; mv           k    xi   0 d1 ���,
��



��
��
��



��

02020	0202
0
0*0
0*0"��0XT¢
��"0XT¢
��¨ d2   projector-server-common ServerMessages.kt ConstantValue RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations 
SourceFile RuntimeVisibleAnnotations 1       7 8  I     J         9 8  I    % J             K   ^     *	� � Y*� � �    L         !  "  #     # M                  J        N   	          !  K   a     *	� +#� � Y*%+� �    L      %  &  '  (  %  ( M               " &  J        N             ' (  K   :     **� *� .� 2�    L      * M        3 4   N         5 (  K   :     **� *� .%� 2�    L      , M        6 4   N         O    H P   [  :  ;[ I <I =I > ?I @ AI B C[ s D E[ s 7s Fs 9s s 4s s Fs s Fs  s "s &s 's Fs 5s GPK          ~v[ݒ  �  ;   org/jetbrains/projector/server/util/AsyncHostResolver.class����   7 � 5org/jetbrains/projector/server/util/AsyncHostResolver  java/lang/Object  <init> ()V  
   this 7Lorg/jetbrains/projector/server/util/AsyncHostResolver; cancelPendingRequests queue Ljava/util/List;  	   java/util/List  clear     resolve z(Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;Ljava/lang/String;)Lorg/jetbrains/projector/server/util/Host; #Lorg/jetbrains/annotations/NotNull; client  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   address   -org/jetbrains/projector/server/util/NetworkKt " ipString2Bytes (Ljava/lang/String;)[B $ %
 # & java/net/InetAddress ( getByAddress ,(Ljava/lang/String;[B)Ljava/net/InetAddress; * +
 ) , ip . checkNotNullExpressionValue 0 
  1 ~(Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;Ljava/net/InetAddress;)Lorg/jetbrains/projector/server/util/Host;  3
  4 addr [B Ljava/net/InetAddress; <Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber; Ljava/lang/String; getName *(Ljava/net/InetAddress;)Ljava/lang/String; ; <
  = =org/jetbrains/projector/server/util/AsyncHostResolver$Request ? U(Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;Ljava/net/InetAddress;)V  A
 @ B 
addRequest B(Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request;)V D E
  F (org/jetbrains/projector/server/util/Host H +(Ljava/net/InetAddress;Ljava/lang/String;)V  J
 I K name java/lang/String N address2Name Ljava/util/Map; P Q	  R java/util/Map T get &(Ljava/lang/Object;)Ljava/lang/Object; V W U X add (Ljava/lang/Object;)Z Z [  \ 	runWorker ^ 
  _ req ?Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request; Aorg/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1 c INSTANCE CLorg/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1; e f	 d g kotlin/jvm/functions/Function0 i kotlin/concurrent/ThreadsKt k thread$default s(ZZLjava/lang/ClassLoader;Ljava/lang/String;ILkotlin/jvm/functions/Function0;ILjava/lang/Object;)Ljava/lang/Thread; m n
 l o access$getQueue$p ()Ljava/util/List; access$getAddress2Name$p ()Ljava/util/Map; access$getName a(Lorg/jetbrains/projector/server/util/AsyncHostResolver;Ljava/net/InetAddress;)Ljava/lang/String; $this <clinit>
   e 
	  z java/util/HashMap |
 }  java/util/Collections  synchronizedMap  (Ljava/util/Map;)Ljava/util/Map; � �
 � � java/util/ArrayList �
 �  synchronizedList "(Ljava/util/List;)Ljava/util/List; � �
 � � &synchronizedList(ArrayList<Request>()) � 9Ljava/util/Map<Ljava/net/InetAddress;Ljava/lang/String;>; QLjava/util/List<Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request;>; Lkotlin/Metadata; mv           k xi   0 d18��@

��

%

��

$
��
!

��



��

Æ��20:B¢J020HJ0J020HJ02020J02020J0HRNB
 *00
 *00 * 
 *00
 *0000X¢
��R	00
X¢
��¨ d2   kotlin.jvm.PlatformType *Lorg/jetbrains/projector/server/util/Host; Request projector-server-common AsyncHostResolver.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile RuntimeVisibleAnnotations 1       e 
  �         P Q  �    �     �    � �             �   /     *� �    �       : �        	 
       �   3     	� �  �    �       @ �       	 	 
       �   �     '+� ,!� ,� 'N-� -:*+/� 2� 5�    �      C  D  E �   4    6 7    . 8    ' 	 
     '  9    '   :  �        �              3  �   �     -+� ,/� *,� >N-� *� @Y+,� C� G� IY,-� L�    �    � # O �      I  K  L # O �   *    M :    - 	 
     -  9    - . 8  �        �             ; <  �   A     � S+� Y � O�    �       R �        	 
      . 8   D E  �   K     � +� ] W*� `�    �       U 
 V  W �        	 
      a b   ^   �   A     � h� j� pW�    �   
    Z  m �        	 
   q r  �         � �    �       : s t  �         � S�    �       : u v  �   :     *+� >�    �      : �        w 
      . 8   x   �   O     3� Y� y� {� }Y� ~� U� �� S� �Y� �� � �K*�� 2*� �    �   
  
 =  >  �     d      @  �  �    � �   y  �  �[ I �I �I � �I � �I � �[ s � �[ s 
s �s s Ps �s 8s �s �s �s s �s bs Ds �s as s ;s .s s �s s 9s  s ^s �s �PK          ;��_Y  Y  4   org/jetbrains/projector/server/util/FontCacher.class����   7 � .org/jetbrains/projector/server/util/FontCacher  java/lang/Object  <init> ()V  
   this 0Lorg/jetbrains/projector/server/util/FontCacher; getId "(Ljava/awt/Font;)Ljava/lang/Short; $Lorg/jetbrains/annotations/Nullable; #Lorg/jetbrains/annotations/NotNull; font  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   getFilePath #(Ljava/awt/Font;)Ljava/lang/String;  
   filePathCacher 9Lorg/jetbrains/projector/server/core/util/ObjectIdCacher;  	   7org/jetbrains/projector/server/core/util/ObjectIdCacher  getIdBy &(Ljava/lang/Object;)Ljava/lang/Number; ! "
   # java/lang/Short % filePath Ljava/lang/String; Ljava/awt/Font; java/lang/String * getFontData @(S)Lorg/jetbrains/projector/common/protocol/data/FontDataHolder; valueOf (S)Ljava/lang/Short; . /
 & 0 java/lang/Number 2 getObjectBy &(Ljava/lang/Number;)Ljava/lang/Object; 4 5
   6 java/io/File 8 (Ljava/lang/String;)V  :
 9 ; kotlin/io/FilesKt = 	readBytes (Ljava/io/File;)[B ? @
 > A java/util/Base64 C 
getEncoder ()Ljava/util/Base64$Encoder; E F
 D G java/util/Base64$Encoder I encode ([B)[B K L
 J M getEncoder().encode(data) O checkNotNullExpressionValue Q 
  R kotlin/text/Charsets T UTF_8 Ljava/nio/charset/Charset; V W	 U X ([BLjava/nio/charset/Charset;)V  Z
 + [ ;org/jetbrains/projector/common/protocol/data/FontDataHolder ] 8org/jetbrains/projector/common/protocol/data/TtfFontData _
 ` ; >(SLorg/jetbrains/projector/common/protocol/data/TtfFontData;)V  b
 ^ c data [B base64 fontId S %(Lsun/font/Font2D;)Ljava/lang/String; sun/font/CompositeFont k getNumSlots ()I m n
 l o getSlotFont (I)Lsun/font/PhysicalFont; q r
 l s physicalFont u sun/font/Font2D w  j
  y sun/font/FileFont { publicFileNameMethod Ljava/lang/reflect/Method; } ~	   java/lang/reflect/Method � invoke 9(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object; � �
 � � java/lang/NullPointerException � 2null cannot be cast to non-null type kotlin.String �
 � ; Lsun/font/PhysicalFont; i I $this$getFilePath Lsun/font/Font2D; <org/jetbrains/projector/server/service/ProjectorFontProvider � INSTANCE >Lorg/jetbrains/projector/server/service/ProjectorFontProvider; � �	 � � java/awt/Font � getName ()Ljava/lang/String; � �
 � � 	this.name � getStyle � n
 � � 
findFont2D '(Ljava/lang/String;II)Lsun/font/Font2D; � �
 � � <clinit>
   � 
	  � ?org/jetbrains/projector/server/util/FontCacher$filePathCacher$1 � ALorg/jetbrains/projector/server/util/FontCacher$filePathCacher$1; � �	 � � kotlin/jvm/functions/Function1 � 5(Ljava/lang/Number;Lkotlin/jvm/functions/Function1;)V  �
   � getPublicFileName � java/lang/Class � getDeclaredMethod @(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method; � �
 � �   � .org/jetbrains/projector/util/loading/ReflectKt � 	unprotect (Ljava/lang/reflect/Method;)V � �
 � � 	getFont2D � getFont2DMethod � ~	  � -$i$a$-apply-FontCacher$publicFileNameMethod$1 )$this$publicFileNameMethod_u24lambda_u2d0 ($i$a$-apply-FontCacher$getFont2DMethod$1 $$this$getFont2DMethod_u24lambda_u2d1 ^Lorg/jetbrains/projector/server/core/util/ObjectIdCacher<Ljava/lang/Short;Ljava/lang/String;>; Lkotlin/Metadata; mv           k xi   0 d1 ���8

��





��







��Æ��20B¢J020J020¢J0*0HJ0*0HR000X¢
��R
 	*00X¢
��R

 	*00X¢
��¨ d2 kotlin.jvm.PlatformType =Lorg/jetbrains/projector/common/protocol/data/FontDataHolder; projector-server-common FontCacher.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations 1       � 
  �            �    � �         } ~    � ~        �   /     *� �    �       ( �        	 
       �   l     +� *+� Y� W�M� ,� $� &�    �    R + �   
   -  / �        ' (     	 
       )  �        �         , -  �   �     M� � 1� 3� 7� +M� 9Y,� <� BN� +Y� H-� N:P� S� Y� \:� ^Y� `Y� a� d�    �       3  5 ! 6 9 6 ; 8 �   4   < ' (   0 e f  ;  g (    M 	 
     M h i  �          j  �   �     e+M,� l� 8>+� l� p6� %6�+� l� t:*v� S� x� z��,� |� !� �+� � �Y� W� �Y�� ��� +��    �    � < x� `  �   "    @  A 	 B   C + D < G > J c L �   *  +  u �    � �    e 	 
     e � �      �   P     *� �+� �M,�� S,+� �� �� z�    �       U �        	 
      � )   �   �   �     `� Y� �� ��  Y� 1� 3� �� �� �� |�� �� �K*L=+�� S+� � *� ���� �� �K*L=+�� S+� � *� ȱ    �   .  
 * ! ; 1 < ; = < ; = ; @ P P Q Z R [ P \ P �   *  1  � �  /  � ~  P  � �  N  � ~   �   
  �      �    � �   j  �  �[ I �I �I � �I � �I � �[ s � �[ s 
s �s s s s �s �s �s ~s �s }s ,s �s hs s s )s s s �s �PK          ��b�    G   org/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$1.class����   7 j Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$1  lLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/net/NetworkInterface;Ljava/lang/Boolean;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this CLorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$1; invoke 0(Ljava/net/NetworkInterface;)Ljava/lang/Boolean; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/net/NetworkInterface  getHardwareAddress ()[B  
   it.hardwareAddress   checkNotNullExpressionValue " 
  # kotlin/ranges/IntRange % (II)V  '
 & ( kotlin/collections/ArraysKt * 
sliceArray ([BLkotlin/ranges/IntRange;)[B , -
 + . -org/jetbrains/projector/server/util/NetworkKt 0 access$getDockerVendor$p 2 
 1 3 java/util/Arrays 5 equals ([B[B)Z 7 8
 6 9 java/lang/Boolean ; valueOf (Z)Ljava/lang/Boolean; = >
 < ? Ljava/net/NetworkInterface; &(Ljava/lang/Object;)Ljava/lang/Object;  
  C p1 Ljava/lang/Object; <clinit>  	
  H INSTANCE J 	  K Lkotlin/Metadata; mv           k    xi   0 d1 .��
��

��

��020H
¢ d2 <anonymous>   getLocalAddresses (Z)Ljava/util/List; [ \ 
Network.kt Code LocalVariableTable StackMapTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       J        	  _   $     *� �    `                _   z     7+� +� � (+� M,!� $,� &Y� )� /� 4� :� � � @�    a    2@ b   
   ) 6 ) `       7       7  A  c        d       A  B  _   =     	*+� � D�    b       ( `       	       	 E F   G 	  _         � Y� I� L�      e   
        f    1 ] g     h    ^ i   =  M  N[ I OI PI Q RI S TI U V[ s W X[ s Ys Zs s As s PK          "��ov  v  =   org/jetbrains/projector/server/util/AsyncHostResolverKt.class����   7 + 7org/jetbrains/projector/server/util/AsyncHostResolverKt  java/lang/Object  getALL_HOSTS ,()Lorg/jetbrains/projector/server/util/Host; #Lorg/jetbrains/annotations/NotNull; 	ALL_HOSTS *Lorg/jetbrains/projector/server/util/Host;  		  
 <clinit> ()V (org/jetbrains/projector/server/util/Host  0.0.0.0  all addresses  <init> '(Ljava/lang/String;Ljava/lang/String;)V  
   Lkotlin/Metadata; mv           k    xi   0 d1 (��

��

"��0¢
��¨ d2 projector-server-common AsyncHostResolver.kt RuntimeInvisibleAnnotations Code LineNumberTable 
SourceFile RuntimeVisibleAnnotations 1        	  &             '         � �    (       4 &            '   '      � Y� � �    (       4  )    % *   :    [ I I I  I  I   ![ s " #[ s s 	s s s $PK          m5�m  m  E   org/jetbrains/projector/server/util/ConfirmConnection$Companion.class����   7 N ?org/jetbrains/projector/server/util/ConfirmConnection$Companion  java/lang/Object  <init> ()V  
   this ALorg/jetbrains/projector/server/util/ConfirmConnection$Companion; confirm +(Ljava/net/InetAddress;Ljava/lang/String;)Z $Lorg/jetbrains/annotations/Nullable; #Lorg/jetbrains/annotations/NotNull; 
accessType  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   5org/jetbrains/projector/server/util/ConfirmConnection  +(Ljava/net/InetAddress;Ljava/lang/String;)V  
   doShow :(Lorg/jetbrains/projector/server/util/ConfirmConnection;)Z  
   ip Ljava/net/InetAddress; Ljava/lang/String; '(Ljava/lang/String;Ljava/lang/String;)Z hostName $ '(Ljava/lang/String;Ljava/lang/String;)V  &
  ' New connection ) javax/swing/JOptionPane + showConfirmDialog <(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)I - .
 , / $this$doShow 7Lorg/jetbrains/projector/server/util/ConfirmConnection; 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; Lkotlin/Metadata; mv           k xi   0 d1 ���&

��


��

��



����20B¢J02020J02	020J
0*0H¨ d2   projector-server-common 	Companion ConfirmConnection.kt Code LineNumberTable LocalVariableTable $RuntimeInvisibleParameterAnnotations StackMapTable InnerClasses 
SourceFile RuntimeVisibleAnnotations 1            F   /     *� �    G       6 H        	 
       F   R     ,� *� Y+,� � �    G      7 H         	 
        !      "  I              #  F   X     +%� ,� *� Y+,� (� �    G      9 H         	 
      $ "      "  I                F   P     +*� 0� � �    J    @ G       < H        	 
      1 2   3  F   -     *� 4�    H        	 
      5 6   K   
    D  L    E M   R  7  8[ I 9I :I ; <I 9 =I > ?[ s @ A[ s 
s Bs s s Bs  s !s s Bs $s s 2s CPK          w���k  k  E   org/jetbrains/projector/server/util/FontCacher$filePathCacher$1.class����   7 E ?org/jetbrains/projector/server/util/FontCacher$filePathCacher$1  `Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Ljava/lang/Short;Ljava/lang/Short;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this ALorg/jetbrains/projector/server/util/FontCacher$filePathCacher$1; invoke (S)Ljava/lang/Short; #Lorg/jetbrains/annotations/NotNull; java/lang/Short  valueOf  
   it S &(Ljava/lang/Object;)Ljava/lang/Object; java/lang/Number  
shortValue ()S  
    
    p1 Ljava/lang/Object; <clinit>  	
  % INSTANCE ' 	  ( Lkotlin/Metadata; mv           k    xi   0 d1 '��

��


��020H
¢ d2 <anonymous>   .org/jetbrains/projector/server/util/FontCacher 8 $ 	 FontCacher.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       '        	  <   $     *� �    =                <   <     `�� �    >       * =                  ?       A    <   @     *+� � � !�    >       * =               " #   $ 	  <         � Y� &� )�      @   
        A    9 : B     C    ; D   :  *  +[ I ,I -I . /I 0 1I 2 3[ s 4 5[ s 6s 7s s s PK          y�ˆ�  �  @   org/jetbrains/projector/server/util/ResolvedHostSubscriber.class����   7  :org/jetbrains/projector/server/util/ResolvedHostSubscriber  java/lang/Object  resolved -(Lorg/jetbrains/projector/server/util/Host;)V #Lorg/jetbrains/annotations/NotNull; Lkotlin/Metadata; mv           k xi   0 d1 <��

��
��

��

��f��20J020H&¨ d2 <Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;   host *Lorg/jetbrains/projector/server/util/Host; projector-server-common AsyncHostResolver.kt $RuntimeInvisibleParameterAnnotations 
SourceFile RuntimeVisibleAnnotations                            @    	[ I 
I I  I 
 I  [ s  [ s s s s s s s PK          mU��B  B  8   org/jetbrains/projector/server/util/Host$Companion.class����   7 E 2org/jetbrains/projector/server/util/Host$Companion  java/lang/Object  <init> ()V  
   this 4Lorg/jetbrains/projector/server/util/Host$Companion; 	ip2String *(Ljava/net/InetAddress;)Ljava/lang/String; java/net/InetAddress  toString ()Ljava/lang/String;  
   ip.toString()  kotlin/jvm/internal/Intrinsics  checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/lang/String  	substring (I)Ljava/lang/String;  
   /this as java.lang.String).substring(startIndex) ! ip Ljava/net/InetAddress; access$ip2String ^(Lorg/jetbrains/projector/server/util/Host$Companion;Ljava/net/InetAddress;)Ljava/lang/String;  
  ' $this 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; Lkotlin/Metadata; mv           k xi   0 d1 I��

��


��

����20B¢J020H¨ d2   projector-server-common (org/jetbrains/projector/server/util/Host ; 	Companion AsyncHostResolver.kt Code LineNumberTable LocalVariableTable InnerClasses 
SourceFile RuntimeVisibleAnnotations 1            ?   /     *� �    @       / A        	 
       ?   Q     +� M,� ,�  N-"� -�    @   
    0  0 A        	 
      # $  % &  ?   :     *+� (�    @      / A        ) 
      # $   *  ?   -     *� +�    A        	 
      , -   B   
   < =  C    > D   C  .  /[ I 0I 1I 2 3I 0 4I 5 6[ s 7 8[ s 
s 9s s s 9s #s $s :PK          �k3��  �  @   org/jetbrains/projector/server/util/ConvertKt$WhenMappings.class����   7 O :org/jetbrains/projector/server/util/ConvertKt$WhenMappings  java/lang/Object  <clinit> ()V -org/jetbrains/projector/awt/data/AwtPaintType  values 2()[Lorg/jetbrains/projector/awt/data/AwtPaintType; 	 

   DRAW /Lorg/jetbrains/projector/awt/data/AwtPaintType;  	   ordinal ()I  
   FILL  	   $EnumSwitchMapping$0 [I  	   @org/jetbrains/projector/common/protocol/toServer/ResizeDirection  E()[Lorg/jetbrains/projector/common/protocol/toServer/ResizeDirection; 	 
   NW BLorg/jetbrains/projector/common/protocol/toServer/ResizeDirection; ! "	  #
   SW & "	  ' NE ) "	  * SE , "	  - N / "	  0 W 2 "	  3 S 5 "	  6 E 8 "	  9 $EnumSwitchMapping$1 ; 	  < Lkotlin/Metadata; mv           k    xi   0 -org/jetbrains/projector/server/util/ConvertKt G WhenMappings 
Convert.kt Code InnerClasses 
SourceFile RuntimeVisibleAnnotations1          ;         K   �     t� ��
K*� � O*� � O*� �  ��
K*� $� %O*� (� %O*� +� %O*� .� %O*� 1� %O*� 4� %O*� 7� %O*� :� %O*� =�      L   
   H I M    J N     >  ?[ I @I AI B CI D EI FPK          �Q�B  B  G   org/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1.class����   7 � Aorg/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1  KLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this CLorg/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1; invoke 5org/jetbrains/projector/server/util/AsyncHostResolver  access$getQueue$p ()Ljava/util/List;  
   java/util/Collection  isEmpty ()Z      kotlin/collections/CollectionsKt  firstOrNull $(Ljava/util/List;)Ljava/lang/Object;  
    =org/jetbrains/projector/server/util/AsyncHostResolver$Request " java/util/List $ remove (I)Ljava/lang/Object; & ' % ( INSTANCE 7Lorg/jetbrains/projector/server/util/AsyncHostResolver; * +	  , getIp ()Ljava/net/InetAddress; . /
 # 0 access$getName a(Lorg/jetbrains/projector/server/util/AsyncHostResolver;Ljava/net/InetAddress;)Ljava/lang/String; 2 3
  4 3org/jetbrains/projector/server/core/util/HostNameKt 6 getHostName *(Ljava/net/InetAddress;)Ljava/lang/String; 8 9
 7 : access$getAddress2Name$p ()Ljava/util/Map; < =
  > address2Name @ kotlin/jvm/internal/Intrinsics B checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V D E
 C F java/util/Map H put 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; J K I L 	 !invoke$lambda-4$lambda-3$lambda-2 T(Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request;Ljava/lang/String;)V O P
  Q R "java/lang/invoke/LambdaMetafactory T metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; V W
 U X Y run g(Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request;Ljava/lang/String;)Ljava/lang/Runnable; [ \   ] javax/swing/SwingUtilities _ invokeLater (Ljava/lang/Runnable;)V a b
 ` c +$i$a$-let-AsyncHostResolver$runWorker$1$1$1 I it ?Lorg/jetbrains/projector/server/util/AsyncHostResolver$Request; 2$i$a$-synchronized-AsyncHostResolver$runWorker$1$1 +$i$a$-let-AsyncHostResolver$runWorker$1$2$1 name Ljava/lang/String; )$i$a$-let-AsyncHostResolver$runWorker$1$2 res req item Ljava/lang/Object; java/lang/Object r java/lang/Throwable t java/lang/String v $req x checkNotNullParameter z E
 C { $name } 	getClient >()Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;  �
 # � (org/jetbrains/projector/server/util/Host � +(Ljava/net/InetAddress;Ljava/lang/String;)V  �
 � � :org/jetbrains/projector/server/util/ResolvedHostSubscriber � resolved -(Lorg/jetbrains/projector/server/util/Host;)V � � � � ()Ljava/lang/Object;  	
  � kotlin/Unit � Lkotlin/Unit; * �	 � � <clinit>  	
  � * 	  � Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   	runWorker � 	 AsyncHostResolver.kt Code LocalVariableTable StackMapTable LineNumberTable InnerClasses EnclosingMethod 	Signature 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations BootstrapMethods 0       *        	  �   $     *� �    �              	  �  (     ĸ � �  � � � �L� M,� >� � !L+� #Y� W� :6� � ) � #  N,ç N,�-�+� #Y� W���:6� -� 1� 5Y� W� 1� ;:Y� W� 9:6	� ?:

A� G
:
� 1:
� M W� ^  � d    ��@�   I N   N O N    �   ~  @� !   s %  #Q #�    s %  u�  #K #�    s % # #  w�    s % # #  w  w5�      �   R    [  \  ^ ! _ ( ` 7 q : ` F ` G ` H ^ S c d d ~ f � g � h � i � f � f � c � l �   f 
 :  e f  7  g h  ! ' i f  � 0 j f 	 � 3 k l  d [ m f  ~ A n l  a ^ o h   � p q    �      O P  �   V     "*y� |+~� |*� �� �Y*� 1+� �� � �    �      h �       " x h     " } l A  �  �   2     *� �� ��    �       Z �             � 	  �         � Y� �� ��      �   
        �     � �     �    � �   �SMAP
AsyncHostResolver.kt
Kotlin
*S Kotlin
*F
+ 1 AsyncHostResolver.kt
org/jetbrains/projector/server/util/AsyncHostResolver$runWorker$1
+ 2 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,112:1
1#2:113
*E
 �   4  �  �[ I �I �I � �I � �I � �[ s � �[ s �s �s  �     Z  N S NPK          i�_u�+  �+  3   org/jetbrains/projector/server/util/NetworkKt.class����   7q -org/jetbrains/projector/server/util/NetworkKt  java/lang/Object  getLocalAddresses (Z)Ljava/util/List; 0(Z)Ljava/util/List<Ljava/net/InterfaceAddress;>; #Lorg/jetbrains/annotations/NotNull; java/net/NetworkInterface 	 getNetworkInterfaces ()Ljava/util/Enumeration;  
 
  getNetworkInterfaces()  kotlin/jvm/internal/Intrinsics  checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V  
    kotlin/collections/CollectionsKt  iterator -(Ljava/util/Enumeration;)Ljava/util/Iterator;  
   kotlin/sequences/SequencesKt  
asSequence 1(Ljava/util/Iterator;)Lkotlin/sequences/Sequence;   
  ! filterNotNull 8(Lkotlin/sequences/Sequence;)Lkotlin/sequences/Sequence; # $
  % Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$1 ' INSTANCE CLorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$1; ) *	 ( + kotlin/jvm/functions/Function1 - 	filterNot X(Lkotlin/sequences/Sequence;Lkotlin/jvm/functions/Function1;)Lkotlin/sequences/Sequence; / 0
  1 Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$2 3 CLorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$2; ) 5	 4 6 flatMap 8 0
  9 Aorg/jetbrains/projector/server/util/NetworkKt$getLocalAddresses$3 ; <init> (Z)V = >
 < ? filter A 0
  B toList -(Lkotlin/sequences/Sequence;)Ljava/util/List; D E
  F keepIpv6 Z getLocalAddresses$default &(ZILjava/lang/Object;)Ljava/util/List;  
  L getLOCAL_ADDRESSES ()Ljava/util/List; /()Ljava/util/List<Ljava/net/InterfaceAddress;>; LOCAL_ADDRESSES Ljava/util/List; Q R	  S getHostsList 2(Lkotlin/jvm/functions/Function1;)Ljava/util/List; �(Lkotlin/jvm/functions/Function1<-Ljava/net/InetAddress;Lorg/jetbrains/projector/server/util/Host;>;)Ljava/util/List<Lorg/jetbrains/projector/server/util/Host;>; toHost X checkNotNullParameter Z 
  [ java/lang/Iterable ] java/util/ArrayList _ collectionSizeOrDefault (Ljava/lang/Iterable;I)I a b
  c (I)V = e
 ` f java/util/Collection h ()Ljava/util/Iterator;  j ^ k java/util/Iterator m hasNext ()Z o p n q next ()Ljava/lang/Object; s t n u java/net/InterfaceAddress w 
getAddress ()Ljava/net/InetAddress; y z
 x { 
it.address } invoke &(Ljava/lang/Object;)Ljava/lang/Object;  � . � (org/jetbrains/projector/server/util/Host � add (Ljava/lang/Object;)Z � � i � java/util/List � "$i$a$-map-NetworkKt$getHostsList$1 I it Ljava/net/InterfaceAddress; 
item$iv$iv Ljava/lang/Object; 
$i$f$mapTo $this$mapTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv  Lkotlin/jvm/functions/Function1; ipString2Bytes (Ljava/lang/String;)[B src � isIp4String (Ljava/lang/String;)Z � �
  � ip4String2Bytes � �
  � isIp6String � �
  � ip6String2Bytes � �
  � java/lang/IllegalStateException � +Invalid ip address string representation:  � $java/lang/invoke/StringConcatFactory � makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; � �
 � � � &(Ljava/lang/String;)Ljava/lang/String; � �   � toString ()Ljava/lang/String; � �
  � (Ljava/lang/String;)V = �
 � � Ljava/lang/String; [B � address � java/lang/CharSequence � kotlin/text/StringsKt � split$default A(Ljava/lang/CharSequence;[CZIILjava/lang/Object;)Ljava/util/List; � �
 � � ()V = �
 ` � java/lang/String � length ()I � � � � size � � � � charAt (I)C � � � � java/lang/Character � isDigit (C)Z � �
 � � *$i$a$-filter-NetworkKt$isIp4String$parts$1 element$iv$iv $i$f$filterTo $this$filterTo$iv$iv $i$f$filter $this$filter$iv !$i$a$-all-NetworkKt$isIp4String$1 C 
element$iv $i$f$all $this$all$iv Ljava/lang/CharSequence; parts 
isHexDigit toUpperCase (C)C � �
 � � c $this$isHexDigit � �
  � *$i$a$-filter-NetworkKt$isIp6String$parts$1 !$i$a$-all-NetworkKt$isIp6String$1 java/lang/Integer � parseInt (Ljava/lang/String;)I � �
 � � valueOf (I)Ljava/lang/Integer; 
 � java/lang/Number intValue �
 java/lang/Byte	 (B)Ljava/lang/Byte; 

 toByteArray (Ljava/util/Collection;)[B
  ($i$a$-filter-NetworkKt$ip4String2Bytes$1 %$i$a$-map-NetworkKt$ip4String2Bytes$2 %$i$a$-map-NetworkKt$ip4String2Bytes$3 ([S)[B java/nio/ByteBuffer allocate (I)Ljava/nio/ByteBuffer;
 putShort (S)Ljava/nio/ByteBuffer;
 bytes  com/intellij/util/io/IoKt" toByteArray$default -(Ljava/nio/ByteBuffer;ZILjava/lang/Object;)[B$%
#& %$i$a$-forEach-NetworkKt$toByteArray$1 S $i$f$forEach $this$forEach$iv [S Ljava/nio/ByteBuffer; $this$toByteArray, kotlin/text/CharsKt0 
checkRadix (I)I23
14 (Ljava/lang/String;I)I �6
 �7 java/lang/Short9 (S)Ljava/lang/Short; ;
:< toShortArray (Ljava/util/Collection;)[S>?
 @
 B ($i$a$-filter-NetworkKt$ip6String2Bytes$1 %$i$a$-map-NetworkKt$ip6String2Bytes$2 %$i$a$-map-NetworkKt$ip6String2Bytes$3 access$getDockerVendor$p ()[B dockerVendorI �	 J <clinit> J K
 M -Ljava/util/List<Ljava/net/InterfaceAddress;>; Lkotlin/Metadata; mv           k    xi   0 d1;��F
��
 



��

��









��

��/002!	0¢(00
0020020H020H0200200200*0H0*0H"��00¢
��"0X¢
��¨ d2   *Lorg/jetbrains/projector/server/util/Host; Lkotlin/Function1; Ljava/net/InetAddress; Lkotlin/ParameterName; name ip projector-server-common 
Network.kt RuntimeInvisibleAnnotations 	Signature Code LineNumberTable LocalVariableTable StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations BootstrapMethods 1      I � e         Q R f   Oe            g   {     9 � L+� +� � "� &� ,� .� 2� 7� .� :� <Y� @� .� C� G�   h       &  %  '  (  + ' , 5 -i       9 H I  f    e       	 J K g   .     ~� ;� M�   j    h       %  N O g         � T�   h       /f    Pe         U V g  4     {*Y� \� T� ^L=+N� `Y+
� d� g� i:6-� l :� r � ?� v :� x::6	*� |:

~� 
� � � �_� � W���� � �   j    � .  . ^ ^ i n  � Eh   "   1  _ & ` A a O 1 t b y _ z 1i   \ 	 O  � � 	 L  � �  A 0 � �  & P � �  # S � �  # S � �   k � �   m � �    { X �  f    We       k         � � g   }     5*�� \ *� �� 
*� �� "*� �� 
*� �� � �Y*� �  � �� ���   j    P �h      4  5  6 ' 7 4 4i       5 � �  e       k         � � g  6     �*ø \*� ��M,.U,� �� ^M>,:� `Y� �� i:6� l :� r � 9� v :� �:	6
	� Ź � � �  ���� � W���� � L+� � � T*� �M>,:6� � � 3� � 6�66� � 
.� � ���� � � �   j   e � =  �  ^ ^ i n  � -  �@� �   � � � �  � /@� @�   � �     @h   :   < " c 4 d Z < l < } e � c � < � = � f � = � = � g � =i   �  Z  � � 
 W  � � 	 P * � �  4 K � �  1 N � �  1 N � �  " a � �    c � �  �  � �  �  � �  � % � �  � C � �  � E � �  � ] � R    � � �  k         � � g   }     *� �<� � A� [� � � � � �   j    � @@h       A  A  B  Bi      % � �    * � �    � � g  3     �*ø \*� ��M,:U,� �� ^M>,:� `Y� �� i:6� l :� r � 9� v :� �:	6
	� Ź � � �  ���� � W���� � L+� � � T*� �M>,:6� � � 3� � 6�66� �� 
:� � ���� � � �   j   e � =  �  ^ ^ i n  � -  �@� �   � � � �  � /@� @�   � �     @h   6   F " h 4 i Z F l F } j � h � F � G � k � G � l � Gi   �  Z  � � 
 W  � � 	 P * � �  4 K � �  1 N � �  1 N � �  " a � �    c � �  �  � �  �  � �  � % � �  � C � �  � E � �  � ^ � R    � � �  k         � � g  �    G*� ��L+.U+� �� ^L =+N� `Y� �� i:6-� l :� r � 9� v :� �:6	� Ź � � �  ���� � W���� � � ^L =+N� `Y+
� d� g� i:6-� l :� r � /� v :� �::
6	� � �
_� � W���� � � ^L =+N� `Y+
� d� g� i:6-� l :� r � /� v :��6:
6	��
_� � W���� � � i��   j   - � 6  � ^ ^ i n  � -  �@� +5+5h   b    J  K  m . n S K e K v o { m � L � p � q � r � L � L � s � p � M � t � u v( M: w? tC Ni   �  S  � 	 P  � �  I * � �  . J � �  + M � �  + M � �   _ � �   a � �  �  � 	 � 	 � �  �   � �  � @ � �  � C � �  � C � �  � [ � �  � ] � � (  � 	%  � �    � �  � @ � �  � C � �  � C � �  � [ � �  � ] � �   G � �    g   �  
   I*�h�L*M>,:6�6� 56�66	+�W��� +!� +�'�   j    �  ///  !h       Q  R  x / R 9 y : Si   H  / ( � 	 , 
 �)  %  �)   .* �  
 0+,   A -    I.,    � � g       O*� ��L+:U+� �� ^L =+N� `Y� �� i:6-� l :� r � 9� v :� �:6	� Ź � � �  ���� � W���� � � ^L =+N� `Y+
� d� g� i:6-� l :� r � 4� v :� �::
6	�5�8 �
_� � W���� � � ^L =+N� `Y+
� d� g� i:6-� l :� r � /� v :��6:
6	��=
_� � W���� � � i�A�C�   j   - � 6  � ^ ^ i n  � -  �@� +:+5h   j    W  X  z . { S X e X v | { z � Y � } � ~ �  � Y � Y � � � } � Z � � � �- Z? �D �H [K \N Wi   �  S D � 	 P  � �  I * � �  . J � �  + M � �  + M � �   _ � �   a � �  � E � 	 �  � �  � % � �  � E � �  � H � �  � H � �  � ` � �  � b � � - F � 	*  � �    � �  @ � �  � C � �  � C � �  � [ � �  � ] � �   O � �  GH g         �K�   h        L � g   7     �K*T*BT*�K�N� T�   h   
    !  / l     (      4      <     m   dn  6SMAP
Network.kt
Kotlin
*S Kotlin
*F
+ 1 Network.kt
org/jetbrains/projector/server/util/NetworkKt
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 _Strings.kt
kotlin/text/StringsKt___StringsKt
+ 4 _Arrays.kt
kotlin/collections/ArraysKt___ArraysKt
*L
1#1,94:1
1547#2:95
1618#2,3:96
764#2:99
855#2,2:100
764#2:104
855#2,2:105
764#2:109
855#2,2:110
1547#2:112
1618#2,3:113
1547#2:116
1618#2,3:117
764#2:122
855#2,2:123
1547#2:125
1618#2,3:126
1547#2:129
1618#2,3:130
1059#3,2:102
1059#3,2:107
13550#4,2:120
*S KotlinDebug
*F
+ 1 Network.kt
org/jetbrains/projector/server/util/NetworkKt
*L
49#1:95
49#1:96,3
60#1:99
60#1:100,2
70#1:104
70#1:105,2
75#1:109
75#1:110,2
76#1:112
76#1:113,3
77#1:116
77#1:117,3
88#1:122
88#1:123,2
89#1:125
89#1:126,3
90#1:129
90#1:130,3
61#1:102,2
71#1:107,2
82#1:120,2
*E
o   � P Q[ IRISITUIVWIXY[ sZ[[ s Qs\s �s Ns OsIs\s Us]s Xs^s_s`sasbs s Hs\s �s �s\s �s �s �s �s �s �s\ss\scp     �  �PK          ���|  |  ;   org/jetbrains/projector/server/util/ConfirmConnection.class����   7 } 5org/jetbrains/projector/server/util/ConfirmConnection  javax/swing/JLabel  :org/jetbrains/projector/server/util/ResolvedHostSubscriber  <init> (Ljava/lang/String;)V ()V  	
  
 
accessType Ljava/lang/String;  	   this 7Lorg/jetbrains/projector/server/util/ConfirmConnection; +(Ljava/net/InetAddress;Ljava/lang/String;)V $Lorg/jetbrains/annotations/Nullable; #Lorg/jetbrains/annotations/NotNull;  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
    
   5org/jetbrains/projector/server/util/AsyncHostResolver  INSTANCE 7Lorg/jetbrains/projector/server/util/AsyncHostResolver;   !	  " resolve ~(Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;Ljava/net/InetAddress;)Lorg/jetbrains/projector/server/util/Host; $ %
  & java/net/InetAddress ( getHostAddress ()Ljava/lang/String; * +
 ) , ip.hostAddress . checkNotNullExpressionValue 0 
  1 
getMessage &(Ljava/lang/String;)Ljava/lang/String; 3 4
  5 unknown host 7 setText 9 
  : ip Ljava/net/InetAddress; java/lang/String > '(Ljava/lang/String;Ljava/lang/String;)V hostName A K<html>Somebody from  wants to connect with  access. Allow the connection? C $java/lang/invoke/StringConcatFactory E makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; G H
 F I J 8(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; G L   M host resolved -(Lorg/jetbrains/projector/server/util/Host;)V O (org/jetbrains/projector/server/util/Host S toString U +
 T V *Lorg/jetbrains/projector/server/util/Host; <clinit> ?org/jetbrains/projector/server/util/ConfirmConnection$Companion Z 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V  \
 [ ] 	Companion ALorg/jetbrains/projector/server/util/ConfirmConnection$Companion; _ `	  a Lkotlin/Metadata; mv           k xi   0 d1 ���(



��

��




�� 2020:B00¢B00¢	B0¢
J020HJ020HR0X¢
��¨ d2 Ljavax/swing/JLabel; <Lorg/jetbrains/projector/server/util/ResolvedHostSubscriber;   projector-server-common ConfirmConnection.kt RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable StackMapTable $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 1       _ `  s            s             t   B     
*� *+� �    u   
       v       
       
        t   �     9,� *,� *+� "� #*� +� 'W*+� -N-/� 2-� 6� 	*8� 6� ;�    w   + � /   ) ?  �    ) ?   ? u      !  "  #  $ / ' 5 " 8 ) v        9       9 < =    9    x              @  t   a     +B� ,� *,� **+� 6� ;�    u      +  ,  - v                A         x             3 4  t   C     +*� � N  �    u   
    / 
 0 v               O    P Q  t   K     +R� **+� W� 6� ;�    u   
   3  4 v               O X  x         Y 	  t         � [Y� ^� b�      y   
  [  _  z    r {   a  c  d[ I eI fI g hI e iI j k[ s l m[ s s ns os <s =s s ps s As @s s 3s Os Ps ps Xs _s q |     K  DPK          B���  �  c   org/jetbrains/projector/server/ProjectorServer$clientEventHandler$1$onClientConnectionEnded$1.class����   7 R ]org/jetbrains/projector/server/ProjectorServer$clientEventHandler$1$onClientConnectionEnded$1  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> 8(Lorg/jetbrains/projector/server/core/ClientSettings;D)V $clientSettings 4Lorg/jetbrains/projector/server/core/ClientSettings; 
 	   $connectionTime D  	   (I)V  
   this _Lorg/jetbrains/projector/server/ProjectorServer$clientEventHandler$1$onClientConnectionEnded$1; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; 2org/jetbrains/projector/server/core/ClientSettings  
getAddress  
   kotlin/math/MathKt  roundToLong (D)J ! "
   # & disconnected, was connected for  s. % $java/lang/invoke/StringConcatFactory ' makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; ) *
 ( + , '(Ljava/lang/String;J)Ljava/lang/String; ) .   / ()Ljava/lang/Object;  
  2 Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   Corg/jetbrains/projector/server/ProjectorServer$clientEventHandler$1 B onClientConnectionEnded 6(Lorg/jetbrains/projector/server/core/ClientWrapper;)V D E ProjectorServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 0      
            	  H   B     *+� *(� *� �    I                
             H   >     *� � *� � $� 0  �    J       � I            K       A  1  H   /     *� 3�    J       � I             L           C      M    C F N     O    G P   4  4  5[ I 6I 7I 8 9I : ;I < =[ s > ?[ s @s As  Q     -  &PK          ԣ�^P  P  6   org/jetbrains/projector/server/ProjectorServer$6.class����   7 ` 0org/jetbrains/projector/server/ProjectorServer$6  pLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function2<Ljava/lang/Integer;Ljava/lang/String;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function2  <init> 3(Lorg/jetbrains/projector/server/ProjectorServer;)V this$0 0Lorg/jetbrains/projector/server/ProjectorServer; 
 	   (I)V  
   this 2Lorg/jetbrains/projector/server/ProjectorServer$6; 	$receiver invoke (ILjava/lang/String;)V #Lorg/jetbrains/annotations/NotNull; html  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   .org/jetbrains/projector/server/ProjectorServer  access$getCommonQueue$p ^(Lorg/jetbrains/projector/server/ProjectorServer;)Ljava/util/concurrent/ConcurrentLinkedQueue; ! "
   # _org/jetbrains/projector/common/protocol/toClient/ServerMarkdownEvent$ServerMarkdownSetHtmlEvent %  
 & ' *java/util/concurrent/ConcurrentLinkedQueue ) add (Ljava/lang/Object;)Z + ,
 * - id I Ljava/lang/String; 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; java/lang/Number 3 intValue ()I 5 6
 4 7 java/lang/String 9  
  ; kotlin/Unit = INSTANCE Lkotlin/Unit; ? @	 > A p1 Ljava/lang/Object; p2 Lkotlin/Metadata; mv           k    xi   0 d1 :��
��

��

��

����02020H
¢ d2 <anonymous>   =(Lorg/jetbrains/projector/server/core/util/LaterInvokator;Z)V  T ProjectorServer.kt Code LocalVariableTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
        	  W   3     *+� *� �    X                      W   ]     ,� *� � $� &Y,� (� .W�    Y   
   �  � X                / 0      1  Z   	      A  2  W   Q     *+� 4� 8,� :� <� B�    Y       � X                C D     E D   [   
        \      U ]     ^    V _   @  F  G[ I HI II J KI L MI N O[ s P Q[ s Rs Ss /s Ss s Ss PK          ����~  ~  X   org/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$3.class����   7 � Rorg/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$3  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/util/List<+Lorg/jetbrains/projector/common/protocol/toClient/MainWindow;>;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> ()V (I)V  

   this TLorg/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$3; invoke ()Ljava/util/List; Q()Ljava/util/List<Lorg/jetbrains/projector/common/protocol/toClient/MainWindow;>; #Lorg/jetbrains/annotations/NotNull; .org/jetbrains/projector/server/ProjectorServer  	Companion :Lorg/jetbrains/projector/server/ProjectorServer$Companion;  	   8org/jetbrains/projector/server/ProjectorServer$Companion  &getMainWindows$projector_server_common  
   java/lang/Iterable  java/util/ArrayList    kotlin/collections/CollectionsKt " collectionSizeOrDefault (Ljava/lang/Iterable;I)I $ %
 # &
 !  java/util/Collection ) iterator ()Ljava/util/Iterator; + ,  - java/util/Iterator / hasNext ()Z 1 2 0 3 next ()Ljava/lang/Object; 5 6 0 7 #org/jetbrains/projector/awt/PWindow 9 getTitle ()Ljava/lang/String; ; <
 : = getIcons ? 
 : @ firstOrNull $(Ljava/util/List;)Ljava/lang/Object; B C
 # D ;org/jetbrains/projector/server/service/ProjectorImageCacher F INSTANCE =Lorg/jetbrains/projector/server/service/ProjectorImageCacher; H I	 G J 4org/jetbrains/projector/common/protocol/data/ImageId L getImage p(Lorg/jetbrains/projector/common/protocol/data/ImageId;)Lorg/jetbrains/projector/common/protocol/data/ImageData; N O
 G P @org/jetbrains/projector/common/protocol/data/ImageData$PngBase64 R getPngBase64 T <
 S U ;org/jetbrains/projector/common/protocol/toClient/MainWindow W '(Ljava/lang/String;Ljava/lang/String;)V  Y
 X Z add (Ljava/lang/Object;)Z \ ] * ^ java/util/List ` 7$i$a$-let-WebsocketServer$createTransportBuilders$3$1$1 I imageId Ljava/lang/Object; 5$i$a$-map-WebsocketServer$createTransportBuilders$3$1 it %Lorg/jetbrains/projector/awt/PWindow; 
item$iv$iv 
$i$f$mapTo $this$mapTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$map $this$map$iv java/lang/Object q java/lang/String s 6org/jetbrains/projector/common/protocol/data/ImageData u  
  w <clinit>  	
  z H 	  | Lkotlin/Metadata; mv           k    xi   0 d1 &��
��
 

����00H
¢ d2 <anonymous>   =Lorg/jetbrains/projector/common/protocol/toClient/MainWindow; 8org/jetbrains/projector/server/websocket/WebsocketServer � /createTransportBuilders$projector_server_common �  WebsocketServer.kt Code LocalVariableTable StackMapTable LineNumberTable 	Signature RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 0       H        	  �   $     *� �    �                �  �     β � � L=+N� !Y+
� '� (� *:6-� . :� 4 � �� 8 :� :::6	� >� A:

� � N
� E:� � >::6� K� M� Q:� S� � S� _ :� � � V::� XY� [_� _ W��g� a �    �  0 � +     * 0  � 5     * 0 r : a       *  t�      * 0 r : a r      *  t� %     * 0 r : a r r t v  *  @ S�      * 0 r : a r r t v S *  t�      * 0 r : a       *  t t�      * 0   �   b    =  U # V > W L > L ? Q @ ] C a @ c A m C q A s B u X z B � B � B � C � B � C � > � Y � U � = �   p  z  b c  w ! d e  L o f c 	 I r g h  > � i e  # � j c    � k l    � m n   � o c  
 � p l    �     �     �       A  6  �   /     *� x�    �       < �             y 	  �         � Y� {� }�      �   
        �    � � �     �    � �  �SMAP
WebsocketServer.kt
Kotlin
*S Kotlin
*F
+ 1 WebsocketServer.kt
org/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$3
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 fake.kt
kotlin/jvm/internal/FakeKt
*L
1#1,84:1
1547#2:85
1618#2,2:86
1620#2:89
1#3:88
*S KotlinDebug
*F
+ 1 WebsocketServer.kt
org/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$3
*L
61#1:85
61#1:86,2
61#1:89
*E
 �   7  ~  [ I �I �I � �I � �I � �[ s � �[ s �s �s �s PK          �0��  �  X   org/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$1.class����   7 S Rorg/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$1  PLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Ljava/lang/String;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> '(Ljava/lang/String;Ljava/lang/String;)V 	$relayUrl Ljava/lang/String; 
 	   	$serverId  	   (I)V  
   this TLorg/jetbrains/projector/server/websocket/WebsocketServer$createTransportBuilders$1; invoke ()Ljava/lang/String; #Lorg/jetbrains/annotations/NotNull; .org/jetbrains/projector/server/ProjectorServer  kotlin/jvm/internal/Reflection  getOrCreateKotlinClass *(Ljava/lang/Class;)Lkotlin/reflect/KClass;  
   kotlin/reflect/KClass ! getSimpleName #  " $ ' connecting to relay  with serverId  & $java/lang/invoke/StringConcatFactory ( makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; * +
 ) , - J(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; * /   0 ()Ljava/lang/Object;  
  3 Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   8org/jetbrains/projector/server/websocket/WebsocketServer C /createTransportBuilders$projector_server_common ()Ljava/util/List; E F WebsocketServer.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations BootstrapMethods 0      
            	  I   B     *+� *,� *� �    J                
             I   B     �  � % *� *� � 1  �    K      2 J            L       A  2  I   /   