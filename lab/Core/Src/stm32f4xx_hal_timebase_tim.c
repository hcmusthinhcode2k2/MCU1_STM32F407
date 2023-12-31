 * Resumes scanning until the next regular expression is matched,
   * the end of input is encountered or an I/O-Error occurs.
   *
   * @return      the next token
   * @exception   java.io.IOException  if any I/O-Error occurs
   */
--- yylex declaration
    int zzInput;
    int zzAction;

    // cached fields:
    int zzCurrentPosL;
    int zzMarkedPosL;
    int zzEndReadL = zzEndRead;
    CharSequence zzBufferL = zzBuffer;

--- local declarations

    while (true) {
      zzMarkedPosL = zzMarkedPos;

--- start admin (line, char, col count)
      zzAction = -1;

      zzCurrentPosL = zzCurrentPos = zzStartRead = zzMarkedPosL;

--- start admin (lexstate etc)

      zzForAction: {
        while (true) {

--- next input, line, col, char count, next transition, isFinal action
            zzAction = zzState;
            zzMarkedPosL = zzCurrentPosL;
--- line count update
          }

        }
      }

      // store back cached position
      zzMarkedPos = zzMarkedPosL;
--- char count update

      if (zzInput == YYEOF && zzStartRead == zzCurrentPos) {
        zzAtEOF = true;
--- eofvalue
      }
      else {
--- actions
          default:
--- no match
          }
      }
    }
  }

--- main

}
PK          ��,2�  �  :   com/jetbrains/python/lexer/PythonHighlightingLexer$1.class����   = 9
      8com/jetbrains/python/lexer/PythonHighlightingLexer$state values =()[Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state;	  	 
   4com/jetbrains/python/lexer/PythonHighlightingLexer$1 C$SwitchMap$com$jetbrains$python$lexer$PythonHighlightingLexer$state [I	     init :Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state;
     ordinal ()I  java/lang/NoSuchFieldError	     pending_future	     pending_import	     pending_lpar	  ! "  
pending_id	  $ %  pending_comma	  ' (  stop * java/lang/Object <clinit> ()V Code LineNumberTable LocalVariableTable StackMapTable 
SourceFile PythonHighlightingLexer.java EnclosingMethod 5 2com/jetbrains/python/lexer/PythonHighlightingLexer NestHost InnerClasses state   )          + ,  -   �     u� ��
� � � � O� K� � � O� K� � � O� K� � � O� K� �  � O� K� � #� O� K� � &� O� K�  	     # &  ' 2 5  6 A D  E P S  T ` c  d p s   .       { /      0   % W  M  M  M  M  N  N    1    2 3    4   6    4 7      4 8@     PK          ��X�g  g  >   com/jetbrains/python/lexer/PythonHighlightingLexer$state.class����   = K  8com/jetbrains/python/lexer/PythonHighlightingLexer$state	     init :Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state;	   	  pending_future	     pending_import	     pending_lpar	     
pending_id	     pending_comma	     stop	     $VALUES ;[Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state;
      ! clone ()Ljava/lang/Object;
 # $ % & ' java/lang/Enum valueOf 5(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;
 # ) * + <init> (Ljava/lang/String;I)V 
  ) 	     
  5 6 7 $values =()[Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state; values Code LineNumberTable N(Ljava/lang/String;)Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state; LocalVariableTable name Ljava/lang/String; this 	Signature ()V <clinit> LLjava/lang/Enum<Lcom/jetbrains/python/lexer/PythonHighlightingLexer$state;>; 
SourceFile PythonHighlightingLexer.java NestHost H 2com/jetbrains/python/lexer/PythonHighlightingLexer InnerClasses state@0  #   @    @ 	   @    @    @    @    @          	 8 7  9   "      
� � � �    :       i 	 & ;  9   4     
*� "� �    :       i <       
 = >    * +  9   1     *+� (�    :       i <        ?    @    A
 6 7  9   I      1� Y� SY� SY� 
SY� SY� SY� SY� S�    :       i  B A  9   �      c� Y,� -� � Y.� -� � Y/� -� 
� Y0� -� � Y1� -� � Y2� -� � Y3� -� � 4� �    :   "    j  k  l ' m 4 n A o N p \ i  @    C D    E F    G I   
   G J@PK          M-�u  u  8   com/jetbrains/python/lexer/PythonHighlightingLexer.class