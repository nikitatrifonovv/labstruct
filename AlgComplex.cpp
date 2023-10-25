//
// Created by Никита Трифонов on 12.10.2023.
//

#include "AlgComplex.h"
#include <cmath>

using namespace std;

AlgComplex AlgComplex::operator+(AlgComplex c2) {
    AlgComplex new_complex = *new AlgComplex();
    new_complex.re = this->re + c2.re;
    new_complex.im = this->im + c2.im;
    return new_complex;
}

AlgComplex AlgComplex::operator-(AlgComplex c2) {
    AlgComplex new_complex = *new AlgComplex();
    new_complex.re = this->re - c2.re;
    new_complex.im = this->im - c2.im;
    return new_complex;
}

AlgComplex AlgComplex::operator/(AlgComplex c2) {
    return AlgComplex();
}

AlgComplex AlgComplex::operator^(int c) {
    TrigComplex trig = this->toTrig();
    float p = 1;
    for(int i = 1; i <= c; i++) {
        p *= trig.mod;
    }
    AlgComplex alg = *new AlgComplex();
    alg.re =

    return AlgComplex();
}

TrigComplex AlgComplex::toTrig() const {
    TrigComplex trigComplex = *new TrigComplex();
    trigComplex.mod = sqrt(this->re * this->re + this->im * this->im);
    trigComplex.arg = atan(this->im / this->re);
    return trigComplex;
}
