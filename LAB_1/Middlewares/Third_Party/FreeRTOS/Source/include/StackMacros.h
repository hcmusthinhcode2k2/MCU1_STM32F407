attributesMapOf 5(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map; 9 :
 8 ; "kotlinx/html/FlowOrPhrasingContent = getConsumer ()Lkotlinx/html/TagConsumer; ? @ > A ,(Ljava/util/Map;Lkotlinx/html/TagConsumer;)V  C
 4 D kotlinx/html/Tag F G A kotlinx/html/TagConsumer I 
onTagStart (Lkotlinx/html/Tag;)V K L J M  kotlin/collections/CollectionsKt O first $(Ljava/util/List;)Ljava/lang/Object; Q R
 P S example.corrections.first() U java/lang/String W 	unaryPlus (Ljava/lang/String;)V Y Z
 4 [ onTagEnd ] L J ^ 
onTagError *(Lkotlinx/html/Tag;Ljava/lang/Throwable;)V ` a J b 3$i$a$-strong$default-JLangUtilsKt$toCorrectHtml$1$1 I $this$invoke_u24lambda_u240 Lkotlinx/html/STRONG; "$i$a$-visitTag-ApiKt$visit$1$iv$iv  $this$visit_u24lambda_u2d0$iv$iv Lkotlinx/html/Tag; err$iv$iv$iv Ljava/lang/Throwable; $i$f$visitTag $this$visitTag$iv$iv$iv 
$i$f$visit $this$visit$iv$iv $i$f$strong $this$strong_u24default$iv $Lkotlinx/html/FlowOrPhrasingContent; 
classes$iv Ljava/lang/String; 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;  
  w kotlin/Unit y INSTANCE Lkotlin/Unit; { |	 z } p1 Ljava/lang/Object; p2 Lkotlin/Metadata; mv           k    xi   0 d1 3��
��


��

����0*020H
¢ d2 <anonymous>   &com/intellij/grazie/utils/JLangUtilsKt � toCorrectHtml P(Lkotlinx/html/FlowOrPhrasingContent;Lorg/languagetool/rules/IncorrectExample;)V � � JLangUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension; value�SMAP
JLangUtils.kt
Kotlin
*S Kotlin
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1
+ 2 gen-tag-unions.kt
kotlinx/html/Gen_tag_unionsKt
+ 3 api.kt
kotlinx/html/ApiKt
+ 4 visit.kt
kotlinx/html/VisitKt
*L
1#1,45:1
313#2:46
77#3:47
4#4,9:48
*S KotlinDebug
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1
*L
39#1:46
39#1:47
39#1:48,9
*E
 Code LocalVariableTable StackMapTable LineNumberTable $RuntimeInvisibleParameterAnnotations InnerClasses EnclosingMethod 	Signature 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations RuntimeInvisibleAnnotations 0      
        	  �   3     *+� *� �    �               
       �  [     �+� ,!� *� � 'Y)� ,� .� 2 � � � �+N*� ::6� 4Y6� <-� B � E� G:6:	6
	� H 	� N  	:6� 4:6� 'Y)� ,� TYV� ,� X� \  	� H 	� _ � 9:	� H 	� c 	� H 	� _ � :	� H 	� _ �   �  k � �  k � �   � � �   � � �    �   = (@� �   > X > # G G  b �    > X   �   b   & ) & , ' 4 . : . V / ] 0 k 1 l 2 s / } ( � ) � / � 6 � 7 � 3 � 4 � 6 � 7 � 6 � 8 � / � . � + �   �  }  d e  z   f g  s ( h e  p + i j  �  k l  ] � m e 
 Z � n j 	 V � o e  S � p j  : � q e  4 � r s  7 � t u    �       �  s    �   u  �           A  v  �   N     *+� >,� X� x� ~�    �       % �                 �     � �   �   
        �    � � �     �    � �  �SMAP
JLangUtils.kt
Kotlin
*S Kotlin
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1
+ 2 gen-tag-unions.kt
kotlinx/html/Gen_tag_unionsKt
+ 3 api.kt
kotlinx/html/ApiKt
+ 4 visit.kt
kotlinx/html/VisitKt
*L
1#1,45:1
313#2:46
77#3:47
4#4,9:48
*S KotlinDebug
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1
*L
39#1:46
39#1:47
39#1:48,9
*E
 �   =  �  �[ I �I �I � �I � �I � �[ s � �[ s �s �s ss  s �s  �     �  �[ s �PK          3�­f  f  >   com/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1.class����   = � 8com/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1  �Lkotlin/jvm/internal/Lambda;Lkotlin/jvm/functions/Function2<Lkotlinx/html/FlowOrPhrasingContent;Ljava/lang/String;Lkotlin/Unit;>; kotlin/jvm/internal/Lambda  kotlin/jvm/functions/Function2  <init> ()V (I)V  

   this :Lcom/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1; invoke 9(Lkotlinx/html/FlowOrPhrasingContent;Ljava/lang/String;)V #Lorg/jetbrains/annotations/NotNull; java/lang/Throwable  $this$toHtml  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   mistake  java/lang/CharSequence  length ()I   !  " kotlinx/html/STRONG $ class & kotlinx/html/ApiKt ( attributesMapOf 5(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map; * +
 ) , "kotlinx/html/FlowOrPhrasingContent . getConsumer ()Lkotlinx/html/TagConsumer; 0 1 / 2 ,(Ljava/util/Map;Lkotlinx/html/TagConsumer;)V  4
 % 5 kotlinx/html/Tag 7 8 2 kotlinx/html/TagConsumer : 
onTagStart (Lkotlinx/html/Tag;)V < = ; > 	unaryPlus (Ljava/lang/String;)V @ A
 % B onTagEnd D = ; E 
onTagError *(Lkotlinx/html/Tag;Ljava/lang/Throwable;)V G H ; I 5$i$a$-strong$default-JLangUtilsKt$toIncorrectHtml$1$1 I $this$invoke_u24lambda_u240 Lkotlinx/html/STRONG; "$i$a$-visitTag-ApiKt$visit$1$iv$iv  $this$visit_u24lambda_u2d0$iv$iv Lkotlinx/html/Tag; err$iv$iv$iv Ljava/lang/Throwable; $i$f$visitTag $this$visitTag$iv$iv$iv 
$i$f$visit $this$visit$iv$iv $i$f$strong $this$strong_u24default$iv $Lkotlinx/html/FlowOrPhrasingContent; 
classes$iv Ljava/lang/String; java/lang/String ] 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;  
  ` kotlin/Unit b INSTANCE Lkotlin/Unit; d e	 c f p1 Ljava/lang/Object; p2 <clinit>  	
  l d 	  n Lkotlin/Metadata; mv           k    xi   0 d1 3��
��


��

����0*020H
¢ d2 <anonymous>   &com/intellij/grazie/utils/JLangUtilsKt ~ toIncorrectHtml P(Lkotlinx/html/FlowOrPhrasingContent;Lorg/languagetool/rules/IncorrectExample;)V � � JLangUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension; value�SMAP
JLangUtils.kt
Kotlin
*S Kotlin
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1
+ 2 gen-tag-unions.kt
kotlinx/html/Gen_tag_unionsKt
+ 3 api.kt
kotlinx/html/ApiKt
+ 4 visit.kt
kotlinx/html/VisitKt
*L
1#1,45:1
313#2:46
77#3:47
4#4,9:48
*S KotlinDebug
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt