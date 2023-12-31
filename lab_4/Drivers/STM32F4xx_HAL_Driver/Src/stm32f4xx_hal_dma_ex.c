ules are used for communication between extension modules.
They provide a way for an extension module to export a C interface
to other extension modules, so that extension modules can use the
Python import mechanism to link to one another.
                cell([contents])
--

Create a new cell object.

  contents
    the contents of the cell. If not specified, the cell will be empty,
    and 
 further attempts to access its cell_contents attribute will
    raise a ValueError.                method(function, instance, /)
--

Create a bound instance method object.        instancemethod(function, /)
--

Bind a function to a class.     __reduce__($self, /)
--

       replace($self, /, *, co_argcount=-1, co_posonlyargcount=-1,
        co_kwonlyargcount=-1, co_nlocals=-1, co_stacksize=-1,
        co_flags=-1, co_firstlineno=-1, co_code=None, co_consts=None,
        co_names=None, co_varnames=None, co_freevars=None,
        co_cellvars=None, co_filename=None, co_name=None,
        co_qualname=None, co_linetable=None, co_exceptiontable=None)
--

Return a copy of the code object with new values for the specified fields.        code(argcount, posonlyargcount, kwonlyargcount, nlocals, stacksize,
     flags, codestring, constants, names, varnames, filename, name,
     qualname, firstlineno, linetable, exceptiontable, freevars=(),
     cellvars=(), /)
--

Create a code object.  Not for the faint of heart.         _varname_from_oparg($self, /, oparg)
--

(internal-only) Return the local variable name for the given oparg.

WARNING: this method is for internal use only and may change or go away.          Ps:   `s:   xs:   s:    s:   °s:   Às:   Ðs:   Øs:   ès:   øs:   t:   t:   (t:   8t:   @t:   Pt:   `t:                   conjugate($self, /)
--

Return the complex conjugate of its argument. (3-4j).conjugate() == 3+4j.               __complex__($self, /)
--

Convert this value to exact type complex.           ð?                __format__($self, format_spec, /)
--

Convert to a string according to format_spec.             complex(real=0, imag=0)
--

Create a complex number from a real part and an optional imaginary part.

This is equivalent to (real + imag*1j) where imag defaults to 0.  __getnewargs__($self, /)
--

           Descriptor to obtain a copy of the property with a different deleter.           property(fget=None, fset=None, fdel=None, doc=None)
--

Property attribute.

  fget
    function to be used for getting an attribute value
  fset
    function to be used for setting an attribute value
  fdel
    function to be used for del'ing an attribute
  doc
    docstring

Typical use is to define a managed attribute x:

class C(object):
    def getx(self): return self._x
    def setx(self, value): self._x = value
    def delx(self): del self._x
    x = property(getx, setx, delx, "I'm the 'x' property.")

Decorators make defining new properties or modifying existing ones easy:

class C(object):
    @property
    def x(self):
        "I am the 'x' property."
        return self._x
    @x.setter
    def x(self, value):
        self._x = value
    @x.deleter
    def x(self):
        del self._x          Descriptor to obtain a copy of the property with a different setter.            Descriptor to obtain a copy of the property with a different getter.    Return a reverse iterator over the dict keys.   x.__getitem__(y) <==> x[y]      D.__sizeof__() -> size of D in memory, in bytes         Return True if the view and the given iterable have a null intersection.        D.clear() -> None.  Remove all items from D.    Return a reverse iterator over the dict items.  dict() -> new empty dictionary
dict(mapping) -> new dictionary initialized from a mapping object's
    (key, value) pairs
dict(iterable) -> new dictionary initialized as if via:
    d = {}
    for k, v in iterable:
        d[k] = v
dict(**kwargs) -> new dictionary initialized with the name=value pairs
    in the keyword argument list.  For example:  dict(one=1, two=2)      D.copy() -> a shallow copy of D D.items() -> a set-like object providing a view on D's items            __contains__($self, key, /)
--

True if the dictionary has the specified key, else False.       pop($self, key, default=<unrepresentable>, /)
--

D.pop(k[,d]) -> v, remove specified key and return the corresponding value.

If the key is not found, return the default if given; otherwise,
raise a KeyError.               popitem($self, /)
--

Remove and return a (key, value) pair as a 2-tuple.

Pairs are returned in LIFO (last-in, first-out) order.
Raises KeyError if the dict is empty.         setdefault($self, key, default=None, /)
--

Insert key with a value of default if key is not in the dictionary.

Return the value for key if key is in the dictionary, else default.    D.keys() -> a set-like object providing a view on D's keys              get($self, key, default=None, /)
--

Return the value for key if key is in the dictionary, else default.        Return a reverse iterator over the dict values. D.update([E, ]**F) -> None.  Update D from dict/iterable E and F.
If E is present and has a .keys() method, then does:  for k in E: D[k] = E[k]
If E is present and lacks a .keys() method, then does:  for k, v in E: D[k] = v
In either case, this is followed by: for k in F:  D[k] = F[k]   fromkeys($type, iterable, value=None, /)
--

