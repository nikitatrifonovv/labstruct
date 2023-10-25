//
// Created by Никита Трифонов on 12.10.2023.
//

#ifndef LABSTRUCT_TRIGCOMPLEX_H
#define LABSTRUCT_TRIGCOMPLEX_H


#include "AlgComplex.h"

class TrigComplex {
public:
    float mod;
    float arg;
    AlgComplex toAlg();
};


#endif //LABSTRUCT_TRIGCOMPLEX_H
