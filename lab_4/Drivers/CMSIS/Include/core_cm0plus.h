me 
runManager #Lcom/intellij/execution/RunManager; pkg &Lcom/intellij/openapi/vfs/VirtualFile; StackMapTable debugConfiguration *(Lcom/intellij/openapi/project/Project;I)V port I lambda$debugConfiguration$1 �(Lcom/intellij/openapi/project/Project;ILcom/intellij/execution/RunManager;Lcom/intellij/javascript/JSRunConfigurationBuilder;)Lcom/intellij/execution/RunnerAndConfigurationSettings; builder 3Lcom/intellij/javascript/JSRunConfigurationBuilder; lambda$debugConfiguration$0 �(Lcom/intellij/javascript/JSRunConfigurationBuilder;Lcom/intellij/openapi/project/Project;ILcom/intellij/execution/RunManager;)Lcom/intellij/execution/RunnerAndConfigurationSettings; settings 
SourceFile CreateRunConfigurationUtil.java BootstrapMethods �
 � � �   � $java/lang/invoke/StringConcatFactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; � npm  �
 � � � � � "java/lang/invoke/LambdaMetafactory metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; � &(Ljava/lang/Object;)Ljava/lang/Object; �
 ( �  � � l(Lcom/intellij/javascript/JSRunConfigurationBuilder;)Lcom/intellij/execution/RunnerAndConfigurationSettings; � ()Ljava/lang/Object; �
 ( � � � � 9()Lcom/intellij/execution/RunnerAndConfigurationSettings; � http://localhost: InnerClasses � %java/lang/invoke/MethodHandles$Lookup � java/lang/invoke/MethodHandles Lookup 1 (      ^ _  `    V  a _  `    b  d _  `    *  e _  `    X  f _  `    :  g _  `    h      j   /     *� �    k        l        m n   	 o p  j   �     8*� M*�  � N-� '� Y*� +�   -� "*+� ,� 2:,� 6�    k   & 	          #  )  ,  1   7 " l   4  1  q r    8 s t     8 u _   3 v w   ) x y  z    � 7  # 	 { |  j   f     *� M:*� <*,� B  � FW�    k       %  &  '  &  1 l         s t      } ~    v w 
  �  j   Y     -*,� L  � P� T�    k       ( l   *     s t      } ~     v w     � � 
 � �  j   �     %*V+�  X� Z  � ,� ] :-� 6�    k       +  ,  +  - " . l   4    % � �     % s t    % } ~    % v w   	 � r   �    � �   "  �  � �  � � � �  � � � �  � �   
  � � � PK          �p���  �  0   com/intellij/javascript/HelperFilesLocator.class����   = � *com/intellij/javascript/HelperFilesLocator  java/lang/Object  <init> ()V  
   this ,Lcom/intellij/javascript/HelperFilesLocator; findBundledHelpersDir ()Ljava/nio/file/Path; helpers  JavaScriptLanguage/src  9com/intellij/lang/javascript/psi/util/JSPluginPathManager  getPluginResourceOrSource E(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;  
   java/io/File  toPath  
   4getPluginResourceOrSourc…ptLanguage/src").toPath()  kotlin/jvm/internal/Intrinsics  checkNotNullExpressionValue '(Ljava/lang/Object;Ljava/lang/String;)V   !
  " getFileRelativeToHelpersDir "(Ljava/lang/String;)Ljava/io/File; java/io/IOException & Lkotlin/jvm/JvmStatic; #Lorg/jetbrains/annotations/NotNull; relativePath * checkNotNullParameter , !
  - INSTANCE / 
	  0  
  2 %com/intellij/openapi/util/io/FileUtil 4 toSystemDependentName &(Ljava/lang/String;)Ljava/lang/String; 6 7
 5 8 #toSystemDependentName(relativePath) : java/nio/file/Path < resolve ((Ljava/lang/String;)Ljava/nio/file/Path; > ? = @ 	normalize B  = C java/nio/file/LinkOption E java/nio/file/Files G exists 2(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z I J
 H K toFile ()Ljava/io/File; M N = O *Cannot find , no such file or directory  Q $java/lang/invoke/StringConcatFactory S makeConcatWithConstants �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; U V
 T W X 4(Ljava/lang/String;Ljava/io/File;)Ljava/lang/String; U Z   [ (Ljava/lang/String;)V  ]
 ' ^ file.toFile() ` 
helpersDir Ljava/nio/file/Path; systemDependentRelativePath Ljava/lang/String; file java/lang/String g $resolvePathOrThrowExecutionExecution )com/intellij/execution/ExecutionException j java/lang/Exception l $ %
  n 4{
      val file = getFi…      file.toPath()
    } p "java/nio/file/InvalidPathException r dialog.message.cannot.find.file t -com/intellij/lang/javascript/JavaScriptBundle v message 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; x y
 w z java/lang/Throwable | *(Ljava/lang/String;Ljava/lang/Throwable;)V  ~
 k  Ljava/io/File; e Ljava/lang/Exception; resolvePathForExecution getAbsolutePath ()Ljava/lang/String; � �
  � 4{
      val file = getFi…  file.absolutePath
    } � Ljava/io/IOException; getBundledHelpersDir Lkotlin/Deprecated; 5Use resolvePathOrThrowExecutionExecution(".") instead replaceWith Lkotlin/ReplaceWith; 
expression &resolvePathOrThrowExecutionExecution() imports Ocom.intellij.javascript.HelperFilesLocator.resolvePathOrThrowExecutionExecution  findBundledHelpersDir().toFile() � <clinit>
   Lkotlin/Metadata; mv           k xi   0 d1 ���"

��


��



Æ��20B¢J0HJ0HJ020	HJ
0	20	HJ020	H¨ d2   intellij.javascript.impl HelperFilesLocator.kt RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable StackMapTable 
Exceptions RuntimeVisibleAnnotations $RuntimeInvisibleParameterAnnotations 
Deprecated 
SourceFile BootstrapMethods 1       / 
  �     )        �   /     *� �    �        �        	 
       �   M     � � Y� #�    �           	    �        	 
    $ %  �   �     Q*+� .� 1� 3L*� 9Y;� #M+,� A � D N-� F� L� � 'Y*-� P � \  � _�-� P Ya� #�    �    � D = h = �           %  0  D  �   *   D b c   9 d e  % , f c    Q * e   �     ' �     (   �     )   �     )    i ?  �   �     W*+� . � 1W*� oM,� L+q� #+L� 8M,N-� '� � -� s� !� kYu� :*S� {,� }� ��,�+�      m  �   # ` m�   m mC �   h =    �   2   $  %  &  $  %   ( ! ) # + # * . + S , V $ �        f �  ! 4 � �    W * e   �     k �     (   �     )   �     )    � 7  �   �     >*+� . � 1W*� oM,� �L+�� #+L� M� kYu� N-*S-� {,� }� ��+�      '  �    ` '�  h  �   "   4  5  6  4  5   8 ! 9 = 4 �        f �  !  � �    > * e   �     k �     (   �     )   �     )    � N  �   *      � 1� 3� P Y�� #�    �       A �     �   #  �  xs � �@ �  �s � �[ s � (   �     )    �   �         � Y� �� 1�      �    � �   R  �  �[ I �I �I � �I � �I � �[ s � �[ s 
