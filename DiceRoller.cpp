#include "DiceRoller.h"

int DiceRoller::rollDice(std::string s){
    int sum = 0;
    int roll = std::stoi(s.substr(0, s.find("d")));
    int die = std::stoi(s.substr(s.find("d") + 1, s.size() - 1));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(1, die);
    for (int i = 0; i < roll; i++){
        sum += distr(gen);
    }
    return sum;
}