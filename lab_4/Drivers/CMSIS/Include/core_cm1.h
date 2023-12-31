ody>
</html>PK          `��	r   r   \   intentionDescriptions/JSObjectLiteralIndexingToArrayDestructuringIntention/after.js.templatelet [prop0, prop1, prop2] = arr;
const destructMe = condition ? {
  <spot>prop0,
  prop1,
  prop2</spot>
} : null;PK          ��n�i   i   ]   intentionDescriptions/JSObjectLiteralIndexingToArrayDestructuringIntention/before.js.templateconst destructMe = condition ? {
  prop0: <spot>arr</spot>[0],
  prop1: arr[1],
  prop2: arr[2]
} : null;PK          ��}$  $  [   intentionDescriptions/JSObjectLiteralIndexingToArrayDestructuringIntention/description.html<html>
<body>
If the same item is indexed in the values of object properties (for example, <code>var x = {a: r[0], b: r[1]}</code>),
those properties may be preliminarily assigned using a destructuring and then used in a shorthand form, unless any name conflicts are detected.
</body>
</html>PK          D��7   7   B   intentionDescriptions/JSPipeToCallChainIntention/after.js.templatelet message = capitalize(localize(getMessageById(id)));PK          7k^J   J   C   intentionDescriptions/JSPipeToCallChainIntention/before.js.templatelet message = <spot>id |> getMessageById |> localize |> capitalize</spot>;PK          �h+�{   {   A   intentionDescriptions/JSPipeToCallChainIntention/description.html<html>
<body>
Converts a pipe expression to an equivalent call chain of functions with a single parameter.
</body>
</html>
PK          NX��    A   intentionDescriptions/JSPromiseToAsyncIntention/after.js.templateasync function getProcessedData(url) {
    let result;
    try {
        result = await downloadData(url); // returns a promise
    } catch (e) {
        result = await downloadFallbackData(url); // returns a promise
    }
    return processDataInWorker(result);
}PK          �դ    B   intentionDescriptions/JSPromiseToAsyncIntention/before.js.template<spot>function getProcessedData(url)</spot> {
  return downloadData(url) // returns a promise
    .catch(e => {
      return downloadFallbackData(url)  // returns a promise
    })
    .then(v => {
      return processDataInWorker(v); // returns a promise
    });
}PK          ����   �   @   intentionDescriptions/JSPromiseToAsyncIntention/description.html<html>
<body>
Converts a function with <code>Promise</code> chains in the <code>return</code> statement to an <code>async</code> function with <code>await</code> expressions and <code>catch</code> handling.
</body>
</html>PK          ��D   D   K   intentionDescriptions/JSPropagateToDestructuringIntention/after.js.templatelet {prop: <spot>[first, second, third]</spot>} = {prop: [1, 2, 3]};PK          ��X   X   L   intentionDescriptions/JSPropagateToDestructuringIntention/before.js.templatelet {prop: items} = {prop: [1, 2, 3]};

<spot>let [first, second, third] = items;</spot>PK          M���   �   J   intentionDescriptions/JSPropagateToDestructuringIntention/description.html<html>
<body>
If a variable is used to access a property or an array element of a destructuring variable, propagates the corresponding property access expression or index expression to the destructuring.
</body>
</html>PK          ҧ��   �   J   intentionDescriptions/JSPropertyAccessToIndexerIntention/after.js.templatefunction call(person) {
    if (person<spot>["formal"]</spot>) {
      performCall(`Mr ${person.lastName}`);
    }
    else {
      performCall(person.firstName);
    }
}PK          '�ɧ   �   K   intentionDescriptions/JSPropertyAccessToIndexerIntention/before.js.templatefunction call(person) {
    if (person<spot>.formal</spot>) {
      performCall(`Mr ${person.lastName}`);
    }
    else {
      performCall(person.firstName);
    }
}PK          n@֊d   d   I   intentionDescriptions/JSPropertyAccessToIndexerIntention/description.html<html>
<body>
Converts a property access expression to an indexed access expression.
</body>
</html>PK          �p�/:   :   A   intentionDescriptions/JSPublicModifierIntention/after.ts.templateclass Foo {
  do1() {}
}
// --
class Other {
  do1() {}
}
PK          z�]   ]   B   intentionDescriptions/JSPublicModifierIntention/before.ts.templateclass Foo {
  <spot>private do1()</spot> {}
}
// --
class Other {
  <spot>#do1()</spot> {}
}
PK          ԗz:   :   @   intentionDescriptions/JSPublicModifierIntention/description.html<html>
<body>
Makes a class member public.
</body>
</html>PK          ����5   5   I   intentionDescriptions/JSQuoteLiteralPropertiesIntention/after.js.templatevar z = { "x": 5, "y": { "z": 7 }, "p": [{"q": 8}] };PK          4�r8   8   J   intentionDescriptions/JSQuoteLiteralPropertiesIntention/before.js.templatevar z = <spot>{ x: 5, y: { z: 7 }, p: [{q: 8}] }</spot>;PK          D�6v_   _   H   intentionDescriptions/JSQuoteLiteralPropertiesIntention/description.html<html>
<body>
Wraps the names of all properties of an object literal in quotes.
</body>
</html>PK          ^��H!   !   H   intentionDescriptions/JSRemoveDigitSeparatorsIntention/after.js.templateconst flags = 0b1010000110000101;PK          M��1   1   I   intentionDescriptions/JSRemoveDigitSeparatorsIntention/before.js.templateconst flags = <spot>0b1010_0001_1000_0101</spot>;PK          �g�PH   H   G   intentionDescriptions/JSRemoveDigitSeparatorsIntention/description.html<html>
<body>
Removes separators from a numeric literal.
</body>
</html>PK          c�b�:   :   L   intentionDescriptions/JSRenameFileToMatchTypeNameIntention/after.js.template// <spot>derived.js</spot>
class Derived extends Base {

}PK          �S��7   7   M   intentionDescriptions/JSRenameFileToMatchTypeNameIntention/before.js.template// base.js
class <spot>Derived</spot> extends Base {

}PK          �Z-^  ^  K   intentionDescriptions/JSRenameFileToMatchTypeNameIntention/description.html<html>
<body>
Renames a file to match the type name of the selected type (an ECMAScript class or a TypeScript class, interface, or enum).<br/><br/>
File name matching can be framework-specific. For example, for Angular components, the corresponding <a href="https://angular.io/guide/styleguide#style-02-03">style guide</a> is applied.
</body>
</html>PK          ���T6   6   J   intentionDescriptions/JSReplaceForEachWithForOfIntention/after.js.templatefor (const item of [1,2,3]) {
    console.log(item);
}PK          SY�S8   8   K   intentionDescriptions/JSReplaceForEachWithForOfIntention/before.js.template<spot>[1,2,3].forEach</spot>(item => console.log(item));PK          ���&�   �   I   intentionDescriptions/JSReplaceForEachWithForOfIntention/description.html<html>
<body>
Converts an <code>array.forEach()</code> to a <code>for..of</code> loop.
Although these code constructs are similar, a <code>for..of</code> loop allows using <code>continue</code> and <code>break</code> statements.
</body>
</html>PK          ?��.�   �   L   intentionDescriptions/JSReplaceForEachWithIndexedIntention/after.js.templateconst items = [1, 2, 3];
for (let index = 0; index < items.length; index++) {
  let item = items[index];
  console.log(item);
  console.log(index);
}PK          �V2t   t   M   intentionDescriptions/JSReplaceForEachWithIndexedIntention/before.js.templateconst items = [1, 2, 3];
<spot>items.forEach</spot>((item, index) => {
  console.log(item);
  console.log(index);
})PK          ꡵   �   K   intentionDescriptions/JSReplaceForEachWithIndexedIntention/description.html<html>
<body>
Converts a <code>forEach</code> loop that iterates over an array with an equivalent <code>for</code> loop that uses an index to iterate over the array.
</body>
</html>PK          ^R^B   B   J   intentionDescriptions/JSReplaceForOfWithIndexedIntention/after.js.templatefor (let i = 0; i < array.length; i++) {
  console.log(array[i])
}PK          �T��?   ?   K   intentionDescriptions/JSReplaceForOfWithIndexedIntention/before.js.template<spot>for</spot> (const item of array) {
  console.log(item);
}PK          A<	��   �   I   intentionDescriptions/JSReplaceForOfWithIndexedIntention/description.html<html>
<body>
Converts a <code>for..of</code> loop that iterates over an array with an equivalent <code>for</code> loop that uses an index to iterate over the array.
</body>
</html>PK          ��R�$   $   A   intentionDescriptions/JSSeparateDigitsIntention/after.js.templateconst flags = 0b1010_0001_1000_0101;PK          ���.   .   B   intentionDescriptions/JSSeparateDigitsIntention/before.js.templateconst flags = <spot>0b1010000110000101</spot>;PK          [�8yg   g   @   intentionDescriptions/JSSeparateDigitsIntention/description.html<html>
<body>
Adds numeric separators to a numeric literal to improve code readability.
</body>
</html>PK          ,�      G   intentionDescriptions/JSSharpPrivateModifierIntention/after.ts.templateclass Foo {
  #do1() {}
}
PK          b:�~&   &   H   intentionDescriptions/JSSharpPrivateModifierIntention/before.ts.templateclass Foo {
  <spot>do1()</spot> {}
}
PK          7�q�n   n   F   intentionDescriptions/JSSharpPrivateModifierIntention/description.html<html>
<body>
Makes a class member private using the ECMAScript private <code>#</code>-syntax.
</body>
</html>PK          |�ǈ      C   intentionDescriptions/JSSplitDeclarationIntention/after.js.templatevar a;
var b = 3;
PK          E#�6      D   intentionDescriptions/JSSplitDeclarationIntention/before.js.template<spot>var a, b = 3;</spot>
PK          �d�_   _   B   intentionDescriptions/JSSplitDeclarationIntention/description.html<html>
<body>
Converts a compound declaration to several variable declarations.
</body>
</html>PK          �'/�H   H   S   intentionDescriptions/JSStringTemplateConvertToMultiLineIntention/after.js.templatefunction greeting(name) {
  return `Hello, ${name}!