s �s s s cs �s �s $s *s �s �s is � �     Y  RPK          �t���  �  >   com/intellij/javascript/JSAnnotationParameterInfoHandler.class����   = �
      java/lang/Object <init> ()V  	 
   :com/intellij/lang/parameterInfo/CreateParameterInfoContext getFile ()Lcom/intellij/psi/PsiFile;     	getOffset ()I  3com/intellij/lang/javascript/psi/ecmal4/JSAttribute
      2com/intellij/lang/parameterInfo/ParameterInfoUtils findParentOfType K(Lcom/intellij/psi/PsiFile;ILjava/lang/Class;)Lcom/intellij/psi/PsiElement;  <com/intellij/lang/javascript/psi/ecmal4/impl/JSAttributeImpl
     getBackedDescriptor )()Lcom/intellij/xml/XmlElementDescriptor;    ! " setItemsToShow ([Ljava/lang/Object;)V  $ %  getTextOffset  ' ( ) showHint W(Lcom/intellij/psi/PsiElement;ILcom/intellij/lang/parameterInfo/ParameterInfoHandler;)V + 	 , :com/intellij/lang/parameterInfo/UpdateParameterInfoContext +   / 0 1 getNode ()Lcom/intellij/lang/ASTNode;	 3 4 5 6 7 )com/intellij/lang/javascript/JSTokenTypes COMMA $Lcom/intellij/psi/tree/IElementType;
  9 : ; getCurrentParameterIndex C(Lcom/intellij/lang/ASTNode;ILcom/intellij/psi/tree/IElementType;)I + = > ? setCurrentParameter (I)V A B C D E 6com/intellij/lang/parameterInfo/ParameterInfoUIContext getParameterOwner ()Lcom/intellij/psi/PsiElement;   G H I fun S(Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;)Lcom/intellij/util/Function;
 K L M N O ?com/intellij/codeInsight/hint/api/impls/XmlParameterInfoHandler updateElementDescriptor ~(Lcom/intellij/xml/XmlElementDescriptor;Lcom/intellij/lang/parameterInfo/ParameterInfoUIContext;Lcom/intellij/util/Function;)V Q %com/intellij/xml/XmlElementDescriptor
 S T U V W 8com/intellij/javascript/JSAnnotationParameterInfoHandler updateUI b(Lcom/intellij/xml/XmlElementDescriptor;Lcom/intellij/lang/parameterInfo/ParameterInfoUIContext;)V
 S Y Z [ updateParameterInfo t(Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;Lcom/intellij/lang/parameterInfo/UpdateParameterInfoContext;)V
 S ] ^ _ #findElementForUpdatingParameterInfo s(Lcom/intellij/lang/parameterInfo/UpdateParameterInfoContext;)Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;
 S a b c showParameterInfo t(Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext;)V
 S e f g findElementForParameterInfo s(Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext;)Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;  i j k getValueByName V(Ljava/lang/String;)Lcom/intellij/lang/javascript/psi/ecmal4/JSAttributeNameValuePair;
 m n o p q java/lang/Boolean valueOf (Z)Ljava/lang/Boolean; s 4com/intellij/lang/parameterInfo/ParameterInfoHandler Code LineNumberTable LocalVariableTable this :Lcom/intellij/javascript/JSAnnotationParameterInfoHandler; elementDescriptor 'Lcom/intellij/xml/XmlElementDescriptor; context <Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext; 	attribute 5Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute; StackMapTable RuntimeInvisibleTypeAnnotations #Lorg/jetbrains/annotations/NotNull; $RuntimeInvisibleParameterAnnotations element <Lcom/intellij/lang/parameterInfo/UpdateParameterInfoContext; parameterOwner currentParameterIndex I p 8Lcom/intellij/lang/parameterInfo/ParameterInfoUIContext; attr M(Ljava/lang/Object;Lcom/intellij/lang/parameterInfo/ParameterInfoUIContext;)V Q(Ljava/lang/Object;Lcom/intellij/lang/parameterInfo/UpdateParameterInfoContext;)V P(Lcom/intellij/lang/parameterInfo/UpdateParameterInfoContext;)Ljava/lang/Object; Q(Ljava/lang/Object;Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext;)V P(Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext;)Ljava/lang/Object; lambda$updateUI$0 \(Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;Ljava/lang/String;)Ljava/lang/Boolean; s Ljava/lang/String; 	Signature �Ljava/lang/Object;Lcom/intellij/lang/parameterInfo/ParameterInfoHandler<Lcom/intellij/lang/javascript/psi/ecmal4/JSAttribute;Lcom/intellij/xml/XmlElementDescriptor;>; 
