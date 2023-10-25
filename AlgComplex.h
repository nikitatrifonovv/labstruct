//
// Created by Никита Трифонов on 12.10.2023.
//

#ifndef LABSTRUCT_ALGCOMPLEX_H
#define LABSTRUCT_ALGCOMPLEX_H


#include "TrigComplex.h"

struct AlgComplex {
public:
    float re;
    float im;
    TrigComplex toTrig() const;

    AlgComplex operator+(AlgComplex c2);
    AlgComplex operator-(AlgComplex c2);
    AlgComplex operator/(AlgComplex c2);
    AlgComplex operator^(int c);

};


#endif //LABSTRUCT_ALGCOMPLEX_H
