// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIceballosdIcmsdIcmsswdI051dICMSSW_10_3_4dItmpdIslc7_amd64_gcc700dIMitAnaDataFormats_LinkDefDict

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
#include "MitAna/DataFormats/interface/Hist1DRat.h"
#include "MitAna/DataFormats/interface/TH2DAsymErr.h"
#include "MitAna/DataFormats/interface/TH3DAsymErr.h"
#include "MitAna/DataFormats/interface/Types.h"
#include "MitAna/DataFormats/interface/Vect3.h"
#include "MitAna/DataFormats/interface/Vect3C.h"
#include "MitAna/DataFormats/interface/Vect4M.h"
#include "MitAna/DataFormats/interface/Hist1DRat.h"
#include "MitAna/DataFormats/interface/TH2DAsymErr.h"
#include "MitAna/DataFormats/interface/TH3DAsymErr.h"
#include "MitAna/DataFormats/interface/Types.h"
#include "MitAna/DataFormats/interface/Vect3.h"
#include "MitAna/DataFormats/interface/Vect3C.h"
#include "MitAna/DataFormats/interface/Vect4M.h"

// Header files passed via #pragma extra_include

namespace mithep {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *mithep_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("mithep", 0 /*version*/, "MitAna/DataFormats/interface/Hist1DRat.h", 19,
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
   static void *new_mithepcLcLHist1DRat(void *p = 0);
   static void *newArray_mithepcLcLHist1DRat(Long_t size, void *p);
   static void delete_mithepcLcLHist1DRat(void *p);
   static void deleteArray_mithepcLcLHist1DRat(void *p);
   static void destruct_mithepcLcLHist1DRat(void *p);
   static Long64_t merge_mithepcLcLHist1DRat(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Hist1DRat*)
   {
      ::mithep::Hist1DRat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Hist1DRat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Hist1DRat", ::mithep::Hist1DRat::Class_Version(), "MitAna/DataFormats/interface/Hist1DRat.h", 21,
                  typeid(::mithep::Hist1DRat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::Hist1DRat::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Hist1DRat) );
      instance.SetNew(&new_mithepcLcLHist1DRat);
      instance.SetNewArray(&newArray_mithepcLcLHist1DRat);
      instance.SetDelete(&delete_mithepcLcLHist1DRat);
      instance.SetDeleteArray(&deleteArray_mithepcLcLHist1DRat);
      instance.SetDestructor(&destruct_mithepcLcLHist1DRat);
      instance.SetMerge(&merge_mithepcLcLHist1DRat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Hist1DRat*)
   {
      return GenerateInitInstanceLocal((::mithep::Hist1DRat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::Hist1DRat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLTH2DAsymErr(void *p = 0);
   static void *newArray_mithepcLcLTH2DAsymErr(Long_t size, void *p);
   static void delete_mithepcLcLTH2DAsymErr(void *p);
   static void deleteArray_mithepcLcLTH2DAsymErr(void *p);
   static void destruct_mithepcLcLTH2DAsymErr(void *p);
   static void directoryAutoAdd_mithepcLcLTH2DAsymErr(void *obj, TDirectory *dir);
   static Long64_t merge_mithepcLcLTH2DAsymErr(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::TH2DAsymErr*)
   {
      ::mithep::TH2DAsymErr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::TH2DAsymErr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::TH2DAsymErr", ::mithep::TH2DAsymErr::Class_Version(), "MitAna/DataFormats/interface/TH2DAsymErr.h", 17,
                  typeid(::mithep::TH2DAsymErr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::TH2DAsymErr::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::TH2DAsymErr) );
      instance.SetNew(&new_mithepcLcLTH2DAsymErr);
      instance.SetNewArray(&newArray_mithepcLcLTH2DAsymErr);
      instance.SetDelete(&delete_mithepcLcLTH2DAsymErr);
      instance.SetDeleteArray(&deleteArray_mithepcLcLTH2DAsymErr);
      instance.SetDestructor(&destruct_mithepcLcLTH2DAsymErr);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_mithepcLcLTH2DAsymErr);
      instance.SetMerge(&merge_mithepcLcLTH2DAsymErr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::TH2DAsymErr*)
   {
      return GenerateInitInstanceLocal((::mithep::TH2DAsymErr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::TH2DAsymErr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLTH3DAsymErr(void *p = 0);
   static void *newArray_mithepcLcLTH3DAsymErr(Long_t size, void *p);
   static void delete_mithepcLcLTH3DAsymErr(void *p);
   static void deleteArray_mithepcLcLTH3DAsymErr(void *p);
   static void destruct_mithepcLcLTH3DAsymErr(void *p);
   static void directoryAutoAdd_mithepcLcLTH3DAsymErr(void *obj, TDirectory *dir);
   static Long64_t merge_mithepcLcLTH3DAsymErr(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::TH3DAsymErr*)
   {
      ::mithep::TH3DAsymErr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::TH3DAsymErr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::TH3DAsymErr", ::mithep::TH3DAsymErr::Class_Version(), "MitAna/DataFormats/interface/TH3DAsymErr.h", 18,
                  typeid(::mithep::TH3DAsymErr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::TH3DAsymErr::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::TH3DAsymErr) );
      instance.SetNew(&new_mithepcLcLTH3DAsymErr);
      instance.SetNewArray(&newArray_mithepcLcLTH3DAsymErr);
      instance.SetDelete(&delete_mithepcLcLTH3DAsymErr);
      instance.SetDeleteArray(&deleteArray_mithepcLcLTH3DAsymErr);
      instance.SetDestructor(&destruct_mithepcLcLTH3DAsymErr);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_mithepcLcLTH3DAsymErr);
      instance.SetMerge(&merge_mithepcLcLTH3DAsymErr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::TH3DAsymErr*)
   {
      return GenerateInitInstanceLocal((::mithep::TH3DAsymErr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::TH3DAsymErr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLVect3(void *p = 0);
   static void *newArray_mithepcLcLVect3(Long_t size, void *p);
   static void delete_mithepcLcLVect3(void *p);
   static void deleteArray_mithepcLcLVect3(void *p);
   static void destruct_mithepcLcLVect3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Vect3*)
   {
      ::mithep::Vect3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Vect3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Vect3", ::mithep::Vect3::Class_Version(), "MitAna/DataFormats/interface/Vect3.h", 18,
                  typeid(::mithep::Vect3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::Vect3::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Vect3) );
      instance.SetNew(&new_mithepcLcLVect3);
      instance.SetNewArray(&newArray_mithepcLcLVect3);
      instance.SetDelete(&delete_mithepcLcLVect3);
      instance.SetDeleteArray(&deleteArray_mithepcLcLVect3);
      instance.SetDestructor(&destruct_mithepcLcLVect3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Vect3*)
   {
      return GenerateInitInstanceLocal((::mithep::Vect3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::Vect3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLVect3C(void *p = 0);
   static void *newArray_mithepcLcLVect3C(Long_t size, void *p);
   static void delete_mithepcLcLVect3C(void *p);
   static void deleteArray_mithepcLcLVect3C(void *p);
   static void destruct_mithepcLcLVect3C(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Vect3C*)
   {
      ::mithep::Vect3C *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Vect3C >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Vect3C", ::mithep::Vect3C::Class_Version(), "MitAna/DataFormats/interface/Vect3C.h", 18,
                  typeid(::mithep::Vect3C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::Vect3C::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Vect3C) );
      instance.SetNew(&new_mithepcLcLVect3C);
      instance.SetNewArray(&newArray_mithepcLcLVect3C);
      instance.SetDelete(&delete_mithepcLcLVect3C);
      instance.SetDeleteArray(&deleteArray_mithepcLcLVect3C);
      instance.SetDestructor(&destruct_mithepcLcLVect3C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Vect3C*)
   {
      return GenerateInitInstanceLocal((::mithep::Vect3C*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::Vect3C*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLVect4M(void *p = 0);
   static void *newArray_mithepcLcLVect4M(Long_t size, void *p);
   static void delete_mithepcLcLVect4M(void *p);
   static void deleteArray_mithepcLcLVect4M(void *p);
   static void destruct_mithepcLcLVect4M(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Vect4M*)
   {
      ::mithep::Vect4M *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Vect4M >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Vect4M", ::mithep::Vect4M::Class_Version(), "MitAna/DataFormats/interface/Vect4M.h", 16,
                  typeid(::mithep::Vect4M), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::Vect4M::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Vect4M) );
      instance.SetNew(&new_mithepcLcLVect4M);
      instance.SetNewArray(&newArray_mithepcLcLVect4M);
      instance.SetDelete(&delete_mithepcLcLVect4M);
      instance.SetDeleteArray(&deleteArray_mithepcLcLVect4M);
      instance.SetDestructor(&destruct_mithepcLcLVect4M);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Vect4M*)
   {
      return GenerateInitInstanceLocal((::mithep::Vect4M*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::mithep::Vect4M*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr Hist1DRat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Hist1DRat::Class_Name()
{
   return "mithep::Hist1DRat";
}

//______________________________________________________________________________
const char *Hist1DRat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Hist1DRat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Hist1DRat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Hist1DRat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hist1DRat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Hist1DRat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hist1DRat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Hist1DRat*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr TH2DAsymErr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2DAsymErr::Class_Name()
{
   return "mithep::TH2DAsymErr";
}

//______________________________________________________________________________
const char *TH2DAsymErr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH2DAsymErr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH2DAsymErr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH2DAsymErr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2DAsymErr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH2DAsymErr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2DAsymErr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH2DAsymErr*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr TH3DAsymErr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3DAsymErr::Class_Name()
{
   return "mithep::TH3DAsymErr";
}

//______________________________________________________________________________
const char *TH3DAsymErr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH3DAsymErr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TH3DAsymErr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH3DAsymErr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3DAsymErr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH3DAsymErr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3DAsymErr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::TH3DAsymErr*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr Vect3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vect3::Class_Name()
{
   return "mithep::Vect3";
}

//______________________________________________________________________________
const char *Vect3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vect3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vect3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vect3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr Vect3C::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vect3C::Class_Name()
{
   return "mithep::Vect3C";
}

//______________________________________________________________________________
const char *Vect3C::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3C*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vect3C::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3C*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vect3C::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3C*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vect3C::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect3C*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr Vect4M::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vect4M::Class_Name()
{
   return "mithep::Vect4M";
}

//______________________________________________________________________________
const char *Vect4M::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect4M*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vect4M::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect4M*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vect4M::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect4M*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vect4M::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Vect4M*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
void Hist1DRat::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Hist1DRat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Hist1DRat::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Hist1DRat::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLHist1DRat(void *p) {
      return  p ? new(p) ::mithep::Hist1DRat : new ::mithep::Hist1DRat;
   }
   static void *newArray_mithepcLcLHist1DRat(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::Hist1DRat[nElements] : new ::mithep::Hist1DRat[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLHist1DRat(void *p) {
      delete ((::mithep::Hist1DRat*)p);
   }
   static void deleteArray_mithepcLcLHist1DRat(void *p) {
      delete [] ((::mithep::Hist1DRat*)p);
   }
   static void destruct_mithepcLcLHist1DRat(void *p) {
      typedef ::mithep::Hist1DRat current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_mithepcLcLHist1DRat(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::mithep::Hist1DRat*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::mithep::Hist1DRat

namespace mithep {
//______________________________________________________________________________
void TH2DAsymErr::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::TH2DAsymErr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::TH2DAsymErr::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::TH2DAsymErr::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLTH2DAsymErr(void *p) {
      return  p ? new(p) ::mithep::TH2DAsymErr : new ::mithep::TH2DAsymErr;
   }
   static void *newArray_mithepcLcLTH2DAsymErr(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::TH2DAsymErr[nElements] : new ::mithep::TH2DAsymErr[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLTH2DAsymErr(void *p) {
      delete ((::mithep::TH2DAsymErr*)p);
   }
   static void deleteArray_mithepcLcLTH2DAsymErr(void *p) {
      delete [] ((::mithep::TH2DAsymErr*)p);
   }
   static void destruct_mithepcLcLTH2DAsymErr(void *p) {
      typedef ::mithep::TH2DAsymErr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_mithepcLcLTH2DAsymErr(void *p, TDirectory *dir) {
      ((::mithep::TH2DAsymErr*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_mithepcLcLTH2DAsymErr(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::mithep::TH2DAsymErr*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::mithep::TH2DAsymErr

namespace mithep {
//______________________________________________________________________________
void TH3DAsymErr::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::TH3DAsymErr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::TH3DAsymErr::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::TH3DAsymErr::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLTH3DAsymErr(void *p) {
      return  p ? new(p) ::mithep::TH3DAsymErr : new ::mithep::TH3DAsymErr;
   }
   static void *newArray_mithepcLcLTH3DAsymErr(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::TH3DAsymErr[nElements] : new ::mithep::TH3DAsymErr[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLTH3DAsymErr(void *p) {
      delete ((::mithep::TH3DAsymErr*)p);
   }
   static void deleteArray_mithepcLcLTH3DAsymErr(void *p) {
      delete [] ((::mithep::TH3DAsymErr*)p);
   }
   static void destruct_mithepcLcLTH3DAsymErr(void *p) {
      typedef ::mithep::TH3DAsymErr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_mithepcLcLTH3DAsymErr(void *p, TDirectory *dir) {
      ((::mithep::TH3DAsymErr*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_mithepcLcLTH3DAsymErr(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::mithep::TH3DAsymErr*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::mithep::TH3DAsymErr

namespace mithep {
//______________________________________________________________________________
void Vect3::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Vect3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Vect3::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Vect3::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLVect3(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect3 : new ::mithep::Vect3;
   }
   static void *newArray_mithepcLcLVect3(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect3[nElements] : new ::mithep::Vect3[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLVect3(void *p) {
      delete ((::mithep::Vect3*)p);
   }
   static void deleteArray_mithepcLcLVect3(void *p) {
      delete [] ((::mithep::Vect3*)p);
   }
   static void destruct_mithepcLcLVect3(void *p) {
      typedef ::mithep::Vect3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Vect3

namespace mithep {
//______________________________________________________________________________
void Vect3C::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Vect3C.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Vect3C::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Vect3C::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLVect3C(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect3C : new ::mithep::Vect3C;
   }
   static void *newArray_mithepcLcLVect3C(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect3C[nElements] : new ::mithep::Vect3C[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLVect3C(void *p) {
      delete ((::mithep::Vect3C*)p);
   }
   static void deleteArray_mithepcLcLVect3C(void *p) {
      delete [] ((::mithep::Vect3C*)p);
   }
   static void destruct_mithepcLcLVect3C(void *p) {
      typedef ::mithep::Vect3C current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Vect3C

namespace mithep {
//______________________________________________________________________________
void Vect4M::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Vect4M.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Vect4M::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Vect4M::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLVect4M(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect4M : new ::mithep::Vect4M;
   }
   static void *newArray_mithepcLcLVect4M(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::Vect4M[nElements] : new ::mithep::Vect4M[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLVect4M(void *p) {
      delete ((::mithep::Vect4M*)p);
   }
   static void deleteArray_mithepcLcLVect4M(void *p) {
      delete [] ((::mithep::Vect4M*)p);
   }
   static void destruct_mithepcLcLVect4M(void *p) {
      typedef ::mithep::Vect4M current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Vect4M

namespace {
  void TriggerDictionaryInitialization_MitAnaDataFormats_LinkDefDict_Impl() {
    static const char* headers[] = {
"MitAna/DataFormats/interface/Hist1DRat.h",
"MitAna/DataFormats/interface/TH2DAsymErr.h",
"MitAna/DataFormats/interface/TH3DAsymErr.h",
"MitAna/DataFormats/interface/Types.h",
"MitAna/DataFormats/interface/Vect3.h",
"MitAna/DataFormats/interface/Vect3C.h",
"MitAna/DataFormats/interface/Vect4M.h",
0
    };
    static const char* includePaths[] = {
"/home/ceballos/cms/cmssw/051/CMSSW_10_3_4/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-ogkkac4/include",
"/home/ceballos/cms/cmssw/051/CMSSW_10_3_4/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MitAnaDataFormats_LinkDefDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Histogram ratio class in 1D)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Hist1DRat.h")))  Hist1DRat;}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Histogram for storage of seperate asymmetric errors)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/TH2DAsymErr.h")))  TH2DAsymErr;}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Histogram for storage of seperate asymmetric errors)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/TH3DAsymErr.h")))  TH3DAsymErr;}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Implementation of our own ThreeVector32)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Vect3.h")))  Vect3;}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Implementation of our own ThreeVectorC32)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Vect3C.h")))  Vect3C;}
namespace mithep{class __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Vect4M.h")))  Vect4M;}
typedef double Double_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace ROOT{namespace Math{template <class ScalarType = double> class __attribute__((annotate("$clingAutoload$Math/GenVector/PxPyPzE4D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  PxPyPzE4D;
}}
namespace ROOT{namespace Math{template <class CoordSystem> class __attribute__((annotate("$clingAutoload$Math/Vector4Dfwd.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  LorentzVector;
}}
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double_t> > FourVector __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace ROOT{namespace Math{template <class ScalarType> class __attribute__((annotate("$clingAutoload$Math/GenVector/PtEtaPhiM4D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  PtEtaPhiM4D;
}}
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double_t> > FourVectorM __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace ROOT{namespace Math{template <class ScalarType> class __attribute__((annotate("$clingAutoload$Math/GenVector/PtEtaPhiE4D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  PtEtaPhiE4D;
}}
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double_t> > FourVectorE __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace ROOT{namespace Math{template <class T = double> class __attribute__((annotate("$clingAutoload$Math/GenVector/Cartesian3D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  Cartesian3D;
}}
namespace ROOT{namespace Math{class __attribute__((annotate("$clingAutoload$Math/GenVector/CoordinateSystemTags.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  DefaultCoordinateSystemTag;}}
namespace ROOT{namespace Math{template <class CoordSystem, class Tag = ROOT::Math::DefaultCoordinateSystemTag> class __attribute__((annotate("$clingAutoload$Math/GenVector/DisplacementVector3D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  DisplacementVector3D;
}}
namespace mithep{typedef ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double_t>, ROOT::Math::DefaultCoordinateSystemTag> ThreeVector __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace ROOT{namespace Math{template <class T> class __attribute__((annotate("$clingAutoload$Math/GenVector/CylindricalEta3D.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  CylindricalEta3D;
}}
namespace mithep{typedef ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double_t>, ROOT::Math::DefaultCoordinateSystemTag> ThreeVectorC __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace ROOT{namespace Math{template <class T, unsigned int D> class __attribute__((annotate("$clingAutoload$Math/HelperOps.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h")))  MatRepSym;
}}
typedef double Double32_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<Double32_t> > FourVector32 __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > FourVectorM32 __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace mithep{typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiE4D<Double32_t> > FourVectorE32 __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace mithep{typedef ROOT::Math::DisplacementVector3D<ROOT::Math::Cartesian3D<Double32_t>, ROOT::Math::DefaultCoordinateSystemTag> ThreeVector32 __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
namespace mithep{typedef ROOT::Math::DisplacementVector3D<ROOT::Math::CylindricalEta3D<Double32_t>, ROOT::Math::DefaultCoordinateSystemTag> ThreeVectorC32 __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
typedef unsigned int UInt_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace mithep{typedef std::pair<UInt_t, UInt_t> UIntPair __attribute__((annotate("$clingAutoload$MitAna/DataFormats/interface/Types.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MitAnaDataFormats_LinkDefDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MitAna/DataFormats/interface/Hist1DRat.h"
#include "MitAna/DataFormats/interface/TH2DAsymErr.h"
#include "MitAna/DataFormats/interface/TH3DAsymErr.h"
#include "MitAna/DataFormats/interface/Types.h"
#include "MitAna/DataFormats/interface/Vect3.h"
#include "MitAna/DataFormats/interface/Vect3C.h"
#include "MitAna/DataFormats/interface/Vect4M.h"
// $Id: MitAnaDataFormatsLinkDef.h,v 1.6 2010/01/18 14:32:01 bendavid Exp $

#ifndef MITCOMMON_DATAFORMATS_LINKDEF_H
#define MITCOMMON_DATAFORMATS_LINKDEF_H

#include "MitAna/DataFormats/interface/Hist1DRat.h"
#include "MitAna/DataFormats/interface/TH2DAsymErr.h"
#include "MitAna/DataFormats/interface/TH3DAsymErr.h"
#include "MitAna/DataFormats/interface/Types.h"
#include "MitAna/DataFormats/interface/Vect3.h"
#include "MitAna/DataFormats/interface/Vect3C.h"
#include "MitAna/DataFormats/interface/Vect4M.h"
#endif

#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace mithep;

#pragma link C++ typedef mithep::FourVector;
#pragma link C++ typedef mithep::FourVectorM;
#pragma link C++ typedef mithep::FourVectorE;
#pragma link C++ typedef mithep::ThreeVector;
#pragma link C++ typedef mithep::ThreeVectorC;
#pragma link C++ typedef mithep::ThreeSymMatrix;
#pragma link C++ typedef mithep::SevenSymMatrix;
#pragma link C++ typedef mithep::ThreeMatrix;
#pragma link C++ typedef mithep::SevenMatrix;
#pragma link C++ typedef mithep::FourVector32;
#pragma link C++ typedef mithep::FourVectorM32;
#pragma link C++ typedef mithep::FourVectorE32;
#pragma link C++ typedef mithep::ThreeVector32;
#pragma link C++ typedef mithep::ThreeVectorC32;
#pragma link C++ typedef mithep::ThreeSymMatrix32;
#pragma link C++ typedef mithep::SevenSymMatrix32;
#pragma link C++ typedef mithep::ThreeMatrix32;
#pragma link C++ typedef mithep::SevenMatrix32;
#pragma link C++ typedef mithep::UIntPair;
#pragma link C++ typedef mithep::UIntBounds;

#pragma link C++ class mithep::Hist1DRat+;
#pragma link C++ class mithep::TH2DAsymErr+;
#pragma link C++ enum mithep::TH2DAsymErr::EErrType;
#pragma link C++ class mithep::TH3DAsymErr+;
#pragma link C++ class mithep::Vect3+;
#pragma link C++ class mithep::Vect3C+;
#pragma link C++ class mithep::Vect4M+;
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"mithep::FourVector", payloadCode, "@",
"mithep::FourVector32", payloadCode, "@",
"mithep::FourVectorE", payloadCode, "@",
"mithep::FourVectorE32", payloadCode, "@",
"mithep::FourVectorM", payloadCode, "@",
"mithep::FourVectorM32", payloadCode, "@",
"mithep::Hist1DRat", payloadCode, "@",
"mithep::SevenMatrix", payloadCode, "@",
"mithep::SevenMatrix32", payloadCode, "@",
"mithep::SevenSymMatrix", payloadCode, "@",
"mithep::SevenSymMatrix32", payloadCode, "@",
"mithep::TH2DAsymErr", payloadCode, "@",
"mithep::TH2DAsymErr::EErrType", payloadCode, "@",
"mithep::TH3DAsymErr", payloadCode, "@",
"mithep::ThreeMatrix", payloadCode, "@",
"mithep::ThreeMatrix32", payloadCode, "@",
"mithep::ThreeSymMatrix", payloadCode, "@",
"mithep::ThreeSymMatrix32", payloadCode, "@",
"mithep::ThreeVector", payloadCode, "@",
"mithep::ThreeVector32", payloadCode, "@",
"mithep::ThreeVectorC", payloadCode, "@",
"mithep::ThreeVectorC32", payloadCode, "@",
"mithep::UIntBounds", payloadCode, "@",
"mithep::UIntPair", payloadCode, "@",
"mithep::Vect3", payloadCode, "@",
"mithep::Vect3C", payloadCode, "@",
"mithep::Vect4M", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MitAnaDataFormats_LinkDefDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MitAnaDataFormats_LinkDefDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MitAnaDataFormats_LinkDefDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MitAnaDataFormats_LinkDefDict() {
  TriggerDictionaryInitialization_MitAnaDataFormats_LinkDefDict_Impl();
}
