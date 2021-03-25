#include <iostream>
#include <memory>
#include <lib_a/lib_a.hpp>

struct A {
    int a;
    int b;
};

int main() {
    std::unique_ptr<A> v = std::make_unique<A>();
    v->a = 4;
    v->b = 5;
    auto vv = std::move(v);
    if (v) {
        std::cout << v->a << std::endl;
    }

    /*alloc_memory_not_free(10);
    ub_example();*/
    return 0;
}
