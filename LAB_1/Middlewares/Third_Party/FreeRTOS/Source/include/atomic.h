is$visitAndFinalize$iv$iv 	$i$f$html $this$html_u24default$iv Lkotlinx/html/TagConsumer; namespace$iv  Lkotlin/jvm/functions/Function1; getCellpading ((Lkotlinx/html/TABLE;)Ljava/lang/String; <this> z kotlinx/html/TABLE | getAttributes #()Lkotlinx/html/impl/DelegatingMap; ~ 
 } � cellpadding � kotlinx/html/impl/DelegatingMap � get � G
 � �   � $this$cellpading Lkotlinx/html/TABLE; setCellpading )(Lkotlinx/html/TABLE;Ljava/lang/String;)V value � java/util/Map � put 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; � � � � getCellspacing cellspacing � $this$cellspacing setCellspacing 	getValign %(Lkotlinx/html/TD;)Ljava/lang/String; kotlinx/html/TD �
 � � valign � $this$valign Lkotlinx/html/TD; 	setValign &(Lkotlinx/html/TD;Ljava/lang/String;)V nbsp (Lkotlinx/html/FlowContent;)V kotlinx/html/Entities � Lkotlinx/html/Entities; � �	 � � kotlinx/html/FlowContent � 	unaryPlus (Lkotlinx/html/Entities;)V � � � � 
$this$nbsp Lkotlinx/html/FlowContent; 
removeHtml N(Lcom/intellij/grazie/text/TextContent;)Lcom/intellij/grazie/text/TextContent; $Lorg/jetbrains/annotations/Nullable; !kotlin/jvm/internal/Ref$ObjectRef � ()V ! �
 � � element Ljava/lang/Object; � �	 � � java/lang/CharSequence � <html> � kotlin/text/StringsKt � startsWith$default G(Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZILjava/lang/Object;)Z � �
 � � <body> � $com/intellij/grazie/text/TextContent � #com/intellij/openapi/util/TextRange � (II)V ! �
 � � excludeRange M(Lcom/intellij/openapi/util/TextRange;)Lcom/intellij/grazie/text/TextContent; � � � � %content.excludeRange(TextRange(0, 6)) � checkNotNullExpressionValue � 
  � </html> � endsWith$default � �
 � � </body> � length ()I � � � � from )(II)Lcom/intellij/openapi/util/TextRange; � �
 � � 4content.excludeRange(Tex…m(content.length - 7, 7)) � java/util/ArrayList �
 � � anyTag Ljava/util/regex/Pattern; � �	  � � com/intellij/grazie/utils/Text � allOccurrences C(Ljava/util/regex/Pattern;Ljava/lang/CharSequence;)Ljava/util/List; � �
 � � java/util/List � iterator ()Ljava/util/Iterator; �  � java/util/Iterator hasNext ()Z next	 R
 -com/intellij/openapi/progress/ProgressManager checkCanceled �
 