Create a new dictionary with keys from iterable and values set to value.           __reversed__($self, /)
--

Return a reverse iterator over the dict keys.        reversed(sequence, /)
--

Return a reverse iterator over the values of the given sequence.      enumerate(iterable, start=0)
--

Return an enumerate object.

  iterable
    an object supporting iteration

The enumerate object yields pairs containing a count (from start, which
defaults to zero) and a value yielded by the iterable argument.

enumerate is useful for obtaining an indexed list:
    (0, seq[0]), (1, seq[1]), (2, seq[2]), ...         Exception.with_traceback(tb) --
    set self.__traceback__ to tb and return self.       Exception.add_note(note) --
    add a note to the exception             __round__($self, ndigits=None, /)
--

Return the Integral closest to x, rounding half toward even.

When an argument is passed, work like built-in round(x, ndigits).           __format__($self, format_spec, /)
--

Formats the float according to format_spec.               __getformat__($type, typestr, /)
--

You probably don't want to use this function.

  typestr
    Must be 'double' or 'float'.

It exists mainly to be used in Python's test suite.

This function returns whichever of 'unknown', 'IEEE, big-endian' or 'IEEE,
little-endian' best describes the format of floating point numbers used by the
C type named by typestr.         conjugate($self, /)
--

Return self, the complex conjugate of any float.        __ceil__($self, /)
--

Return the ceiling as an Integral.       as_integer_ratio($self, /)
--

Return integer ratio.

Return a pair of integers, whose ratio is exactly equal to the original float
and with a positive denominator.

Raise OverflowError on infinities and a ValueError on NaNs.

>>> (10.0).as_integer_ratio()
(10, 1)
>>> (0.0).as_integer_ratio()
(0, 1)
>>> (-.25).as_integer_ratio()
(-1, 4)              sys.float_info

A named tuple holding information about the float type. It contains low level
information about the precision and internal representation. Please study
your system's :file:`float.h` for more information.     float(x=0, /)
--

Convert a string or number to a floating point number, if possible.           fromhex($type, string, /)
--

Create a floating-point number from a hexadecimal string.

>>> float.fromhex('0x1.ffffp10')
2047.984375
>>> float.fromhex('-0x1p-1074')
-5e-324   __getnewargs__($self, /)
--

   hex($self, /)
--

Return a hexadecimal representation of a floating-point number.

>>> (-0.1).hex()
'-0x1.999999999999ap-4'
>>> 3.14159.hex()
'0x1.921f9f01b866ep+1'            is_integer($self, /)
--

Return True if the float is an integer.        __floor__($self, /)
--

Return the floor as an Integral.                __trunc__($self, /)
--

Return the Integral closest to x between 0 and x.       F.__sizeof__() -> size of F in memory, in bytes staticmethod(function) -> method

Convert a function to be a static method.

A static method does not receive an implicit first argument.
To declare a static method, use this idiom:

     class C:
         @staticmethod
         def f(arg1, arg2, ...):
             ...

It can be called either on the class (e.g. C.f()) or on an instance
(e.g. C().f()). Both the class and the instance are ignored, and
neither is passed implicitly as the first argument to the method.

Static methods in Python are similar to those found in Java or C++.
For a more advanced concept, see the classmethod builtin.            function(code, globals, name=None, argdefs=None, closure=None)
--

Create a function object.

  code
    a code object
  globals
    the globals dictionary
  name
    a string that overrides the name from the code object
  argdefs
    a tuple that specifies the default argument values
  closure
    a tuple that supplies the bindings for free variables               classmethod(function) -> method

Convert a function to be a class method.

A class method receives the class as implicit first argument,
just like an instance method receives the instance.
To declare a class method, use this idiom:

  class C:
      @classmethod
      def f(cls, arg1, arg2, ...):
          ...

It can be called either on the class (e.g. C.f()) or on an instance
(e.g. C().f()).  The instance is ignored except for its class.
If a class method is called for a derived class, the derived class
object is passed as the implied first argument.

Class methods are different than C++ or Java static methods.
If you want those, see the staticmethod builtin.   Represent a PEP 585 generic type

E.g. for t = list[int], t.__origin__ is list and t.__args__ is (int,).        send(arg) -> send 'arg' into generator,
return next yielded value or raise StopIteration.       throw(value)
throw(type[,value[,traceback]])

Raise exception in coroutine, return next iterated value or raise
StopIteration.  throw(value)
throw(type[,value[,tb]])

Raise exception in generator, return next yielded value or raise
StopIteration.          send(arg) -> send 'arg' into coroutine,
return next iterated value or raise StopIteration.      A interpreter ID identifies a interpreter and may be used as an int.            send(arg) -> send 'arg' into the wrapped it