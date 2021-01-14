#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne:public Makaron{
    public:
    double ileMaki(unsigned P)const {
        return P;
    }
};

inline Makaron* Makaron::gotujMakaron(const std::string& gotuj){
    if (gotuj.front()==gotuj.back())
        return new Tagliatelle(3.14, 0.42,0.1);
    else
        return new Penne();
    
}