Have a nice day!`;
}PK          ˸�1V   V   T   intentionDescriptions/JSStringTemplateConvertToMultiLineIntention/before.js.templatefunction greeting(name) {
  return <spot>`Hello, ${name}!\nHave a nice day!`</spot>;
}PK          ����   �   R   intentionDescriptions/JSStringTemplateConvertToMultiLineIntention/description.html<html>
<body>
Converts a string template with visible line separators (<code>\n</code>) to a multi-line template string.
</body>
</html>PK          ґ�I   I   [   intentionDescriptions/JSStringTemplateConvertToVisibleSeparatorsIntention/after.js.templatefunction greeting(name) {
  return `Hello, ${name}!\nHave a nice day!`;
}PK          |�ȯU   U   \   intentionDescriptions/JSStringTemplateConvertToVisibleSeparatorsIntention/before.js.templatefunction greeting(name) {
  return <spot>`Hello, ${name}!
Have a nice day!`</spot>;
}PK          �<9h�   �   Z   intentionDescriptions/JSStringTemplateConvertToVisibleSeparatorsIntention/description.html<html>
<body>
Converts a multi-line template string to a one-line template string with visible line separators (<code>\n</code>).
</body>
</html>PK          i8   8   T   intentionDescriptions/JSSubsequentIndexingToDestructuringIntention/after.js.templatevar a, c, y;

let b, d;
<spot>[a, c, b, , d]</spot> = x;PK          ��H0F   F   U   intentionDescriptions/JSSubsequentIndexingToDestructuringIntention/before.js.templatevar a, c, y;

a = <spot>x</spot>[0], c = x[1];
let b = x[2], d = x[4];PK          gsr�    S   intentionDescriptions/JSSubsequentIndexingToDestructuringIntention/description.html<html>
<body>
If an item is indexed consequently in variable declarations and/or assignments (for example, <code>var x = r[0]; y = r[1]; z = r[55]</code>),
converts those variables and/or assignments to a destructuring declaration or assignment.
</body>
</html>PK          J�֔   �   b   intentionDescriptions/JSSubsequentPromiseAwaitToPromiseAllDestructuringIntention/after.js.templateasync function doAsyncJob() {
  const [generalSettings, settings, config] = await Promise.all([getGeneralSettings(), getSettings(), getConfig()]);
}PK          D�'�   �   c   intentionDescriptions/JSSubsequentPromiseAwaitToPromiseAllDestructuringIntention/before.js.templateasync function doAsyncJob() {
  <spot>const generalSettings = await getGeneralSettings()</spot>;
  <spot>const settings = await getSettings()</spot>;
  <spot>const config = await getConfig()</spot>;
}PK          �=ޗ�   �   a   intentionDescriptions/JSSubsequentPromiseAwaitToPromiseAllDestructuringIntention/description.html<html>
<body>
Replaces a series of consequent <code>await</code> expressions that are assigned to variables
with a <code>Promise.all</code> and a destructuring for better performance.
</body>
</html>PK          �*�]�   �   Z   intentionDescriptions/JSSubsequentPropertyAccessToDestructuringIntention/after.js.templatefunction drawES5Chart(options) {
    options = options === undefined ? {} : options;
    var <spot>{size: size1 = "big", cords = {x: 0, y: 0}, radius: radius1 = 25}</spot> = options;

    console.log(size1, cords, radius1);
}PK          �x��b  b  [   intentionDescriptions/JSSubsequentPropertyAccessToDestructuringIntention/before.js.templatefunction drawES5Chart(options) {
    options = options === undefined ? {} : options;
    var size1 = <spot>options.size</spot> === undefined ? "big" : options.size;
    var cords = options.cords === undefined ? { x: 0, y: 0 } : options.cords;
    var radius1 = options.radius === undefined ? 25 : options.radius;
    console.log(size1, cords, radius1);
}PK          �`�      Y   intentionDescriptions/JSSubsequentPropertyAccessToDestructuringIntention/description.html<html>
<body>
If an item is accessed consequently with the same qualifier in variable declarations and/or assignments
(for example, <code>var x = obj.x; y = obj.y; z = obj.z</code>),
converts those variables and/or assignments to a destructuring declaration or assignment.
</body>
</html>PK          �Q7+   +   K   intentionDescriptions/JSUnquoteLiteralPropertiesIntention/after.js.templatevar z = { x: 5, y: { z: 7 }, p: [{q: 8}] };PK          eyWB   B   L   intentionDescriptions/JSUnquoteLiteralPropertiesIntention/before.js.templatevar z = <spot>{ "x": 5, "y": { "z": 7 }, "p": [{"q": 8}] }</spot>;PK          �>�^   ^   J   intentionDescriptions/JSUnquoteLiteralPropertiesIntention/description.html<html>
<body>
Unwraps the quoted names of all properties in an object literal.
</body>
</html>PK          ��S   S   D   intentionDescriptions/JSXCreateSelectorIntention/after.html.template<style>
    <spot>.className {
    }</spot>
