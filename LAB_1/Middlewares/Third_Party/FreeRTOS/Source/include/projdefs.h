erUtil.class����   = [
      java/lang/Object <init> ()V
  	 
   $com/intellij/grazie/text/TextProblem getHighlightRanges ()Ljava/util/List;      value '()Lcom/intellij/openapi/util/Condition;
      *com/intellij/util/containers/ContainerUtil exists <(Ljava/lang/Iterable;Lcom/intellij/openapi/util/Condition;)Z	      "com/intellij/grazie/text/RuleGroup CASING $Lcom/intellij/grazie/text/RuleGroup;
      	fitsGroup '(Lcom/intellij/grazie/text/RuleGroup;)Z
  " # $ getText (()Lcom/intellij/grazie/text/TextContent;
 & ' ( ) * com/intellij/grazie/utils/Text isSingleSentence (Ljava/lang/CharSequence;)Z	  , -  UNDECORATED_SINGLE_SENTENCE
 / 0 1 2 3 #com/intellij/openapi/util/TextRange getStartOffset ()I 5 +com/intellij/grazie/utils/ProblemFilterUtil Code LineNumberTable LocalVariableTable this -Lcom/intellij/grazie/utils/ProblemFilterUtil; isInitialCasingIssue )(Lcom/intellij/grazie/text/TextProblem;)Z problem &Lcom/intellij/grazie/text/TextProblem; StackMapTable  isUndecoratedSingleSentenceIssue lambda$isInitialCasingIssue$0 ((Lcom/intellij/openapi/util/TextRange;)Z r %Lcom/intellij/openapi/util/TextRange; 
SourceFile ProblemFilterUtil.java BootstrapMethods I
 J K L M N "java/lang/invoke/LambdaMetafactory metafactory �(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; P (Ljava/lang/Object;)Z R
 4 S A B B InnerClasses W %java/lang/invoke/MethodHandles$Lookup Y java/lang/invoke/MethodHandles Lookup 1 4           6   /     *� �    7        8        9 :   	 ; <  6   T     *� �   � � *� � � � �    7        8        = >   ?    @ 	 @ <  6   O     *� !� %� *� +� � � �    7        8        = >   ?    @
 A B  6   B     *� .� � �    7        8        C D   ?    @  E    F G     H  O Q T U   
  V X Z PK          �5/R  R  6   com/intellij/grazie/utils/PsiUtilsKt$filterFor$1.class����   = U 0com/intellij/grazie/utils/PsiUtilsKt$filterFor$1  TLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<TT;Ljava/lang/Boolean;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this 2Lcom/intellij/grazie/utils/PsiUtilsKt$filterFor$1; invoke 2(Lcom/intellij/psi/PsiElement;)Ljava/lang/Boolean; (TT;)Ljava/lang/Boolean; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   java/lang/Boolean  valueOf (Z)Ljava/lang/Boolean;  
   Lcom/intellij/psi/PsiElement; &(Ljava/lang/Object;)Ljava/lang/Object; com/intellij/psi/PsiElement #  
  % p1 Ljava/lang/Object; <clinit> needClassReification * 	
  +  	
  - INSTANCE / 	  0 Lkotlin/Metadata; mv           k    xi   � d1 ;��
��

��

��0"
��*02HH
¢ d2 <anonymous>   T $com/intellij/grazie/utils/PsiUtilsKt A filterFor$default b(Lcom/intellij/psi/PsiElement;Lkotlin/jvm/functions/Function1;ILjava/lang/Object;)Ljava/util/List; C D PsiUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension; value vSMAP
PsiUtils.kt
Kotlin
*S Kotlin
*F
+ 1 PsiUtils.kt
com/intellij/grazie/utils/PsiUtilsKt$filterFor$1
*L
1#1,116:1
*E
 Code LocalVariableTable LineNumberTable 	Signature RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1       /       	  J   $     *� �    K                J   ?     +� �  �    L       K                !  M     N        O       A  "  J   =     	*+� $� &�    L        K       	       	 ' (   ) 	  J         � ,� Y� .� 1�      P   
        Q    B E M     R    F S   vSMAP
PsiUtils.kt
Kotlin
*S Kotlin
*F
+ 1 PsiUtils.kt
com/intellij/grazie/utils/PsiUtilsKt$filterFor$1
*L
1#1,116:1
*E
 T   @  2  3[ I 4I 5I 6 7I 8 9I : ;[ s < =[ s >s ?s @s !s s s  N     G  H[ s IPK          J�^��  �  4   com/intellij/grazie/utils/PsiUtilsKt$parents$1.class����   = J .com/intellij/grazie/utils/PsiUtilsKt$parents$1  xLkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function1<Lcom/intellij/psi/PsiElement;Lcom/intellij/psi/PsiElement;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function1  <init> ()V (I)V  

   this 0Lcom/intellij/grazie/utils/PsiUtilsKt$parents$1; invoke <(Lcom/intellij/psi/PsiElement;)Lcom/intellij/psi/PsiElement; $Lorg/jetbrains/annotations/Nullable; #Lorg/jetbrains/annotations/NotNull; it  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   com/intellij/psi/PsiElement  	getParent ()Lcom/intellij/psi/PsiElement;     Lcom/intellij/psi/PsiElement; &(Ljava/lang/Object;)Ljava/lang/Object;  
  # p1 Ljava/lang/Object; <clinit>  	
  ( INSTANCE * 	  + Lkotlin/Metadata; mv           k    xi   0 d1 '��

��

��020H
¢ d2 <anonymous> $com/intellij/grazie/utils/PsiUtilsKt : parents :(Lcom/intellij/psi/PsiElement;)Lkotlin/sequences/Sequence; < = PsiUtils.kt Code LocalVariableTable LineNumberTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile RuntimeVisibleAnnotations 0       *        	  @   $     *� �   