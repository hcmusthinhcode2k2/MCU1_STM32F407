is,riid,ppvObject)
#define HTMLButtonElementEvents2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLButtonElementEvents2_Release(This) (This)->lpVtbl->Release(This)
#define HTMLButtonElementEvents2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLButtonElementEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLButtonElementEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLButtonElementEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLButtonElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLButtonElementEvents_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLButtonElementEvents;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLButtonElementEvents : public IDispatch {
  };
#else
  typedef struct HTMLButtonElementEventsVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLButtonElementEvents *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLButtonElementEvents *This);
      ULONG (WINAPI *Release)(HTMLButtonElementEvents *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLButtonElementEvents *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLButtonElementEvents *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLButtonElementEvents *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLButtonElementEvents *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLButtonElementEventsVtbl;
  struct HTMLButtonElementEvents {
    CONST_VTBL struct HTMLButtonElementEventsVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLButtonElementEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLButtonElementEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLButtonElementEvents_Release(This) (This)->lpVtbl->Release(This)
#define HTMLButtonElementEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLButtonElementEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLButtonElementEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLButtonElementEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputTextElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputTextElementEvents2_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputTextElementEvents2;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputTextElementEvents2 : public IDispatch {
  };
#else
  typedef struct HTMLInputTextElementEvents2Vtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputTextElementEvents2 *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputTextElementEvents2 *This);
      ULONG (WINAPI *Release)(HTMLInputTextElementEvents2 *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputTextElementEvents2 *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputTextElementEvents2 *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputTextElementEvents2 *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputTextElementEvents2 *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputTextElementEvents2Vtbl;
  struct HTMLInputTextElementEvents2 {
    CONST_VTBL struct HTMLInputTextElementEvents2Vtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputTextElementEvents2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputTextElementEvents2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputTextElementEvents2_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputTextElementEvents2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputTextElementEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputTextElementEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputTextElementEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLOptionButtonElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLOptionButtonElementEvents2_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLOptionButtonElementEvents2;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLOptionButtonElementEvents2 : public IDispatch {
  };
#else
  typedef struct HTMLOptionButtonElementEvents2Vtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLOptionButtonElementEvents2 *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLOptionButtonElementEvents2 *This);
      ULONG (WINAPI *Release)(HTMLOptionButtonElementEvents2 *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLOptionButtonElementEvents2 *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLOptionButtonElementEvents2 *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLOptionButtonElementEvents2 *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLOptionButtonElementEvents2 *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLOptionButtonElementEvents2Vtbl;
  struct HTMLOptionButtonElementEvents2 {
    CONST_VTBL struct HTMLOptionButtonElementEvents2Vtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLOptionButtonElementEvents2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLOptionButtonElementEvents2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLOptionButtonElementEvents2_Release(This) (This)->lpVtbl->Release(This)
#define HTMLOptionButtonElementEvents2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLOptionButtonElementEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLOptionButtonElementEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLOptionButtonElementEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputFileElementEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputFileElementEvents2_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputFileElementEvents2;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputFileElementEvents2 : public IDispatch {
  };
#else
  typedef struct HTMLInputFileElementEvents2Vtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputFileElementEvents2 *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputFileElementEvents2 *This);
      ULONG (WINAPI *Release)(HTMLInputFileElementEvents2 *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputFileElementEvents2 *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputFileElementEvents2 *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputFileElementEvents2 *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputFileElementEvents2 *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputFileElementEvents2Vtbl;
  struct HTMLInputFileElementEvents2 {
    CONST_VTBL struct HTMLInputFileElementEvents2Vtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputFileElementEvents2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputFileElementEvents2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputFileElementEvents2_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputFileElementEvents2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputFileElementEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputFileElementEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputFileElementEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputImageEvents2_DISPINTERFACE_DEFINED__
#define __HTMLInputImageEvents2_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputImageEvents2;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputImageEvents2 : public IDispatch {
  };
#else
  typedef struct HTMLInputImageEvents2Vtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputImageEvents2 *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputImageEvents2 *This);
      ULONG (WINAPI *Release)(HTMLInputImageEvents2 *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputImageEvents2 *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputImageEvents2 *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputImageEvents2 *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputImageEvents2 *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputImageEvents2Vtbl;
  struct HTMLInputImageEvents2 {
    CONST_VTBL struct HTMLInputImageEvents2Vtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputImageEvents2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputImageEvents2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputImageEvents2_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputImageEvents2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputImageEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputImageEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputImageEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputTextElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputTextElementEvents_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputTextElementEvents;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputTextElementEvents : public IDispatch {
  };
#else
  typedef struct HTMLInputTextElementEventsVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputTextElementEvents *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputTextElementEvents *This);
      ULONG (WINAPI *Release)(HTMLInputTextElementEvents *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputTextElementEvents *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputTextElementEvents *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputTextElementEvents *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputTextElementEvents *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputTextElementEventsVtbl;
  struct HTMLInputTextElementEvents {
    CONST_VTBL struct HTMLInputTextElementEventsVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputTextElementEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputTextElementEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputTextElementEvents_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputTextElementEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputTextElementEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputTextElementEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputTextElementEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLOptionButtonElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLOptionButtonElementEvents_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLOptionButtonElementEvents;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLOptionButtonElementEvents : public IDispatch {
  };
#else
  typedef struct HTMLOptionButtonElementEventsVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLOptionButtonElementEvents *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLOptionButtonElementEvents *This);
      ULONG (WINAPI *Release)(HTMLOptionButtonElementEvents *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLOptionButtonElementEvents *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLOptionButtonElementEvents *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLOptionButtonElementEvents *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLOptionButtonElementEvents *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLOptionButtonElementEventsVtbl;
  struct HTMLOptionButtonElementEvents {
    CONST_VTBL struct HTMLOptionButtonElementEventsVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLOptionButtonElementEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLOptionButtonElementEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLOptionButtonElementEvents_Release(This) (This)->lpVtbl->Release(This)
#define HTMLOptionButtonElementEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLOptionButtonElementEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLOptionButtonElementEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLOptionButtonElementEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputFileElementEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputFileElementEvents_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputFileElementEvents;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputFileElementEvents : public IDispatch {
  };
#else
  typedef struct HTMLInputFileElementEventsVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputFileElementEvents *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputFileElementEvents *This);
      ULONG (WINAPI *Release)(HTMLInputFileElementEvents *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputFileElementEvents *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputFileElementEvents *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputFileElementEvents *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputFileElementEvents *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputFileElementEventsVtbl;
  struct HTMLInputFileElementEvents {
    CONST_VTBL struct HTMLInputFileElementEventsVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputFileElementEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputFileElementEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputFileElementEvents_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputFileElementEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputFileElementEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputFileElementEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputFileElementEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __HTMLInputImageEvents_DISPINTERFACE_DEFINED__
#define __HTMLInputImageEvents_DISPINTERFACE_DEFINED__
  EXTERN_C const IID DIID_HTMLInputImageEvents;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct HTMLInputImageEvents : public IDispatch {
  };
#else
  typedef struct HTMLInputImageEventsVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(HTMLInputImageEvents *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(HTMLInputImageEvents *This);
      ULONG (WINAPI *Release)(HTMLInputImageEvents *This);
      HRESULT (WINAPI *GetTypeInfoCount)(HTMLInputImageEvents *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(HTMLInputImageEvents *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(HTMLInputImageEvents *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(HTMLInputImageEvents *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
    END_INTERFACE
  } HTMLInputImageEventsVtbl;
  struct HTMLInputImageEvents {
    CONST_VTBL struct HTMLInputImageEventsVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define HTMLInputImageEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define HTMLInputImageEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define HTMLInputImageEvents_Release(This) (This)->lpVtbl->Release(This)
#define HTMLInputImageEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define HTMLInputImageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define HTMLInputImageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define HTMLInputImageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#endif

#ifndef __IHTMLInputElement_INTERFACE_DEFINED__
#define __IHTMLInputElement_INTERFACE_DEFINED__
  EXTERN_C const IID IID_IHTMLInputElement;
#if defined(__cplusplus) && !defined(CINTERFACE)
  struct IHTMLInputElement : public IDispatch {
  public:
    virtual HRESULT WINAPI put_type(BSTR v) = 0;
    virtual HRESULT WINAPI get_type(BSTR *p) = 0;
    virtual HRESULT WINAPI put_value(BSTR v) = 0;
    virtual HRESULT WINAPI get_value(BSTR *p) = 0;
    virtual HRESULT WINAPI put_name(BSTR v) = 0;
    virtual HRESULT WINAPI get_name(BSTR *p) = 0;
    virtual HRESULT WINAPI put_status(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_status(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI put_disabled(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_disabled(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI get_form(IHTMLFormElement **p) = 0;
    virtual HRESULT WINAPI put_size(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_size(__LONG32 *p) = 0;
    virtual HRESULT WINAPI put_maxLength(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_maxLength(__LONG32 *p) = 0;
    virtual HRESULT WINAPI select(void) = 0;
    virtual HRESULT WINAPI put_onchange(VARIANT v) = 0;
    virtual HRESULT WINAPI get_onchange(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_onselect(VARIANT v) = 0;
    virtual HRESULT WINAPI get_onselect(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_defaultValue(BSTR v) = 0;
    virtual HRESULT WINAPI get_defaultValue(BSTR *p) = 0;
    virtual HRESULT WINAPI put_readOnly(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_readOnly(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI createTextRange(IHTMLTxtRange **range) = 0;
    virtual HRESULT WINAPI put_indeterminate(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_indeterminate(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI put_defaultChecked(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_defaultChecked(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI put_checked(VARIANT_BOOL v) = 0;
    virtual HRESULT WINAPI get_checked(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI put_border(VARIANT v) = 0;
    virtual HRESULT WINAPI get_border(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_vspace(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_vspace(__LONG32 *p) = 0;
    virtual HRESULT WINAPI put_hspace(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_hspace(__LONG32 *p) = 0;
    virtual HRESULT WINAPI put_alt(BSTR v) = 0;
    virtual HRESULT WINAPI get_alt(BSTR *p) = 0;
    virtual HRESULT WINAPI put_src(BSTR v) = 0;
    virtual HRESULT WINAPI get_src(BSTR *p) = 0;
    virtual HRESULT WINAPI put_lowsrc(BSTR v) = 0;
    virtual HRESULT WINAPI get_lowsrc(BSTR *p) = 0;
    virtual HRESULT WINAPI put_vrml(BSTR v) = 0;
    virtual HRESULT WINAPI get_vrml(BSTR *p) = 0;
    virtual HRESULT WINAPI put_dynsrc(BSTR v) = 0;
    virtual HRESULT WINAPI get_dynsrc(BSTR *p) = 0;
    virtual HRESULT WINAPI get_readyState(BSTR *p) = 0;
    virtual HRESULT WINAPI get_complete(VARIANT_BOOL *p) = 0;
    virtual HRESULT WINAPI put_loop(VARIANT v) = 0;
    virtual HRESULT WINAPI get_loop(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_align(BSTR v) = 0;
    virtual HRESULT WINAPI get_align(BSTR *p) = 0;
    virtual HRESULT WINAPI put_onload(VARIANT v) = 0;
    virtual HRESULT WINAPI get_onload(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_onerror(VARIANT v) = 0;
    virtual HRESULT WINAPI get_onerror(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_onabort(VARIANT v) = 0;
    virtual HRESULT WINAPI get_onabort(VARIANT *p) = 0;
    virtual HRESULT WINAPI put_width(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_width(__LONG32 *p) = 0;
    virtual HRESULT WINAPI put_height(__LONG32 v) = 0;
    virtual HRESULT WINAPI get_height(__LONG32 *p) = 0;
    virtual HRESULT WINAPI put_start(BSTR v) = 0;
    virtual HRESULT WINAPI get_start(BSTR *p) = 0;
  };
#else
  typedef struct IHTMLInputElementVtbl {
    BEGIN_INTERFACE
      HRESULT (WINAPI *QueryInterface)(IHTMLInputElement *This,REFIID riid,void **ppvObject);
      ULONG (WINAPI *AddRef)(IHTMLInputElement *This);
      ULONG (WINAPI *Release)(IHTMLInputElement *This);
      HRESULT (WINAPI *GetTypeInfoCount)(IHTMLInputElement *This,UINT *pctinfo);
      HRESULT (WINAPI *GetTypeInfo)(IHTMLInputElement *This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo);
      HRESULT (WINAPI *GetIDsOfNames)(IHTMLInputElement *This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId);
      HRESULT (WINAPI *Invoke)(IHTMLInputElement *This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr);
      HRESULT (WINAPI *put_type)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_type)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_value)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_value)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_name)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_name)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_status)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_status)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *put_disabled)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_disabled)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *get_form)(IHTMLInputElement *This,IHTMLFormElement **p);
      HRESULT (WINAPI *put_size)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_size)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *put_maxLength)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_maxLength)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *select)(IHTMLInputElement *This);
      HRESULT (WINAPI *put_onchange)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_onchange)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_onselect)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_onselect)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_defaultValue)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_defaultValue)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_readOnly)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_readOnly)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *createTextRange)(IHTMLInputElement *This,IHTMLTxtRange **range);
      HRESULT (WINAPI *put_indeterminate)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_indeterminate)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *put_defaultChecked)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_defaultChecked)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *put_checked)(IHTMLInputElement *This,VARIANT_BOOL v);
      HRESULT (WINAPI *get_checked)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *put_border)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_border)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_vspace)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_vspace)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *put_hspace)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_hspace)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *put_alt)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_alt)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_src)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_src)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_lowsrc)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_lowsrc)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_vrml)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_vrml)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_dynsrc)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_dynsrc)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *get_readyState)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *get_complete)(IHTMLInputElement *This,VARIANT_BOOL *p);
      HRESULT (WINAPI *put_loop)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_loop)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_align)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_align)(IHTMLInputElement *This,BSTR *p);
      HRESULT (WINAPI *put_onload)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_onload)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_onerror)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_onerror)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_onabort)(IHTMLInputElement *This,VARIANT v);
      HRESULT (WINAPI *get_onabort)(IHTMLInputElement *This,VARIANT *p);
      HRESULT (WINAPI *put_width)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_width)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *put_height)(IHTMLInputElement *This,__LONG32 v);
      HRESULT (WINAPI *get_height)(IHTMLInputElement *This,__LONG32 *p);
      HRESULT (WINAPI *put_start)(IHTMLInputElement *This,BSTR v);
      HRESULT (WINAPI *get_start)(IHTMLInputElement *This,BSTR *p);
    END_INTERFACE
  } IHTMLInputElementVtbl;
  struct IHTMLInputElement {
    CONST_VTBL struct IHTMLInputElementVtbl *lpVtbl;
  };
