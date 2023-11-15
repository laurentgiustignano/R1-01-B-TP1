#include <iostream>
#include <climits>

int main() {
    std::cout << "Types : cout-mémoire (en octets) et domaine de variation" << std::endl;

    std::cout << "bool : " << sizeof(bool) << " - Domaine : " << false << " .. " << true << std::endl;
    std::cout << "bool : " << sizeof(bool) << " - Domaine : " << std::boolalpha << false << " .. " << true << std::endl;
    std::cout << "char : " << sizeof(char) << " - Domaine : " << CHAR_MIN << " .. " << CHAR_MAX << std::endl;
    std::cout << "unsigned char : " << sizeof(unsigned char) << " - Domaine : " << 0 << " .. " << UCHAR_MAX
              << std::endl;
    std::cout << "wchar_t : " << sizeof(wchar_t) << std::endl;
    std::cout << "short : " << sizeof(short) << " - Domaine : " << SHRT_MIN << " .. " << SHRT_MAX << std::endl;
    std::cout << "unsigned short : " << sizeof(unsigned short) << " - Domaine : " << 0 << " .. " << USHRT_MAX
              << std::endl;
    std::cout << "int : " << sizeof(int) << " - Domaine : " << INT_MIN << " .. " << INT_MAX << std::endl;
    std::cout << "unsigned int : " << sizeof(unsigned int) << " - Domaine : " << 0 << " .. " << UINT_MAX
              << std::endl;
    std::cout << "long : " << sizeof(long) << " - Domaine : " << LONG_MIN << " .. " << LONG_MAX << std::endl;
    std::cout << "unsigned long : " << sizeof(unsigned long) << " - Domaine : " << 0 << " .. " << ULONG_MAX
              << std::endl;
    std::cout << "long long : " << sizeof(long long) << " - Domaine : " << LLONG_MIN << " .. " << LLONG_MAX << std::endl;
    std::cout << "unsigned long long : " << sizeof(unsigned long long) << " - Domaine : " << 0 << " .. " << ULLONG_MAX
              << std::endl;
    std::cout << "float : " << sizeof(float) << std::endl;
    std::cout << "double : " << sizeof(double) << std::endl;

    return 0;
}
