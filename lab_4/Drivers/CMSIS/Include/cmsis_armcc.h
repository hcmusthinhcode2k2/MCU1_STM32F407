26144942 L9.80566451,7.72464123 L10.3057072,8.34015177 L10.3057072,15.7201519 L6.80540831,15.7201519 L6.80540831,8.33917044 L7.30545101,7.72015188 L7.30545101,3.24317702 L6.81758586,3.57940481 L6.45607428,3.72015188 L3.80515211,3.72015188 L3.80515211,0.720151883 L6.31214109,0.720151883 L6.78715064,0.946064007 C6.87649899,0.809997651 7.03045713,0.720151883 7.20539987,0.720151883 L11.2057842,0.720151883 L11.5888765,0.885512934 Z" transform="rotate(-45 8.92 8.22)"/>
    <path fill="#6E6E6E" d="M2,10 L1,10 L1,11 L2,11 L2,15 L3,15 L3,11 L4,11 L4,10 L3,10 L2,10 Z M0,9 L9,9 L9,16 L0,16 L0,9 Z M5,10 L5,11 L8,11 L8,10 L5,10 Z M5,11 L5,12 L6,12 L6,11 L5,11 Z M6,12 L6,13 L7,13 L7,12 L6,12 Z M7,13 L7,14 L8,14 L8,13 L7,13 Z M5,14 L5,15 L8,15 L8,14 L5,14 Z"/>
  </g>
</svg>
PK          ���    +   icons/typescript/CompileTypeScript_dark.svg<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 16 16">
  <g fill="none" fill-rule="evenodd">
    <path fill="#499C54" d="M11.5888765,0.885512934 L11.588193,0.882969544 L14.0351517,3.16277884 L13.4644242,3.72015188 L12.2713304,3.29429369 L9.80566451,3.26144942 L9.80566451,7.72464123 L10.3057072,8.34015177 L10.3057072,15.7201519 L6.80540831,15.7201519 L6.80540831,8.33917044 L7.30545101,7.72015188 L7.30545101,3.24317702 L6.81758586,3.57940481 L6.45607428,3.72015188 L3.80515211,3.72015188 L3.80515211,0.720151883 L6.31214109,0.720151883 L6.78715064,0.946064007 C6.87649899,0.809997651 7.03045713,0.720151883 7.20539987,0.720151883 L11.2057842,0.720151883 L11.5888765,0.885512934 Z" transform="rotate(-45 8.92 8.22)"/>
    <path fill="#AFB1B3" d="M2,10 L1,10 L1,11 L2,11 L2,15 L3,15 L3,11 L4,11 L4,10 L3,10 L2,10 Z M0,9 L9,9 L9,16 L0,16 L0,9 Z M5,10 L5,11 L8,11 L8,10 L5,10 Z M5,11 L5,12 L6,12 L6,11 L5,11 Z M6,12 L6,13 L7,13 L7,12 L6,12 Z M7,13 L7,14 L8,14 L8,13 L7,13 Z M5,14 L5,15 L8,15 L8,14 L5,14 Z"/>
  </g>
</svg>
PK          ��q    -   icons/typescript/TypeScript_Compiler_dark.svg<svg xmlns="http://www.w3.org/2000/svg" width="13" height="13" viewBox="0 0 13 13">
  <path fill="#AFB1B3" fill-rule="evenodd" d="M0,1 L13,1 L13,11 L0,11 L0,1 Z M2.8325344,9.02000027 L4.15746537,9.02000027 L4.15746537,4.22120005 L6,4.21999979 L6,3 L1,3 L1,4.22120005 L2.8325344,4.22120005 L2.8325344,9.02000027 Z M9.36240035,9 C10.6610004,9 11.5468004,8.41519997 11.5468004,7.20259992 C11.5468004,6.15339987 10.8294983,5.39659984 9.63760036,5.39659984 C8.57568484,5.39659984 8.33900031,5.00099982 8.33900031,4.5881998 C8.33900031,4.29579979 8.60560032,4.0999999 9.11300034,4.0999999 C9.45126702,4.0999999 10.1469335,4.0999999 11.1999998,4.0999999 L11.1999998,3 C10.4278669,3 9.74940037,3 9.16460034,3 C7.93480029,3 7,3.62059997 7,4.73000002 C7,5.92540007 7.78113007,6.56619989 9.01840034,6.56619989 C10.0626526,6.56619989 10.2310004,6.99619991 10.2310004,7.34879993 C10.2310004,7.70139994 9.90420038,7.8499999 9.36240035,7.8499999 C8.90373366,7.8499999 8.11626688,7.8499999 7,7.8499999 L7,9 C7.96720021,9 8.75466699,9 9.36240035,9 Z"/>
