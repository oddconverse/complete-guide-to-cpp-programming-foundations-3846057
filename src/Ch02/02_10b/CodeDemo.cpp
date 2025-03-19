// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float targetX;
    int32_t spriteX;
    uint32_t playerX;
    
    targetX = -123.45;
    spriteX = targetX;
    playerX = spriteX;
    
    std::cout << "Target X (float)" << targetX << std::endl;
    std::cout << "Sprite X (integer)" << spriteX << std::endl;
    std::cout << "Player X (unsigned int)" << static_cast<int32_t>(playerX) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
