#include "Character.h"

Character::Character(const std::string& n, int h, int a, int d) : name(n), health(h), attack(a), defense(d) 
{
    std::cout << "Character " << name << " created!\n";
}

void Character::displayInfo() const
{
    std::cout << "Name: " << name << ", HP: " << health
        << ", Attack: " << attack << ", Defense: " << defense << std::endl;

}

Character::~Character()
{
    std::cout << "Character " << name << " destroyed!\n";
}