</svg>
PK          .%XVp   p   <   inlayProviders/Parameters/js.only.show.names.for.all.args.js/**
 * @param {object} param Object to add descriptors to
 */
function test(param) {}

let data = {}

test(data)PK          �'踥   �   9   inlayProviders/Parameters/js.only.show.names.for.pipes.jsconst name = "WebStorm"

const greet = name => `Hello, ${name}`

const capitalize = str => str.toUpperCase()
const loudGreeting = name
    |> greet
    |> capitalizePK          G&�u   u   :   inlayProviders/Parameters/js.only.show.names.for.tagged.jslet person = 'WebStorm';

function myTag(strings, person, age) {
}

let output = myTag`That ${ person } is ${ 11 }.`;PK          �W��B   B   C   inlayProviders/Parameters/js.param.hints.show.names.for.all.args.tsfunction test(param: number[]) {}

let data = [1, 2, 3]
test(data)PK          gE��   �   A   inlayProviders/Parameters/js.param.hints.show.names.for.tagged.tslet person = 'WebStorm';

function myTag(strings, person: string, age: number) {}

let output = myTag`That ${person} is ${11}.`;PK          G��$    (   inlayProviders/js.chain.hints/preview.jsvar z = [1, 2, 3];

z
    .map(function(e) { return String(e) })/*/*<# string[] #>*/*/
    .map(function(e) { return Number(e) })/*/*<# number[] #>*/*/
    .map(function(e) { return String(e) })/*/*<# string[] #>*/*/
    .map(function(e) { return Number(e) });PK          Y�Po   o   0   inlayProviders/js.type.hints/function.returns.jsfunction functionA()/*<# : string #>*/ {
  return "a"
}

const functionB = ()/*<# : number[] #>*/ => [1, 2, 3];PK          �S+e   e   6   inlayProviders/js.type.hints/non.paren.single.param.js/**
 * @param {function(number): string} p
 */
function test(p) {
}

test(p/*<# : number #>*/ => "a")PK          ;f��y   y   4   inlayProviders/js.type.hints/parameters.in.parens.js/**
 * @param {function(number): string} p
 */
function test(p) {
}

test((p/*<# : number #>*/)/*<# : string #>*/ => "a")PK          3���   �   '   inlayProviders/js.type.hints/preview.jsvar z/*/*<# : number #>*/*/ = 3;
function test()/*/*<# : string #>*/*/ { return "a" }
/**
* @param {function(number): string} p
*/
function x(p) {}
x(p/*/*<# : number #>*/*/ => "a")
x((p/*/*<# : number #>*/*/)/*/*<# : string #>*/*/ => "a")PK          �<e�   �   4   inlayProviders/js.type.hints/variables.and.fields.jsconst a/*<# : number #>*/ = 22;
let b/*<# : string #>*/ = 'Hello World';
var z/*<# : number[] #>*/ = [1, 2, 3];

class TestClass {
  x/*<# : number #>*/ = 5;
}PK          �ڜ�   �   (   inlayProviders/ts.chain.hints/preview.tsvar z = [1, 2, 3];

z
    .map(function(e) { return String(e) })/*<# string[] #>*/
    .map(function(e) { return Number(e) })/*<# number[] #>*/
    .map(function(e) { return String(e) })/*<# string[] #>*/
    .map(function(e) { return Number(e) });PK          �1'�M   M   '   inlayProviders/ts.enum.hints/preview.tsenum Item {
 First/*/*<#  = 0 #>*/*/,
 Second = 5,
 Third/*/*<#  = 6 #>*/*/
}PK          �(�1�   �   0   inlayProviders/ts.type.hints/function.returns.tsclass TestClass {
    m(p: (t: string) => void)/*<# : number #>*/ {
        return 5;
    }
}

function functionA()/*<# : string #>*/ {
    return "a"
}

const functionB = ()/*<# : [number, number, number] #>*/ => [1, 2, 3];PK          #_/��   �   6   inlayProviders/ts.type.hints/non.paren.single.param.tsclass TestClass {
    m(p: (t: string) => void)/*<# : number #>*/ {
        return 5;
    }
}

new TestClass().m(p/*<# : string #>*/ => {})PK          ���>�   �   4   inlayProviders/ts.type.hints/parameters.in.parens.tsclass TestClass {
    m(p: (t: string) => void)/*<# : number #>*/ {
        return 5;
    }
}

new TestClass().m((p/*<# : string #>*/)/*<# : void #>*/ => {})PK          F5�!  !  '   inlayProviders/ts.type.hints/preview.tsvar z/*<# : number #>*/ = 3;

function test()/*<# : string #>*/ { return "a" }

class Clazz {
  x/*<# : number #>*/ = 5;
  m(p: (t: string) => void)/*<# : number #>*/ {
    return 5;
  }
}

new Clazz().m(p/*<# : string #>*/ => {})
new Clazz().m((p/*<# : string #>*/)/*<# : void #>*/ => {})PK          �<e�   �   4   inlayProviders/ts.type.hints/variables.and.fields.tsconst a/*<# : number #>*/ = 22;
let b/*<# : string #>*/ = 'Hello World';
var z/*<# : number[] #>*/ = [1, 2, 3];

class TestClass {
  x/*<# : number #>*/ = 5;
}PK          �V��!   !   D   intentionDescriptions/ES6AddExportDefaultIntention/after.js.templateexport default function foo() {
}PK          ��I\      E   intentionDescriptions/ES6AddExportDefaultIntention/before.js.template<spot>function foo()</spot> {
}PK          4�K�x   x   C   intentionDescriptions/ES6AddExportDefaultIntention/description.html<html>
<body>
Adds an <code>export default</code> statement to a top-level class, variable, or function.
</body>
</html>PK          <4      E   intentionDescriptions/ES6AddExportModifierIntention/after.js.templateexport function foo() {
}PK          ��I\      F   intentionDescriptions/ES6AddExportModifierIntention/before.js.template<spot>function foo()</spot> {
}PK          	M3�p   p   D   intentionDescriptions/ES6AddExportModifierIntention/description.html<html>
<body>
Adds an <code>export</code> statement to a top-level class, variable, or function.
</body>
</html>PK          ��f7&   &   @   intentionDescriptions/ES6ChangeImportIntention/after.js.templateimport {Foo} from './shorthandedPath' PK          r2��3   3   A   intentionDescriptions/ES6ChangeImportIntention/before.js.templateimport {Foo} from './shorthandedPath/originalFile' PK          zaB�   �   ?   intentionDescriptions/ES6ChangeImportIntention/description.html<html>
<body>
Suggests replacing the path in an <code>import "from"</code> statement with one of the available equivalent paths.
</body>
</html>PK          �pRM   M   E   intentionDescriptions/ES6ConvertMapToForOfIntention/after.js.templatelet results = [];
for (let item of items) {
  results.push(someFunc(item));
}PK          /�G=   =   F   intentionDescriptions/ES6ConvertMapToForOfIntention/before.js.templatelet results = <spot>items.map</spot>(item => someFunc(item));PK          ����   �   D   intentionDescriptions/ES6ConvertMapToForOfIntention/description.html<html>
<body>
Converts a call of the <code>map()</code> method of an array to a separate variable declaration with a <code>for..of</code> loop.
</body>
</html>PK          ��;$   $   P   intentionDescriptions/ES6InsertTemplateStringArgumentIntention/after.js.templatelet temp = `name ${<spot> </spot>}`;PK          �墿        Q   intentionDescriptions/ES6InsertTemplateStringArgumentIntention/before.js.templatelet temp = `name<spot> </spot>`;PK          0@�+�   �   O   intentionDescriptions/ES6InsertTemplateStringArgumentIntention/description.html<html>
<body>
Inserts a new template string argument into a template string, and positions the caret inside the new argument
</body>
</html>PK          1i      @   intentionDescriptions/ES6RemoveExportIntention/after.js.templatefunction foo() {
}PK          *�W'&   &   A   intentionDescriptions/ES6RemoveExportIntention/before.js.template<spot>export function foo()</spot> {
}PK          ��K   K   ?   intentionDescriptions/ES6RemoveExportIntention/description.html<html>
<body>
Makes an exported module member not exported.
</body>
</html>PK          X�9>   >   K   intentionDescriptions/JSAnonymousToNamedFunctionIntention/after.js.template$('#foo').fadeOut('fast', foo);

function foo() {
    bar();
}PK          r5��B   B   L   intentionDescriptions/JSAnonymousToNamedFunctionIntention/before.js.template$('#foo').fadeOut('fast', <spot>function() {
    bar();
}</spot>);PK          |�\   \   J   intentionDescriptions/JSAnonymousToNamedFunctionIntention/description.html<html>
<body>
Converts an anonymous function expression to a named function.
</body>
</html>PK          f�0'   '   K   intentionDescriptions/JSArrowFunctionToAnonymousIntention/after.js.templatefoo(function(param) {
  bar(param);
});PK          L���&   &   L   intentionDescriptions/JSArrowFunctionToAnonymousIntention/before.js.templatefoo(<spot>param => bar(param)</spot>);PK           �2�  �  J   intentionDescriptions/JSArrowFunctionToAnonymousIntention/description.html<html>
<body>
Converts an arrow function to an anonymous function expression.
<br/><br/>
Note that this conversion is not suggested for arrow functions that use <code>this</code> because this value can change for anonymous functions.<br/>
Please refer to <a href="https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Functions/Arrow_functions#Lexical_this">https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Functions/Arrow_functions#Lexical_this</a>.
</body>
</html>PK          ���=   =   B   intentionDescriptions/JSCallChainToPipeIntention/after.js.templatelet message = id |> getMessageById |> localize |> capitalize;PK          w�3'D   D   C   intentionDescriptions/JSCallChainToPipeIntention/before.js.templatelet message = capitalize(<spot>localize(getMessageById(id))</spot>);PK          ��{   {   A   intentionDescriptions/JSCallChainToPipeIntention/description.html<html>
<body>
Converts a call chain of functions with a single parameter to an equivalent pipe expression.
</body>
</html>
PK          ��j   j   J   intentionDescriptions/JSConvertIndexedToForEachIntention/after.js.templateconst items = ['item1', 'item2', 'item3'];
const copy = [];

items.forEach(item => {
  copy.push(item)
});PK          �eV\�   �   K   intentionDescriptions/JSConvertIndexedToForEachIntention/before.js.templateconst items = ['item1', 'item2', 'item3'];
const copy = [];

<spot>for (let i = 0; i < items.length; i++)</spot> {
  copy.push(items[i]);
}PK          E]��   �   I   intentionDescriptions/JSConvertIndexedToForEachIntention/description.html<html>
<body>
Converts an indexed <code>for</code> loop to a call of  the <code>forEach</code> method on an array.
</body>
</html>PK          ����   �   a   intentionDescriptions/JSConvertParametersToObjectAndIntroduceInterfaceIntention/after.ts.templateinterface <spot>PrintPointParameters</spot> {
  x: number;
  y: number;
}

