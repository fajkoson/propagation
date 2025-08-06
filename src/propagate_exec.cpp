#include <iostream>
#include "propagate.h"

int main() {
    std::cout << "Message: " << get_propagate_message() << "\n";
    std::cout << "Variable: " << propagate_variable << "\n";
    return 0;
}