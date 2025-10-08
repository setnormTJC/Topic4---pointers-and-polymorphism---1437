#pragma once
#include <string>
#include <iostream>
class Animal
{
private:
    std::string speciesName{};

public:
    virtual void makeSound() const //somebody forgot the VIRTUAL keyword!
    {
        std::cout << "Who knows what sound a generic animal makes?\n";
    }
};

class WildCat : public Animal
{
public:
    void makeSound() const
    {
        std::system("wildcat-ratatat.m4a");
    }
};

class Fox : public Animal
{
public:
    void makeSound() const
    {
        std::system("foxy.wav");
    }
};
