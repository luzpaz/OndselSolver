#pragma once
#include "Array.h"
namespace MbD {
    template <typename T>
    class Vector : public Array<T>
    {
    public:
        Vector(int i) : Array<T>(i) {}
        Vector(std::initializer_list<T> list) : Array<T>{ list } {}
    };
}

