#pragma once
#include <iostream>

class Weapon
{
private:
    std::string name;
    int attack;
    int weight;

public:
    // �����������
    Weapon(const std::string& n, int a, int w);

    void displayInfo() const;

    // ����������
    ~Weapon();

};

