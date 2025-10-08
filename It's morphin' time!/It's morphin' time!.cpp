// It's morphin' time!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<chrono> //chronological (related time)

#include <iostream>

#include<thread> //ex: massively-parallelized algorithms (GPU-accelearted AI algorithms), threads

#include<vector> 

#include"demos.h"









int main()
{
    //demoSimplestWayToMakeAnimalSounds(); 

    //demoAnotherWayToMakeAnimalSounds(); 

    demoPolymorphicWayToMakeAnimalSounds(); 

    //now use pointers to enable "polymorphism":
 /*   std::unique_ptr<Animal> ptrToGenericAnimal = std::make_unique<Animal>(); 
    std::unique_ptr<Animal> ptrToWildCat = std::make_unique<WildCat>(); 
 */   

    //using animalPtr = std::unique_ptr<Animal>; 

    //auto ptrToGenericAnimal = std::make_unique<Animal>();

    //std::vector<animalPtr> pointerZoo; 

    //pointerZoo.emplace_back(ptrToGenericAnimal); 

    
    //emplace_back eliminates need for std::move!

    //for (auto& currentAnimalPtr : pointerZoo)
    //{
    //    callMakeSound_withSmartPointer(std::move(currentAnimalPtr));
    //    std::system("pause");
    //}

    //callMakeSound_withSmartPointer(std::move(ptrToGenericAnimal)); 
    //callMakeSound_withSmartPointer(std::move(ptrToWildCat));

}