function printPoint(<spot>{x, y}: PrintPointParameters</spot>) {
  console.log(x);
  console.log(y);
}

printPoint({x:1, y:2});PK          N9rq   q   b   intentionDescriptions/JSConvertParametersToObjectAndIntroduceInterfaceIntention/before.ts.templatefunction printPoint(<spot>x: number, y: number</spot>) {
  console.log(x);
  console.log(y);
}

printPoint(1, 2);PK          �}?G+  +  `   intentionDescriptions/JSConvertParametersToObjectAndIntroduceInterfaceIntention/description.html<html>
<body>
Converts the parameters of a function to a single object, creates an interface for that object, and replaces the arguments of all calls with the constructed object literal.
<br/><br/>
This intention is available only for languages that support types (TypeScript, Flow).
</body>
</html>PK          Gt�9{   {   L   intentionDescriptions/JSConvertParametersToObjectIntention/after.js.templatefunction printPoint(obj) {
  var x = obj.x;
  var y = obj.y;
  console.log(x);
  console.log(y);
}

printPoint({x:1, y:2});PK          d6�a   a   M   intentionDescriptions/JSConvertParametersToObjectIntention/before.js.templatefunction printPoint(<spot>x, y</spot>) {
  console.log(x);
  console.log(y);
}

printPoint(1, 2);PK          FGv�   �   K   intentionDescriptions/JSConvertParametersToObjectIntention/description.html<html>
<body>
Converts the parameters of a function to a single object and replaces the arguments in all calls of the function with the generated object literal.
</body>
</html>PK          N��I   I   C   intentionDescriptions/JSConvertToForEachIntention/after.js.templatevar a = [1,2,3]
a.forEach(function(element) {
  console.log(element);
});PK          w�nF   F   D   intentionDescriptions/JSConvertToForEachIntention/before.js.templatevar a = [1,2,3]
<spot>for (var i in a)</spot> {
  console.log(a[i]);
}PK          ��{   {   B   intentionDescriptions/JSConvertToForEachIntention/description.html<html>
<body>
Converts a <code>for-in</code> loop to a call of the <code>forEach</code> method on an array.
</body>
</html>PK          �
��   �   H   intentionDescriptions/JSCreateGetterAndSetterIntention/after.js.templateclass Validator {
    strict;

    set strict(value) {
        this.strict = value;
    }

    get strict() {
        return this.strict;
    }
}PK          Dq�e,   ,   I   intentionDescriptions/JSCreateGetterAndSetterIntention/before.js.templateclass Validator {
    <spot>strict;</spot>
}PK          �[*z�   �   G   intentionDescriptions/JSCreateGetterAndSetterIntention/description.html<html>
<body>
Creates a getter and a setter for a field. The field becomes private and is renamed according to the code style settings (by
default, a <code>_</code> prefix is added).
</body>
</html>PK          ��S+U   U   ?   intentionDescriptions/JSCreateGetterIntention/after.js.templateclass Validator {
    strict;

    get strict() {
        return this.strict;
    }
}PK          Dq�e,   ,   @   intentionDescriptions/JSCreateGetterIntention/before.js.templateclass Validator {
    <spot>strict;</spot>
}PK          ����   �   >   intentionDescriptions/JSCreateGetterIntention/description.html<html>
<body>
Creates a getter for a field. The field becomes private and is renamed according to the code style settings (by default, a <code>_</code>
prefix is added).
</body>
</html>PK          X7^�[   [   ?   intentionDescriptions/JSCreateSetterIntention/after.js.templateclass Validator {
    strict;

    set strict(value) {
        this.strict = value;
    }
}PK          Dq�e,   ,   @   intentionDescriptions/JSCreateSetterIntention/before.js.templateclass Validator {
    <spot>strict;</spot>
}PK          �m韹   �   >   intentionDescriptions/JSCreateSetterIntention/description.html<html>
<body>
Creates a setter for a field. The field becomes private and is renamed according to the code style settings (by default, a <code>_</code>
prefix is added).
</body>
</html>PK          Dw:&T   T   A   intentionDescriptions/JSCreateSubclassIntention/after.js.templateclass Person {
   name: string;
}

class <spot>PersonImpl</spot> extends Person {

}PK          '�66.   .   B   intentionDescriptions/JSCreateSubclassIntention/before.js.templateclass <spot>Person</spot> {
   name: string;
}PK          "��1W   W   @   intentionDescriptions/JSCreateSubclassIntention/description.html<html>
<body>
Creates a new class inherited from the type at the caret.
</body>
</html>PK          r@O�r   r   W   intentionDescriptions/JSDestructuringToReferencesAndIndexersIntention/after.js.templatelet pattern = {name: ["Ivan", "Ivanov"]};
document.write(`We welcome you, ${pattern.name[0]} ${pattern.name[1]}!`)PK          ��+�x   x   X   intentionDescriptions/JSDestructuringToReferencesAndIndexersIntention/before.js.templatelet <spot>{name: [first, last]} = {name: ["Ivan", "Ivanov"]}</spot>;
document.write(`We welcome you, ${first} ${last}!`)PK          ��|<    V   intentionDescriptions/JSDestructuringToReferencesAndIndexersIntention/description.html<html>
<body>
Converts a destructuring pattern to a series of reference or indexer expressions on the access side.
New variables will be introduced for every destructuring item with possible side effects in the following cases:
<ul><li>The pattern has default values</li>
<li>There are write usages</li>
<li>The expression on the right side had side effects</li>
<li>The expression on the right side is not a reference</li></ul>
This operation is inverse to "Propagate to destructuring declaration".
</body>
</html>PK          ��|2P   P   N   intentionDescriptions/JSEditObjectLiteralPropertiesIntention/after.js.template{prop1: <spot>""</spot>, prop2: {var1: <spot>""</spot>}, prop3: <spot>[]</spot>}PK          C���)   )   O   intentionDescriptions/JSEditObjectLiteralPropertiesIntention/before.js.template{prop1: "", prop2: {var1: ""}, prop3: []}PK          ��p   p   M   intentionDescriptions/JSEditObjectLiteralPropertiesIntention/description.html<html>
<body>
Invokes a live template for editing the values of properties in an object literal.
</body>
</html>PK          �c��J   J   H   intentionDescriptions/JSExpandNullPropagationIntention/after.js.templatelet val = foo && foo.bar && foo.bar.baz != null ? foo.bar.baz : 'default';PK          ��`�2   2   I   intentionDescriptions/JSExpandNullPropagationIntention/before.js.templatelet val = <spot>foo?.bar?.baz ?? 'default'</spot>;PK          �u2qs   s   G   intentionDescriptions/JSExpandNullPropagationIntention/description.html<html>
<body>
Expands an optional chaining or a nullish coalescing expression to an explicit check.
</body>
</html>PK          �A�[   [   B   intentionDescriptions/JSExplicifyFieldsIntention/after.js.templateclass Point {
   x;
   y;
   constructor(x, y) {
      this.x = x;
      this.y = y;
   }
}PK          ���kv   v   C   intentionDescriptions/JSExplicifyFieldsIntention/before.js.templateclass Point {
   <spot>constructor(x, y)</spot> {
      <spot>this.x</spot> = x;
      <spot>this.y</spot> = y;
   }
}PK          gi��   �   A   intentionDescriptions/JSExplicifyFieldsIntention/description.html<html>
<body>
Introduces a new explicit class field for a class field declared via a <code>this.xxx = ...</code> initialization in the constructor.
</body>
</html>PK          7�1W   W   E   intentionDescriptions/JSFunctionToES6ClassIntention/after.js.templateclass Clazz {
  constructor(par) {
    this._par = par;
  }

  foo() {
    bar();
  }
}PK          ��g   g   F   intentionDescriptions/JSFunctionToES6ClassIntention/before.js.templatefunction <spot>Clazz</spot>(par) {
  this._par = par;
}
Clazz.prototype.foo = function() {
  bar();
};
PK          u
bH^   ^   D   intentionDescriptions/JSFunctionToES6ClassIntention/description.html<html>
<body>
Converts a function and its member declarations to an ES6 class.
</body>
</html>PK          �?XV   V   O   intentionDescriptions/JSGenerateDestructuringPatternIntention/after.js.templatelet <spot>{prop: {name, category}}</spot> = {prop: {name: "item", category: "stock"}};PK          |���F   F   P   intentionDescriptions/JSGenerateDestructuringPatternIntention/before.js.templatelet <spot>details</spot> = {prop: {name: "item", category: "stock"}};
PK          ���B�   �   N   intentionDescriptions/JSGenerateDestructuringPatternIntention/description.html<html>
<body>
Converts a variable that has an object or an array initializer to a destructuring object or array.
The usages of the variable are updated accordingly.
</body>
</html>PK          '�ɧ   �   J   intentionDescriptions/JSIndexerToPropertyAccessIntention/after.js.templatefunction call(person) {
    if (person<spot>.formal</spot>) {
      performCall(`Mr ${person.lastName}`);
    }
    else {
      performCall(person.firstName);
    }
}PK          ҧ��   �   K   intentionDescriptions/JSIndexerToPropertyAccessIntention/before.js.templatefunction call(person) {
    if (person<spot>["formal"]</spot>) {
      performCall(`Mr ${person.lastName}`);
    }
    else {
      performCall(person.firstName);
    }
}PK          ?�.d   d   I   intentionDescriptions/JSIndexerToPropertyAccessIntention/description.html<html>
<body>
Converts an indexed access expression to a property access expression.
</body>
</html>PK          �pVI   I   B   intentionDescriptions/JSInferParametersIntention/after.js.templatefunction callMe<T>(x: number, y: T) {
  
}

callMe(1, "a");
callMe(1, 2);PK          �6|�F   F   C   intentionDescriptions/JSInferParametersIntention/before.js.template<spot>function callMe(x, y)</spot> {

}

callMe(1, "a");
callMe(1, 2);PK          NJp�   �   A   intentionDescriptions/JSInferParametersIntention/description.html<html>
<body>
Infers a parameter type annotation or a JSDoc type from function calls and adds a generic parameter if necessary.
</body>
</html>PK          �A�[   [   C   intentionDescriptions/JSInitializeFieldsIntention/after.js.templateclass Point {
   x;
   y;
   constructor(x, y) {
      this.x = x;
      this.y = y;
   }
}PK          7�j�4   4   D   intentionDescriptions/JSInitializeFieldsIntention/before.js.templateclass Point {
   <spot>constructor(x, y)</spot> {}
}PK          =��   �   B   intentionDescriptions/JSInitializeFieldsIntention/description.html<html>
<body>
Introduces a new field for an unused constructor parameter and initializes the new field in the constructor.
</body>
</html>PK          ����   �   S   intentionDescriptions/JSIntroduceDestructuringVariablesIntention/after.jsx.templateclass Q {
    props;

    render() {
        <spot>let {onChange, value} = this.props;</spot>
        return (
            <Input value={<spot>value</spot>} onChange={<spot>onChange</spot>}/>
        );
    }
}PK          em�   �   T   intentionDescriptions/JSIntroduceDestructuringVariablesIntention/before.jsx.templateclass Q {
    props;

    render() {
        return (
            <Input value={<spot>this.props.value</spot>} onChange={<spot>this.props.onChange</spot>}/>
        );
    }
}PK          ���3V   V   Q   intentionDescriptions/JSIntroduceDestructuringVariablesIntention/description.html<html>
<body>
Invokes the Extract Destructuring Variables refactoring.
</body>
</html>PK          �]��G   G   O   intentionDescriptions/JSIntroduceParameterPropertiesIntention/after.ts.templateclass Point {
   constructor(private x: number, private y: number) {}
}PK           c�MD   D   P   intentionDescriptions/JSIntroduceParameterPropertiesIntention/before.ts.templateclass Point {
   <spot>constructor(x: number, y: number)</spot> {}
}PK          c�,Dd   d   N   intentionDescriptions/JSIntroduceParameterPropertiesIntention/description.html<html>
<body>
Converts an unused parameter of a constructor to a parameter property.
</body>
</html>PK          B|^,=   =   D   intentionDescriptions/JSIntroduceVariableIntention/after.js.template<spot>let anchorElement</spot> = document.createElement("a");PK          ��U)   )   E   intentionDescriptions/JSIntroduceVariableIntention/before.js.templatedocument.createElement("a");<spot></spot>PK          �?1�l   l   C   intentionDescriptions/JSIntroduceVariableIntention/description.html<html>
<body>
Creates a local variable for an expression with currently unused result value.
</body>
</html>PK          �́�M   M   :   intentionDescriptions/JSIterateIntention/after.js.templatefunction traverse(items: string[]) {
    for (const item of items) {

    }
}PK          �
s<   <   ;   intentionDescriptions/JSIterateIntention/before.js.templatefunction traverse(items: string[]) {
   <spot>items</spot>
}PK          !�=�   �   9   intentionDescriptions/JSIterateIntention/description.html<html>
<body>
Wraps an expression of an iterable type in a <code>for-of</code> loop.
An iterable type is either an array or a type with a <code>Symbol.iterator</code> property.
</body>
</html>PK          �|`4   4   I   intentionDescriptions/JSJoinVariableStatementsIntention/after.js.templatefunction test() {
  <spot>var a = 5, b = 7;</spot>
}PK          		��:   :   J   intentionDescriptions/JSJoinVariableStatementsIntention/before.js.templatefunction test() {
  <spot>var a = 5;
  var b = 7;</spot>
}PK          ���{�   �   H   intentionDescriptions/JSJoinVariableStatementsIntention/description.html<html>
<body>
Joins a series of subsequent variable declaration statements of the same kind into a single statement.
For example, <code>var a; var b;</code> becomes <code>var a, b;</code>
<!-- tooltip end -->
</body>
</html>PK          E9O�}   }   D   intentionDescriptions/JSMoveElementToFileIntention/after.js.template// base.js

export class Base {

}

// <spot>derived.js</spot>

import {Base} from "./base";

class Derived extends Base {

}PK          `�P   P   E   intentionDescriptions/JSMoveElementToFileIntention/before.js.template// base.js
export class Base {

 }

class <spot>Derived</spot> extends Base {

}PK          �ȇ�p  p  C   intentionDescriptions/JSMoveElementToFileIntention/description.html<html>
<body>
Moves an ECMAScript class, or a TypeScript class, interface, or enum into a new or an existing file with the name that matches the type name.<br/><br/>
File name matching can be framework-specific. For example, for Angular components, the corresponding <a href="https://angular.io/guide/styleguide#style-02-03">style guide</a> is applied.
</body>
</html>PK          ���3   3   L   intentionDescriptions/JSNamedToFunctionExpressionIntention/after.js.templateconst test = (name) => console.log('hello ' + name)PK          �4�E   E   M   intentionDescriptions/JSNamedToFunctionExpressionIntention/before.js.template<spot>function test(name)</spot> {
    console.log('hello ' + name)
}PK          �]#�|   |   K   intentionDescriptions/JSNamedToFunctionExpressionIntention/description.html<html>
<body>
Converts a named function to a variable that holds an arrow function or a function expression.
</body>
</html>PK          W��3   3 