</style>
<div class="className"></div>
PK          �`/�+   +   E   intentionDescriptions/JSXCreateSelectorIntention/before.html.template<div class="<spot>className</spot>"></div>
PK          ��~A}   }   A   intentionDescriptions/JSXCreateSelectorIntention/description.html<html>
<body>
Creates a CSS selector for a <code>class</code> or <code>id</code> attribute value in JSX code.
</body>
</html>PK          \�p�q   q   J   intentionDescriptions/PackageJsonInstallTypesIntention/after.json.template{
  "dependencies": {
    "express": "^3.4.1"
  },
  "devDependencies": {
      "@types/express": "3.4.1"
    }
}PK          ��AX>   >   K   intentionDescriptions/PackageJsonInstallTypesIntention/before.json.template{
  "dependencies": {
    <spot>"express"</spot>:"3.4.1"
  }
}PK          ڰ�
f   f   G   intentionDescriptions/PackageJsonInstallTypesIntention/description.html<html>
<body>
Adds and installs a dependency with TypeScript definitions for a module.
</body>
</html>PK          �;A?S   S   N   intentionDescriptions/ReactClassToFunctionComponentIntention/after.js.templatefunction HelloComponent() {
    return <div>{props.greeting}, {props.name}!</div>
}PK          �� ��   �   O   intentionDescriptions/ReactClassToFunctionComponentIntention/before.js.template<spot>class HelloComponent</spot> extends Component {
    render() {
        return <div>{this.props.greeting}, {this.props.name}!</div>
    }
}
PK          S�2\�   �   M   intentionDescriptions/ReactClassToFunctionComponentIntention/description.html<html>
<body>
Converts a React class component to a stateless function component.
To customize the generated code, use the React Function Component code templates in Editor | File and Code Templates.
</body>
</html>PK          �K	f�   �   N   intentionDescriptions/ReactFunctionToClassComponentIntention/after.js.templateclass HelloComponent extends Component {
    render() {
        let {greeting, name} = this.props;
        return <div>{greeting}, {name}!</div>
    }
}PK          �9u�d   d   O   intentionDescriptions/ReactFunctionToClassComponentIntention/before.js.template<spot>function HelloComponent({greeting, name})</spot> {
    return <div>{greeting}, {name}!</div>
}PK          #^=�   �   M   intentionDescriptions/ReactFunctionToClassComponentIntention/description.html<html>
<body>
Converts a React stateless function component to a class component.
To customize the generated code, use the React Class Component code templates in Editor | File and Code Templates. 
</body>
</html>PK          79��2   2   N   intentionDescriptions/TypeScriptAddEnumStringValuesIntention/after.js.templateenum MyEnum {
   A = "A",
   B = "B",
   C = "C"
}PK          ���'-   -   O   intentionDescriptions/TypeScriptAddEnumStringValuesIntention/before.js.template<spot>enum MyEnum {
   A,
   B,
   C
}</spot>PK          w��e   e   M   intentionDescriptions/TypeScriptAddEnumStringValuesIntention/description.html<html>
<body>
Adds an explicit enum member value as a string matching the field name.
</body>
</html>PK          ����,   ,   P   intentionDescriptions/TypeScriptAddExplicitEnumValuesIntention/after.js.templateenum MyEnum {
   A = 0,
   B = 1,
   C = 2
}PK          ���'-   -   Q   intentionDescriptions/TypeScriptAddExplicitEnumValuesIntention/before.js.template<spot>enum MyEnum {
   A,
   B,
   C
}</spot>PK          4�=,A   A   O   intentionDescriptions/TypeScriptAddExplicitEnumValuesIntention/description.html<html>
<body>
Adds an explicit enum member value.
</body>
</html>PK          �mV��   �   M   intentionDescriptions/TypeScriptConvertAliasToEnumIntention/after.ts.templateenum Action { click = "click", move = "move", drag = "drag" }

function triggerAction(a: Action) {
  // ...
}

button.onclick = function() {
  /* ... do something*/
  triggerAction(<spot>Action.click</spot>);
}PK          �b̸   �   N   intentionDescriptions/TypeScriptConvertAliasToEnumIntention/before.ts.templatetype Action = "click" | "move" | "drag";

function triggerAction(a: Action) {
  // ...
}

button.onclick = function() {
  /* ... do something*/
  triggerAction(<spot>"click"</spot>);
}PK          ^O>��   �   L   intentionDescriptions/TypeScriptConvertAliasToEnumIntention/description.html<html>
<body>
Converts the type alias for a set of string literals to an enum with string values that correspond with the initial literals.
</body>
</html>PK          %R��$   $   R   intentionDescriptions/TypeScriptConvertAliasToInterfaceIntention/after.ts.templateinterface Foo {
  bar(); 
  foo();
}PK          ���.   .   S   intentionDescriptions/TypeScriptConvertAliasToInterfaceIntention/before.ts.template<spot>type Foo =</spot> {
  bar(); 
  foo();
}PK          p��wl   l   Q   intentionDescriptions/TypeScriptConvertAliasToInterfaceIntention/description.html<html>
<body>
Converts the type alias for an object type to an interface with the same name.
</body>
</html>PK          ����*   *   O   intentionDescriptions/TypeScriptConvertImportRequireIntention/after.ts.templateimport * as FileName from "fileNamePath"; PK          ���+   +   P   intentionDescriptions/TypeScriptConvertImportRequireIntention/before.ts.templateimport FileName = require("fileNamePath"); PK          {��   �   N   intentionDescriptions/TypeScriptConvertImportRequireIntention/description.html<html>
<body>
Converts a TypeScript import statement from the <code>import require('')</code> to <code>import from</code> syntax.
</body>
</html>PK          jx�h]   ]   K   intentionDescriptions/TypeScriptDisableSmartCastIntention/after.ts.templatefunction foo(x: string | number) {
   if (typeof x === "string") {
       x.charAt(0);
   }
}PK          ��z�j   j   L   intentionDescriptions/TypeScriptDisableSmartCastIntention/before.ts.templatefunction foo(x: string | number) {
   if (typeof x === "string") {
       <spot>x</spot>.charAt(0);
   }
}PK          4��n   n   J   intentionDescriptions/TypeScriptDisableSmartCastIntention/description.html<html>
<body>
Disables color indication of TypeScript 'Narrowed to' type guards in the editor.
</body>
</html>PK          
��'C   C   S   intentionDescriptions/TypeScriptFieldToParameterPropertyIntention/after.js.templateclass Type {
   constructor(<spot>public x: string</spot>) {
   }
}PK          ^8�w   w   T   intentionDescriptions/TypeScriptFieldToParameterPropertyIntention/before.ts.templateclass Type {
   <spot>x: string</spot>;

   constructor(<spot>x: string</spot>) {
      <spot>this.x = x</spot>;
   }
}PK          �))�X   X   R   intentionDescriptions/TypeScriptFieldToParameterPropertyIntention/description.html<html>
<body>
Converts a TypeScript class field to a parameter property.
</body>
</html>PK          +�y<   <   P   intentionDescriptions/TypeScriptGenerateReferencePathIntention/after.ts.template///<reference path="./Bar.ts"/>

class Foo {
  var b:Bar;
}
PK          �	8�(   (   Q   intentionDescriptions/TypeScriptGenerateReferencePathIntention/before.ts.templateclass Foo {
  var b:<spot>Bar</spot>;
}
PK          ���(  (  O   intentionDescriptions/TypeScriptGenerateReferencePathIntention/description.html<html>
<body>
Generates a reference path comment to the file where the symbol at the caret is referenced. These comments are used by the  TypeScript compiler. 
Usually reference path comments are required for global symbols, otherwise the EcmaScript import syntax should be used. 
</body>
</html>PK          |~��d   d   R   intentionDescriptions/TypeScriptImplementInDerivedTypesIntention/after.js.templateinterface Action {
    do();
}

class ActionImpl implements Action {
    <spot>do() {
    }</spot>
}PK          �ښS   S   S   intentionDescriptions/TypeScriptImplementInDerivedTypesIntention/before.js.templateinterface Action {
    <spot>do</spot>();
}

class ActionImpl implements Action {
}PK          ��I�   �   Q   intentionDescriptions/TypeScriptImplementInDerivedTypesIntention/description.html<html>
<body>
Implements a member of an interface or an abstract class in a derived class where it is not implemented yet.
If the member is missing in several classes, shows a list of classes where implementing the member is required.
</body>
</html>PK          :'͍   �   S   intentionDescriptions/TypeScriptParameterPropertyToFieldIntention/after.ts.templateclass Type {
    <spot>public prop: string;</spot>
    constructor(<spot>prop: string</spot>) {
       <spot>this.prop = prop</spot>;
    }
}PK          5j%�H   H   T   intentionDescriptions/TypeScriptParameterPropertyToFieldIntention/before.ts.templateclass Type {
    constructor(<spot>public prop: string</spot>) {
    }
}PK          ��|b   b   R   intentionDescriptions/TypeScriptParameterPropertyToFieldIntention/description.html<html>
<body>
Converts a TypeScript parameter property to an ordinary class field.
</body>
</html>PK          *W�Y!   !   J   intentionDescriptions/TypeScriptPrivateModifierIntention/after.ts.templateclass Foo {
  private do1() {}
}
PK          b:�~&   &   K   intentionDescriptions/TypeScriptPrivateModifierIntention/before.ts.templateclass Foo {
  <spot>do1()</spot> {}
}
PK          �(>np   p   I   intentionDescriptions/TypeScriptPrivateModifierIntention/description.html<html>
<body>
Makes a TypeScript class member private and adds the <code>private</code> keyword.
</body>
</html>PK          =e�Z#   #   L   intentionDescriptions/TypeScriptProtectedModifierIntention/after.ts.templateclass Foo {
  protected do1() {}
}
PK          b:�~&   &   M   intentionDescriptions/TypeScriptProtectedModifierIntention/before.ts.templateclass Foo {
  <spot>do1()</spot> {}
}
PK          7��H   H   K   intentionDescriptions/TypeScriptProtectedModifierIntention/description.html<html>
<body>
Makes a TypeScript class member protected.
</body>
</html>PK          +bí,   ,   <   postfixTemplates/JSArgumentPostfixTemplate/after.ts.templatefunction m(id) {
    foo(<spot>id</spot>)
}
PK          ���+   +   =   postfixTemplates/JSArgumentPostfixTemplate/before.ts.templatefunction m(id) {
    <spot>id</spot>$key
}
PK          +�F   F   ;   postfixTemplates/JSArgumentPostfixTemplate/description.html<html>
<body>
Wraps an expression in a function call.
</body>
</html>
PK          
\�6   6   :   postfixTemplates/JSAwaitPostfixTemplate/after.es6.templateasync function m() {
    await fetch('/users.json')
}
PK          �~^�A   A   ;   postfixTemplates/JSAwaitPostfixTemplate/before.es6.templateasync function m() {
    <spot>fetch('/users.json')</spot>$key
}
PK          �2U�p   p   8   postfixTemplates/JSAwaitPostfixTemplate/description.html<html>
<body>
Inserts an <code>await</code> before the value of an <code>async</code> function.
</body>
</html>
PK          o��!G   G   :   postfixTemplates/JSDForOfPostfixTemplate/after.ts.templatelet arg = [{x: "string1"}, {x: "string2"}];

for (let {x} of arg) {

}
PK          *��$B   B   ;   postfixTemplates/JSDForOfPostfixTemplate/before.ts.templatelet arg = [{x: "string1"}, {x: "string2"}];

<spot>arg</spot>$key
PK          Nw�1�   �   9   postfixTemplates/JSDForOfPostfixTemplate/description.html<html>
<body>
Iterates over an object via its <code>Symbol.iterator</code> or over the values of an array using a destructuring pattern.
</body>
</html>PK          =ߟD   D   ?   postfixTemplates/JSDestructAllPostfixTemplate/after.js.templateclass Person {
    name;
    age;
}

let {age, name} = new Person();PK          �v�AB   B   @   postfixTemplates/JSDestructAllPostfixTemplate/before.js.templateclass Person {
    name;
    age;
}

<spot>new Person()$key</spot>PK          �(��d   d   >   postfixTemplates/JSDestructAllPostfixTemplate/description.html<html>
<body>
Introduces a destructuring pattern for all elements of an expression.
</body>
</html>
PK          Od�;   ;   <   postfixTemplates/JSDestructPostfixTemplate/after.js.templateclass Person {
    name;
    age;
}

let {} = new Person();PK          �v�AB   B   =   postfixTemplates/JSDestructPostfixTemplate/before.js.templateclass Person {
    name;
    age;
}

<spot>new Person()$key</spot>PK          ݎ��T   T   ;   postfixTemplates/JSDestructPostfixTemplate/description.html<html>
<body>
Introduces a destructuring pattern for an expression.
</body>
</html>
PK          ��<�,   ,   A   postfixTemplates/JSElseStatementPostfixTemplate/after.js.templatefunction m(arg) {
    if(!(arg)) {

    }
}
PK          ����-   -   B   postfixTemplates/JSElseStatementPostfixTemplate/before.js.templatefunction m(arg) {
    <spot>arg</spot>$key
}
PK          �t�   �   @   postfixTemplates/JSElseStatementPostfixTemplate/description.html<html>
<body>
Wraps a boolean expression in an <code>if</code> statement that checks that the expression values to <code>false</code>.
</body>
</html>
PK          �Sq{9   9   9   postfixTemplates/JSForInPostfixTemplate/after.js.templatefunction m(arr) {
    for (var element in arr) {

    }
}PK          1��$,   ,   :   postfixTemplates/JSForInPostfixTemplate/before.js.templatefunction m(arr) {
    <spot>arr</spot>$key
}PK          �ݴ{C   C   8   postfixTemplates/JSForInPostfixTemplate/description.html<html>
<body>
Iterates over the keys of an object.
</body>
</html>
PK          �jO]   ]   >   postfixTemplates/JSForIndexedPostfixTemplate/after.js.templatelet arg = ["string1", "string2"];

for (let i = 0; i < arg.length; i++) {
    <spot></spot>
}PK          Y�`�8   8   ?   postfixTemplates/JSForIndexedPostfixTemplate/before.js.templatelet arg = ["string1", "string2"];

