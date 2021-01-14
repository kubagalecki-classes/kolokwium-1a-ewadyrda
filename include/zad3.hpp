#include "zad1.hpp"
#include <cstdint>
#include <functional>

template<typename E>
std::size_t polejSosem (const Tagliatelle &e, const E &e2){
    return e2.pole(e);
}
