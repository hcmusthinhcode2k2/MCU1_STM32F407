cpp_quote("/**")
cpp_quote(" * This file is part of the mingw-w64 runtime package.")
cpp_quote(" * No warranty is given; refer to the file DISCLAIMER within this package.")
cpp_quote(" */")
cpp_quote("")
cpp_quote("#include <winapifamily.h>")
cpp_quote("")
cpp_quote("#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)")
cpp_quote("")
cpp_quote("#include <_mingw_unicode.h>")
cpp_quote("")

import "objidl.idl";
import "oleidl.idl";
import "oaidl.idl";
import "docobj.idl";
import "shtypes.idl";
import "servprov.idl";
import "comcat.idl";
import "propidl.idl";
import "prsht.idl";
impo