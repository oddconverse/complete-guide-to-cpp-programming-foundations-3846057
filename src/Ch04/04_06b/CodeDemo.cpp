// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"start", "forest", "castle"};

    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    std::cout << "The game has " << checkpoints.size() << " checkpoints" << std::endl;
    std::cout << "Checkpoint 3 is " << checkpoints[2] << std::endl;
    checkpoints[2] = "Dark Castle";
    std::cout << "Checkpoint 3 is " << checkpoints[2] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