SourceFile %JSAnnotationParameterInfoHandler.java BootstrapMethods �
 � � � � � "java/lang/invoke/LambdaMetafactory metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; � &(Ljava/lang/Object;)Ljava/lang/Object; �
 S � � � � '(Ljava/lang/String;)Ljava/lang/Boolean; InnerClasses � %java/lang/invoke/MethodHandles$Lookup � java/lang/invoke/MethodHandles Lookup $$$reportNull$$$0 � ?
 S � >Argument for @NotNull parameter '%s' of %s.%s must not be null � { � � U f b ^ Z V java/lang/String � format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; � �
 � � "java/lang/IllegalArgumentException � (Ljava/lang/String;)V  �
 � � [Ljava/lang/Object; � ! S   r        t   /     *� �    u        v        w x    f g  t   �     ?+� � �+�  +�  � � M,� ,� � N-� +� Y-S�  ,��       	 � 4  u         !  )  -  ;  =  v   *  )  y z    ? w x     ? { |   " } ~  �   	    �   �     �    b c  t   k     +� � �,� � �,++� # *� & �         u   
      ! v         w x      � ~     { |  �       �    �   �     �    �    ^ _  t   Z     +� � �+� * +� - � � �         u      % v        w x      { �  �   	    �   �     �    Z [  t   �     ++� � �,� � �+� . ,� - � 2� 8>,� < �         u      * # + * , v   *    + w x     + � ~    + { �  #  � �  �       �    �   �     �    �    V W  t   x     ,� � �,� @ � N+,-� F  � J�        	 u     	 0  1  2 v   *     w x      � z     { �    � ~  �   	   �   �   	    �  A V �  t   4     
*+� P,� R�    u        v       
 w x   �   	   �   �   	    �  A Z �  t   4     
*+� ,� X�    u        v       
 w x   �       �    �   �     �    �  A ^ �  t   0     *+� \�    u        v        w x   �   	    �   �     �  A b �  t   4     
*+� ,� `�    u        v       
 w x   �       �    �   �     �    �  A f �  t   0     *+� d�    u        v        w x   �   	    �   �     �  
 � �  t   R     *+� h � � � l�        @ u       1 v        � ~      � � 
 � ?  t  L     ��� �   )          )   1   )   )   9   )   )Y�S� Y�S� Y�S� Y�S�    *          *   2   2   :   B   B   JY�S� #Y�S� Y�S� Y�S� Y�S� � �� �Z_� ſ       � 
� 0   � ��    � ��    � ��    � �� /   � ��    � ��    � ��    � ��    � ��    � �  �   
  � � �  �    � �    � �     �  � � �PK          <l���  �  ?   com/intellij/javascript/JSCommandLineLanguageLevelGuesser.class����   = p
      java/lang/Object <init> ()V  js 
 )js.commandline.configure.language.version
      -com/intellij/lang/javascript/JavaScriptBundle message 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;      $com/intellij/openapi/project/Project 
getBaseDir (()Lcom/intellij/openapi/vfs/VirtualFile;      Mcom/intellij/ide/CommandLineInspectionProjectConfigurator$ConfiguratorContext 	getLogger :()Lcom/intellij/ide/CommandLineInspectionProgressReporter;  No base dir   ! " # $ 6com/intellij/ide/CommandLineInspectionProgressReporter reportMessage (ILjava/lang/String;)V
 & ' ( ) * .com/intellij/javascript/JSLanguageLevelGuesser configureProject O(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;)V , 9com/intellij/javascript/JSCommandLineLanguageLevelGuesser . 9com/intellij/ide/CommandLineInspectionProjectConfigurator Code LineNumberTable LocalVariableTable this ;Lcom/intellij/javascript/JSCommandLineLanguageLevelGuesser; getName ()Ljava/lang/String; RuntimeInvisibleAnnotations #Lorg/jetbrains/annotations/NotNull; RuntimeInvisibleTypeAnnotations getDescription Lorg/jetbrains/annotations/Nls; capitalization .Lorg/jetbrains/annotations/Nls$Capitalization; Sentence x(Lcom/intellij/openapi/project/Project;Lcom/intellij/ide/CommandLineInspectionProjectConfigurator$ConfiguratorContext;)V project &Lcom/intellij/openapi/project/Project; context OLcom/intellij/ide/CommandLineInspectionProjectConfigurator$ConfiguratorContext; baseDir &Lcom/intellij/openapi/vfs/VirtualFile; StackMapTable G $com/intellij/openapi/vfs/VirtualFile $RuntimeInvisibleParameterAnnotations 
SourceFile &JSCommandLineLanguageLevelGuesser.java InnerClasses ConfiguratorContext N ,org/jetbrains/annotations/Nls$Capitalization P org/jetbrains/annotations/Nls Capitalization $$$reportNull$$$0 (I)V R S
 + T java/lang/String V *@NotNull method %s.%s must not return null X >Argument for @NotNull parameter '%s' of %s.%s must not be null Z , ? A 9 ) format a 
 W b java/lang/IllegalStateException d (Ljava/lang/String;)V  f
 e g "java/lang/IllegalArgumentException i
 j g [Ljava/lang/Object; l java/lang/RuntimeException n ! +   -        /   /     *� �    0       
 1        2 3    4 5  /   -     �    0        1        2 3   6     7   8      7    9 5  /   H     	� � Y� � U�    E    Q W 0        1        2 3   6     7   :  ;e < = 8      7    :  ;e < =  ) >  /   �     3+� � U,� � U+�  N-� ,�  �  -� +-� %�    E    �  F 0         )  2  1   *    3 2 3     3 ? @    3 A B    C D  8       7    7   H     7    7  
 R S  /  �    �                       Y� [� �                   � � � �                   $   ,Y\S� Y]S� Y^S� �                  #   #Y_S� Y\S� �                     � Y`S� � c�                $   $� eZ_� h� � jZ_� k� �    E   � D WY WC W�    W�    W m�    W m�    W m�    W m�    W m�    W m�    W m�    W m�    W m�    W m\ WJ WJ o  K      - L	 M O Q@ I    JPK          �qh    :   com/intellij/javascript/JSEmbeddedTokenTypesProvider.class����   = 7
      java/lang/Object <init> ()V  
javascript	 
     +com/intellij/lang/javascript/JSElementTypes EMBEDDED_CONTENT $Lcom/intellij/psi/tree/IElementType;  4com/intellij/javascript/JSEmbeddedTokenTypesProvider  -com/intellij/lexer/EmbeddedTokenTypesProvider Code LineNumberTable LocalVariableTable this 6Lcom/intellij/javascript/JSEmbeddedTokenTypesProvider; getName ()Ljava/lang/String; RuntimeInvisibleAnnotations #Lorg/jetbrains/annotations/NotNull; RuntimeInvisibleTypeAnnotations getElementType &()Lcom/intellij/psi/tree/IElementType; 
SourceFile !JSEmbeddedTokenTypesProvider.java $$$reportNull$$$0 (I)V ! "
  # "com/intellij/psi/tree/IElementType % *@NotNull method %s.%s must not return null '   java/lang/String + format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; - .
 , / java/lang/IllegalStateException 1 (Ljava/lang/String;)V  3
 2 4 StackMapTable !               /     *� �                               -     �                                                B     � 	Y� � $�    6    K &                                     
 ! "     (     (� Y)SY*S� 0� 2Z_� 5�           PK          ��xd1  1  ?   com/intellij/javascript/JSEnterInStringLiteralHandler$1$1.class����   = F	      9com/intellij/javascript/JSEnterInStringLiteralHandler$1$1 this$1 9Lcom/intellij/javascript/JSEnterInStringLiteralHandler$1;
  	 
   &com/intellij/javascript/JSQuoteHandler <init> ()V	      )com/intellij/lang/javascript/JSTokenTypes STRING_LITERALS  Lcom/intellij/psi/tree/TokenSet;  + <(Lcom/intellij/javascript/JSEnterInStringLiteralHandler$1;)V Code LineNumberTable LocalVariableTable this ;Lcom/intellij/javascript/JSEnterInStringLiteralHandler$1$1; !getConcatenatableStringTokenTypes "()Lcom/intellij/psi/tree/TokenSet; RuntimeInvisibleAnnotations #Lorg/jetbrains/annotations/NotNull; RuntimeInvisibleTypeAnnotations ,getStringConcatenationOperatorRepresentation ()Ljava/lang/String; 
SourceFile "JSEnterInStringLiteralHandler.java EnclosingMethod & 7com/intellij/javascript/JSEnterInStringLiteralHandler$1 ( ) getJavaLikeQuoteHandler �(Lcom/intellij/openapi/editor/Editor;Lcom/intellij/psi/PsiElement;)Lcom/intellij/codeInsight/editorActions/JavaLikeQuoteHandler; NestHost , 5com/intellij/javascript/JSEnterInStringLiteralHandler InnerClasses $$$reportNull$$$0 (I)V . /
  0 com/intellij/psi/tree/TokenSet 2 *@NotNull method %s.%s must not return null 4 java/lang/Object 6   java/lang/String : format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; < =
 ; > java/lang/IllegalStateException @ (Ljava/lang/String;)V  B
 A C StackMapTable                     >     
*+� *� �           A        
       
           B     � Y� � 1�    E    K 3        E                                 !     -     �           J            
 . /     (     5� 7Y8SY9S� ?� AZ_� D�      -     %              $    % ' "    # *    +PK          B�rF	  F	  =   com/intellij/javascript/JSEnterInStringLiteralHandler$1.class����   = J	      7com/intellij/javascript/JSEnterInStringLiteralHandler$1 this$0 7Lcom/intellij/javascript/JSEnterInStringLiteralHandler;
  	 
   Hcom/intellij/codeInsight/editorActions/enter/EnterInStringLiteralHandler <init> ()V  9com/intellij/javascript/JSEnterInStringLiteralHandler$1$1
     <(Lcom/intellij/javascript/JSEnterInStringLiteralHandler$1;)V :(Lcom/intellij/javascript/JSEnterInStringLiteralHandler;)V Code LineNumberTable LocalVariableTable this 9Lcom/intellij/javascript/JSEnterInStringLiteralHandler$1; getJavaLikeQuoteHandler �(Lcom/intellij/openapi/editor/Editor;Lcom/intellij/psi/PsiElement;)Lcom/intellij/codeInsight/editorActions/JavaLikeQuoteHandler; editor $Lcom/intellij/openapi/editor/Editor; psiAtOffset Lcom/intellij/psi/PsiElement; RuntimeInvisibleTypeAnnotations #Lorg/jetbrains/annotations/NotNull; $RuntimeInvisibleParameterAnnotations 
SourceFile "JSEnterInStringLiteralHandler.java EnclosingMethod % 5com/intellij/javascript/JSEnterInStringLiteralHandler ' ( preprocessEnter5(Lcom/intellij/psi/PsiFile;Lcom/intellij/openapi/editor/Editor;Lcom/intellij/openapi/util/Ref;Lcom/intellij/openapi/util/Ref;Lcom/intellij/openapi/actionSystem/DataContext;Lcom/intellij/openapi/editor/actionSystem/EditorActionHandler;)Lcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result; NestHost InnerClasses , Hcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result . Acom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate Result $$$reportNull$$$0 (I)V 0 1
  2 >Argument for @NotNull parameter '%s' of %s.%s must not be null 4 java/lang/Object 6     java/lang/String < format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; > ?
 = @ "java/lang/IllegalArgumentException B (Ljava/lang/String;)V  D
 C E [Ljava/lang/Object; G StackMapTable                     >     
*+� *� �           >        
       
           a     +� � 3,� � 3� Y*� �    I           A                                                    
 0 1     �     B5� 7�                Y8S� Y9S� Y:SY;S� A� CZ_� F�    I   , �    = H�    = H�    = H  *                   + - /@ #    $ & !    " )    $PK          ��    ;   com/intellij/javascript/JSEnterInStringLiteralHandler.class����   =
      Hcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegateAdapter <init> ()V
  	 
   3com/intellij/codeInsight/editorActions/EnterHandler getLanguage M(Lcom/intellij/openapi/actionSystem/DataContext;)Lcom/intellij/lang/Language;  .com/intellij/lang/javascript/JSLanguageDialect	      Hcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result Continue JLcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result;
      com/intellij/openapi/util/Ref get ()Ljava/lang/Object;  java/lang/Integer
      intValue ()I " # $ % & com/intellij/psi/PsiFile findElementAt  (I)Lcom/intellij/psi/PsiElement; ( ) * +   com/intellij/psi/PsiElement getTextOffset - . / 0 1 "com/intellij/openapi/editor/Editor getDocument (()Lcom/intellij/openapi/editor/Document; 3 4 5 6 7 $com/intellij/openapi/editor/Document getText ()Ljava/lang/String; ( 9 : ; getNode ()Lcom/intellij/lang/ASTNode; ( = > ? getContainingFile ()Lcom/intellij/psi/PsiFile;
 A B C D E 3com/intellij/codeInsight/editorActions/TypedHandler getQuoteHandler u(Lcom/intellij/psi/PsiFile;Lcom/intellij/openapi/editor/Editor;)Lcom/intellij/codeInsight/editorActions/QuoteHandler; G &com/intellij/javascript/JSQuoteHandler	 I J K L M )com/intellij/lang/javascript/JSTokenTypes LITERALS  Lcom/intellij/psi/tree/TokenSet; O P Q R S com/intellij/lang/ASTNode getElementType &()Lcom/intellij/psi/tree/IElementType;
 U V W X Y com/intellij/psi/tree/TokenSet contains '(Lcom/intellij/psi/tree/IElementType;)Z O [ \ ] getTextRange '()Lcom/intellij/openapi/util/TextRange; O 4 ` a b c   java/lang/CharSequence length ` e f g charAt (I)C
 i j k l m java/lang/String indexOf (I)I o 7com/intellij/javascript/JSEnterInStringLiteralHandler$1
 n q  r :(Lcom/intellij/javascript/JSEnterInStringLiteralHandler;)V
 n t u v preprocessEnter5(Lcom/intellij/psi/PsiFile;Lcom/intellij/openapi/editor/Editor;Lcom/intellij/openapi/util/Ref;Lcom/intellij/openapi/util/Ref;Lcom/intellij/openapi/actionSystem/DataContext;Lcom/intellij/openapi/editor/actionSystem/EditorActionHandler;)Lcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result;
 i e y %com/intellij/lexer/StringLiteralLexer
 x {  | ((CLcom/intellij/psi/tree/IElementType;)V
 ~  � �   #com/intellij/openapi/util/TextRange getStartOffset
 ~ � �   getEndOffset
 x � � � start (Ljava/lang/CharSequence;II)V
 x � � S getTokenType
 x � �   getTokenStart
 x � �   getTokenEnd	 � � � � M (com/intellij/psi/StringEscapesTokenTypes STRING_LITERAL_ESCAPES
 x � �  advance 3 � � � getCharsSequence ()Ljava/lang/CharSequence; � \ 3 � � � insertString (ILjava/lang/CharSequence;)V
  � � � valueOf (I)Ljava/lang/Integer;
  � � � set (Ljava/lang/Object;)V	  � �  DefaultForceIndent � 5com/intellij/javascript/JSEnterInStringLiteralHandler Code LineNumberTable LocalVariableTable this 7Lcom/intellij/javascript/JSEnterInStringLiteralHandler; c C range %Lcom/intellij/openapi/util/TextRange; 	tokenText Ljava/lang/String; enterAfterSlashAndBeforeQuote Z literalStart lexer 'Lcom/intellij/lexer/StringLiteralLexer; 	atNewLine document &Lcom/intellij/openapi/editor/Document; text Ljava/lang/CharSequence; token Lcom/intellij/lang/ASTNode; fileTypeQuoteHandler 5Lcom/intellij/codeInsight/editorActions/QuoteHandler; quoteHandler (Lcom/intellij/javascript/JSQuoteHandler; file Lcom/intellij/psi/PsiFile; editor $Lcom/intellij/openapi/editor/Editor; caretOffsetRef Lcom/intellij/openapi/util/Ref; caretAdvanceRef dataContext /Lcom/intellij/openapi/actionSystem/DataContext; originalHandler >Lcom/intellij/openapi/editor/actionSystem/EditorActionHandler; language Lcom/intellij/lang/Language; caretOffset I caretAdvance psiAtOffset Lcom/intellij/psi/PsiElement; LocalVariableTypeTable 4Lcom/intellij/openapi/util/Ref<Ljava/lang/Integer;>; StackMapTable � com/intellij/lang/Language � -com/intellij/openapi/actionSystem/DataContext � <com/intellij/openapi/editor/actionSystem/EditorActionHandler � 3com/intellij/codeInsight/editorActions/QuoteHandler 	Signature_(Lcom/intellij/psi/PsiFile;Lcom/intellij/openapi/editor/Editor;Lcom/intellij/openapi/util/Ref<Ljava/lang/Integer;>;Lcom/intellij/openapi/util/Ref<Ljava/lang/Integer;>;Lcom/intellij/openapi/actionSystem/DataContext;Lcom/intellij/openapi/editor/actionSystem/EditorActionHandler;)Lcom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate$Result; RuntimeInvisibleTypeAnnotations #Lorg/jetbrains/annotations/NotNull; $RuntimeInvisibleParameterAnnotations 
SourceFile "JSEnterInStringLiteralHandler.java NestMembers � 9com/intellij/javascript/JSEnterInStringLiteralHandler$1$1 InnerClasses � Acom/intellij/codeInsight/editorActions/enter/EnterHandlerDelegate Result $$$reportNull$$$0 (I)V � �
 � � >Argument for @NotNull parameter '%s' of %s.%s must not be null � java/lang/Object � � � � � � � u format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
 i "java/lang/IllegalArgumentException
 (Ljava/lang/String;)V 
 [Ljava/lang/Object; ! �           �   /     *� �    �        �        � �    u v  �  |    �+� � �,� � �-� � �� � �� � �� :� � � �-� � � 6� � � 6	+� ! :

��
� ' �,� , :� 2 :
� 8 :
� < ,� @:� F� � F� :�@� H� N � T�0� Z :� ^ :� ;� _ � /d� d \� � d Y6"� 
'� � 6� � �
� h� � nY*� p+,-� s�� w6� xY� N � z:� }� �� �� �� 7� �� %� �� � �� �� T� � �6� � ����� � � d 
� � 6�� � � 	6	� �-� �� �	� �� �� ��� �    �   � �  �� j  � " -   � � � ( 3 i O �  @ F� b  � " -   � � � ( 3 i O � F ~ i  � @� 
 � * x3@� �   � " -   � � � (   �   � + * " 1 # 9 $ = & I ' V ( ` ) q * y + � , � - � . � / � 1 � 2 � 3 � 4 � 6 � 7 � 8 � 9 ; =' >8 N; >< QD RV Sg Uo V� W� X� \� _� `� a� b� d� g� h� i� l �   �    � �  �$ � �  � � �  � � � D � � � V � � � � 0 � �  yt � �  �k � �  �b � �  �U � �  �B � �   � � �    � � �   � � �   � � �   � � �   � � �   � � �  1� � �  I� � �  V� � � 	 `� � � 
 �      � � �   � � �  �    � �   %    �    �    �    �    �   �   !  �    �    �    �    �    
 � �  �   �     l�� ��   !          !   )   2   ;   DY�S� 'Y S� YS� YS� YS� YSYS�	�Z_��    �   V � (   i�    i�    i�    i�    i�    i  �      � �@ n       �       �    � �     n �PK          ��_\�  �  4   com/intellij/javascript/JSFillParagraphHandler.class����   = F
      Icom/intellij/codeInsight/editorActions/fillParagraph/ParagraphFillHandler <init> ()V  com/intellij/psi/PsiComment 
     com/intellij/psi/PsiElement 	getParent ()Lcom/intellij/psi/PsiElement;  'com/intellij/lang/javascript/psi/JSFile
     performOnElement D(Lcom/intellij/psi/PsiElement;Lcom/intellij/openapi/editor/Editor;)V  .com/intellij/javascript/JSFillParagraphHandler Code LineNumberTable LocalVariableTable this 0Lcom/intellij/javascript/JSFillParagraphHandler; isAvailableForElement  (Lcom/intellij/psi/PsiElement;)Z element Lcom/intellij/psi/PsiElement; StackMapTable RuntimeInvisibleTypeAnnotations $Lorg/jetbrains/annotations/Nullable; $RuntimeInvisibleParameterAnnotations isAvailableForFile (Lcom/intellij/psi/PsiFile;)Z psiFile Lcom/intellij/psi/PsiFile; editor $Lcom/intellij/openapi/editor/Editor; #Lorg/jetbrains/annotations/NotNull; 
SourceFile JSFillParagraphHandler.java $$$reportNull$$$0 (I)V - .
  / >Argument for @NotNull parameter '%s' of %s.%s must not be null 1 java/lang/Object 3  (   java/lang/String 9 format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; ; <
 : = "java/lang/IllegalArgumentException ? (Ljava/lang/String;)V  A
 @ B [Ljava/lang/Object; D !               /     *� �                               ]     +� � +� +� 	 � � � �         @                           !   	    "   #     "    $ %     9     +� �                           & '  !   	    "   #     "          z     %+� � 0,� � 0+� � 
+� 	 L*+,� �                     $           %       %      % ( )  !       *    *   #     *    *  
 - .     �     B2� 4�                Y5S� Y6S� Y7SY8S� >� @Z_� C�        , �    : E�    : E�    : E  +    ,PK          }j��  �  =   com/intellij/javascript/JSImplementationTextSelectioner.class����   = M
      java/lang/Object <init> ()V  	 
   com/intellij/psi/PsiElement getTextOffset ()I  7com/intellij/lang/javascript/psi/JSDefinitionExpression  6com/intellij/lang/javascript/psi/JSExpressionStatement
      !com/intellij/psi/util/PsiTreeUtil getParentOfType M(Lcom/intellij/psi/PsiElement;Ljava/lang/Class;)Lcom/intellij/psi/PsiElement;     getTextRange '()Lcom/intellij/openapi/util/TextRange;
      #com/intellij/openapi/util/TextRange getEndOffset ! 7com/intellij/javascript/JSImplementationTextSelectioner # ;com/intellij/codeInsight/hint/ImplementationTextSelectioner Code LineNumberTable LocalVariableTable this 9Lcom/intellij/javascript/JSImplementationTextSelectioner; getTextStartOffset  (Lcom/intellij/psi/PsiElement;)I element Lcom/intellij/psi/PsiElement; RuntimeInvisibleTypeAnnotations #Lorg/jetbrains/annotations/NotNull; $RuntimeInvisibleParameterAnnotations getTextEndOffset jsExpressionStatement 8Lcom/intellij/lang/javascript/psi/JSExpressionStatement; StackMapTable 
SourceFile $JSImplementationTextSelectioner.java $$$reportNull$$$0 (I)V 6 7
   8 >Argument for @NotNull parameter '%s' of %s.%s must not be null : + ! ) 0 java/lang/String @ format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; B C
 A D "java/lang/IllegalArgumentException F (Ljava/lang/String;)V  H
 G I [Ljava/lang/Object; K !     "        $   /     *� �    %       
 &        ' (    ) *  $   L     +� � 9+�  �    3     %       &        ' (      + ,  -   	    .   /     .    0 *  $   }     )+� � 9+� � +� � M,� ,L+�  � �    3     %             &        1 2    ) ' (     ) + ,  -   	    .   /     .  
 6 7  $   �     D;� Y<SY=S�                  Y>S� Y?S� � E� GZ_� J�    3   , � (   A L�    A L�    A L  4    5PK          jwy#�  �  >   com/intellij/javascript/JSLanguageLevelGuesser$Companion.class����   = � 8com/intellij/javascript/JSLanguageLevelGuesser$Companion  java/lang/Object  <init> ()V  
   this :Lcom/intellij/javascript/JSLanguageLevelGuesser$Companion; configureProject O(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;)V Lkotlin/jvm/JvmStatic; <Lcom/intellij/util/concurrency/annotations/RequiresReadLock; generateAssertion     #Lorg/jetbrains/annotations/NotNull; project  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   baseDir  ;com/intellij/lang/javascript/buildTools/npm/PackageJsonUtil  findChildPackageJsonFile N(Lcom/intellij/openapi/vfs/VirtualFile;)Lcom/intellij/openapi/vfs/VirtualFile;  
    .com/intellij/javascript/nodejs/PackageJsonData " getOrCreate X(Lcom/intellij/openapi/vfs/VirtualFile;)Lcom/intellij/javascript/nodejs/PackageJsonData; $ %
 # & getOrCreate(packageJson) ( checkNotNullExpressionValue * 
  + getAllDependencies ()Ljava/util/Set; - .
 # / java/util/Set 1 iterator ()Ljava/util/Iterator; 3 4 2 5 java/util/Iterator 7 hasNext ()Z 9 : 8 ; next ()Ljava/lang/Object; = > 8 ? java/lang/String A react C areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z E F
  G 5com/intellij/lang/javascript/dialects/JSLanguageLevel I getLevelForJSX 9()Lcom/intellij/lang/javascript/dialects/JSLanguageLevel; K L
 J M flow-bin O FLOW 7Lcom/intellij/lang/javascript/dialects/JSLanguageLevel; Q R	 J S .flowconfig U $com/intellij/openapi/vfs/VirtualFile W 	findChild :(Ljava/lang/String;)Lcom/intellij/openapi/vfs/VirtualFile; Y Z
 X [ applyGuessedLanguageLevel `(Lcom/intellij/openapi/project/Project;Lcom/intellij/lang/javascript/dialects/JSLanguageLevel;)V ] ^
  _ dep Ljava/lang/String; data 0Lcom/intellij/javascript/nodejs/PackageJsonData; guessedLevel packageJson &Lcom/intellij/openapi/vfs/VirtualFile; &Lcom/intellij/openapi/project/Project; $com/intellij/openapi/project/Project i $Lorg/jetbrains/annotations/Nullable; 9com/intellij/lang/javascript/settings/JSRootConfiguration l getInstance c(Lcom/intellij/openapi/project/Project;)Lcom/intellij/lang/javascript/settings/JSRootConfiguration; n o
 m p getLanguageLevel r L
 m s 	isAtLeast :(Lcom/intellij/lang/javascript/dialects/JSLanguageLevel;)Z u v
 J w !storeLanguageLevelAndUpdateCaches :(Lcom/intellij/lang/javascript/dialects/JSLanguageLevel;)V y z
 m { rootConfiguration ;Lcom/intellij/lang/javascript/settings/JSRootConfiguration; 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V
   $constructor_marker .Lkotlin/jvm/internal/DefaultConstructorMarker; Lkotlin/Metadata; mv       k xi   0 d1 |��&

��


��

��



����20B¢J02020HJ	0202
0H¨ d2   intellij.javascript.impl .com/intellij/javascript/JSLanguageLevelGuesser � 	Companion JSLanguageLevelGuesser.kt Code LineNumberTable LocalVariableTable StackMapTable RuntimeVisibleAnnotations RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile 1            �   /     *� �    �        �        	 
       �  M     �+� ,� N,� !:� T� 'Y)� ,:� 0� 6 :� < � 1� @ � B:D� H� 
� NN���P� H��Ҳ TN� -� T� ,V� \� � TN*+-� `�    �   ( � 2   j X J X # 8  � & B�  �   :     $  %  & & ' H ( R ) Y + c , g - j 1 z 2 ~ 5 � 6 �   H  H " a b  & D c d   w e R   q f g    � 	 
     �  h    �  g  �        �       Z  �             ] ^  �   �     (+� ,�  +� qN,-� t� x� ,-� t� -,� |�    �    ' �      : 
 ;  < " = ' @ �   *    } ~    ( 	 
     (  h    ( e R  �        �         k      �   -     *� ��    �        	 
      � �   �   
   � �  �    � �   R  �  �[ I �I �I  �I � �I � �[ s � �[ s 
s �s s ]s �s s hs es Rs s s gs �PK          d�zt�  �  @   com/intellij/javascript/JSLanguageLevelGuesser$configure$2.class����   = G :com/intellij/javascript/JSLanguageLevelGuesser$configure$2  KLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function0<Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function0  <init> O(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;)V $project &Lcom/intellij/openapi/project/Project; 
 	   $baseDir &Lcom/intellij/openapi/vfs/VirtualFile;  	   (I)V  
   this <Lcom/intellij/javascript/JSLanguageLevelGuesser$configure$2; invoke ()V .com/intellij/javascript/JSLanguageLevelGuesser  	Companion :Lcom/intellij/javascript/JSLanguageLevelGuesser$Companion;  	   8com/intellij/javascript/JSLanguageLevelGuesser$Companion  configureProject ! 	
   " ()Ljava/lang/Object;  
  % kotlin/Unit ' INSTANCE Lkotlin/Unit; ) *	 ( + Lkotlin/Metadata; mv           k    xi   0 d1 ��
��

����0H
¢ d2 <anonymous>   	configure �(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;Lcom/intellij/openapi/util/Ref;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object; ; < JSLanguageLevelGuesser.kt Code LocalVariableTable LineNumberTable InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0      
            	  ?   B     *+� *,� *� �    @                
             ?   =     � *� *� � #�    A   
       @           A  $  ?   2     *� &� ,�    A        @             B                C     = D     E    > F   4  -  .[ I /I 0I 1 2I 3 4I 5 6[ s 7 8[ s 9s :s PK          	ILwP  P  4   com/intellij/javascript/JSLanguageLevelGuesser.class����   = h .com/intellij/javascript/JSLanguageLevelGuesser  Tcom/intellij/platform/DirectoryProjectConfigurator$AsyncDirectoryProjectConfigurator  <init> ()V  
   this 0Lcom/intellij/javascript/JSLanguageLevelGuesser; 	configure �(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;Lcom/intellij/openapi/util/Ref;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object; �(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;Lcom/intellij/openapi/util/Ref<Lcom/intellij/openapi/module/Module;>;ZLkotlin/coroutines/Continuation<-Lkotlin/Unit;>;)Ljava/lang/Object; $Lorg/jetbrains/annotations/Nullable; #Lorg/jetbrains/annotations/NotNull; :com/intellij/javascript/JSLanguageLevelGuesser$configure$2  O(Lcom/intellij/openapi/project/Project;Lcom/intellij/openapi/vfs/VirtualFile;)V  
   kotlin/jvm/functions/Function0  -com/intellij/openapi/application/CoroutinesKt  
readAction T(Lkotlin/jvm/functions/Function0;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;  
   )kotlin/coroutines/intrinsics/IntrinsicsKt  getCOROUTINE_SUSPENDED ()Ljava/lang/Object;   
  ! kotlin/Unit # INSTANCE Lkotlin/Unit; % &	 $ ' project &Lcom/intellij/openapi/project/Project; baseDir &Lcom/intellij/openapi/vfs/VirtualFile; 	moduleRef Lcom/intellij/openapi/util/Ref; isProjectCreatedWithWizard Z $completion  Lkotlin/coroutines/Continuation; java/lang/Object 3 configureProject Lkotlin/jvm/JvmStatic; <Lcom/intellij/util/concurrency/annotations/RequiresReadLock; generateAssertion     	Companion :Lcom/intellij/javascript/JSLanguageLevelGuesser$Companion; : ;	  < 8com/intellij/javascript/JSLanguageLevelGuesser$Companion > 5 
 ? @ applyGuessedLanguageLevel `(Lcom/intellij/openapi/project/Project;Lcom/intellij/lang/javascript/dialects/JSLanguageLevel;)V B C
 ? D guessedLevel 7Lcom/intellij/lang/javascript/dialects/JSLanguageLevel; <clinit> 1(Lkotlin/jvm/internal/DefaultConstructorMarker;)V  I
 ? J Lkotlin/Metadata; mv       k xi   0 d1 ���0




��

��

��


��

�� 20:B¢J7020202	00
20H@ø��¢
¨ d2 VLcom/intellij/platform/DirectoryProjectConfigurator$AsyncDirectoryProjectConfigurator;   $Lcom/intellij/openapi/module/Module; intellij.javascript.impl 2com/intellij/platform/DirectoryProjectConfigurator Z !AsyncDirectoryProjectConfigurator JSLanguageLevelGuesser.kt RuntimeInvisibleAnnotations Code LineNumberTable LocalVariableTable StackMapTable 	Signature $RuntimeInvisibleParameterAnnotations RuntimeVisibleAnnotations InnerClasses 
SourceFile 1       : ;  ^             _   /     *� �    `        a        	 
       _   �     � Y+,� � � Y� "� �W� (�    b    Y 4 `   
       a   >     	 
      ) *     + ,     - .     / 0     1 2  c     ^        d                       5   _   1     	� =*+� A�    a       	 ) *     	 + ,  e     6   ^     7  8Z 9 d             B C  _   1     	� =*+� E�    a       	 ) *     	 F G  e     6   d             H   _         � ?Y� K� =�      f     ?  :         [ \	 g    ] e   ^  L  M[ I NI OI 9 PI N QI R S[ s T U[ s 
s Vs s s Ws )s *s +s ,s -s .s Xs /s Ws s :s YPK          ��Y1�  �  :   com/intellij/javascript/JSOptionsApplicabilityFilter.class����   = 
      ;com/intellij/application/options/OptionsApplicabilityFilter <init> ()V	  	 
   )com/intellij/application/options/OptionId COMPLETION_SMART_TYPE +Lcom/intellij/application/options/OptionId;	     RENAME_IN_PLACE  4com/intellij/javascript/JSOptionsApplicabilityFilter Code LineNumberTable LocalVariableTable this 6Lcom/intellij/javascript/JSOptionsApplicabilityFilter; isOptionApplicable .(Lcom/intellij/application/options/OptionId;)Z optionId StackMapTable 
SourceFile !JSOptionsApplicabilityFilter.java !               /     *� �                               T     +� � 
+� � � �           
                       @      PK          �2�s  s  B   com/intellij/javascript/JSParameterInfoHandler$SignatureInfo.class����   = 
      java/lang/Object <init> ()V	  	 
   <com/intellij/javascript/JSParameterInfoHandler$SignatureInfo selectedParameterStart I	     selectedParameterEnd text Ljava/lang/String; Code LineNumberTable LocalVariableTable this >Lcom/intellij/javascript/JSParameterInfoHandler$SignatureInfo; 
SourceFile JSParameterInfoHandler.java NestHost  .com/intellij/javascript/JSParameterInfoHandler InnerClasses SignatureInfo                                  A     *� *� *� �          � � 	�                           
     
PK          ��Lx/�  /�  4   com/intellij/javascript/JSParameterInfoHandler.class����   =S
      java/lang/Object <init> ()V	  	 
   .com/intellij/javascript/JSParameterInfoHandler ourStopSearch Ljava/util/Set;
     buildSignature �(Lcom/intellij/lang/javascript/psi/JSFunctionType;ILcom/intellij/lang/javascript/psi/types/JSTypeSubstitutor;)Lcom/intellij/javascript/JSParameterInfoHandler$SignatureInfo;	      <com/intellij/javascript/JSParameterInfoHandler$SignatureInfo text Ljava/lang/String;      java/util/Map containsKey (Ljava/lang/Object;)Z      put 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; " # $ % & :com/intellij/lang/parameterInfo/CreateParameterInfoContext getFile ()Lcom/intellij/psi/PsiFile; " ( ) * 	getOffset ()I
  , - . findArgumentList Q(Lcom/intellij/psi/PsiFile;I)Lcom/intellij/lang/javascript/psi/JSArgumentsHolder;
  0 1 2 skipTypeScript ()Z
 4 5 6 7 8 ,com/intellij/lang/javascript/DialectDetector isTypeScript  (Lcom/intellij/psi/PsiElement;)Z
  : ; < fillSignaturesForArgumentList �(Lcom/intellij/lang/parameterInfo/CreateParameterInfoContext;Lcom/intellij/lang/javascript/psi/JSArgumentsHolder;)Ljava/util/stream/Stream;   > ? @ apply ()Ljava/util/function/Function; B C D E F java/util/stream/Stream map 8(Ljava/util/function/Function;)Ljava/util/stream/Stream; B H I J toArray ()[Ljava/lang/Object; " L M N setItemsToShow ([Ljava/lang/Object;)V P Q R S T /com/intellij/lang/javascript/psi/JSFunctionType getParameters ()Ljava/util/List;
 V W X Y Z Ccom/intellij/lang/javascript/psi/types/TypeScriptJSFunctionTypeImpl expandRestTupleTypes #(Ljava/util/List;I)Ljava/util/List; P \ ] ^ copyWithParameters C(Ljava/util/List;)Lcom/intellij/lang/javascript/psi/JSFunctionType; ` a b c d com/intellij/psi/PsiFile findElementAt  (I)Lcom/intellij/psi/PsiElement; f com/intellij/psi/PsiWhiteSpace
 h i j k l !com/intellij/psi/util/PsiTreeUtil prevLeaf <(Lcom/intellij/psi/PsiElement;)Lcom/intellij/psi/PsiElement; n 2com/intellij/lang/javascript/psi/JSArgumentsHolder p java/lang/Class r ,com/intellij/lang/javascript/psi/JSStatement t 5com/intellij/lang/javascript/psi/JSFunctionExpression
 h v w x getParentOfType `(Lcom/intellij/psi/PsiElement;Ljava/lang/Class;Z[Ljava/lang/Class;)Lcom/intellij/psi/PsiElement;
  z { | isArgumentList 7(Lcom/intellij/lang/javascript/psi/JSArgumentsHolder;)Z ~ 1com/intellij/lang/javascript/psi/JSCallExpression
 � � � � � 2com/intellij/lang/parameterInfo/ParameterInfoUtils  findParentOfTypeWithStopElements ](Lcom/intellij/psi/PsiFile;ILjava/lang/Class;[Ljava/lang/Class;)Lcom/intellij/psi/PsiElement; } � � � getArgumentList 3()Lcom/intellij/lang/javascript/psi/JSArgumentList; � Acom/intellij/lang/javascript/psi/ecma6/TypeScriptTypeArgumentList
 h � � x getContextOfType � Acom/intellij/lang/javascript/psi/ecma6/JSStringTemplateExpression m � � � 	getParent ()Lcom/intellij/psi/PsiElement; � Bcom/intellij/lang/javascript/psi/ecma6/ES6TaggedTemplateExpression
 � � � � � 3com/intellij/openapi/application/ApplicationManager getApplication 0()Lcom/intellij/openapi/application/Application; � � � �  ,com/intellij/openapi/application/Application assertReadAccessAllowed � 5com/intellij/lang/javascript/psi/JSCallLikeExpression � � � � getMethodExpression 1()Lcom/intellij/lang/javascript/psi/JSExpression;
 � � � � � -com/intellij/lang/javascript/psi/util/JSUtils unparenthesize `(Lcom/intellij/lang/javascript/psi/JSExpression;)Lcom/intellij/lang/javascript/psi/JSExpression; � 6com/intellij/lang/javascript/psi/JSReferenceExpression � Bcom/intellij/lang/javascript/psi/JSIndexedPropertyAccessExpression
  � � � 1fillSignaturesForReferenceOrIndexAccessExpression �(Lcom/intellij/lang/javascript/psi/JSCallLikeExpression;Lcom/intellij/lang/javascript/psi/JSExpression;)Ljava/util/stream/Stream; � 9com/intellij/lang/javascript/psi/ecmal4/JSSuperExpression � 1com/intellij/lang/javascript/psi/JSThisExpression � � � � � -com/intellij/lang/javascript/psi/JSExpression getReference !()Lcom/intellij/psi/PsiReference; � � � � � com/intellij/psi/PsiReference resolve � +com/intellij/lang/javascript/psi/JSFunction � 9com/intellij/lang/javascript/psi/ecma6/TypeScriptFunction
 � � � � � 2com/intellij/lang/typescript/psi/TypeScriptPsiUtil getAllOverloadSignatures I(Lcom/intellij/lang/javascript/psi/JSFunctionItem;)Ljava/util/Collection; � � � � � java/util/Collection stream ()Ljava/util/stream/Stream;  > � 1com/intellij/javascript/JSFunctionWithSubstitutor	 � � � � � 8com/intellij/lang/javascript/psi/types/JSTypeSubstitutor EMPTY :Lcom/intellij/lang/javascript/psi/types/JSTypeSubstitutor;
 � �  � n(Lcom/intellij/lang/javascript/psi/JSFunctionItem;Lcom/intellij/lang/javascript/psi/types/JSTypeSubstitutor;)V B � � � of -(Ljava/lang/Object;)Ljava/util/stream/Stream;  >  >
  � � � getImplicitFunction b(Lcom/intellij/lang/javascript/psi/JSExpression;)Lcom/intellij/lang/javascript/psi