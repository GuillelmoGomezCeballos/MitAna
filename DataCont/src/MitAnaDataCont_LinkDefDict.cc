// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIceballosdIcmsdIcmsswdI048dICMSSW_9_2_12dItmpdIslc6_amd64_gcc530dIMitAnaDataCont_LinkDefDict

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
#include "MitAna/DataCont/interface/BaseCollection.h"
#include "MitAna/DataCont/interface/BitMask.h"
#include "MitAna/DataCont/interface/CacheFlag.h"
#include "MitAna/DataCont/interface/FastArray.h"
#include "MitAna/DataCont/interface/FastArrayBasic.h"
#include "MitAna/DataCont/interface/NamedFastArrayBasic.h"
#include "MitAna/DataCont/interface/ObjArray.h"
#include "MitAna/DataCont/interface/ProcIDRef.h"
#include "MitAna/DataCont/interface/RunLumiRangeMap.h"
#include "MitAna/DataCont/interface/RunLumiSet.h"
#include "MitAna/DataCont/interface/Types.h"
#include "TObjString.h"

// Header files passed via #pragma extra_include

namespace mithep {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *mithep_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("mithep", 0 /*version*/, "MitAna/DataCont/interface/BaseCollection.h", 14,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &mithep_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *mithep_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *pairlEunsignedsPintcOunsignedsPintgR_Dictionary();
   static void pairlEunsignedsPintcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_pairlEunsignedsPintcOunsignedsPintgR(void *p = 0);
   static void *newArray_pairlEunsignedsPintcOunsignedsPintgR(Long_t size, void *p);
   static void delete_pairlEunsignedsPintcOunsignedsPintgR(void *p);
   static void deleteArray_pairlEunsignedsPintcOunsignedsPintgR(void *p);
   static void destruct_pairlEunsignedsPintcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<unsigned int,unsigned int>*)
   {
      pair<unsigned int,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<unsigned int,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<unsigned int,unsigned int>", "string", 96,
                  typeid(pair<unsigned int,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEunsignedsPintcOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<unsigned int,unsigned int>) );
      instance.SetNew(&new_pairlEunsignedsPintcOunsignedsPintgR);
      instance.SetNewArray(&newArray_pairlEunsignedsPintcOunsignedsPintgR);
      instance.SetDelete(&delete_pairlEunsignedsPintcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_pairlEunsignedsPintcOunsignedsPintgR);
      instance.SetDestructor(&destruct_pairlEunsignedsPintcOunsignedsPintgR);