<spot>arg</spot>$key
PK          K�� E   E   =   postfixTemplates/JSForIndexedPostfixTemplate/description.html<html>
<body>
Iterates over the indices of an object.
</body>
</html>PK          {�c   c   F   postfixTemplates/JSForIndexedReversedPostfixTemplate/after.js.templatelet arg = ["string1", "string2"];

for (let i = arg.length - 1; i >= 0; i--) {
    <spot></spot>
}
PK          Y�`�8   8   G   postfixTemplates/JSForIndexedReversedPostfixTemplate/before.js.templatelet arg = ["string1", "string2"];

<spot>arg</spot>$key
PK          ѿ`�Z   Z   E   postfixTemplates/JSForIndexedReversedPostfixTemplate/description.html<html>
<body>
Iterates over the indices of an object in the reverse order.
</body>
</html>PK          ��=   =   9   postfixTemplates/JSForOfPostfixTemplate/after.ts.templatelet arg = ["string1", "string2"];

for (let obj of arg) {

}
PK          Y�`�8   8   :   postfixTemplates/JSForOfPostfixTemplate/before.ts.templatelet arg = ["string1", "string2"];

<spot>arg</spot>$key
PK          7�/q{   {   8   postfixTemplates/JSForOfPostfixTemplate/description.html<html>
<body>
Iterates over an object via its <code>Symbol.iterator</code> or over the values of an array.
</body>
</html>
PK          A8�N   N   @   postfixTemplates/JSIfInstanceOfPostfixTemplate/after.js.templatefunction processData(data) {
    if (data instanceof <spot></spot>) {

    }
}PK          �I?   ?   A   postfixTemplates/JSIfInstanceOfPostfixTemplate/before.js.templatefunction processData(data) {
    <spot>data</spot>.instanceof
}PK          i)�u   u   ?   postfixTemplates/JSIfInstanceOfPostfixTemplate/description.html<html>
<body>
Wraps an expression in an <code>if</code> block with an <code>instanceof</code> check.
</body>
</html>
PK          9u9�)   )   ?   postfixTemplates/JSIfStatementPostfixTemplate/after.js.templatefunction m(arg) {
    if(arg) {

    }
}
PK          ����-   -   @   postfixTemplates/JSIfStatementPostfixTemplate/before.js.templatefunction m(arg) {
    <spot>arg</spot>$key
}
PK          �>�Ӎ   �   >   postfixTemplates/JSIfStatementPostfixTemplate/description.html<html>
<body>
Wraps a boolean expression in an <code>if</code> block that checks the expression values to <code>true</code>.
</body>
</html>
PK          A:_)P   P   <   postfixTemplates/JSIfTypeOfPostfixTemplate/after.js.templatefunction processData(data) {
    if (typeof data === "<spot></spot>") {

    }
}PK          m��?=   =   =   postfixTemplates/JSIfTypeOfPostfixTemplate/before.js.templatefunction processData(data) {
    <spot>data</spot>.typeofif
}PK          �>�p   p   ;   postfixTemplates/JSIfTypeOfPostfixTemplate/description.html<html>
<body>
Wraps an expression in an <code>if</code> block with a <code>typeof</code> check.
</body>
</html>
PK          k=ş?   ?   B   postfixTemplates/JSIntroduceConstPostfixTemplate/after.js.templatefunction m(id) {
    const el = document.getElementById(id);
}
PK          A�N�D   D   C   postfixTemplates/JSIntroduceConstPostfixTemplate/before.js.templatefunction m(id) {
    <spot>document.getElementById(id)</spot>$key
}
PK          cT`Z   Z   A   postfixTemplates/JSIntroduceConstPostfixTemplate/description.html<html>
<body>
Introduces a <code>const</code> variable for an expression.
</body>
</html>
PK          #p��=   =   @   postfixTemplates/JSIntroduceLetPostfixTemplate/after.js.templatefunction m(id) {
    let el = document.getElementById(id);
}
PK          A�N�D   D   A   postfixTemplates/JSIntroduceLetPostfixTemplate/before.js.templatefunction m(id) {
    <spot>document.getElementById(id)</spot>$key
}
PK          �F�X   X   ?   postfixTemplates/JSIntroduceLetPostfixTemplate/description.html<html>
<body>
Introduces a <code>let</code> variable for an expression.
</body>
</html>
PK          ��J�=   =   @   postfixTemplates/JSIntroduceVarPostfixTemplate/after.js.templatefunction m(id) {
    var el = document.getElementById(id);
}
PK          A�N�D   D   A   postfixTemplates/JSIntroduceVarPostfixTemplate/before.js.templatefunction m(id) {
    <spot>document.getElementById(id)</spot>$key
}
PK          ���X   X   ?   postfixTemplates/JSIntroduceVarPostfixTemplate/description.html<html>
<body>
Introduces a <code>var</code> variable for an expression.
</body>
</html>
PK          r��_   _   7   postfixTemplates/JSLogPostfixTemplate/after.js.templatefunction m(id) {
    var el = document.getElementById(id);
    console.log('element: ' + el);
}PK          c���c   c   8   postfixTemplates/JSLogPostfixTemplate/before.js.templatefunction m(id) {
    var el = document.getElementById(id);
    <spot>'element: ' + el</spot>$key
}
PK          dT��F   F   6   postfixTemplates/JSLogPostfixTemplate/description.html<html>
<body>
Inserts a <code>console.log</code> call.
</body>
</html>PK          GJ%1   1   A   postfixTemplates/JSNotExpressionPostfixTemplate/after.js.templatefunction m(arg) {
    if(!isNaN(arg)) {

    }
}
PK          OyuA   A   B   postfixTemplates/JSNotExpressionPostfixTemplate/before.js.templatefunction m(arg) {
    if(<spot>isNaN(arg)</spot>$key) {

    }
}
PK          �	b��   �   @   postfixTemplates/JSNotExpressionPostfixTemplate/description.html<html>
<body>
Wraps an expression in an <code>if</code> statement that checks that the expression doesn't value to <code>null</code>.
</body>
</html>
PK          :}��1   1   D   postfixTemplates/JSNotNullStatementPostfixTemplate/after.js.templatefunction m(arg) {
    if(arg != null) {

    }
}
PK          ����-   -   E   postfixTemplates/JSNotNullStatementPostfixTemplate/before.js.templatefunction m(arg) {
    <spot>arg</spot>$key
}
PK          w̤X   X   C   postfixTemplates/JSNotNullStatementPostfixTemplate/description.html<html>
<body>
Wraps current expression in a not-null checking statement
</body>
</html>
PK          ��\�1   1   A   postfixTemplates/JSNullStatementPostfixTemplate/after.js.templatefunction m(arg) {
    if(arg == null) {

    }
}
PK          ����-   -   B   postfixTemplates/JSNullStatementPostfixTemplate/before.js.templatefunction m(arg) {
    <spot>arg</spot>$key
}
PK          �����   �   @   postfixTemplates/JSNullStatementPostfixTemplate/description.html<html>
<body>
Wraps an expression in an <code>if</code> statement that checks that the expression values to <code>null</code>.
</body>
</html>
PK          u�4�0   0   A   postfixTemplates/JSParenthesizedPostfixTemplate/after.js.templatefunction m(arg) {
    if((arg == 1)) {

    }
}
PK          � x|?   ?   B   postfixTemplates/JSParenthesizedPostfixTemplate/before.js.templatefunction m(arg) {
    if(<spot>arg == 1</spot>$key) {

    }
}
PK          �{�B   B   @   postfixTemplates/JSParenthesizedPostfixTemplate/description.html<html>
<body>
Wraps an expression in parentheses.
</body>
</html>
PK          �}�&   &   C   postfixTemplates/JSReturnStatementPostfixTemplate/after.js.templatefunction m() {
    return "result";
}
PK          ��/   /   D   postfixTemplates/JSReturnStatementPostfixTemplate/before.js.templatefunction m() {
    <spot>"result"</spot>$key
}
PK          '��V   V   B   postfixTemplates/JSReturnStatementPostfixTemplate/description.html<html>
<body>
Wraps an expression in a <code>return</code> statement.
</body>
</html>
PK          J��a�   �   :   postfixTemplates/JSSwitchPostfixTemplate/after.js.template/**
* @param {'header' | 'footer'} templateKind
*/
function getTemplate(templateKind) {
   switch (templateKind) {
     <spot>case 'header':
       break;
     case 'footer':
       break;</spot>
   }
}PK          '��Cz   z   ;   postfixTemplates/JSSwitchPostfixTemplate/before.js.template/**
* @param {'header' | 'footer'} templateKind
*/
function getTemplate(templateKind) {
   <spot>templateKind</spot>$key
}PK          �4m�      9   postfixTemplates/JSSwitchPostfixTemplate/description.html<html>
<body>
Wraps an expression in a <code>switch</code> statement and generates case clauses when possible.
</body>
</html>
PK          �&��U   U   B   postfixTemplates/JSThrowStatementPostfixTemplate/after.js.templatefunction m(arg) {
    if(arg == null) {
        throw new Error('arg null');
    }
}
PK          %�i�_   _   C   postfixTemplates/JSThrowStatementPostfixTemplate/before.js.templatefunction m(arg) {
    if(arg == null) {
        <spot>new Error('arg null')</spot>$key
    }
}
PK          �7v�U   U   A   postfixTemplates/JSThrowStatementPostfixTemplate/description.html<html>
<body>
Wraps an expression in a <code>throw</code> statement.
</body>
</html>
PK          ����Q   Q   D   postfixTemplates/JSTypeOfExpressionPostfixTemplate/after.js.templatefunction m(arg) {
    var type = typeof arg
    if (type == 'number') {

    }
}
PK          I�>[   [   E   postfixTemplates/JSTypeOfExpressionPostfixTemplate/before.js.templatefunction m(arg) {
    var type = <spot>arg</spot>$key
    if (type == 'number') {

    }
}
PK          Y4-�Y   Y   C   postfixTemplates/JSTypeOfExpressionPostfixTemplate/description.html<html>
<body>
Applies the <code>typeof</code> operator to an expression.
</body>
</html>
PK          �Ǽ�@   @   9   postfixTemplates/JSUndefPostfixTemplate/after.js.templatefunction m(arg) {
    if(typeof arg !== "undefined") {

    }
}
PK          ����-   -   :   postfixTemplates/JSUndefPostfixTemplate/before.js.templatefunction m(arg) {
    <spot>arg</spot>$key
}
PK          E��=�   �   8   postfixTemplates/JSUndefPostfixTemplate/description.html<html>
<body>
Wraps an expression in an <code>if</code> statement that checks that the type of the expressions is not <code>undefined</code>.
</body>
</html>PK          �dX.   .   @   postfixTemplates/TypeScriptCastPostfixTemplate/after.js.templatefunction m(arg: TypeValue) {
    (<any>arg)
}
PK          |3z38   8   A   postfixTemplates/TypeScriptCastPostfixTemplate/before.js.templatefunction m(arg: TypeValue) {
    <spot>arg</spot>$key
}
PK          �FR�    ?   postfixTemplates/TypeScriptCastPostfixTemplate/description.html<html>
<body>
Inserts a TypeScript type assertion and wraps it in parentheses if needed.<br/>
Available only in TypeScript.<br/><br/>
A type assertion is inserted in the form of a prefix, except for TSX files, where the <code>as</code> expression is used.
</body>
</html>
PK          cq���  �  6   com/intellij/dupLocator/JSDuplicatesPresentation.class����   = y
      java/lang/Object <init> ()V	  	 
   )com/intellij/dupLocator/DuplicatesProfile EP_NAME 4Lcom/intellij/openapi/extensions/ExtensionPointName;  +com/intellij/dupLocator/JSDuplicatesProfile
      2com/intellij/openapi/extensions/ExtensionPointName findExtensionOrFail %(Ljava/lang/Class;)Ljava/lang/Object;  :com/intellij/dupLocator/resultUI/FileBasedCodeFragmentType
      )com/intellij/dupLocator/resultUI/CodeNode getVirtualFile (()Lcom/intellij/openapi/vfs/VirtualFile;
      
getProject (()Lcom/intellij/openapi/project/Project;
  "  # O(Lcom/intellij/openapi/vfs/VirtualFile;Lcom/intellij/openapi/project/Project;)V % 3com/intellij/dupLocator/resultUI/BaseDuplicatesView
 $ '  ( )(Lcom/intellij/openapi/project/Project;)V * 7com/intellij/dupLocator/DefaultDuplicatesSettingsEditor , .com/intellij/dupLocator/DefaultDuplocatorState
 ) .  / 3(Lcom/intellij/dupLocator/DefaultDuplocatorState;)V 1 0com/intellij/dupLocator/JSDuplicatesPresentation 3 .com/intellij/dupLocator/DuplicatesPresentation Code LineNumberTable LocalVariableTable this 2Lcom/intellij/dupLocator/JSDuplicatesPresentation; 
getProfile -()Lcom/intellij/dupLocator/DuplicatesProfile; RuntimeInvisibleAnnotations #Lorg/jetbrains/annotations/NotNull; RuntimeInvisibleTypeAnnotations getType `(Lcom/intellij/dupLocator/resultUI/CodeNode;)Lcom/intellij/dupLocator/resultUI/CodeFragmentType; node +Lcom/intellij/dupLocator/resultUI/CodeNode; 
Exceptions D 5com/intellij/dupLocator/resultUI/InvalidatedException $Lorg/jetbrains/annotations/Nullable; $RuntimeInvisibleParameterAnnotations isFixAbilityProvided ()Z isFixAvailable .(Lcom/intellij/dupLocator/resultUI/CodeNode;)Z 
createView Y(Lcom/intellij/openapi/project/Project;)Lcom/intellij/dupLocator/resultUI/DuplicatesView; project &Lcom/intellij/openapi/project/Project; createEditor ](Lcom/intellij/dupLocator/DuplocatorState;)Lcom/intellij/dupLocator/DuplocatorSettingsEditor; state )Lcom/intellij/dupLocator/DuplocatorState; 
SourceFile JSDuplicatesPresentation.java $$$reportNull$$$0 (I)V U V
 0 W *@NotNull method %s.%s must not return null Y >Argument for @NotNull parameter '%s' of %s.%s must not be null [ 1 @ M Q 9 > I K O java/lang/String f format 9(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String; h i
 g j java/lang/IllegalStateException l (Ljava/lang/String;)V  n
 m o "java/lang/IllegalArgumentException q
 r o [Ljava/lang/Object; t java/lang/RuntimeException v StackMapTable ! 0   2        4   /     *� �    5        6        7 8    9 :  4   J     � � � Y� � X�    x    S  5        6        7 8   ;     <   =      <    > ?  4   U     +� � X� Y+� +� � !�    x     5       6        7 8      @ A  B     C ;     E   =      E     <   F     <    G H  4   ,     �    5        6        7 8    I J  4   G     
+� � X�    x     5       6       
 7 8     
 @ A  =   	    <   F     <    K L  4   N     +� � X� $Y+� &�    x     5      % 6        7 8      M N  ;     <   =      <     <   F     <    O P  4   Q     +� � X� )Y+� +� -�    x     5      + 6        7 8      Q R  ;     <   =      <     <   F     <  
 U V  4  U    W�     #          #   (   (   (   (Z� \� �   !          !   %   %   %   %� � � �      $          $   ,   ,   4   <Y]S� Y^S� Y_S� Y`S� �     #          #   +   +   +   +YaS� Y]S� �     #          #   &   .   6   >� #YbS� YcS� YdS� YeS� � k�   !          !   ,   ,   ,   ,� mZ_� p� � rZ_� s� �    x   � $D ga gC g�    g� '   g u�    g u�    g u�    g u�    g u� #   g u�    g u�    g u� #   g u�    g u�    g u�    g u�    g u�    g ud gJ gJ w  S    TPK          ߯��  �  8   com/intellij/javascript/CreateRunConfigurationUtil.class����   = �
      java/lang/Object <init> ()V
  	 
   !com/intellij/execution/RunManager getInstance K(Lcom/intellij/openapi/project/Project;)Lcom/intellij/execution/RunManager;      $com/intellij/openapi/project/Project 
getBaseDir (()Lcom/intellij/openapi/vfs/VirtualFile;
      ;com/intellij/lang/javascript/buildTools/npm/PackageJsonUtil findChildPackageJsonFile N(Lcom/intellij/openapi/vfs/VirtualFile;)Lcom/intellij/openapi/vfs/VirtualFile;  Icom/intellij/lang/javascript/buildTools/npm/rc/NpmRunConfigurationBuilder
     )(Lcom/intellij/openapi/project/Project;)V      ! makeConcatWithConstants &(Ljava/lang/String;)Ljava/lang/String;
 # $ % & ' $com/intellij/openapi/vfs/VirtualFile getPath ()Ljava/lang/String; ) 2com/intellij/javascript/CreateRunConfigurationUtil + 
run-script - . / 0 1 java/util/Map of 5(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;
  3 4 5 createRunConf