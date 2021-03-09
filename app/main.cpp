#include <iostream>
#include <lib_a/lib_a.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << sizeof(void*) << std::endl;
    int * mem = alloc_memory_not_free(10);
    return 0;
}