      ::ROOT::AddClassAlternate("pair<unsigned int,unsigned int>","pair<UInt_t,UInt_t>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<unsigned int,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEunsignedsPintcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<unsigned int,unsigned int>*)0x0)->GetClass();
      pairlEunsignedsPintcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEunsignedsPintcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_mithepcLcLBaseCollection(void *p);
   static void deleteArray_mithepcLcLBaseCollection(void *p);
   static void destruct_mithepcLcLBaseCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BaseCollection*)
   {
      ::mithep::BaseCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BaseCollection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BaseCollection", ::mithep::BaseCollection::Class_Version(), "MitAna/DataCont/interface/BaseCollection.h", 16,
                  typeid(::mithep::BaseCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::BaseCollection::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BaseCollection) );
      instance.SetDelete(&delete_mithepcLcLBaseCollection);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBaseCollection);
      instance.SetDestructor(&destruct_mithepcLcLBaseCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BaseCollection*)
   {
      return GenerateInitInstanceLocal((::mithep::BaseCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BaseCollection*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE3gR_Dictionary();
   static void mithepcLcLBitMasklE3gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE3gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE3gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE3gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE3gR(void *p);
   static void destruct_mithepcLcLBitMasklE3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<3>*)
   {
      ::mithep::BitMask<3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<3> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<3>", ::mithep::BitMask<3>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE3gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<3>) );
      instance.SetNew(&new_mithepcLcLBitMasklE3gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE3gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE3gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE3gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE3gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<3>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<3>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0)->GetClass();
      mithepcLcLBitMasklE3gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE6gR_Dictionary();
   static void mithepcLcLBitMasklE6gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE6gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE6gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE6gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE6gR(void *p);
   static void destruct_mithepcLcLBitMasklE6gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<6>*)
   {
      ::mithep::BitMask<6> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<6> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<6>", ::mithep::BitMask<6>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<6>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE6gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<6>) );
      instance.SetNew(&new_mithepcLcLBitMasklE6gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE6gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE6gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE6gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE6gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<6>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<6>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE6gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0)->GetClass();
      mithepcLcLBitMasklE6gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE6gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE16gR_Dictionary();
   static void mithepcLcLBitMasklE16gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE16gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE16gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE16gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE16gR(void *p);
   static void destruct_mithepcLcLBitMasklE16gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<16>*)
   {
      ::mithep::BitMask<16> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<16> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<16>", ::mithep::BitMask<16>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<16>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE16gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<16>) );
      instance.SetNew(&new_mithepcLcLBitMasklE16gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE16gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE16gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE16gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE16gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<16>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<16>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE16gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0)->GetClass();
      mithepcLcLBitMasklE16gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE16gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE32gR_Dictionary();
   static void mithepcLcLBitMasklE32gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE32gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE32gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE32gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE32gR(void *p);
   static void destruct_mithepcLcLBitMasklE32gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<32>*)
   {
      ::mithep::BitMask<32> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<32> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<32>", ::mithep::BitMask<32>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<32>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE32gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<32>) );
      instance.SetNew(&new_mithepcLcLBitMasklE32gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE32gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE32gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE32gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE32gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<32>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<32>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE32gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0)->GetClass();
      mithepcLcLBitMasklE32gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE32gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE128gR_Dictionary();
   static void mithepcLcLBitMasklE128gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE128gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE128gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE128gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE128gR(void *p);
   static void destruct_mithepcLcLBitMasklE128gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<128>*)
   {
      ::mithep::BitMask<128> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<128> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<128>", ::mithep::BitMask<128>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<128>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE128gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<128>) );
      instance.SetNew(&new_mithepcLcLBitMasklE128gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE128gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE128gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE128gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE128gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<128>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<128>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE128gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0)->GetClass();
      mithepcLcLBitMasklE128gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE128gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE8gR_Dictionary();
   static void mithepcLcLBitMasklE8gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE8gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE8gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE8gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE8gR(void *p);
   static void destruct_mithepcLcLBitMasklE8gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<8>*)
   {
      ::mithep::BitMask<8> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<8> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<8>", ::mithep::BitMask<8>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<8>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE8gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<8>) );
      instance.SetNew(&new_mithepcLcLBitMasklE8gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE8gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE8gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE8gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE8gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<8>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<8>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE8gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0)->GetClass();
      mithepcLcLBitMasklE8gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE8gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMasklE2gR_Dictionary();
   static void mithepcLcLBitMasklE2gR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMasklE2gR(void *p = 0);
   static void *newArray_mithepcLcLBitMasklE2gR(Long_t size, void *p);
   static void delete_mithepcLcLBitMasklE2gR(void *p);
   static void deleteArray_mithepcLcLBitMasklE2gR(void *p);
   static void destruct_mithepcLcLBitMasklE2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMask<2>*)
   {
      ::mithep::BitMask<2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMask<2> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMask<2>", ::mithep::BitMask<2>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 23,
                  typeid(::mithep::BitMask<2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMasklE2gR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMask<2>) );
      instance.SetNew(&new_mithepcLcLBitMasklE2gR);
      instance.SetNewArray(&newArray_mithepcLcLBitMasklE2gR);
      instance.SetDelete(&delete_mithepcLcLBitMasklE2gR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMasklE2gR);
      instance.SetDestructor(&destruct_mithepcLcLBitMasklE2gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMask<2>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMask<2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMasklE2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0)->GetClass();
      mithepcLcLBitMasklE2gR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMasklE2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMaskTlEunsignedsPchargR_Dictionary();
   static void mithepcLcLBitMaskTlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMaskTlEunsignedsPchargR(void *p = 0);
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPchargR(Long_t size, void *p);
   static void delete_mithepcLcLBitMaskTlEunsignedsPchargR(void *p);
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPchargR(void *p);
   static void destruct_mithepcLcLBitMaskTlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMaskT<unsigned char>*)
   {
      ::mithep::BitMaskT<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMaskT<unsigned char> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMaskT<unsigned char>", ::mithep::BitMaskT<unsigned char>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 70,
                  typeid(::mithep::BitMaskT<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMaskTlEunsignedsPchargR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMaskT<unsigned char>) );
      instance.SetNew(&new_mithepcLcLBitMaskTlEunsignedsPchargR);
      instance.SetNewArray(&newArray_mithepcLcLBitMaskTlEunsignedsPchargR);
      instance.SetDelete(&delete_mithepcLcLBitMaskTlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMaskTlEunsignedsPchargR);
      instance.SetDestructor(&destruct_mithepcLcLBitMaskTlEunsignedsPchargR);

      ::ROOT::AddClassAlternate("mithep::BitMaskT<unsigned char>","mithep::BitMaskT<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMaskT<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMaskT<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMaskTlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0)->GetClass();
      mithepcLcLBitMaskTlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMaskTlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMaskTlEunsignedsPshortgR_Dictionary();
   static void mithepcLcLBitMaskTlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p = 0);
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p);
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p);
   static void destruct_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMaskT<unsigned short>*)
   {
      ::mithep::BitMaskT<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMaskT<unsigned short> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMaskT<unsigned short>", ::mithep::BitMaskT<unsigned short>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 70,
                  typeid(::mithep::BitMaskT<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMaskTlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMaskT<unsigned short>) );
      instance.SetNew(&new_mithepcLcLBitMaskTlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_mithepcLcLBitMaskTlEunsignedsPshortgR);
      instance.SetDelete(&delete_mithepcLcLBitMaskTlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMaskTlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_mithepcLcLBitMaskTlEunsignedsPshortgR);

      ::ROOT::AddClassAlternate("mithep::BitMaskT<unsigned short>","mithep::BitMaskT<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMaskT<unsigned short>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMaskT<unsigned short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMaskTlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0)->GetClass();
      mithepcLcLBitMaskTlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMaskTlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMaskTlEunsignedsPintgR_Dictionary();
   static void mithepcLcLBitMaskTlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMaskTlEunsignedsPintgR(void *p = 0);
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPintgR(Long_t size, void *p);
   static void delete_mithepcLcLBitMaskTlEunsignedsPintgR(void *p);
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPintgR(void *p);
   static void destruct_mithepcLcLBitMaskTlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMaskT<unsigned int>*)
   {
      ::mithep::BitMaskT<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMaskT<unsigned int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMaskT<unsigned int>", ::mithep::BitMaskT<unsigned int>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 70,
                  typeid(::mithep::BitMaskT<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMaskTlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMaskT<unsigned int>) );
      instance.SetNew(&new_mithepcLcLBitMaskTlEunsignedsPintgR);
      instance.SetNewArray(&newArray_mithepcLcLBitMaskTlEunsignedsPintgR);
      instance.SetDelete(&delete_mithepcLcLBitMaskTlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMaskTlEunsignedsPintgR);
      instance.SetDestructor(&destruct_mithepcLcLBitMaskTlEunsignedsPintgR);

      ::ROOT::AddClassAlternate("mithep::BitMaskT<unsigned int>","mithep::BitMaskT<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMaskT<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMaskT<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMaskTlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0)->GetClass();
      mithepcLcLBitMaskTlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMaskTlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLBitMaskTlEULong64_tgR_Dictionary();
   static void mithepcLcLBitMaskTlEULong64_tgR_TClassManip(TClass*);
   static void *new_mithepcLcLBitMaskTlEULong64_tgR(void *p = 0);
   static void *newArray_mithepcLcLBitMaskTlEULong64_tgR(Long_t size, void *p);
   static void delete_mithepcLcLBitMaskTlEULong64_tgR(void *p);
   static void deleteArray_mithepcLcLBitMaskTlEULong64_tgR(void *p);
   static void destruct_mithepcLcLBitMaskTlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::BitMaskT<ULong64_t>*)
   {
      ::mithep::BitMaskT<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::BitMaskT<ULong64_t> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::BitMaskT<ULong64_t>", ::mithep::BitMaskT<ULong64_t>::Class_Version(), "MitAna/DataCont/interface/BitMask.h", 70,
                  typeid(::mithep::BitMaskT<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLBitMaskTlEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::BitMaskT<ULong64_t>) );
      instance.SetNew(&new_mithepcLcLBitMaskTlEULong64_tgR);
      instance.SetNewArray(&newArray_mithepcLcLBitMaskTlEULong64_tgR);
      instance.SetDelete(&delete_mithepcLcLBitMaskTlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLBitMaskTlEULong64_tgR);
      instance.SetDestructor(&destruct_mithepcLcLBitMaskTlEULong64_tgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::BitMaskT<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::mithep::BitMaskT<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLBitMaskTlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0)->GetClass();
      mithepcLcLBitMaskTlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLBitMaskTlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLCollectionlETObjectgR_Dictionary();
   static void mithepcLcLCollectionlETObjectgR_TClassManip(TClass*);
   static void delete_mithepcLcLCollectionlETObjectgR(void *p);
   static void deleteArray_mithepcLcLCollectionlETObjectgR(void *p);
   static void destruct_mithepcLcLCollectionlETObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Collection<TObject>*)
   {
      ::mithep::Collection<TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Collection<TObject> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Collection<TObject>", ::mithep::Collection<TObject>::Class_Version(), "MitAna/DataCont/interface/Collection.h", 16,
                  typeid(::mithep::Collection<TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLCollectionlETObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Collection<TObject>) );
      instance.SetDelete(&delete_mithepcLcLCollectionlETObjectgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLCollectionlETObjectgR);
      instance.SetDestructor(&destruct_mithepcLcLCollectionlETObjectgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Collection<TObject>*)
   {
      return GenerateInitInstanceLocal((::mithep::Collection<TObject>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLCollectionlETObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0)->GetClass();
      mithepcLcLCollectionlETObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLCollectionlETObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLCollectionlETObjStringgR_Dictionary();
   static void mithepcLcLCollectionlETObjStringgR_TClassManip(TClass*);
   static void delete_mithepcLcLCollectionlETObjStringgR(void *p);
   static void deleteArray_mithepcLcLCollectionlETObjStringgR(void *p);
   static void destruct_mithepcLcLCollectionlETObjStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Collection<TObjString>*)
   {
      ::mithep::Collection<TObjString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Collection<TObjString> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Collection<TObjString>", ::mithep::Collection<TObjString>::Class_Version(), "MitAna/DataCont/interface/Collection.h", 16,
                  typeid(::mithep::Collection<TObjString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLCollectionlETObjStringgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Collection<TObjString>) );
      instance.SetDelete(&delete_mithepcLcLCollectionlETObjStringgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLCollectionlETObjStringgR);
      instance.SetDestructor(&destruct_mithepcLcLCollectionlETObjStringgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Collection<TObjString>*)
   {
      return GenerateInitInstanceLocal((::mithep::Collection<TObjString>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLCollectionlETObjStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0)->GetClass();
      mithepcLcLCollectionlETObjStringgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLCollectionlETObjStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLCollectionlEmithepcLcLProcIDRefgR_Dictionary();
   static void mithepcLcLCollectionlEmithepcLcLProcIDRefgR_TClassManip(TClass*);
   static void delete_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p);
   static void deleteArray_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p);
   static void destruct_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::Collection<mithep::ProcIDRef>*)
   {
      ::mithep::Collection<mithep::ProcIDRef> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::Collection<mithep::ProcIDRef> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::Collection<mithep::ProcIDRef>", ::mithep::Collection<mithep::ProcIDRef>::Class_Version(), "MitAna/DataCont/interface/Collection.h", 16,
                  typeid(::mithep::Collection<mithep::ProcIDRef>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLCollectionlEmithepcLcLProcIDRefgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::Collection<mithep::ProcIDRef>) );
      instance.SetDelete(&delete_mithepcLcLCollectionlEmithepcLcLProcIDRefgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLCollectionlEmithepcLcLProcIDRefgR);
      instance.SetDestructor(&destruct_mithepcLcLCollectionlEmithepcLcLProcIDRefgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::Collection<mithep::ProcIDRef>*)
   {
      return GenerateInitInstanceLocal((::mithep::Collection<mithep::ProcIDRef>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLCollectionlEmithepcLcLProcIDRefgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0)->GetClass();
      mithepcLcLCollectionlEmithepcLcLProcIDRefgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLCollectionlEmithepcLcLProcIDRefgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEdoublecOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEdoublecOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEdoublecOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<double,false>*)
   {
      ::mithep::FastArrayBasic<double,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<double,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<double,false>", ::mithep::FastArrayBasic<double,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<double,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEdoublecOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<double,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEdoublecOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEdoublecOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEdoublecOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEdoublecOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<double,false>","mithep::FastArrayBasic<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<double,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<double,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEdoublecOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEdoublecOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEdoublecOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<Double32_t,true>*)
   {
      ::mithep::FastArrayBasic<Double32_t,true> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<Double32_t,true> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<Double32_t,true>", ::mithep::FastArrayBasic<Double32_t,true>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<Double32_t,true>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<Double32_t,true>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<Double32_t,true>","mithep::FastArrayBasic<Double32_t,kTRUE>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<Double32_t,true>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<Double32_t,true>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEDouble32_tcOtruegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEintcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEintcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEintcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEintcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<int,false>*)
   {
      ::mithep::FastArrayBasic<int,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<int,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<int,false>", ::mithep::FastArrayBasic<int,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<int,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEintcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<int,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEintcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEintcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEintcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEintcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEintcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEintcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<int,false>","mithep::FastArrayBasic<Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<int,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<int,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEintcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEintcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEintcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<unsigned int,false>*)
   {
      ::mithep::FastArrayBasic<unsigned int,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<unsigned int,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<unsigned int,false>", ::mithep::FastArrayBasic<unsigned int,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<unsigned int,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<unsigned int,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<unsigned int,false>","mithep::FastArrayBasic<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<unsigned int,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<unsigned int,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEshortcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEshortcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEshortcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEshortcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<short,false>*)
   {
      ::mithep::FastArrayBasic<short,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<short,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<short,false>", ::mithep::FastArrayBasic<short,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<short,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEshortcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<short,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEshortcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEshortcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEshortcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEshortcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEshortcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEshortcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<short,false>","mithep::FastArrayBasic<Short_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<short,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<short,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEshortcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEshortcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEshortcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<unsigned short,false>*)
   {
      ::mithep::FastArrayBasic<unsigned short,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<unsigned short,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<unsigned short,false>", ::mithep::FastArrayBasic<unsigned short,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<unsigned short,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<unsigned short,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<unsigned short,false>","mithep::FastArrayBasic<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<unsigned short,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<unsigned short,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEcharcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEcharcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEcharcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEcharcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<char,false>*)
   {
      ::mithep::FastArrayBasic<char,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<char,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<char,false>", ::mithep::FastArrayBasic<char,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<char,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEcharcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<char,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEcharcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEcharcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEcharcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEcharcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEcharcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEcharcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<char,false>","mithep::FastArrayBasic<Char_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<char,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<char,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEcharcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEcharcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEcharcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<unsigned char,false>*)
   {
      ::mithep::FastArrayBasic<unsigned char,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<unsigned char,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<unsigned char,false>", ::mithep::FastArrayBasic<unsigned char,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<unsigned char,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<unsigned char,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<unsigned char,false>","mithep::FastArrayBasic<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<unsigned char,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<unsigned char,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArrayBasiclEboolcOfalsegR_Dictionary();
   static void mithepcLcLFastArrayBasiclEboolcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLFastArrayBasiclEboolcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p);
   static void deleteArray_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p);
   static void destruct_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p);
   static void streamer_mithepcLcLFastArrayBasiclEboolcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArrayBasic<bool,false>*)
   {
      ::mithep::FastArrayBasic<bool,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArrayBasic<bool,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArrayBasic<bool,false>", ::mithep::FastArrayBasic<bool,false>::Class_Version(), "MitAna/DataCont/interface/FastArrayBasic.h", 37,
                  typeid(::mithep::FastArrayBasic<bool,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArrayBasiclEboolcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArrayBasic<bool,false>) );
      instance.SetNew(&new_mithepcLcLFastArrayBasiclEboolcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLFastArrayBasiclEboolcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLFastArrayBasiclEboolcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArrayBasiclEboolcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLFastArrayBasiclEboolcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArrayBasiclEboolcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::FastArrayBasic<bool,false>","mithep::FastArrayBasic<Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArrayBasic<bool,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArrayBasic<bool,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArrayBasiclEboolcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0)->GetClass();
      mithepcLcLFastArrayBasiclEboolcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArrayBasiclEboolcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<double,false>*)
   {
      ::mithep::NamedFastArrayBasic<double,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<double,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<double,false>", ::mithep::NamedFastArrayBasic<double,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<double,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<double,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<double,false>","mithep::NamedFastArrayBasic<Double_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<double,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<double,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<Double32_t,true>*)
   {
      ::mithep::NamedFastArrayBasic<Double32_t,true> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<Double32_t,true> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<Double32_t,true>", ::mithep::NamedFastArrayBasic<Double32_t,true>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<Double32_t,true>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<Double32_t,true>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<Double32_t,true>","mithep::NamedFastArrayBasic<Double32_t,kTRUE>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<Double32_t,true>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<Double32_t,true>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEintcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEintcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<int,false>*)
   {
      ::mithep::NamedFastArrayBasic<int,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<int,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<int,false>", ::mithep::NamedFastArrayBasic<int,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<int,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEintcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<int,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEintcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<int,false>","mithep::NamedFastArrayBasic<Int_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<int,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<int,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEintcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEintcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEintcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<unsigned int,false>*)
   {
      ::mithep::NamedFastArrayBasic<unsigned int,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<unsigned int,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<unsigned int,false>", ::mithep::NamedFastArrayBasic<unsigned int,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<unsigned int,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<unsigned int,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<unsigned int,false>","mithep::NamedFastArrayBasic<UInt_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<unsigned int,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<unsigned int,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<short,false>*)
   {
      ::mithep::NamedFastArrayBasic<short,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<short,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<short,false>", ::mithep::NamedFastArrayBasic<short,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<short,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<short,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<short,false>","mithep::NamedFastArrayBasic<Short_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<short,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<short,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEshortcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<unsigned short,false>*)
   {
      ::mithep::NamedFastArrayBasic<unsigned short,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<unsigned short,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<unsigned short,false>", ::mithep::NamedFastArrayBasic<unsigned short,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<unsigned short,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<unsigned short,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<unsigned short,false>","mithep::NamedFastArrayBasic<UShort_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<unsigned short,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<unsigned short,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<char,false>*)
   {
      ::mithep::NamedFastArrayBasic<char,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<char,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<char,false>", ::mithep::NamedFastArrayBasic<char,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<char,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<char,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<char,false>","mithep::NamedFastArrayBasic<Char_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<char,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<char,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEcharcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<unsigned char,false>*)
   {
      ::mithep::NamedFastArrayBasic<unsigned char,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<unsigned char,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<unsigned char,false>", ::mithep::NamedFastArrayBasic<unsigned char,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<unsigned char,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<unsigned char,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<unsigned char,false>","mithep::NamedFastArrayBasic<UChar_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<unsigned char,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<unsigned char,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_Dictionary();
   static void mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_TClassManip(TClass*);
   static void *new_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p = 0);
   static void *newArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(Long_t size, void *p);
   static void delete_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p);
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p);
   static void destruct_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p);
   static void streamer_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::NamedFastArrayBasic<bool,false>*)
   {
      ::mithep::NamedFastArrayBasic<bool,false> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::NamedFastArrayBasic<bool,false> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::NamedFastArrayBasic<bool,false>", ::mithep::NamedFastArrayBasic<bool,false>::Class_Version(), "MitAna/DataCont/interface/NamedFastArrayBasic.h", 16,
                  typeid(::mithep::NamedFastArrayBasic<bool,false>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::NamedFastArrayBasic<bool,false>) );
      instance.SetNew(&new_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);
      instance.SetNewArray(&newArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);
      instance.SetDelete(&delete_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);
      instance.SetDestructor(&destruct_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);
      instance.SetStreamerFunc(&streamer_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR);

      ::ROOT::AddClassAlternate("mithep::NamedFastArrayBasic<bool,false>","mithep::NamedFastArrayBasic<Bool_t>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::NamedFastArrayBasic<bool,false>*)
   {
      return GenerateInitInstanceLocal((::mithep::NamedFastArrayBasic<bool,false>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0)->GetClass();
      mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLNamedFastArrayBasiclEboolcOfalsegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArraylETObjStringgR_Dictionary();
   static void mithepcLcLFastArraylETObjStringgR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArraylETObjStringgR(void *p = 0);
   static void *newArray_mithepcLcLFastArraylETObjStringgR(Long_t size, void *p);
   static void delete_mithepcLcLFastArraylETObjStringgR(void *p);
   static void deleteArray_mithepcLcLFastArraylETObjStringgR(void *p);
   static void destruct_mithepcLcLFastArraylETObjStringgR(void *p);
   static void streamer_mithepcLcLFastArraylETObjStringgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArray<TObjString>*)
   {
      ::mithep::FastArray<TObjString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArray<TObjString> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArray<TObjString>", ::mithep::FastArray<TObjString>::Class_Version(), "MitAna/DataCont/interface/FastArray.h", 28,
                  typeid(::mithep::FastArray<TObjString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArraylETObjStringgR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArray<TObjString>) );
      instance.SetNew(&new_mithepcLcLFastArraylETObjStringgR);
      instance.SetNewArray(&newArray_mithepcLcLFastArraylETObjStringgR);
      instance.SetDelete(&delete_mithepcLcLFastArraylETObjStringgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArraylETObjStringgR);
      instance.SetDestructor(&destruct_mithepcLcLFastArraylETObjStringgR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArraylETObjStringgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArray<TObjString>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArray<TObjString>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArraylETObjStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0)->GetClass();
      mithepcLcLFastArraylETObjStringgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArraylETObjStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLFastArraylEmithepcLcLProcIDRefgR_Dictionary();
   static void mithepcLcLFastArraylEmithepcLcLProcIDRefgR_TClassManip(TClass*);
   static void *new_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p = 0);
   static void *newArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(Long_t size, void *p);
   static void delete_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p);
   static void deleteArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p);
   static void destruct_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p);
   static void streamer_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::FastArray<mithep::ProcIDRef>*)
   {
      ::mithep::FastArray<mithep::ProcIDRef> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::FastArray<mithep::ProcIDRef> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::FastArray<mithep::ProcIDRef>", ::mithep::FastArray<mithep::ProcIDRef>::Class_Version(), "MitAna/DataCont/interface/FastArray.h", 28,
                  typeid(::mithep::FastArray<mithep::ProcIDRef>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLFastArraylEmithepcLcLProcIDRefgR_Dictionary, isa_proxy, 17,
                  sizeof(::mithep::FastArray<mithep::ProcIDRef>) );
      instance.SetNew(&new_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      instance.SetNewArray(&newArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      instance.SetDelete(&delete_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      instance.SetDestructor(&destruct_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      instance.SetStreamerFunc(&streamer_mithepcLcLFastArraylEmithepcLcLProcIDRefgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::FastArray<mithep::ProcIDRef>*)
   {
      return GenerateInitInstanceLocal((::mithep::FastArray<mithep::ProcIDRef>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLFastArraylEmithepcLcLProcIDRefgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0)->GetClass();
      mithepcLcLFastArraylEmithepcLcLProcIDRefgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLFastArraylEmithepcLcLProcIDRefgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLCacheFlag(void *p = 0);
   static void *newArray_mithepcLcLCacheFlag(Long_t size, void *p);
   static void delete_mithepcLcLCacheFlag(void *p);
   static void deleteArray_mithepcLcLCacheFlag(void *p);
   static void destruct_mithepcLcLCacheFlag(void *p);
   static void streamer_mithepcLcLCacheFlag(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::CacheFlag*)
   {
      ::mithep::CacheFlag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::CacheFlag >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::CacheFlag", ::mithep::CacheFlag::Class_Version(), "MitAna/DataCont/interface/CacheFlag.h", 16,
                  typeid(::mithep::CacheFlag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::CacheFlag::Dictionary, isa_proxy, 17,
                  sizeof(::mithep::CacheFlag) );
      instance.SetNew(&new_mithepcLcLCacheFlag);
      instance.SetNewArray(&newArray_mithepcLcLCacheFlag);
      instance.SetDelete(&delete_mithepcLcLCacheFlag);
      instance.SetDeleteArray(&deleteArray_mithepcLcLCacheFlag);
      instance.SetDestructor(&destruct_mithepcLcLCacheFlag);
      instance.SetStreamerFunc(&streamer_mithepcLcLCacheFlag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::CacheFlag*)
   {
      return GenerateInitInstanceLocal((::mithep::CacheFlag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::CacheFlag*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *mithepcLcLObjArraylETObjectgR_Dictionary();
   static void mithepcLcLObjArraylETObjectgR_TClassManip(TClass*);
   static void *new_mithepcLcLObjArraylETObjectgR(void *p = 0);
   static void *newArray_mithepcLcLObjArraylETObjectgR(Long_t size, void *p);
   static void delete_mithepcLcLObjArraylETObjectgR(void *p);
   static void deleteArray_mithepcLcLObjArraylETObjectgR(void *p);
   static void destruct_mithepcLcLObjArraylETObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::ObjArray<TObject>*)
   {
      ::mithep::ObjArray<TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::ObjArray<TObject> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::ObjArray<TObject>", ::mithep::ObjArray<TObject>::Class_Version(), "MitAna/DataCont/interface/ObjArray.h", 18,
                  typeid(::mithep::ObjArray<TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &mithepcLcLObjArraylETObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(::mithep::ObjArray<TObject>) );
      instance.SetNew(&new_mithepcLcLObjArraylETObjectgR);
      instance.SetNewArray(&newArray_mithepcLcLObjArraylETObjectgR);
      instance.SetDelete(&delete_mithepcLcLObjArraylETObjectgR);
      instance.SetDeleteArray(&deleteArray_mithepcLcLObjArraylETObjectgR);
      instance.SetDestructor(&destruct_mithepcLcLObjArraylETObjectgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::ObjArray<TObject>*)
   {
      return GenerateInitInstanceLocal((::mithep::ObjArray<TObject>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *mithepcLcLObjArraylETObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0)->GetClass();
      mithepcLcLObjArraylETObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void mithepcLcLObjArraylETObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLProcIDRef(void *p = 0);
   static void *newArray_mithepcLcLProcIDRef(Long_t size, void *p);
   static void delete_mithepcLcLProcIDRef(void *p);
   static void deleteArray_mithepcLcLProcIDRef(void *p);
   static void destruct_mithepcLcLProcIDRef(void *p);
   static void streamer_mithepcLcLProcIDRef(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::ProcIDRef*)
   {
      ::mithep::ProcIDRef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::ProcIDRef >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::ProcIDRef", ::mithep::ProcIDRef::Class_Version(), "MitAna/DataCont/interface/ProcIDRef.h", 19,
                  typeid(::mithep::ProcIDRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::ProcIDRef::Dictionary, isa_proxy, 17,
                  sizeof(::mithep::ProcIDRef) );
      instance.SetNew(&new_mithepcLcLProcIDRef);
      instance.SetNewArray(&newArray_mithepcLcLProcIDRef);
      instance.SetDelete(&delete_mithepcLcLProcIDRef);
      instance.SetDeleteArray(&deleteArray_mithepcLcLProcIDRef);
      instance.SetDestructor(&destruct_mithepcLcLProcIDRef);
      instance.SetStreamerFunc(&streamer_mithepcLcLProcIDRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::ProcIDRef*)
   {
      return GenerateInitInstanceLocal((::mithep::ProcIDRef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::ProcIDRef*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLRunLumiSet(void *p = 0);
   static void *newArray_mithepcLcLRunLumiSet(Long_t size, void *p);
   static void delete_mithepcLcLRunLumiSet(void *p);
   static void deleteArray_mithepcLcLRunLumiSet(void *p);
   static void destruct_mithepcLcLRunLumiSet(void *p);
   static Long64_t merge_mithepcLcLRunLumiSet(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::RunLumiSet*)
   {
      ::mithep::RunLumiSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::RunLumiSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::RunLumiSet", ::mithep::RunLumiSet::Class_Version(), "MitAna/DataCont/interface/RunLumiSet.h", 21,
                  typeid(::mithep::RunLumiSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::RunLumiSet::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::RunLumiSet) );
      instance.SetNew(&new_mithepcLcLRunLumiSet);
      instance.SetNewArray(&newArray_mithepcLcLRunLumiSet);
      instance.SetDelete(&delete_mithepcLcLRunLumiSet);
      instance.SetDeleteArray(&deleteArray_mithepcLcLRunLumiSet);
      instance.SetDestructor(&destruct_mithepcLcLRunLumiSet);
      instance.SetMerge(&merge_mithepcLcLRunLumiSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::RunLumiSet*)
   {
      return GenerateInitInstanceLocal((::mithep::RunLumiSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::RunLumiSet*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_mithepcLcLRunLumiRangeMap(void *p = 0);
   static void *newArray_mithepcLcLRunLumiRangeMap(Long_t size, void *p);
   static void delete_mithepcLcLRunLumiRangeMap(void *p);
   static void deleteArray_mithepcLcLRunLumiRangeMap(void *p);
   static void destruct_mithepcLcLRunLumiRangeMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::mithep::RunLumiRangeMap*)
   {
      ::mithep::RunLumiRangeMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::mithep::RunLumiRangeMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("mithep::RunLumiRangeMap", ::mithep::RunLumiRangeMap::Class_Version(), "MitAna/DataCont/interface/RunLumiRangeMap.h", 22,
                  typeid(::mithep::RunLumiRangeMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::mithep::RunLumiRangeMap::Dictionary, isa_proxy, 4,
                  sizeof(::mithep::RunLumiRangeMap) );
      instance.SetNew(&new_mithepcLcLRunLumiRangeMap);
      instance.SetNewArray(&newArray_mithepcLcLRunLumiRangeMap);
      instance.SetDelete(&delete_mithepcLcLRunLumiRangeMap);
      instance.SetDeleteArray(&deleteArray_mithepcLcLRunLumiRangeMap);
      instance.SetDestructor(&destruct_mithepcLcLRunLumiRangeMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::mithep::RunLumiRangeMap*)
   {
      return GenerateInitInstanceLocal((::mithep::RunLumiRangeMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::mithep::RunLumiRangeMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr BaseCollection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BaseCollection::Class_Name()
{
   return "mithep::BaseCollection";
}

//______________________________________________________________________________
const char *BaseCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BaseCollection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BaseCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BaseCollection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BaseCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BaseCollection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BaseCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BaseCollection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<3>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<3>::Class_Name()
{
   return "mithep::BitMask<3>";
}

//______________________________________________________________________________
template <> const char *BitMask<3>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<3>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<3>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<3>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<3>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<6>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<6>::Class_Name()
{
   return "mithep::BitMask<6>";
}

//______________________________________________________________________________
template <> const char *BitMask<6>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<6>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<6>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<6>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<6>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<16>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<16>::Class_Name()
{
   return "mithep::BitMask<16>";
}

//______________________________________________________________________________
template <> const char *BitMask<16>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<16>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<16>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<16>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<16>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<32>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<32>::Class_Name()
{
   return "mithep::BitMask<32>";
}

//______________________________________________________________________________
template <> const char *BitMask<32>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<32>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<32>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<32>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<32>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<128>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<128>::Class_Name()
{
   return "mithep::BitMask<128>";
}

//______________________________________________________________________________
template <> const char *BitMask<128>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<128>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<128>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<128>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<128>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<8>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<8>::Class_Name()
{
   return "mithep::BitMask<8>";
}

//______________________________________________________________________________
template <> const char *BitMask<8>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<8>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<8>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<8>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<8>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMask<2>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMask<2>::Class_Name()
{
   return "mithep::BitMask<2>";
}

//______________________________________________________________________________
template <> const char *BitMask<2>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMask<2>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMask<2>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMask<2>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMask<2>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMaskT<unsigned char>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned char>::Class_Name()
{
   return "mithep::BitMaskT<unsigned char>";
}

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned char>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMaskT<unsigned char>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned char>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned char>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned char>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMaskT<unsigned short>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned short>::Class_Name()
{
   return "mithep::BitMaskT<unsigned short>";
}

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMaskT<unsigned short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned short>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMaskT<unsigned int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned int>::Class_Name()
{
   return "mithep::BitMaskT<unsigned int>";
}

//______________________________________________________________________________
template <> const char *BitMaskT<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMaskT<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMaskT<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<unsigned int>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr BitMaskT<ULong64_t>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *BitMaskT<ULong64_t>::Class_Name()
{
   return "mithep::BitMaskT<ULong64_t>";
}

//______________________________________________________________________________
template <> const char *BitMaskT<ULong64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int BitMaskT<ULong64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *BitMaskT<ULong64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *BitMaskT<ULong64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::BitMaskT<ULong64_t>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr Collection<TObject>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Collection<TObject>::Class_Name()
{
   return "mithep::Collection<TObject>";
}

//______________________________________________________________________________
template <> const char *Collection<TObject>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Collection<TObject>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Collection<TObject>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Collection<TObject>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObject>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr Collection<TObjString>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Collection<TObjString>::Class_Name()
{
   return "mithep::Collection<TObjString>";
}

//______________________________________________________________________________
template <> const char *Collection<TObjString>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Collection<TObjString>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Collection<TObjString>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Collection<TObjString>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<TObjString>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr Collection<mithep::ProcIDRef>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *Collection<mithep::ProcIDRef>::Class_Name()
{
   return "mithep::Collection<mithep::ProcIDRef>";
}

//______________________________________________________________________________
template <> const char *Collection<mithep::ProcIDRef>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int Collection<mithep::ProcIDRef>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *Collection<mithep::ProcIDRef>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *Collection<mithep::ProcIDRef>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::Collection<mithep::ProcIDRef>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<double,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<double,false>::Class_Name()
{
   return "mithep::FastArrayBasic<double,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<double,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<double,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<double,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<double,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<double,true>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<double,true>::Class_Name()
{
   return "mithep::FastArrayBasic<double,true>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<double,true>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,true>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<double,true>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,true>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<double,true>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,true>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<double,true>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<double,true>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<int,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<int,false>::Class_Name()
{
   return "mithep::FastArrayBasic<int,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<int,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<int,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<int,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<int,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<int,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<unsigned int,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned int,false>::Class_Name()
{
   return "mithep::FastArrayBasic<unsigned int,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned int,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<unsigned int,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned int,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned int,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned int,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<short,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<short,false>::Class_Name()
{
   return "mithep::FastArrayBasic<short,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<short,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<short,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<short,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<short,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<short,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<unsigned short,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned short,false>::Class_Name()
{
   return "mithep::FastArrayBasic<unsigned short,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned short,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<unsigned short,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned short,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned short,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned short,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<char,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<char,false>::Class_Name()
{
   return "mithep::FastArrayBasic<char,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<char,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<char,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<char,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<char,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<char,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<unsigned char,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned char,false>::Class_Name()
{
   return "mithep::FastArrayBasic<unsigned char,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<unsigned char,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<unsigned char,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned char,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<unsigned char,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<unsigned char,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArrayBasic<bool,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArrayBasic<bool,false>::Class_Name()
{
   return "mithep::FastArrayBasic<bool,false>";
}

//______________________________________________________________________________
template <> const char *FastArrayBasic<bool,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArrayBasic<bool,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<bool,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArrayBasic<bool,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArrayBasic<bool,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<double,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<double,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<double,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<double,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<double,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<double,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<double,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<double,true>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<double,true>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<double,true>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<double,true>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,true>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<double,true>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,true>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<double,true>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,true>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<double,true>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<double,true>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<int,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<int,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<int,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<int,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<int,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<int,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<int,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<int,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<unsigned int,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned int,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<unsigned int,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned int,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<unsigned int,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned int,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned int,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned int,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<short,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<short,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<short,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<short,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<short,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<short,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<short,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<short,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<unsigned short,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned short,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<unsigned short,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned short,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<unsigned short,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned short,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned short,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned short,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<char,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<char,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<char,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<char,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<char,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<char,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<char,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<char,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<unsigned char,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned char,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<unsigned char,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<unsigned char,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<unsigned char,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned char,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<unsigned char,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<unsigned char,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr NamedFastArrayBasic<bool,false>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<bool,false>::Class_Name()
{
   return "mithep::NamedFastArrayBasic<bool,false>";
}

//______________________________________________________________________________
template <> const char *NamedFastArrayBasic<bool,false>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int NamedFastArrayBasic<bool,false>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<bool,false>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *NamedFastArrayBasic<bool,false>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::NamedFastArrayBasic<bool,false>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArray<TObjString>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArray<TObjString>::Class_Name()
{
   return "mithep::FastArray<TObjString>";
}

//______________________________________________________________________________
template <> const char *FastArray<TObjString>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArray<TObjString>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArray<TObjString>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArray<TObjString>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<TObjString>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr FastArray<mithep::ProcIDRef>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *FastArray<mithep::ProcIDRef>::Class_Name()
{
   return "mithep::FastArray<mithep::ProcIDRef>";
}

//______________________________________________________________________________
template <> const char *FastArray<mithep::ProcIDRef>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int FastArray<mithep::ProcIDRef>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *FastArray<mithep::ProcIDRef>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *FastArray<mithep::ProcIDRef>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::FastArray<mithep::ProcIDRef>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr CacheFlag::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CacheFlag::Class_Name()
{
   return "mithep::CacheFlag";
}

//______________________________________________________________________________
const char *CacheFlag::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::CacheFlag*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CacheFlag::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::CacheFlag*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CacheFlag::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::CacheFlag*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CacheFlag::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::CacheFlag*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
template <> atomic_TClass_ptr ObjArray<TObject>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *ObjArray<TObject>::Class_Name()
{
   return "mithep::ObjArray<TObject>";
}

//______________________________________________________________________________
template <> const char *ObjArray<TObject>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int ObjArray<TObject>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *ObjArray<TObject>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *ObjArray<TObject>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::ObjArray<TObject>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr ProcIDRef::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProcIDRef::Class_Name()
{
   return "mithep::ProcIDRef";
}

//______________________________________________________________________________
const char *ProcIDRef::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::ProcIDRef*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProcIDRef::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::ProcIDRef*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProcIDRef::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::ProcIDRef*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProcIDRef::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::ProcIDRef*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr RunLumiSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RunLumiSet::Class_Name()
{
   return "mithep::RunLumiSet";
}

//______________________________________________________________________________
const char *RunLumiSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RunLumiSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunLumiSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunLumiSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiSet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace mithep {
//______________________________________________________________________________
atomic_TClass_ptr RunLumiRangeMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RunLumiRangeMap::Class_Name()
{
   return "mithep::RunLumiRangeMap";
}

//______________________________________________________________________________
const char *RunLumiRangeMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiRangeMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RunLumiRangeMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiRangeMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunLumiRangeMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiRangeMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunLumiRangeMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::mithep::RunLumiRangeMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEunsignedsPintcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,unsigned int> : new pair<unsigned int,unsigned int>;
   }
   static void *newArray_pairlEunsignedsPintcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,unsigned int>[nElements] : new pair<unsigned int,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEunsignedsPintcOunsignedsPintgR(void *p) {
      delete ((pair<unsigned int,unsigned int>*)p);
   }
   static void deleteArray_pairlEunsignedsPintcOunsignedsPintgR(void *p) {
      delete [] ((pair<unsigned int,unsigned int>*)p);
   }
   static void destruct_pairlEunsignedsPintcOunsignedsPintgR(void *p) {
      typedef pair<unsigned int,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<unsigned int,unsigned int>

namespace mithep {
//______________________________________________________________________________
void BaseCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BaseCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BaseCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BaseCollection::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrapper around operator delete
   static void delete_mithepcLcLBaseCollection(void *p) {
      delete ((::mithep::BaseCollection*)p);
   }
   static void deleteArray_mithepcLcLBaseCollection(void *p) {
      delete [] ((::mithep::BaseCollection*)p);
   }
   static void destruct_mithepcLcLBaseCollection(void *p) {
      typedef ::mithep::BaseCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BaseCollection

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<3>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<3>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<3>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<3>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<3> : new ::mithep::BitMask<3>;
   }
   static void *newArray_mithepcLcLBitMasklE3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<3>[nElements] : new ::mithep::BitMask<3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE3gR(void *p) {
      delete ((::mithep::BitMask<3>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE3gR(void *p) {
      delete [] ((::mithep::BitMask<3>*)p);
   }
   static void destruct_mithepcLcLBitMasklE3gR(void *p) {
      typedef ::mithep::BitMask<3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<3>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<6>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<6>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<6>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<6>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE6gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<6> : new ::mithep::BitMask<6>;
   }
   static void *newArray_mithepcLcLBitMasklE6gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<6>[nElements] : new ::mithep::BitMask<6>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE6gR(void *p) {
      delete ((::mithep::BitMask<6>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE6gR(void *p) {
      delete [] ((::mithep::BitMask<6>*)p);
   }
   static void destruct_mithepcLcLBitMasklE6gR(void *p) {
      typedef ::mithep::BitMask<6> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<6>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<16>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<16>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<16>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<16>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE16gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<16> : new ::mithep::BitMask<16>;
   }
   static void *newArray_mithepcLcLBitMasklE16gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<16>[nElements] : new ::mithep::BitMask<16>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE16gR(void *p) {
      delete ((::mithep::BitMask<16>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE16gR(void *p) {
      delete [] ((::mithep::BitMask<16>*)p);
   }
   static void destruct_mithepcLcLBitMasklE16gR(void *p) {
      typedef ::mithep::BitMask<16> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<16>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<32>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<32>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<32>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<32>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE32gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<32> : new ::mithep::BitMask<32>;
   }
   static void *newArray_mithepcLcLBitMasklE32gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<32>[nElements] : new ::mithep::BitMask<32>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE32gR(void *p) {
      delete ((::mithep::BitMask<32>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE32gR(void *p) {
      delete [] ((::mithep::BitMask<32>*)p);
   }
   static void destruct_mithepcLcLBitMasklE32gR(void *p) {
      typedef ::mithep::BitMask<32> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<32>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<128>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<128>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<128>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<128>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE128gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<128> : new ::mithep::BitMask<128>;
   }
   static void *newArray_mithepcLcLBitMasklE128gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<128>[nElements] : new ::mithep::BitMask<128>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE128gR(void *p) {
      delete ((::mithep::BitMask<128>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE128gR(void *p) {
      delete [] ((::mithep::BitMask<128>*)p);
   }
   static void destruct_mithepcLcLBitMasklE128gR(void *p) {
      typedef ::mithep::BitMask<128> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<128>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<8>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<8>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<8>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<8>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE8gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<8> : new ::mithep::BitMask<8>;
   }
   static void *newArray_mithepcLcLBitMasklE8gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<8>[nElements] : new ::mithep::BitMask<8>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE8gR(void *p) {
      delete ((::mithep::BitMask<8>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE8gR(void *p) {
      delete [] ((::mithep::BitMask<8>*)p);
   }
   static void destruct_mithepcLcLBitMasklE8gR(void *p) {
      typedef ::mithep::BitMask<8> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<8>

namespace mithep {
//______________________________________________________________________________
template <> void BitMask<2>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMask<2>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMask<2>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMask<2>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMasklE2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<2> : new ::mithep::BitMask<2>;
   }
   static void *newArray_mithepcLcLBitMasklE2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMask<2>[nElements] : new ::mithep::BitMask<2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMasklE2gR(void *p) {
      delete ((::mithep::BitMask<2>*)p);
   }
   static void deleteArray_mithepcLcLBitMasklE2gR(void *p) {
      delete [] ((::mithep::BitMask<2>*)p);
   }
   static void destruct_mithepcLcLBitMasklE2gR(void *p) {
      typedef ::mithep::BitMask<2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMask<2>

namespace mithep {
//______________________________________________________________________________
template <> void BitMaskT<unsigned char>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMaskT<unsigned char>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMaskT<unsigned char>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMaskT<unsigned char>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMaskTlEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned char> : new ::mithep::BitMaskT<unsigned char>;
   }
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned char>[nElements] : new ::mithep::BitMaskT<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMaskTlEunsignedsPchargR(void *p) {
      delete ((::mithep::BitMaskT<unsigned char>*)p);
   }
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPchargR(void *p) {
      delete [] ((::mithep::BitMaskT<unsigned char>*)p);
   }
   static void destruct_mithepcLcLBitMaskTlEunsignedsPchargR(void *p) {
      typedef ::mithep::BitMaskT<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMaskT<unsigned char>

namespace mithep {
//______________________________________________________________________________
template <> void BitMaskT<unsigned short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMaskT<unsigned short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMaskT<unsigned short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMaskT<unsigned short>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned short> : new ::mithep::BitMaskT<unsigned short>;
   }
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned short>[nElements] : new ::mithep::BitMaskT<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p) {
      delete ((::mithep::BitMaskT<unsigned short>*)p);
   }
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p) {
      delete [] ((::mithep::BitMaskT<unsigned short>*)p);
   }
   static void destruct_mithepcLcLBitMaskTlEunsignedsPshortgR(void *p) {
      typedef ::mithep::BitMaskT<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMaskT<unsigned short>

namespace mithep {
//______________________________________________________________________________
template <> void BitMaskT<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMaskT<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMaskT<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMaskT<unsigned int>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMaskTlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned int> : new ::mithep::BitMaskT<unsigned int>;
   }
   static void *newArray_mithepcLcLBitMaskTlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<unsigned int>[nElements] : new ::mithep::BitMaskT<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMaskTlEunsignedsPintgR(void *p) {
      delete ((::mithep::BitMaskT<unsigned int>*)p);
   }
   static void deleteArray_mithepcLcLBitMaskTlEunsignedsPintgR(void *p) {
      delete [] ((::mithep::BitMaskT<unsigned int>*)p);
   }
   static void destruct_mithepcLcLBitMaskTlEunsignedsPintgR(void *p) {
      typedef ::mithep::BitMaskT<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMaskT<unsigned int>

namespace mithep {
//______________________________________________________________________________
template <> void BitMaskT<ULong64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::BitMaskT<ULong64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::BitMaskT<ULong64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::BitMaskT<ULong64_t>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLBitMaskTlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<ULong64_t> : new ::mithep::BitMaskT<ULong64_t>;
   }
   static void *newArray_mithepcLcLBitMaskTlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::BitMaskT<ULong64_t>[nElements] : new ::mithep::BitMaskT<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLBitMaskTlEULong64_tgR(void *p) {
      delete ((::mithep::BitMaskT<ULong64_t>*)p);
   }
   static void deleteArray_mithepcLcLBitMaskTlEULong64_tgR(void *p) {
      delete [] ((::mithep::BitMaskT<ULong64_t>*)p);
   }
   static void destruct_mithepcLcLBitMaskTlEULong64_tgR(void *p) {
      typedef ::mithep::BitMaskT<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::BitMaskT<ULong64_t>

namespace mithep {
//______________________________________________________________________________
template <> void Collection<TObject>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Collection<TObject>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Collection<TObject>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Collection<TObject>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrapper around operator delete
   static void delete_mithepcLcLCollectionlETObjectgR(void *p) {
      delete ((::mithep::Collection<TObject>*)p);
   }
   static void deleteArray_mithepcLcLCollectionlETObjectgR(void *p) {
      delete [] ((::mithep::Collection<TObject>*)p);
   }
   static void destruct_mithepcLcLCollectionlETObjectgR(void *p) {
      typedef ::mithep::Collection<TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Collection<TObject>

namespace mithep {
//______________________________________________________________________________
template <> void Collection<TObjString>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Collection<TObjString>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Collection<TObjString>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Collection<TObjString>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrapper around operator delete
   static void delete_mithepcLcLCollectionlETObjStringgR(void *p) {
      delete ((::mithep::Collection<TObjString>*)p);
   }
   static void deleteArray_mithepcLcLCollectionlETObjStringgR(void *p) {
      delete [] ((::mithep::Collection<TObjString>*)p);
   }
   static void destruct_mithepcLcLCollectionlETObjStringgR(void *p) {
      typedef ::mithep::Collection<TObjString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Collection<TObjString>

namespace mithep {
//______________________________________________________________________________
template <> void Collection<mithep::ProcIDRef>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::Collection<mithep::ProcIDRef>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::Collection<mithep::ProcIDRef>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::Collection<mithep::ProcIDRef>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrapper around operator delete
   static void delete_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p) {
      delete ((::mithep::Collection<mithep::ProcIDRef>*)p);
   }
   static void deleteArray_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p) {
      delete [] ((::mithep::Collection<mithep::ProcIDRef>*)p);
   }
   static void destruct_mithepcLcLCollectionlEmithepcLcLProcIDRefgR(void *p) {
      typedef ::mithep::Collection<mithep::ProcIDRef> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::Collection<mithep::ProcIDRef>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<double,false> : new ::mithep::FastArrayBasic<double,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<double,false>[nElements] : new ::mithep::FastArrayBasic<double,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<double,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<double,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEdoublecOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<double,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEdoublecOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<double,false>*)obj)->::mithep::FastArrayBasic<double,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<double,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<Double32_t,true> : new ::mithep::FastArrayBasic<Double32_t,true>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<Double32_t,true>[nElements] : new ::mithep::FastArrayBasic<Double32_t,true>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      delete ((::mithep::FastArrayBasic<Double32_t,true>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<Double32_t,true>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      typedef ::mithep::FastArrayBasic<Double32_t,true> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEDouble32_tcOtruegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<Double32_t,true>*)obj)->::mithep::FastArrayBasic<Double32_t,true>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<Double32_t,true>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<int,false> : new ::mithep::FastArrayBasic<int,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEintcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<int,false>[nElements] : new ::mithep::FastArrayBasic<int,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<int,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<int,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEintcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<int,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEintcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<int,false>*)obj)->::mithep::FastArrayBasic<int,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<int,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<unsigned int,false> : new ::mithep::FastArrayBasic<unsigned int,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<unsigned int,false>[nElements] : new ::mithep::FastArrayBasic<unsigned int,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<unsigned int,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<unsigned int,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<unsigned int,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPintcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<unsigned int,false>*)obj)->::mithep::FastArrayBasic<unsigned int,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<unsigned int,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<short,false> : new ::mithep::FastArrayBasic<short,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEshortcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<short,false>[nElements] : new ::mithep::FastArrayBasic<short,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<short,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<short,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEshortcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<short,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEshortcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<short,false>*)obj)->::mithep::FastArrayBasic<short,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<short,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<unsigned short,false> : new ::mithep::FastArrayBasic<unsigned short,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<unsigned short,false>[nElements] : new ::mithep::FastArrayBasic<unsigned short,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<unsigned short,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<unsigned short,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<unsigned short,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPshortcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<unsigned short,false>*)obj)->::mithep::FastArrayBasic<unsigned short,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<unsigned short,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<char,false> : new ::mithep::FastArrayBasic<char,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEcharcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<char,false>[nElements] : new ::mithep::FastArrayBasic<char,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<char,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<char,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEcharcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<char,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEcharcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<char,false>*)obj)->::mithep::FastArrayBasic<char,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<char,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<unsigned char,false> : new ::mithep::FastArrayBasic<unsigned char,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<unsigned char,false>[nElements] : new ::mithep::FastArrayBasic<unsigned char,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<unsigned char,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<unsigned char,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<unsigned char,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEunsignedsPcharcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<unsigned char,false>*)obj)->::mithep::FastArrayBasic<unsigned char,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<unsigned char,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::FastArrayBasic<bool,false> : new ::mithep::FastArrayBasic<bool,false>;
   }
   static void *newArray_mithepcLcLFastArrayBasiclEboolcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArrayBasic<bool,false>[nElements] : new ::mithep::FastArrayBasic<bool,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p) {
      delete ((::mithep::FastArrayBasic<bool,false>*)p);
   }
   static void deleteArray_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p) {
      delete [] ((::mithep::FastArrayBasic<bool,false>*)p);
   }
   static void destruct_mithepcLcLFastArrayBasiclEboolcOfalsegR(void *p) {
      typedef ::mithep::FastArrayBasic<bool,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArrayBasiclEboolcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::FastArrayBasic<bool,false>*)obj)->::mithep::FastArrayBasic<bool,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArrayBasic<bool,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<double,false> : new ::mithep::NamedFastArrayBasic<double,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<double,false>[nElements] : new ::mithep::NamedFastArrayBasic<double,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<double,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<double,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<double,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEdoublecOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<double,false>*)obj)->::mithep::NamedFastArrayBasic<double,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<double,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<Double32_t,true> : new ::mithep::NamedFastArrayBasic<Double32_t,true>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<Double32_t,true>[nElements] : new ::mithep::NamedFastArrayBasic<Double32_t,true>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<Double32_t,true>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<Double32_t,true>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<Double32_t,true> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEDouble32_tcOtruegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<Double32_t,true>*)obj)->::mithep::NamedFastArrayBasic<Double32_t,true>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<Double32_t,true>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<int,false> : new ::mithep::NamedFastArrayBasic<int,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<int,false>[nElements] : new ::mithep::NamedFastArrayBasic<int,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<int,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<int,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<int,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEintcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<int,false>*)obj)->::mithep::NamedFastArrayBasic<int,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<int,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<unsigned int,false> : new ::mithep::NamedFastArrayBasic<unsigned int,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<unsigned int,false>[nElements] : new ::mithep::NamedFastArrayBasic<unsigned int,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<unsigned int,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<unsigned int,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<unsigned int,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPintcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<unsigned int,false>*)obj)->::mithep::NamedFastArrayBasic<unsigned int,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<unsigned int,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<short,false> : new ::mithep::NamedFastArrayBasic<short,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<short,false>[nElements] : new ::mithep::NamedFastArrayBasic<short,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<short,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<short,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<short,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEshortcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<short,false>*)obj)->::mithep::NamedFastArrayBasic<short,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<short,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<unsigned short,false> : new ::mithep::NamedFastArrayBasic<unsigned short,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<unsigned short,false>[nElements] : new ::mithep::NamedFastArrayBasic<unsigned short,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<unsigned short,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<unsigned short,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<unsigned short,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPshortcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<unsigned short,false>*)obj)->::mithep::NamedFastArrayBasic<unsigned short,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<unsigned short,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<char,false> : new ::mithep::NamedFastArrayBasic<char,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<char,false>[nElements] : new ::mithep::NamedFastArrayBasic<char,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<char,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<char,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<char,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEcharcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<char,false>*)obj)->::mithep::NamedFastArrayBasic<char,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<char,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<unsigned char,false> : new ::mithep::NamedFastArrayBasic<unsigned char,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<unsigned char,false>[nElements] : new ::mithep::NamedFastArrayBasic<unsigned char,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<unsigned char,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<unsigned char,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<unsigned char,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEunsignedsPcharcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<unsigned char,false>*)obj)->::mithep::NamedFastArrayBasic<unsigned char,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<unsigned char,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p) {
      return  p ? new(p) ::mithep::NamedFastArrayBasic<bool,false> : new ::mithep::NamedFastArrayBasic<bool,false>;
   }
   static void *newArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::NamedFastArrayBasic<bool,false>[nElements] : new ::mithep::NamedFastArrayBasic<bool,false>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p) {
      delete ((::mithep::NamedFastArrayBasic<bool,false>*)p);
   }
   static void deleteArray_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p) {
      delete [] ((::mithep::NamedFastArrayBasic<bool,false>*)p);
   }
   static void destruct_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(void *p) {
      typedef ::mithep::NamedFastArrayBasic<bool,false> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLNamedFastArrayBasiclEboolcOfalsegR(TBuffer &buf, void *obj) {
      ((::mithep::NamedFastArrayBasic<bool,false>*)obj)->::mithep::NamedFastArrayBasic<bool,false>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::NamedFastArrayBasic<bool,false>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArraylETObjStringgR(void *p) {
      return  p ? new(p) ::mithep::FastArray<TObjString> : new ::mithep::FastArray<TObjString>;
   }
   static void *newArray_mithepcLcLFastArraylETObjStringgR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArray<TObjString>[nElements] : new ::mithep::FastArray<TObjString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArraylETObjStringgR(void *p) {
      delete ((::mithep::FastArray<TObjString>*)p);
   }
   static void deleteArray_mithepcLcLFastArraylETObjStringgR(void *p) {
      delete [] ((::mithep::FastArray<TObjString>*)p);
   }
   static void destruct_mithepcLcLFastArraylETObjStringgR(void *p) {
      typedef ::mithep::FastArray<TObjString> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArraylETObjStringgR(TBuffer &buf, void *obj) {
      ((::mithep::FastArray<TObjString>*)obj)->::mithep::FastArray<TObjString>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArray<TObjString>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p) {
      return  p ? new(p) ::mithep::FastArray<mithep::ProcIDRef> : new ::mithep::FastArray<mithep::ProcIDRef>;
   }
   static void *newArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::FastArray<mithep::ProcIDRef>[nElements] : new ::mithep::FastArray<mithep::ProcIDRef>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p) {
      delete ((::mithep::FastArray<mithep::ProcIDRef>*)p);
   }
   static void deleteArray_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p) {
      delete [] ((::mithep::FastArray<mithep::ProcIDRef>*)p);
   }
   static void destruct_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(void *p) {
      typedef ::mithep::FastArray<mithep::ProcIDRef> current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLFastArraylEmithepcLcLProcIDRefgR(TBuffer &buf, void *obj) {
      ((::mithep::FastArray<mithep::ProcIDRef>*)obj)->::mithep::FastArray<mithep::ProcIDRef>::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::FastArray<mithep::ProcIDRef>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLCacheFlag(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::CacheFlag : new ::mithep::CacheFlag;
   }
   static void *newArray_mithepcLcLCacheFlag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::mithep::CacheFlag[nElements] : new ::mithep::CacheFlag[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLCacheFlag(void *p) {
      delete ((::mithep::CacheFlag*)p);
   }
   static void deleteArray_mithepcLcLCacheFlag(void *p) {
      delete [] ((::mithep::CacheFlag*)p);
   }
   static void destruct_mithepcLcLCacheFlag(void *p) {
      typedef ::mithep::CacheFlag current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLCacheFlag(TBuffer &buf, void *obj) {
      ((::mithep::CacheFlag*)obj)->::mithep::CacheFlag::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::CacheFlag

namespace mithep {
//______________________________________________________________________________
template <> void ObjArray<TObject>::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::ObjArray<TObject>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::ObjArray<TObject>::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::ObjArray<TObject>::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLObjArraylETObjectgR(void *p) {
      return  p ? new(p) ::mithep::ObjArray<TObject> : new ::mithep::ObjArray<TObject>;
   }
   static void *newArray_mithepcLcLObjArraylETObjectgR(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::ObjArray<TObject>[nElements] : new ::mithep::ObjArray<TObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLObjArraylETObjectgR(void *p) {
      delete ((::mithep::ObjArray<TObject>*)p);
   }
   static void deleteArray_mithepcLcLObjArraylETObjectgR(void *p) {
      delete [] ((::mithep::ObjArray<TObject>*)p);
   }
   static void destruct_mithepcLcLObjArraylETObjectgR(void *p) {
      typedef ::mithep::ObjArray<TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::ObjArray<TObject>

namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLProcIDRef(void *p) {
      return  p ? new(p) ::mithep::ProcIDRef : new ::mithep::ProcIDRef;
   }
   static void *newArray_mithepcLcLProcIDRef(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::ProcIDRef[nElements] : new ::mithep::ProcIDRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLProcIDRef(void *p) {
      delete ((::mithep::ProcIDRef*)p);
   }
   static void deleteArray_mithepcLcLProcIDRef(void *p) {
      delete [] ((::mithep::ProcIDRef*)p);
   }
   static void destruct_mithepcLcLProcIDRef(void *p) {
      typedef ::mithep::ProcIDRef current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_mithepcLcLProcIDRef(TBuffer &buf, void *obj) {
      ((::mithep::ProcIDRef*)obj)->::mithep::ProcIDRef::Streamer(buf);
   }
} // end of namespace ROOT for class ::mithep::ProcIDRef

namespace mithep {
//______________________________________________________________________________
void RunLumiSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::RunLumiSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::RunLumiSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::RunLumiSet::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLRunLumiSet(void *p) {
      return  p ? new(p) ::mithep::RunLumiSet : new ::mithep::RunLumiSet;
   }
   static void *newArray_mithepcLcLRunLumiSet(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::RunLumiSet[nElements] : new ::mithep::RunLumiSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLRunLumiSet(void *p) {
      delete ((::mithep::RunLumiSet*)p);
   }
   static void deleteArray_mithepcLcLRunLumiSet(void *p) {
      delete [] ((::mithep::RunLumiSet*)p);
   }
   static void destruct_mithepcLcLRunLumiSet(void *p) {
      typedef ::mithep::RunLumiSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_mithepcLcLRunLumiSet(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::mithep::RunLumiSet*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::mithep::RunLumiSet

namespace mithep {
//______________________________________________________________________________
void RunLumiRangeMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class mithep::RunLumiRangeMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(mithep::RunLumiRangeMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(mithep::RunLumiRangeMap::Class(),this);
   }
}

} // namespace mithep
namespace ROOT {
   // Wrappers around operator new
   static void *new_mithepcLcLRunLumiRangeMap(void *p) {
      return  p ? new(p) ::mithep::RunLumiRangeMap : new ::mithep::RunLumiRangeMap;
   }
   static void *newArray_mithepcLcLRunLumiRangeMap(Long_t nElements, void *p) {
      return p ? new(p) ::mithep::RunLumiRangeMap[nElements] : new ::mithep::RunLumiRangeMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_mithepcLcLRunLumiRangeMap(void *p) {
      delete ((::mithep::RunLumiRangeMap*)p);
   }
   static void deleteArray_mithepcLcLRunLumiRangeMap(void *p) {
      delete [] ((::mithep::RunLumiRangeMap*)p);
   }
   static void destruct_mithepcLcLRunLumiRangeMap(void *p) {
      typedef ::mithep::RunLumiRangeMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::mithep::RunLumiRangeMap

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned int,unsigned int> >*)
   {
      vector<pair<unsigned int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned int,unsigned int> >", -2, "vector", 214,
                  typeid(vector<pair<unsigned int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned int,unsigned int> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned int,unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<unsigned int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<unsigned int,unsigned int> >*)0x0)->GetClass();
      vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,unsigned int> > : new vector<pair<unsigned int,unsigned int> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,unsigned int> >[nElements] : new vector<pair<unsigned int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete ((vector<pair<unsigned int,unsigned int> >*)p);
   }
   static void deleteArray_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<pair<unsigned int,unsigned int> >*)p);
   }
   static void destruct_vectorlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      typedef vector<pair<unsigned int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned int,unsigned int> >

namespace ROOT {
   static TClass *setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary();
   static void setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);
   static void destruct_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<pair<unsigned int,unsigned int> >*)
   {
      set<pair<unsigned int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<pair<unsigned int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("set<pair<unsigned int,unsigned int> >", -2, "set", 90,
                  typeid(set<pair<unsigned int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(set<pair<unsigned int,unsigned int> >) );
      instance.SetNew(&new_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<pair<unsigned int,unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const set<pair<unsigned int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<pair<unsigned int,unsigned int> >*)0x0)->GetClass();
      setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEpairlEunsignedsPintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<pair<unsigned int,unsigned int> > : new set<pair<unsigned int,unsigned int> >;
   }
   static void *newArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<pair<unsigned int,unsigned int> >[nElements] : new set<pair<unsigned int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete ((set<pair<unsigned int,unsigned int> >*)p);
   }
   static void deleteArray_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((set<pair<unsigned int,unsigned int> >*)p);
   }
   static void destruct_setlEpairlEunsignedsPintcOunsignedsPintgRsPgR(void *p) {
      typedef set<pair<unsigned int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<pair<unsigned int,unsigned int> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,vector<pair<unsigned int,unsigned int> > >*)
   {
      map<unsigned int,vector<pair<unsigned int,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,vector<pair<unsigned int,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,vector<pair<unsigned int,unsigned int> > >", -2, "map", 96,
                  typeid(map<unsigned int,vector<pair<unsigned int,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,vector<pair<unsigned int,unsigned int> > >) );
      instance.SetNew(&new_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,vector<pair<unsigned int,unsigned int> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned int,vector<pair<unsigned int,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,vector<pair<unsigned int,unsigned int> > >*)0x0)->GetClass();
      maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<pair<unsigned int,unsigned int> > > : new map<unsigned int,vector<pair<unsigned int,unsigned int> > >;
   }
   static void *newArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,vector<pair<unsigned int,unsigned int> > >[nElements] : new map<unsigned int,vector<pair<unsigned int,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((map<unsigned int,vector<pair<unsigned int,unsigned int> > >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((map<unsigned int,vector<pair<unsigned int,unsigned int> > >*)p);
   }
   static void destruct_maplEunsignedsPintcOvectorlEpairlEunsignedsPintcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef map<unsigned int,vector<pair<unsigned int,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,vector<pair<unsigned int,unsigned int> > >

namespace {
  void TriggerDictionaryInitialization_MitAnaDataCont_LinkDefDict_Impl() {
    static const char* headers[] = {
"MitAna/DataCont/interface/BaseCollection.h",
"MitAna/DataCont/interface/BitMask.h",
"MitAna/DataCont/interface/CacheFlag.h",
"MitAna/DataCont/interface/FastArray.h",
"MitAna/DataCont/interface/FastArrayBasic.h",
"MitAna/DataCont/interface/NamedFastArrayBasic.h",
"MitAna/DataCont/interface/ObjArray.h",
"MitAna/DataCont/interface/ProcIDRef.h",
"MitAna/DataCont/interface/RunLumiRangeMap.h",
"MitAna/DataCont/interface/RunLumiSet.h",
"MitAna/DataCont/interface/Types.h",
"TObjString.h",
0
    };
    static const char* includePaths[] = {
"/home/ceballos/cms/cmssw/048/CMSSW_9_2_12/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/boost/1.63.0-mlhled2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.08.07/include",
"/home/ceballos/cms/cmssw/048/CMSSW_9_2_12/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MitAnaDataCont_LinkDefDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <class _T1, class _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Base class of all our collections)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/BaseCollection.h")))  BaseCollection;}
namespace mithep{template <UInt_t N> class __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/BitMask.h")))  BitMask;
}
namespace mithep{template <class T> class __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/BitMask.h")))  BitMaskT;
}
class __attribute__((annotate("$clingAutoload$TObject.h")))  TObject;
namespace mithep{template <class ArrayElement> class __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Collection.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h")))  Collection;
}
class __attribute__((annotate("$clingAutoload$TObjString.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/BaseCollection.h")))  TObjString;
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Implementation of our own TProcIDRef)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/ProcIDRef.h")))  ProcIDRef;}
namespace mithep{template <class ArrayElement> class __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/FastArray.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h")))  FastArray;
}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Implementation of a transient Bool_t container)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h")))  CacheFlag;}
namespace mithep{template <class ArrayElement> class __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/ObjArray.h")))  ObjArray;
}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Base class of all our collections)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/RunLumiSet.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/RunLumiRangeMap.h")))  RunLumiSet;}
namespace mithep{class __attribute__((annotate(R"ATTRDUMP(Base class of all our collections)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/RunLumiRangeMap.h")))  RunLumiRangeMap;}
typedef unsigned char UChar_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef BitMaskT<UChar_t> BitMask8 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
typedef unsigned short UShort_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef BitMaskT<UShort_t> BitMask16 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
typedef unsigned int UInt_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef BitMaskT<UInt_t> BitMask32 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
namespace mithep{typedef BitMask<3> BitMask24 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
namespace mithep{typedef BitMask<6> BitMask48 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
typedef unsigned long long ULong64_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef BitMaskT<ULong64_t> BitMask64 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
namespace mithep{typedef BitMask<16> BitMask128 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
namespace mithep{typedef BitMask<32> BitMask256 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
namespace mithep{typedef BitMask<128> BitMask1024 __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
typedef double Double_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
typedef double Double32_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
typedef int Int_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
typedef short Short_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
typedef char Char_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
typedef bool Bool_t __attribute__((annotate("$clingAutoload$RtypesCore.h"))) ;
namespace mithep{typedef FastArray<TObjString> FArrObjString __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/Types.h")))  __attribute__((annotate("$clingAutoload$MitAna/DataCont/interface/CacheFlag.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MitAnaDataCont_LinkDefDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MitAna/DataCont/interface/BaseCollection.h"
#include "MitAna/DataCont/interface/BitMask.h"
#include "MitAna/DataCont/interface/CacheFlag.h"
#include "MitAna/DataCont/interface/FastArray.h"
#include "MitAna/DataCont/interface/FastArrayBasic.h"
#include "MitAna/DataCont/interface/NamedFastArrayBasic.h"
#include "MitAna/DataCont/interface/ObjArray.h"
#include "MitAna/DataCont/interface/ProcIDRef.h"
#include "MitAna/DataCont/interface/RunLumiRangeMap.h"
#include "MitAna/DataCont/interface/RunLumiSet.h"
#include "MitAna/DataCont/interface/Types.h"
#include "TObjString.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"mithep::BaseCollection", payloadCode, "@",
"mithep::BitMask1024", payloadCode, "@",
"mithep::BitMask128", payloadCode, "@",
"mithep::BitMask16", payloadCode, "@",
"mithep::BitMask24", payloadCode, "@",
"mithep::BitMask256", payloadCode, "@",
"mithep::BitMask32", payloadCode, "@",
"mithep::BitMask48", payloadCode, "@",
"mithep::BitMask64", payloadCode, "@",
"mithep::BitMask8", payloadCode, "@",
"mithep::BitMask<128>", payloadCode, "@",
"mithep::BitMask<16>", payloadCode, "@",
"mithep::BitMask<2>", payloadCode, "@",
"mithep::BitMask<32>", payloadCode, "@",
"mithep::BitMask<3>", payloadCode, "@",
"mithep::BitMask<6>", payloadCode, "@",
"mithep::BitMask<8>", payloadCode, "@",
"mithep::BitMaskT<UChar_t>", payloadCode, "@",
"mithep::BitMaskT<UInt_t>", payloadCode, "@",
"mithep::BitMaskT<ULong64_t>", payloadCode, "@",
"mithep::BitMaskT<UShort_t>", payloadCode, "@",
"mithep::BitMaskT<unsigned char>", payloadCode, "@",
"mithep::BitMaskT<unsigned int>", payloadCode, "@",
"mithep::BitMaskT<unsigned short>", payloadCode, "@",
"mithep::CacheFlag", payloadCode, "@",
"mithep::Collection<TObjString>", payloadCode, "@",
"mithep::Collection<TObject>", payloadCode, "@",
"mithep::Collection<mithep::ProcIDRef>", payloadCode, "@",
"mithep::FArrBool", payloadCode, "@",
"mithep::FArrChar", payloadCode, "@",
"mithep::FArrDouble", payloadCode, "@",
"mithep::FArrDouble32", payloadCode, "@",
"mithep::FArrInt", payloadCode, "@",
"mithep::FArrObjString", payloadCode, "@",
"mithep::FArrShort", payloadCode, "@",
"mithep::FArrUChar", payloadCode, "@",
"mithep::FArrUInt", payloadCode, "@",
"mithep::FArrUShort", payloadCode, "@",
"mithep::FastArray<TObjString>", payloadCode, "@",
"mithep::FastArray<mithep::ProcIDRef>", payloadCode, "@",
"mithep::FastArrayBasic<Bool_t>", payloadCode, "@",
"mithep::FastArrayBasic<Char_t>", payloadCode, "@",
"mithep::FastArrayBasic<Double32_t,kTRUE>", payloadCode, "@",
"mithep::FastArrayBasic<Double32_t,true>", payloadCode, "@",
"mithep::FastArrayBasic<Double_t>", payloadCode, "@",
"mithep::FastArrayBasic<Int_t>", payloadCode, "@",
"mithep::FastArrayBasic<Short_t>", payloadCode, "@",
"mithep::FastArrayBasic<UChar_t>", payloadCode, "@",
"mithep::FastArrayBasic<UInt_t>", payloadCode, "@",
"mithep::FastArrayBasic<UShort_t>", payloadCode, "@",
"mithep::FastArrayBasic<bool,false>", payloadCode, "@",
"mithep::FastArrayBasic<char,false>", payloadCode, "@",
"mithep::FastArrayBasic<double,false>", payloadCode, "@",
"mithep::FastArrayBasic<int,false>", payloadCode, "@",
"mithep::FastArrayBasic<short,false>", payloadCode, "@",
"mithep::FastArrayBasic<unsigned char,false>", payloadCode, "@",
"mithep::FastArrayBasic<unsigned int,false>", payloadCode, "@",
"mithep::FastArrayBasic<unsigned short,false>", payloadCode, "@",
"mithep::NFArrBool", payloadCode, "@",
"mithep::NFArrChar", payloadCode, "@",
"mithep::NFArrDouble", payloadCode, "@",
"mithep::NFArrDouble32", payloadCode, "@",
"mithep::NFArrInt", payloadCode, "@",
"mithep::NFArrShort", payloadCode, "@",
"mithep::NFArrUChar", payloadCode, "@",
"mithep::NFArrUInt", payloadCode, "@",
"mithep::NFArrUShort", payloadCode, "@",
"mithep::NamedFastArrayBasic<Bool_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Char_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Double32_t,kTRUE>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Double32_t,true>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Double_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Int_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<Short_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<UChar_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<UInt_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<UShort_t>", payloadCode, "@",
"mithep::NamedFastArrayBasic<bool,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<char,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<double,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<int,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<short,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<unsigned char,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<unsigned int,false>", payloadCode, "@",
"mithep::NamedFastArrayBasic<unsigned short,false>", payloadCode, "@",
"mithep::ObjArray<TObject>", payloadCode, "@",
"mithep::ProcIDRef", payloadCode, "@",
"mithep::RunLumiRangeMap", payloadCode, "@",
"mithep::RunLumiSet", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MitAnaDataCont_LinkDefDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MitAnaDataCont_LinkDefDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MitAnaDataCont_LinkDefDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MitAnaDataCont_LinkDefDict() {
  TriggerDictionaryInitialization_MitAnaDataCont_LinkDefDict_Impl();
}
