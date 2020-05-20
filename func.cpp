#include <stddef.h>

#include "./func.hpp"

namespace {

size_t dummy = 0;

}

void func() {
    ++dummy;
}

void derived::virtual_func() {
    ++dummy;
}

void Caller::run() {
    begin = std::chrono::high_resolution_clock::now();
    for(; i < count; ++i){
        emit call();
    }
    total = std::chrono::high_resolution_clock::now() - begin;
}

void Receiver::func() {
    counter++;
}
