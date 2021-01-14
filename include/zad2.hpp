#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne:public Makaron{
    public:
    const double ileMaki(unsigned P){
        return (double)P;
    }
};

Makaron* Makaron::gotujMakaron(const string& gotuj){
    if (gotuj.front()==gotuj.back())
        return new Tagliatelle(3.14, 0.42,0.1);
    else
        return new Penne;
}
