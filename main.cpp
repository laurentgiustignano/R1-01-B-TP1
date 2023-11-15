#include <iostream>
#include <cassert>

unsigned int miroir(unsigned int nombre) {
    const unsigned int dimensionNonOptimisee = 100;
    unsigned char conversionNombre[dimensionNonOptimisee];
    int indice, puissance, resultat;

    for (indice = 0; nombre > 0; nombre /= 10, ++indice) {
        conversionNombre[indice] = nombre % 10;
    }

    for (--indice, resultat = 0, puissance = 1; indice >= 0; puissance *= 10, --indice)
        resultat += conversionNombre[indice] * puissance;

    return resultat;
}

bool isPalindrome(unsigned int nombre) {
    const unsigned int dimensionNonOptimisee = 100;
    unsigned char conversionNombre[dimensionNonOptimisee];

    int debut, fin;

    for (fin = 0; nombre > 0; nombre /= 10, fin++) {
        conversionNombre[fin] = nombre % 10;
    }

    for (debut = 0, --fin; debut < fin && conversionNombre[debut] == conversionNombre[fin]; ++debut, --fin);

    return debut >= fin;
}

int main() {

    std::cout << "Debut Palindrome" << std::endl;

    assert(isPalindrome(12321) == true);
    assert(isPalindrome(11) == true);
    assert(isPalindrome(1) == true);
    assert(isPalindrome(123) == false);

    std::cout << "Fin Palindrome" << std::endl;

    std::cout << "Debut Miroir" << std::endl;

    assert(miroir(1234) == 4321);
    assert(miroir(11) == 11);
    assert(miroir(1) == 1);
    assert(miroir(123) != 123);

    std::cout << "Fin Miroir" << std::endl;

    return 0;
}
