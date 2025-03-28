#pragma once
#include <iostream>

class Character
{
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    Character(const std::string& n, int h, int a, int d);

    // ���������� ��������� ==
    bool operator==(const Character& other) const;

    // ���������� ��������� <<
    friend std::ostream& operator<<(std::ostream& os, const Character& character);

};

