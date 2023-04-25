
#include <iostream>

#include <shared_lib.hpp>

int main(int argc, char** argv) {
    std::cout << "Shared lib says: " << shared_lib::hello() << "\n";
}
