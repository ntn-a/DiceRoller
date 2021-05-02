#include "DiceRoller.h"

int main(){
    DiceRoller d;
    std::string input;
    std::cin >> input;
    std::cout << d.rollDice(input) << std::endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}