#ifdef COBJMACROS
#define IHTMLInputElement_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IHTMLInputElement_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IHTMLInputElement_Release(This) (This)->lpVtbl->Release(This)
#define IHTMLInputElement_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IHTMLInputElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IHTMLInputElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IHTMLInputElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IHTMLInputElement_put_type(This,v) (This)->lpVtbl->put_type(This,v)
#define IHTMLInputElement_get_type(This,p) (This)->lpVtbl->get_type(This,p)
#define IHTMLInputElement_put_value(This,v) (This)->lpVtbl->put_value(This,v)
#define IHTMLInputElement_get_value(This,p) (This)->lpVtbl->get_value(This,p)
#define IHTMLInputElement_put_name(This,v) (This)->lpVtbl->put_name(This,v)
#define IHTMLInputElement_get_name(This,p) (This)->lpVtbl->get_name(This,p)
#define IHTMLInputElement_put_status(This,v) (This)->lpVtbl->put_status(This,v)
#define IHTMLInputElement_get_status(This,p) (This)->lpVtbl->get_status(This,p)
#define IHTMLInputElement_put_disabled(This,v) (This)->lpVtbl->put_disabled(This,v)
#define IHTMLInputElement_get_disabled(This,p) (This)->lpVtbl->get_disabled(This,p)
#define IHTMLInputElement_get_form(This,p) (This)->lpVtbl->get_form(This,p)
#define IHTMLInputElement_put_size(This,v) (This)->lpVtbl->put_size(This,v)
#define IHTMLInputElement_get_size(This,p) (This)->lpVtbl->get_size(This,p)
#define IHTMLInputElement_put_maxLength(This,v) (This)->lpVtbl->put_maxLength(This,v)
#define IHTMLInputElement_get_maxLength(This,p) (This)->lpVtbl->get_maxLength(This,p)
#define IHTMLInputElement_select(This) (This)->lpVtbl->select(This)
#define IHTMLInputElement_put_onchange(This,v) (This)->lpVtbl->put_onchange(This,v)
#define IHTMLInputElement_get_onchange(This,p) (This)->lpVtbl->get_onchange(This,p)
#define IHTMLInputElement_put_onselect(This,v) (This)->lpVtbl->put_onselect(This,v)
#define IHTMLInputElement_get_onselect(This,p) (This)->lpVtbl->get_onselect(This,p)
#define IHTMLInputElement_put_defaultValue(This,v) (This)->lpVtbl->put_defaultValue(This,v)
#define IHTMLInputElement_get_defaultValue(This,p) (This)->lpVtbl->get_defaultValue(This,p)
#define IHTMLInputElement_put_readOnly(This,v) (This)->lpVtbl->put_readOnly(This,v)
#define IHTMLInputElement_get_readOnly(This,p) (This)->lpVtbl->get_readOnly(This,p)
#define IHTMLInputElement_createTextRange(This,range) (This)->lpVtbl->createTextRange(This,range)
#define IHTMLInputElement_put_indeterminate(This,v) (This)->lpVtbl->put_indeterminate(This,v)
#define IHTMLInputElement_get_indeterminate(This,p) (This)->lpVtbl->get_indeterminate(This,p)
#define IHTMLInputElement_put_defaultChecked(This,v) (This)->lpVtbl->put_defaultChecked(This,v)
#define IHTMLInputElement_get_defaultChecked(This,p) (This)->lpVtbl->get_defaultChecked(This,p)
#define IHTMLInputElement_put_checked(This,v) (This)->lpVtbl->put_checked(This,v)
#define IHTMLInputElement_get_checked(This,p) (This)->lpVtbl->get_checked(This,p)
#define IHTMLInputElement_put_border(This,v) (This)->lpVtbl->put_border(This,v)
#define IHTMLInputElement_get_border(This,p) (This)->lpVtbl->get_border(This,p)
#define IHTMLInputElement_put_vspace(This,v) (This)->lpVtbl->put_vspace(This,v)
#define IHTMLInputElement_get_vspace(This,p) (This)->lpVtbl->get_vspace(This,p)
#define IHTMLInputElement_put_hspace(This,v) (This)->lpVtbl->put_hspace(This,v)
#define IHTMLInputElement_get_hspace(This,p) (This)->lpVtbl->get_hspace(This,p)
#define IHTMLInputElement_put_alt(This,v) (This)->lpVtbl->put_alt(This,v)
#define IHTMLInputElement_get_alt(This,p) (This)->lpVtbl->get_alt(This,p)
#define IHTMLInputElement_put_src(This,v) (This)->lpVtbl->put_src(This,v)
#define IHTMLInputElement_get_src(This,p) (This)->lpVtbl->get_src(This,p)
#define IHTMLInputElement_put_lowsrc(This,v) (This)->lpVtbl->put_lowsrc(This,v)
#define IHTMLInputElement_get_lowsrc(This,p) (This)->lpVtbl->get_lowsrc(This,p)
#define IHTMLInputElement_put_vrml(This,v) (This)->lpVtbl->put_vrml(This,v)
#define IHTMLInputElement_get_vrml(This,p) (This)->lpVtbl->get_vrml(This,p)
#define IHTMLInputElement_put_dynsrc(This,v) (This)->lpVtbl->put_dynsrc(This,v)
#define IHTMLInputElement_get_dynsrc(This,p) (This)->lpVtbl->get_dynsrc(This,p)
#define IHTMLInputElement_get_readyState(This,p) (This)->lpVtbl->get_readyState(This,p)
#define IHTMLInputElement_get_complete(This,p) (This)->lpVtbl->get_complete(This,p)
#define IHTMLInputElement_put_loop(This,v) (This)->lpVtbl->put_loop(This,v)
#define IHTMLInputElement_get_loop(This,p) (This)->lpVtbl->get_loop(This,p)
#define IHTMLInputElement_put_align(This,v) (This)->lpVtbl->put_align(This,v)
#define IHTMLInputElement_get_align(This,p) (This)->lpVtbl->get_align(This,p)
#define IHTMLInputElement_put_onload(This,v) (This)->lpVtbl->put_onload(This,v)
#define IHTMLInputElement_get_onload(This,p) (This)->lpVtbl->get_onload(This,p)
#define IHTMLInputElement_put_onerror(This,v) (This)->lpVtbl->put_onerror(This,v)
#define IHTMLInputElement_get_onerror(This,p) (This)->lpVtbl->get_onerror(This,p)
#define IHTMLInputElement_put_onabort(This,v) (This)->lpVtbl->put_onabort(This,v)
#define IHTMLInputElement_get_onabort(This,p) (This)->lpVtbl->get_onabort(This,p)
#define IHTMLInputElement_put_width(This,v) (This)->lpVtbl->put_width(This,v)
#define IHTMLInputElement_get_width(This,p) (This)->lpVtbl->get_width(This,p)
#define IHTMLInputElement_put_height(This,v) (This)->lpVtbl->put_height(This,v)
#define IHTMLInputElement_get_height(This,p) (This)->lpVtbl->get_height(This,p)
#define IHTMLInputElement_put_start(This,v) (This)->lpVtbl->put_start(This,v)
#define IHTMLInputElement_get_start(This,p) (This)->lpVtbl->get_start(This,p)
#endif
#endif
  HRESULT WINAPI IHTMLInputElement_put_type_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_type_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_type_Proxy(IHTMLInputElement *This,BSTR *p);
  void __RPC_STUB IHTMLInputElement_get_type_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_value_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_value_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_value_Proxy(IHTMLInputElement *This,BSTR *p);
  void __RPC_STUB IHTMLInputElement_get_value_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_name_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_name_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_name_Proxy(IHTMLInputElement *This,BSTR *p);
  void __RPC_STUB IHTMLInputElement_get_name_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_status_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_status_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_status_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_status_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_disabled_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_disabled_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_disabled_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_disabled_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_form_Proxy(IHTMLInputElement *This,IHTMLFormElement **p);
  void __RPC_STUB IHTMLInputElement_get_form_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_size_Proxy(IHTMLInputElement *This,__LONG32 v);
  void __RPC_STUB IHTMLInputElement_put_size_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_size_Proxy(IHTMLInputElement *This,__LONG32 *p);
  void __RPC_STUB IHTMLInputElement_get_size_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_maxLength_Proxy(IHTMLInputElement *This,__LONG32 v);
  void __RPC_STUB IHTMLInputElement_put_maxLength_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_maxLength_Proxy(IHTMLInputElement *This,__LONG32 *p);
  void __RPC_STUB IHTMLInputElement_get_maxLength_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_select_Proxy(IHTMLInputElement *This);
  void __RPC_STUB IHTMLInputElement_select_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_onchange_Proxy(IHTMLInputElement *This,VARIANT v);
  void __RPC_STUB IHTMLInputElement_put_onchange_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_onchange_Proxy(IHTMLInputElement *This,VARIANT *p);
  void __RPC_STUB IHTMLInputElement_get_onchange_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_onselect_Proxy(IHTMLInputElement *This,VARIANT v);
  void __RPC_STUB IHTMLInputElement_put_onselect_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_onselect_Proxy(IHTMLInputElement *This,VARIANT *p);
  void __RPC_STUB IHTMLInputElement_get_onselect_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_defaultValue_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_defaultValue_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_defaultValue_Proxy(IHTMLInputElement *This,BSTR *p);
  void __RPC_STUB IHTMLInputElement_get_defaultValue_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_readOnly_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_readOnly_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_readOnly_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_readOnly_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_createTextRange_Proxy(IHTMLInputElement *This,IHTMLTxtRange **range);
  void __RPC_STUB IHTMLInputElement_createTextRange_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_indeterminate_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_indeterminate_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_indeterminate_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_indeterminate_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_defaultChecked_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_defaultChecked_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_defaultChecked_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_defaultChecked_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_checked_Proxy(IHTMLInputElement *This,VARIANT_BOOL v);
  void __RPC_STUB IHTMLInputElement_put_checked_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_checked_Proxy(IHTMLInputElement *This,VARIANT_BOOL *p);
  void __RPC_STUB IHTMLInputElement_get_checked_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_border_Proxy(IHTMLInputElement *This,VARIANT v);
  void __RPC_STUB IHTMLInputElement_put_border_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_border_Proxy(IHTMLInputElement *This,VARIANT *p);
  void __RPC_STUB IHTMLInputElement_get_border_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_vspace_Proxy(IHTMLInputElement *This,__LONG32 v);
  void __RPC_STUB IHTMLInputElement_put_vspace_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_vspace_Proxy(IHTMLInputElement *This,__LONG32 *p);
  void __RPC_STUB IHTMLInputElement_get_vspace_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_hspace_Proxy(IHTMLInputElement *This,__LONG32 v);
  void __RPC_STUB IHTMLInputElement_put_hspace_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_hspace_Proxy(IHTMLInputElement *This,__LONG32 *p);
  void __RPC_STUB IHTMLInputElement_get_hspace_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_alt_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_alt_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_alt_Proxy(IHTMLInputElement *This,BSTR *p);
  void __RPC_STUB IHTMLInputElement_get_alt_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_put_src_Proxy(IHTMLInputElement *This,BSTR v);
  void __RPC_STUB IHTMLInputElement_put_src_Stub(IRpcStubBuffer *This,IRpcChannelBuffer *_pRpcChannelBuffer,PRPC_MESSAGE _pRpcMessage,DWORD *_pdwStubPhase);
  HRESULT WINAPI IHTMLInputElement_get_src_P