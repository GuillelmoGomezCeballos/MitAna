// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIceballosdIcmsdIcmsswdI050dICMSSW_9_4_6dItmpdIslc6_amd64_gcc630dIMitAnaUtils_LinkDefDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "MitAna/Utils/interface/SimpleTable.h"
#include "MitAna/Utils/interface/SimpleTable.h"

// Header files passed via #pragma extra_include

namespace mithep {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *mithep_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("mithep", 0 /*version*/, "MitAna/DataFormats/interface/Types.h", 22,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &mithep_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *mithep_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_mithepcLcLSimpleTable(void *p);
   static void deleteArray_mithepcLcLSimpleTable(void *p);
   static void destruct_mithepcLcLSimpleTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::SimpleTable*)
   {
      ::mithep::SimpleTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::SimpleTable >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::SimpleTable", ::mithep::SimpleTable::Class_Version(), "MitAna/Utils/interface/SimpleTable.h", 21,
                  typeid(::mithep::SimpleTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::SimpleTable::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::SimpleTable) );
      instance.SetDelete(&delete_mithepcLcLSimpleTable);
      instance.SetDeleteArray(&deleteArray_mithepcLcLSimpleTable);
      instance.SetDestructor(&destruct_mithepcLcLSimpleTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::SimpleTable*)
   {
      return GenerateInitInstanceLocal((::mithep::SimpleTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::SimpleTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLSimpleTablecLcLMyParameter(void *p = 0);
   static void *newArray_mithepcLcLSimpleTablecLcLMyParameter(Long_t size, void *p);
   static void delete_mithepcLcLSimpleTablecLcLMyParameter(void *p);
   static void deleteArray_mithepcLcLSimpleTablecLcLMyParameter(void *p);
   static void destruct_mithepcLcLSimpleTablecLcLMyParameter(void *p);
   static Long64_t merge_mithepcLcLSimpleTablecLcLMyParameter(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::SimpleTable::MyParameter*)
   {
      ::mithep::SimpleTable::MyParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::SimpleTable::MyParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::SimpleTable::MyParameter", ::mithep::SimpleTable::MyParameter::Class_Version(), "MitAna/Utils/interface/SimpleTable.h", 24,
                  typeid(::mithep::SimpleTable::MyParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::SimpleTable::MyParameter::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::SimpleTable::MyParameter) );
      instance.SetNew(&new_mithepcLcLSimpleTablecLcLMyParameter);
      instance.SetNewArray(&newArray_mithepcLcLSimpleTablecLcLMyParameter);
      instance.SetDelete(&delete_mithepcLcLSimpleTablecLcLMyParameter);
      instance.SetDeleteArray(&deleteArray_mithepcLcLSimpleTablecLcLMyParameter);
      instance.SetDestructor(&destruct_mithepcLcLSimpleTablecLcLMyParameter);
      instance.SetMerge(&merge_mithepcLcLSimpleTablecLcLMyParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::SimpleTable::MyParameter*)
   {
      return GenerateInitInstanceLocal((::mithep::SimpleTable::MyParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::SimpleTable::MyParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr SimpleTable::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleTable::Class_Name()
{
   return "mithep::SimpleTable";
}

//______________________________________________________________________________
const char *SimpleTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr SimpleTable::MyParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleTable::MyParameter::Class_Name()
{
   return "mithep::SimpleTable::MyParameter";
}

//______________________________________________________________________________
const char *SimpleTable::MyParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable::MyParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleTable::MyParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable::MyParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleTable::MyParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable::MyParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleTable::MyParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::SimpleTable::MyParameter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
void SimpleTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::SimpleTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::SimpleTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::SimpleTable::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrapper around operator delete
   static void delete_mithepcLcLSimpleTable(void *p) {
      delete ((::mithep::SimpleTable*)p);
   }
   static void deleteArray_mithepcLcLSimpleTable(void *p) {
      delete [] ((::mithep::SimpleTable*)p);
   }
   static void destruct_mithepcLcLSimpleTable(void *p) {
      typedef ::mithep::SimpleTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::SimpleTable

namespace mithep {
//______________________________________________________________________________
void SimpleTable::MyParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::SimpleTable::MyParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::SimpleTable::MyParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::SimpleTable::MyParameter::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLSimpleTablecLcLMyParameter(void *p) {
      return  p ? new(p) ::mithep::SimpleTable::MyParameter : new ::mithep::SimpleTable::MyParameter;
   }
   static void *newArray_mithepcLcLSimpleTablecLcLMyParameter(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::SimpleTable::MyParameter[nElements] : new ::mithep::SimpleTable::MyParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLSimpleTablecLcLMyParameter(void *p) {
      delete ((::mithep::SimpleTable::MyParameter*)p);
   }
   static void deleteArray_mithepcLcLSimpleTablecLcLMyParameter(void *p) {
      delete [] ((::mithep::SimpleTable::MyParameter*)p);
   }
   static void destruct_mithepcLcLSimpleTablecLcLMyParameter(void *p) {
      typedef ::mithep::SimpleTable::MyParameter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_mithepcLcLSimpleTablecLcLMyParameter(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::mithep::SimpleTable::MyParameter*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::mithep::SimpleTable::MyParameter

namespace {
  void TriggerDictionaryInitialization_MitAnaUtils_LinkDefDict_Impl() {
    static const char* headers[] = {
"MitAna/Utils/interface/SimpleTable.h",
0
    };
    static const char* includePaths[] = {
"/home/ceballos/cms/cmssw/050/CMSSW_9_4_6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/lcg/root/6.10.08-elfike/include",
"/home/ceballos/cms/cmssw/050/CMSSW_9_4_6/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MitAnaUtils_LinkDefDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Simple table to keep numbers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/Utils/interface/SimpleTable.h")))  SimpleTable;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MitAnaUtils_LinkDefDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MitAna/Utils/interface/SimpleTable.h"
#include "MitAna/Utils/interface/SimpleTable.h"

#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace mithep;

#pragma link C++ class mithep::SimpleTable+;
#pragma link C++ class mithep::SimpleTable::MyParameter+;

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"mithep::SimpleTable", payloadCode, "@",
"mithep::SimpleTable::MyParameter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MitAnaUtils_LinkDefDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MitAnaUtils_LinkDefDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MitAnaUtils_LinkDefDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MitAnaUtils_LinkDefDict() {
  TriggerDictionaryInitialization_MitAnaUtils_LinkDefDict_Impl();
}
