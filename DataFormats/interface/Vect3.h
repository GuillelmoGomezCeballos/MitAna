//--------------------------------------------------------------------------------------------------
// $Id: Vect3.h,v 1.3 2009/03/20 12:54:20 loizides Exp $
//
// Vect3C
//
// Implementation of our own ThreeVector32.
//
// Authors: C.Loizides
//--------------------------------------------------------------------------------------------------

#ifndef MITCOMMON_DATAFORMATS_VECT3_H
#define MITCOMMON_DATAFORMATS_VECT3_H

#include "MitAna/DataFormats/interface/Types.h"

namespace mithep 
{
  class Vect3
  {
    public:
      Vect3() : 
        fX(0), fY(0), fZ(0) {}
      Vect3(Double_t x, Double_t y, Double_t z) : 
        fX(x), fY(y), fZ(z) {}
      Vect3(const ThreeVector pos) :
        fX(pos.X()), fY(pos.Y()), fZ(pos.Z()) {}
      Vect3(const ThreeVectorC pos) :
        fX(pos.X()), fY(pos.Y()), fZ(pos.Z()) {}

      virtual ~Vect3() {}

      Double_t            X()          const { return fX; }
      Double_t            Y()          const { return fY; }
      Double_t            Z()          const { return fZ; }
      ThreeVector         V()          const { return ThreeVector(fX,fY,fZ); }
      void                SetXYZ(Double_t x, Double_t y, Double_t z);

    protected:
      Double32_t          fX; //[0,0,14]x-component
      Double32_t          fY; //[0,0,14]y-component
      Double32_t          fZ; //[0,0,14]z-component

    ClassDef(Vect3, 1) // Implementation of our own ThreeVector32
  };
}

//--------------------------------------------------------------------------------------------------
inline void mithep::Vect3::SetXYZ(Double_t x, Double_t y, Double_t z)
{ 
  // Set three vector.

  fX=x;
  fY=y;
  fZ=z;
}
#endif
