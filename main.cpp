#include <iostream>
#include <iomanip>

int main() {

    std::cout << "Table ASCII" << std::endl;
    for (uint indice = 32; indice < 256; indice++) {
        std::cout << std::setiosflags(std::ios::right) << std::setw(3)
                  << indice << "->" << "'" << static_cast<char>(indice) << "'" << "..";

        if ((indice - 31) % 8 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
