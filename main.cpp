#include <iostream>
#include <cassert>

bool isPalindrome(unsigned int nombre) {
    const unsigned int dimensionNonOptimisee = 100;
    unsigned char conversionNombre[dimensionNonOptimisee];

    int debut, fin;

    for (fin = 0; nombre > 0; nombre /= 10, fin++) {
        conversionNombre[fin] = nombre % 10;
    }

    for (debut = 0, --fin; debut < fin && conversionNombre[debut] == conversionNombre[fin]; ++debut, --fin)
        ;

    return debut >= fin;
}

int main() {

    std::cout << "Debut Palindrome" << std::endl;

    assert(isPalindrome(12321) == true);
    assert(isPalindrome(11) == true);
    assert(isPalindrome(1) == true);
    assert(isPalindrome(123) == false);

    std::cout << "Fin Palindrome" << std::endl;

    return 0;
}
