#include <iostream>

int main() {

    unsigned __int16 a1(5), a2(2), a3(3);
    unsigned __int16 b1(6), b2(7), b3(4);
    unsigned __int16 c1, c2, c3;
    unsigned __int16 x1(0), x2(0);

    __asm{
    mov AX, a1
    add AX, b1
    ADC x1, 0
    mov c1, AX

    mov AX, a2
    add AX, x1
    add AX, b2
    ADC x2, 0
    mov c2, AX

    mov AX, a3
    add AX, x2
    add AX, b3
    mov c3, AX

    }
    std::cout << std::hex;
    std::cout << c3 << " " << c2 << " " << c1 << std::endl;
    std::cout<< std::dec;
    std::cout << c3 << " " << c2 << " " << c1 << std::endl;
    return 0;
}