.Group.Secondary
 QRS addGridHeaderComponent h(Lcom/intellij/database/datagrid/DataGrid;ZLjava/lang/String;Ljava/lang/String;)Ljavax/swing/JComponent;U 2com/intellij/openapi/actionSystem/EmptyActionGroup
T  UXY b setReservePlaceAutoPopupIcon[ +com/intellij/ui/components/TwoSideComponent
Z] ^ 3(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V
`abcd .com/intellij/util/ui/JBUI$CurrentTheme$Toolbar horizontalToolbarInsets ()Ljava/awt/Insets;
fghij !com/intellij/util/ui/JBUI$Borders empty *(IIII)Lcom/intellij/util/ui/JBEmptyBorder;	lmnop java/awt/Insets top I	lrsp left	luvp bottom	lxyp right{ !javax/swing/border/CompoundBorder	}~�� -com/intellij/util/ui/JBUI$CurrentTheme$Editor BORDER_COLOR Ljava/awt/Color;
f��� 
customLine 1(Ljava/awt/Color;IIII)Ljavax/swing/border/Border;
z� � 9(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V
 ^��� 	setBorder (Ljavax/swing/border/Border;)V
f�i� &()Lcom/intellij/util/ui/JBEmptyBorder; O��� setTopComponent (Ljava/awt/Component;)V &��  isFilteringSupported &��� getFilterComponent @()Lcom/intellij/database/datagrid/GridFilterAndSortingComponent;� [� <com/intellij/database/datagrid/GridFilterAndSortingComponent O��� setSecondTopComponent
 ^��� 	getBorder ()Ljavax/swing/border/Border;����� javax/swing/border/Border getBorderInsets '(Ljava/awt/Component;)Ljava/awt/Insets;� "com/intellij/util/ui/JBEmptyBorder
�� � (IIII)V O��� setRightHeaderComponent	 ��  FILE_EDITOR_KEY
����� com/intellij/ui/ComponentUtil getClientProperty K(Ljavax/swing/JComponent;Lcom/intellij/openapi/util/Key;)Ljava/lang/Object;� )com/intellij/database/datagrid/GridUtil$4
�� � o(Lcom/intellij/openapi/project/Project;Lcom/intellij/database/datagrid/DataGrid;Ljava/util/function/Supplier;)V
 ^��= putClientProperty
����� "com/intellij/openapi/util/Disposer register E(Lcom/intellij/openapi/Disposable;Lcom/intellij/openapi/Disposable;)V
%�i� (Ljava/lang/String;)Z�  
 ��c wrapInOpenFileLink �B� J(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; ���  setResultViewAdditionalRowsCount ��� b #setResultViewSetShowHorizontalLines ���  isStripedTable ��� b setResultViewStriped ��� b !setTransparentRowHeaderBackground  �
 �� � �(Lcom/intellij/openapi/project/Project;Lcom/intellij/database/datagrid/GridDataHookUp;Lcom/intellij/openapi/actionSystem/ActionGroup;Ljava/util/function/BiConsumer;)V����� ,com/intellij/database/csv/CsvSettingsService getDatabaseSettings 0()Lcom/intellij/database/csv/CsvFormatsSettings; ��� c(Lcom/intellij/database/settings/DataGridSetting