closingTag �	  getStartOffset �
 � getEndOffset �
 � subSequence (II)Ljava/lang/CharSequence; � java/util/regex/Pattern matcher 3(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher; !
" java/util/regex/Matcher$ matches&
%' .com/intellij/grazie/text/TextContent$Exclusion) markUnknown W(Lcom/intellij/openapi/util/TextRange;)Lcom/intellij/grazie/text/TextContent$Exclusion;+,
*- add (Ljava/lang/Object;)Z/0
 �1 � toString ()Ljava/lang/String;45
 6 trim 2(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;89
 �: removeHtml$tagClosed M(Ljava/util/ArrayList;Lkotlin/jvm/internal/Ref$ObjectRef;Ljava/lang/String;)V<=
 > removeHtml$openingTagName 9(Lkotlin/jvm/internal/Ref$ObjectRef;II)Ljava/lang/String;@A
 B excludeRanges 8(Ljava/util/List;)Lcom/intellij/grazie/text/TextContent;DE �F tagRange %Lcom/intellij/openapi/util/TextRange; content #Lkotlin/jvm/internal/Ref$ObjectRef; 
exclusions Ljava/util/ArrayList; _content &Lcom/intellij/grazie/text/TextContent; nbspToSpace � �	 Q � isEmptyT �U trimWhitespace (()Lcom/intellij/grazie/text/TextContent;WX �Y size[ � �\ (I)Ljava/lang/Object; �^ �_ subTexta � �b  kotlin/collections/CollectionsKtd last $(Ljava/util/List;)Ljava/lang/Object;fg
eh java/lang/Iterablej filterNotNull &(Ljava/lang/Iterable;)Ljava/util/List;lm
en joinWithWhitespace 9(CLjava/util/List;)Lcom/intellij/grazie/text/TextContent;pq �r prevEnd i spaces Ljava/util/List; 
components a(Lkotlin/jvm/internal/Ref$ObjectRef<Lcom/intellij/grazie/text/TextContent;>;II)Ljava/lang/String; charAt (I)Cz{ �| java/lang/Character~ isLetter (C)Z��
� !ai/grazie/nlp/utils/WhiteSpacesKt� takeNonWhitespaces &(Ljava/lang/String;)Ljava/lang/String;��
�� tagRangeStart tagRangeEnd �(Ljava/util/ArrayList<Lcom/intellij/grazie/text/TextContent$Exclusion;>;Lkotlin/jvm/internal/Ref$ObjectRef<Lcom/intellij/grazie/text/TextContent;>;Ljava/lang/String;)V listIterator (I)Ljava/util/ListIterator;�� �� java/util/ListIterator� hasPrevious��� previous� R�� start� X	*� end� X	*� areEqual '(Ljava/lang/Object;Ljava/lang/Object;)Z��
 � 	nextIndex� ���
 �_ set '(ILjava/lang/Object;)Ljava/lang/Object;��
 ��
 �\ subList (II)Ljava/util/List;��
 �� clear� � �� A$i$a$-indexOfLast-HtmlUtilsKt$removeHtml$tagClosed$openingIndex$1 it 0Lcom/intellij/grazie/text/TextContent$Exclusion; $i$f$indexOfLast iterator$iv Ljava/util/ListIterator; $this$indexOfLast$iv openingIndex tagName <clinit> </?\w+[^>]*>� compile -(Ljava/lang/String;)Ljava/util/regex/Pattern;��
� 	</\w+\s*>� &nbsp;� Lkotlin/Metadata; mv           k    xi   0 d1w��@
��



��








��



��02000¢02002 0
0*0!"��
 *00X¢
��"
 *00X¢
��"
 *00X¢
��"(0*0208F@FX¢	
""(0*0208F@FX¢
""(0*0208F@FX¢"¨" d2 kotlin.jvm.PlatformType 
cellpading Lkotlin/Function1; Lkotlin/ExtensionFunctionType; intellij.grazie.core 	Exclusion kotlin/jvm/internal/Ref� 	ObjectRef HtmlUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension;TSMAP
HtmlUtils.kt
Kotlin
*S Kotlin
*F
+ 1 HtmlUtils.kt
com/intellij/grazie/utils/HtmlUtilsKt
+ 2 gen-consumer-tags.kt
kotlinx/html/Gen_consumer_tagsKt
+ 3 api.kt
kotlinx/html/ApiKt
+ 4 visit.kt
kotlinx/html/VisitKt
+ 5 gen-tags-h.kt
kotlinx/html/Gen_tags_hKt
+ 6 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
*L
1#1,91:1
317#2:92
80#3:93
77#3:103
15#4,5:94
4#4,3:99
10#4,2:104
7#4,14:106
164#5:102
378#6,7:120
*S KotlinDebug
*F
+ 1 HtmlUtils.kt
com/intellij/grazie/utils/HtmlUtilsKt
*L
13#1:92
13#1:93
13#1:103
13#1:94,5
13#1:99,3
13#1:104,2
13#1:106,14
13#1:102
55#1:120,7
*E
 Code StackMapTable LineNumberTable LocalVariableTable 	Signature RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1       � �    �    � �       �  �    _*� � LM>� Y�  +,� $� &:6:6� * +� � ,Y.� 1�:6	� * � 7  :
6
� :6::6� 9Y;� ?� @� C� &:6:6� * � 7  :6� 9:6*� I W � * � L � 9:� * � P � * � L � :� * � L �     � * � L � 9:� * � P � * � L � :� * � L � +� T   � V�  � � � 
 � � �   � � �   � � �   W 
 W?  .?  ?A?   �   t � B  E 3 & &  � �  E 3 & & & &   & &  
b 
�  
 E 3 & & &  
b 
�   � -    \  \ & ] - ^ 8 _ B b I c W d X e _ ] i  m f s f � g � c � d � e � g �  � g � h � i � j � k � h � i � h o g f	 
 ] m n j k. m< n? mR oS wY ]Z \^ �    � 	 W X  �  Y Z  �  [ X  �  \ ]  �  ^ _  � r ` X  � u a ]  � z b X  � } c ]  s � d X  m � e f  p � g h  i � i X  f � j f  _ � k X  \ � l ] 
  m _  I
 ` X 	 F n ]  -, o X  */ p ]  &4 q X  #7 r ]  I s X  M t u  K v h   _  w  �    �       �         x y �   P     *{� *� ��� �� VY� W��   �    Y V�      �        � �  �       �         � � �   U     *{� +�� *� �� ��+� � W�   �   
     �        � �      � h �             � y �   P     *{� *� ��� �� VY� W��   �    Y V�      �        � �  �       �         � � �   U     *{� +�� *� �� ��+� � W�   �   
     �        � �      � h �             � � �   P     *{� *� ��� �� VY� W��   �    Y V�      �        � �  �       �         � � �   U     *{� +�� *� �� ��+� � W�   �   
     �        � �      � h �             � � �   :     *{� *� �� � �   �      !�        � �  �         � � �  3    y� �Y� �L+*Y� W�� �+� �� ��� �� ˚ +� �� ��� �� ˙ &++� �� ϻ �Y� Թ � Yڸ ݵ ����+� �� ��� �� � +� �� ��� �� � 0++� �� �+� �� Ϲ � d� � � Y� ݵ ����� �Y� �M� �Y�� �+� �� ø �� N-� � �-� � �:��+� �� ���� �#�(� ;,�.�2W,++� �� ��`�d�3 �7� ø;�7�?���+���C���,�.�2W��t+� �� �,� ��G �   �   , 	�   � �  � �)"),�   �� p �� �   F    '  ) > * a , � - � 0 � 0 � > � ? � @ A B BD BJ C[ Dh G�   *  � xHI  qJK  � �LM   yNO  �     �  �     �   P � �  �     �*� ��RYS� �*� ø �L+�V � 
*�Z �� �Y� �M>+�] 6� Q� � +d�` � Ѷ6,*� �Y+�` � Ѷ� Թc Y� �Z � W�2W����,*� �Y+�i� Ѷ*� � � Թc Y� �Z � W�2W ,�k�o�s�   �   y 
� ! ��  �N� *  � � �  � ��   � � �  � �� 	� )  � � �  � ��   � � �  � ��   .    M  O  P ( R / R 0 S @ T Y U � S � W � X�   4  Y /t X  2 \u X   �vw  0 �xM    �JO  �     �  �     �   @A �   �     2*� �� �`�} ��� *� �� �`d�3 �7��� �   �    0@ V�       3 * 3 0 4�        2JK     2� X    2� X �   y <= �  �  	   �*� �:6�] �� :�� � Q�� �*:6+�����C,��� +� �� ���d�} /� � ����� � >� ;*� �Y*���*��*� ��i�*��� Ը.��W*`*������ �   �   @ �   � � V  ��  � I*@� @� <  � � V ��  �   6    7 	 x  y # z 2 7 d z g { q ~ r 7 s 8 w 9 � : � <�   \ 	 2 2� X  / 5��  	 i� X   Y��   l�w  s =� X    �LM     �JK    �� h �   � � � �   <      ��³ �ĸ³Ƹ³R�   �       # 	 $  J �    * �� 	 ��� �   ��  TSMAP
HtmlUtils.kt
Kotlin
*S Kotlin
*F
+ 1 HtmlUtils.kt
com/intellij/grazie/utils/HtmlUtilsKt
+ 2 gen-consumer-tags.kt
kotlinx/html/Gen_consumer_tagsKt
+ 3 api.kt
kotlinx/html/ApiKt
+ 4 visit.kt
kotlinx/html/VisitKt
+ 5 gen-tags-h.kt
kotlinx/html/Gen_tags_hKt
+ 6 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
*L
1#1,91:1
317#2:92
80#3:93
77#3:103
15#4,5:94
4#4,3:99
10#4,2:104
7#4,14:106
164#5:102
378#6,7:120
*S KotlinDebug
*F
+ 1 HtmlUtils.kt
com/intellij/grazie/utils/HtmlUtilsKt
*L
13#1:92
13#1:93
13#1:103
13#1:94,5
13#1:99,3
13#1:104,2
13#1:106,14
13#1:102
55#1:120,7
*E
�   � � �[ I�I�I��I��I��[ s��[ #s �s �s�ss �s �s �s�s �s xs ys �s �s �s �s �s �s �s �s �s �s �s s s�s Zs �s�sPsOsJs �sNs �s��    �  �[ s�PK          5�gP�  �  <   com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1.class����   = � 6com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function2<Lkotlinx/html/FlowOrPhrasingContent;Ljava/lang/String;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function2  <init> ,(Lorg/languagetool/rules/IncorrectExample;)V $example )Lorg/languagetool/rules/IncorrectExample; 
 	   (I)V  
   this 8Lcom/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1; invoke 9(Lkotlinx/html/FlowOrPhrasingContent;Ljava/lang/String;)V #Lorg/jetbrains/annotations/NotNull; java/lang/Throwable  $this$toHtml  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   mistake   'org/languagetool/rules/IncorrectExample " getCorrections ()Ljava/util/List; $ %
 # & example.corrections ( checkNotNullExpressionValue * 
  + java/util/Collection - isEmpty ()Z / 0 . 1 kotlinx/html/STRONG 3 class 5 k