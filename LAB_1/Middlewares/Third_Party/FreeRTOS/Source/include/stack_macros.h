Ljava/lang/String;)V  
    org/languagetool/rules/RuleMatch  
getMessage ()Ljava/lang/String;  
   message  checkNotNullExpressionValue  
   <suggestion>     kotlin/text/StringsKt  replace$default ^(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZILjava/lang/Object;)Ljava/lang/String; ! "
   # </suggestion> % $this$messageSanitized "Lorg/languagetool/rules/RuleMatch; getText B(Lorg/languagetool/rules/ExampleSentence;)Ljava/lang/CharSequence; &org/languagetool/rules/ExampleSentence + 
getExample - 
 , . example 0 java/lang/CharSequence 2 
$this$text (Lorg/languagetool/rules/ExampleSentence; toHtml p(Lkotlinx/html/FlowOrPhrasingContent;Lorg/languagetool/rules/IncorrectExample;Lkotlin/jvm/functions/Function2;)V ·(Lkotlinx/html/FlowOrPhrasingContent;Lorg/languagetool/rules/IncorrectExample;Lkotlin/jvm/functions/Function2<-Lkotlinx/html/FlowOrPhrasingContent;-Ljava/lang/String;Lkotlin/Unit;>;)V kotlin/text/Regex 9 (.*?)<marker>(.*?)</marker>(.*) ; <init> (Ljava/lang/String;)V = >
 : ? 'org/languagetool/rules/IncorrectExample A
 B . example.example D findAll$default \(Lkotlin/text/Regex;Ljava/lang/CharSequence;IILjava/lang/Object;)Lkotlin/sequences/Sequence; F G
 : H kotlin/sequences/Sequence J iterator ()Ljava/util/Iterator; L M K N java/util/Iterator P hasNext ()Z R S Q T next ()Ljava/lang/Object; V W Q X kotlin/text/MatchResult Z getDestructured (()Lkotlin/text/MatchResult$Destructured; \ ] [ ^ $kotlin/text/MatchResult$Destructured ` getMatch ()Lkotlin/text/MatchResult; b c
 a d getGroupValues ()Ljava/util/List; f g [ h java/util/List j get (I)Ljava/lang/Object; l m k n java/lang/String p "kotlinx/html/FlowOrPhrasingContent r 	unaryPlus t > s u kotlin/jvm/functions/Function2 w invoke 8(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; y z x { #$i$a$-forEach-JLangUtilsKt$toHtml$1 I prefix Ljava/lang/String; mistake suffix it Lkotlin/text/MatchResult; 
element$iv Ljava/lang/Object; $i$f$forEach $this$forEach$iv Lkotlin/sequences/Sequence; $this$toHtml $Lkotlinx/html/FlowOrPhrasingContent; )Lorg/languagetool/rules/IncorrectExample; mistakeHandler  Lkotlin/jvm/functions/Function2; toIncorrectHtml P(Lkotlinx/html/FlowOrPhrasingContent;Lorg/languagetool/rules/IncorrectExample;)V 8com/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1  INSTANCE :Lcom/intellij/grazie/utils/JLangUtilsKt$toIncorrectHtml$1;  	   6 7
   $this$toIncorrectHtml toCorrectHtml 6com/intellij/grazie/utils/JLangUtilsKt$toCorrectHtml$1  ,(Lorg/languagetool/rules/IncorrectExample;)V = 
   $this$toCorrectHtml Lkotlin/Metadata; mv           k    xi   0 d1 ÐÀ8
À








À





0*02030*02020000Â¢H0*020"À0*08FÂ¢"0*08FÂ¢	Â¨ d2 messageSanitized text Lkotlin/Function2; Lkotlin/ExtensionFunctionType; intellij.grazie.core Destructured JLangUtils.kt *Lkotlin/jvm/internal/SourceDebugExtension; valueSMAP
JLangUtils.kt
Kotlin
*S Kotlin
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt
+ 2 _Sequences.kt
kotlin/sequences/SequencesKt___SequencesKt
*L
1#1,45:1
1295#2,2:46
*S KotlinDebug
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt
*L
17#1:46,2
*E
 Code LineNumberTable LocalVariableTable RuntimeInvisibleAnnotations $RuntimeInvisibleParameterAnnotations StackMapTable 	Signature InnerClasses 
SourceFile SourceDebugExtension RuntimeVisibleAnnotations 1            ·   O     %*	¸ *¶ Y¸ ¸ $&¸ $°    ¸       ¹       % ' (   º        »         ) *  ·   >     *	¸ *¶ /Y1¸ À 3°    ¸       ¹        4 5   º        »         6 7  ·       ®» :Y<· @+¶ CYE¸ À 3¸ IN6-¹ O :¹ U  }¹ Y :À [:6¹ _ :		¶ e¹ i ¹ o À q:
	¶ e¹ i ¹ o À q:	¶ e¹ i ¹ o À q:*
¹ v ,*¹ | W*¹ v   §ÿ ±    ¼    þ ( K Qû  ¸   6       . E  a  v          §  ¨ . ¬ / ­  ¹   p  E c } ~  c E   
 x 0         B f    ; n        ~         ®       ® 0     ®    ½    8     ·   P     *	¸ +1¸ *+² À x¸ ±    ¸   
     " ¹               0   »                ·   U     *	¸ +1¸ *+» Y+· À x¸ ±    ¸   
   %  , ¹                0   »             ¾                 a [ ²  ¿    ³ À  SMAP
JLangUtils.kt
Kotlin
*S Kotlin
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt
+ 2 _Sequences.kt
kotlin/sequences/SequencesKt___SequencesKt
*L
1#1,45:1
1295#2,2:46
*S KotlinDebug
*F
+ 1 JLangUtils.kt
com/intellij/grazie/utils/JLangUtilsKt
*L
17#1:46,2
*E
 Á   j  ¡  ¢[ I £I ¤I ¥ ¦I § ¨I © ª[ s « ¬[ s ­s s (s s s ®s s 5s )s *s s s s 0s s 6s s ¯s °s s ± º     ´  µ[ s ¶PK          ©?¶0È  È  0   com/intellij/grazie/utils/LazyGrazieConfig.classÊþº¾   = f *com/intellij/grazie/utils/LazyGrazieConfig  i<R:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/lang/Object;Lkotlin/properties/ReadWriteProperty<TR;TT;>; java/lang/Object  #kotlin/properties/ReadWriteProperty  <init> #(Lkotlin/jvm/functions/Function1;)V [(Lkotlin/jvm/functions/Function1<-Lcom/intellij/grazie/GrazieConfig$State;Lkotlin/Unit;>;)V #Lorg/jetbrains/annotations/NotNull; init  kotlin/jvm/internal/Intrinsics  checkNotNullParameter '(Ljava/lang/Object;Ljava/lang/String;)V  
   ()V  
    Lkotlin/jvm/functions/Function1;  	   this ,Lcom/intellij/grazie/utils/LazyGrazieConfig; getInit "()Lkotlin/jvm/functions/Function1; Y()Lkotlin/jvm/functions/Function1<Lcom/intellij/grazie/GrazieConfig$State;Lkotlin/Unit;>; getValue @(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/lang/O