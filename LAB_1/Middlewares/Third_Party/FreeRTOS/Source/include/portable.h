il/List; �<T::Lcom/intellij/psi/PsiElement;>(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1<-TT;Ljava/lang/Boolean;>;)Ljava/util/List<TT;>; <this>  kotlin/jvm/internal/Intrinsics 
 checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   filter  java/lang/Class  T  reifiedOperationMarker (ILjava/lang/String;)V  
   com/intellij/psi/PsiElement  !com/intellij/psi/util/PsiTreeUtil  collectElementsOfType G(Lcom/intellij/psi/PsiElement;[Ljava/lang/Class;)Ljava/util/Collection;  
    -collectElementsOfType(
  this, T::class.java) " checkNotNullExpressionValue $ 
  % java/lang/Iterable ' java/util/ArrayList ) <init> ()V + ,
 * - java/util/Collection / iterator ()Ljava/util/Iterator; 1 2 ( 3 java/util/Iterator 5 hasNext ()Z 7 8 6 9 next ()Ljava/lang/Object; ; < 6 = kotlin/jvm/functions/Function1 ? invoke &(Ljava/lang/Object;)Ljava/lang/Object; A B @ C java/lang/Boolean E booleanValue G 8
 F H add (Ljava/lang/Object;)Z J K 0 L java/util/List N  kotlin/collections/CollectionsKt P distinct &(Ljava/lang/Iterable;)Ljava/util/List; R S
 Q T element$iv$iv Ljava/lang/Object; $i$f$filterTo I $this$filterTo$iv$iv Ljava/lang/Iterable; destination$iv$iv Ljava/util/Collection; $i$f$filter $this$filter$iv $i$f$filterFor $this$filterFor Lcom/intellij/psi/PsiElement;  Lkotlin/jvm/functions/Function1; filterFor$default b(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1;ILjava/lang/Object;)Ljava/util/List; needClassReification f ,
  g 0com/intellij/grazie/utils/PsiUtilsKt$filterFor$1 i INSTANCE 2Lcom/intellij/grazie/utils/PsiUtilsKt$filterFor$1; k l	 j m $this$filterFor_u24default noParentOfTypes >(Lcom/intellij/lang/ASTNode;Lcom/intellij/psi/tree/TokenSet;)Z #Lorg/jetbrains/annotations/NotNull; tokenSet s *com/intellij/psi/impl/source/tree/TreeUtil u 
findParent X(Lcom/intellij/lang/ASTNode;Lcom/intellij/psi/tree/TokenSet;)Lcom/intellij/lang/ASTNode; w x
 v y $this$noParentOfTypes Lcom/intellij/lang/ASTNode;  Lcom/intellij/psi/tree/TokenSet; hasType C(Lcom/intellij/lang/ASTNode;[Lcom/intellij/psi/tree/IElementType;)Z tokens � kotlin/collections/ArraysKt � toSet $([Ljava/lang/Object;)Ljava/util/Set; � �
 � � -(Lcom/intellij/lang/ASTNode;Ljava/util/Set;)Z ~ �
  � $this$hasType %[Lcom/intellij/psi/tree/IElementType; T(Lcom/intellij/lang/ASTNode;Ljava/util/Set<+Lcom/intellij/psi/tree/IElementType;>;)Z com/intellij/lang/ASTNode � getElementType &()Lcom/intellij/psi/tree/IElementType; � � � � java/util/Set � contains � K � � Ljava/util/Set; 	toPointer H(Lcom/intellij/psi/PsiElement;)Lcom/intellij/psi/SmartPsiElementPointer; U<T::Lcom/intellij/psi/PsiElement;>(TT;)Lcom/intellij/psi/SmartPsiElementPointer<TT;>; $com/intellij/psi/SmartPointerManager � createPointer � �
 � � createPointer(this) � $i$f$toPointer $this$toPointer parents :(Lcom/intellij/psi/PsiElement;)Lkotlin/sequences/Sequence; Y(Lcom/intellij/psi/PsiElement;)Lkotlin/sequences/Sequence<Lcom/intellij/psi/PsiElement;>; .com/intellij/grazie/utils/PsiUtilsKt$parents$1 � 0Lcom/intellij/grazie/utils/PsiUtilsKt$parents$1; k �	 � � kotlin/sequences/SequencesKt � generateSequence O(Ljava/lang/Object;Lkotlin/jvm/functions/Function1;)Lkotlin/sequences/Sequence; � �
 � � $this$parents processElements M(Lcom/intellij/psi/search/PsiElementProcessor;Lcom/intellij/psi/PsiElement;)V m(Lcom/intellij/psi/search/PsiElementProcessor<-Lcom/intellij/psi/PsiElement;>;Lcom/intellij/psi/PsiElement;)V $Lorg/jetbrains/annotations/Nullable; -com/intellij/openapi/progress/ProgressManager � checkCanceled � ,
 � � #com/intellij/psi/PsiCompiledElement � 
isPhysical � 8  � +com/intellij/psi/search/PsiElementProcessor � execute  (Lcom/intellij/psi/PsiElement;)Z � � � � getChildren  ()[Lcom/intellij/psi/PsiElement; � �  � element.children � � �
  � 6com/intellij/grazie/utils/PsiUtilsKt$processElements$1 � 0(Lcom/intellij/psi/search/PsiElementProcessor;)V + �
 � � "com/intellij/psi/PsiElementVisitor � accept '(Lcom/intellij/psi/PsiElementVisitor;)V � �  � child $this$processElements -Lcom/intellij/psi/search/PsiElementProcessor; element [Lcom/intellij/psi/PsiElement; � 	isAtStart 9(Lkotlin/ranges/IntRange;Lcom/intellij/psi/PsiElement;Z)Z � getText ()Ljava/lang/String; � �  � java/lang/String � length ()I � �
 � � kotlin/ranges/IntRange � getFirst � �
 � � getLast � �
 � � charAt (I)C � �
 � � kotlin/text/CharsKt � isWhitespace (C)Z � �
 � � start $this$isAtStart Lkotlin/ranges/IntRange; skipWhitespace Z isAtStart$default L(Lkotlin/ranges/IntRange;Lcom/intellij/psi/PsiElement;ZILjava/lang/Object;)Z � �
  isAtEnd end $this$isAtEnd isAtEnd$default
 �
  getNotSoDistantSimilarSiblings �(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1<-Lcom/intellij/psi/PsiElement;Ljava/lang/Boolean;>;)Ljava/util/List<Lcom/intellij/psi/PsiElement;>; checkSibling com/intellij/psi/tree/TokenSet EMPTY }	 o(Lcom/intellij/psi/PsiElement;Lcom/intellij/psi/tree/TokenSet;Lkotlin/jvm/functions/Function1;)Ljava/util/List;
  �(Lcom/intellij/psi/PsiElement;Lcom/intellij/psi/tree/TokenSet;Lkotlin/jvm/functions/Function1<-Lcom/intellij/psi/PsiElement;Ljava/lang/Boolean;>;)Ljava/util/List<Lcom/intellij/psi/PsiElement;>; whitespaceTokens Failed requirement.  "java/lang/IllegalArgumentException" toString$ �
 % (Ljava/lang/String;)V +'
#( &getNotSoDistantSimilarSiblings$process p(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1;Lcom/intellij/psi/tree/TokenSet;Z)Ljava/util/List;*+
 , reversed. S
 Q/ listOf $(Ljava/lang/Object;)Ljava/util/List;12
 Q3 plus <(Ljava/util/Collection;Ljava/lang/Iterable;)Ljava/util/List;56
 Q7 �(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1<-Lcom/intellij/psi/PsiElement;Ljava/lang/Boolean;>;Lcom/intellij/psi/tree/TokenSet;Z)Ljava/util/List<Lcom/intellij/psi/PsiElement;>; getNextSibling ()Lcom/intellij/psi/PsiElement;:; < getPrevSibling>; ?
 * L com/intellij/psi/PsiWhiteSpaceB #com/intellij/psi/util/PsiTreeUtilKtD C(Lcom/intellij/psi/PsiElement;)Lcom/intellij/psi/tree/IElementType; �F
EG '(Lcom/intellij/psi/tree/IElementType;)Z �I
J sibling.textL java/lang/CharSequenceNO �O � ?$i$a$-count-PsiUtilsKt$getNotSoDistantSimilarSiblings$process$1 char C 
element$iv 
$i$f$count count$iv $this$count$iv Ljava/lang/CharSequence; result Ljava/util/ArrayList; newLinesBetweenSiblingsCount sibling /$this$getNotSoDistantSimilarSiblings_u24process $checkSibling $whitespaceTokens Lkotlin/Metadata; mv           k    xi   0 d1&��Z
��
 




��



��


��
"
��



��


��


(��002020000��00202020008	H
0"
��
*0*02H
00Hø��#0*02
00"0¢0*02000*020200*020200*02000*00*
��0020.H
0jH
` "
��
*0*H
H¢!*��"��#"H#02H#0
20¨$ d2   Lkotlin/Function1; $Lcom/intellij/psi/tree/IElementType; Lkotlin/sequences/Sequence; )Lcom/intellij/psi/SmartPsiElementPointer; &Lcom/intellij/grazie/utils/PsiPointer; 
PsiPointer E intellij.grazie.core PsiUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension; valuenSMAP
PsiUtils.kt
Kotlin
*S Kotlin
*F
+ 1 PsiUtils.kt
com/intellij/grazie/utils/PsiUtilsKt
+ 2 _Collections.kt
kotlin/collections/CollectionsKt___CollectionsKt
+ 3 _Strings.kt
kotlin/text/StringsKt___StringsKt
*L
1#1,116:1
766#2:117
857#2,2:118
1099#3,3:120
*S KotlinDebug
*F
+ 1 PsiUtils.kt
com/intellij/grazie/utils/PsiUtilsKt
*L
17#1:117
17#1:118,2
107#1:12