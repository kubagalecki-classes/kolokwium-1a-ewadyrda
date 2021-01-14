#include "catch.hpp"
#include <iostream>
#include <string>
#include <array>
#include <list>
#include <algorithm>
#include <vector>


// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Makaron{
public:
    virtual const double ileMaki(unsigned)=0 ;
    static Makaron* gotujMakaron(const string&);
    ~Makaron(){}
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle:public Makaron{
private:
    double L;
    double W;
    double R;
    static const double C;
public:
    Tagliatelle(double l, double w, double r):L(l),W(w),R(r){}
    Tagliatelle():L(0.5),W(0.5),R(0.5){}
    const double ileMaki(unsigned P){
       return(double) P*L*W*(1.-R)*C;
    }

};
