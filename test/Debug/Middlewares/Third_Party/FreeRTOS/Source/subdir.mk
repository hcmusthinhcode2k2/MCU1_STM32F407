�   /   inspectionDescriptions/PyprojectInspection.html<html>
<body>
Reports unsatisfied dependencies, declared [project.dependencies] table in pyproject.toml.
<p>
 Shows a quick-fix to install missing packages.
</p>
</body>
</html>PK          L?�|�  �  .   inspectionDescriptions/RestRoleInspection.html<html>
<body>
<p>Reports undefined roles in reStructuredText files.</p>
<p><b>Example:</b></p>
<pre><code>
.. role:: custom
.. role:: newcustom(emphasis)

An example of using :custom:`interpreted text`
An example of using :newcustom:`interpreted text`
An example of using :emphasis:`interpreted text`


Some text using undefined role :undef:`interpreted text`
</code></pre>
</body>
</html>PK          g��.,  ,     liveTemplates/Python.xml<templateSet group="Python">
  <template name="super" value="super($args$).$method$($end$)" description="'super(...)' call" toReformat="false" toShortenFQNames="true">
    <variable name="args" expression="pyVerSpecificSuperSignature()" defaultValue="" alwaysStopAt="false" />
    <variable name="method" expression="pyFunctionName()" defaultValue="" alwaysStopAt="false" />
    <variable name="end" expression="" defaultValue="" alwaysStopAt="true" />
    <context>
      <option name="Python_Class" value="true" />
    </context>
  </template>
  <template name="main" value="if __name__ == '__main__':&#10;    $END$" description="if __name__ == '__main__'" toReformat="false" toShortenFQNames="true">
    <context>
      <option name="Python_Top_Level" value="true" />
    </context>
  </template>
  <template name="iter" value="for $VAR$ in $ITERABLE$:&#10;    $END$" description="Iterate (for ... in ...)" toReformat="false" toShortenFQNames="true">
    <variable name="ITERABLE" expression="pyIterableVariable()" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR" expression="collectionElementName(ITERABLE)" defaultValue="" alwaysStopAt="true" />
    <context>
      <option name="Python" value="true" />
    </context>
  </template>
  <template name="itere" value="for $INDEX$, $VAR$ in enumerate($ITERABLE$):&#10;    $END$" description="Iterate (for ... in enumerate)" toReformat="false" toShortenFQNames="true">
    <variable name="ITERABLE" expression="pyIterableVariable()" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR" expression="collectionElementName(ITERABLE)" defaultValue="" alwaysStopAt="true" />
    <variable name="INDEX" expression="" defaultValue="&quot;i&quot;" alwaysStopAt="true" />
    <context>
      <option name="Python" value="true" />
    </context>
  </template>
  <template name="compl" value="[$VAR_EXPR$ for $VAR$ in $ITERABLE$]" description="List comprehension" toReformat="false" toShortenFQNames="true">
    <variable name="ITERABLE" expression="pyIterableVariable()" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR" expression="collectionElementName(ITERABLE)" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR_EXPR" expression="" defaultValue="VAR" alwaysStopAt="true" />
    <context>
      <option name="Python" value="true" />
    </context>
  </template>
  <template name="compli" value="[$VAR_EXPR$ for $VAR$ in $ITERABLE$ if $VAR_EXPR_IF$]" description="List comprehension with 'if'" toReformat="false" toShortenFQNames="true">
    <variable name="ITERABLE" expression="pyIterableVariable()" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR" expression="collectionElementName(ITERABLE)" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR_EXPR" expression="" defaultValue="VAR" alwaysStopAt="true" />
    <variable name="VAR_EXPR_IF" expression="" defaultValue="VAR" alwaysStopAt="true" />
    <context>
      <option name="Python" value="true" />
    </context>
  </template>
  <template name="compg" value="($VAR_EXPR$ for $VAR$ in $ITERABLE$)" description="Generator comprehension" toReformat="false" toShortenFQNames="true">
    <variable name="ITERABLE" expression="pyIterableVariable()" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR" expression="collectionElementName(ITERABLE)" defaultValue="" alwaysStopAt="true" />
    <variable name="VAR_EXPR" expression="" defaultValue="VAR" al