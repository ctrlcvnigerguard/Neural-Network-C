#include "../nn.hpp"

#include <iostream>

auto main() -> int {
    NeuralNetwork nn(5, 25, 1);

    std::cout << nn.serialize() << "\n";

    return 0;
}
