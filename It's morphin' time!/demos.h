#pragma once
#include "Animal.h"

#include<memory> 

#include<vector> 

void callMakeSound_withReference(const Animal& animal)
{
    animal.makeSound();
}

void callMakeSound_withRawPointer(Animal* ptrToAnimal)
{
    ptrToAnimal->makeSound();
}

void callMakeSound_withSmartPointer(const std::unique_ptr<Animal>& ptrToAnimal)
{
    ptrToAnimal.get()->makeSound();
}



void demoSimplestWayToMakeAnimalSounds()
{
    Animal animal;
    WildCat wildcat;
    Fox fox;

    animal.makeSound();
    wildcat.makeSound();
    fox.makeSound();
}

void demoAnotherWayToMakeAnimalSounds()
{
    std::vector<Animal> theZoo =
    {
        Animal{},
        WildCat{},
        Fox{}
    };

    for (const auto& currentAnimal : theZoo)
    {
        callMakeSound_withReference(currentAnimal);
        std::system("pause");
    }
}



void demoPolymorphicWayToMakeAnimalSounds()
{
    using animalPtr = std::unique_ptr<Animal>; //a type alias for ease of reading

    std::vector<animalPtr> pointerZoo; 

    auto foxPtr = std::make_unique<Fox>(); 


    pointerZoo.push_back(std::make_unique<Animal>());
    pointerZoo.push_back(std::make_unique<WildCat>());
   
    pointerZoo.push_back(std::move(foxPtr)); 
    
    for (auto& currentAnimalPtr : pointerZoo)
    {
        callMakeSound_withSmartPointer(currentAnimalPtr); 
        //note: passing unique_ptr<Animal> by value for this function forces use of std::move
    }
}




