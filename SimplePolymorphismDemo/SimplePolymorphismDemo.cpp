// SimplePolymorphismDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Parent
{
public: 
    virtual void doThing() { std::cout << "Parent doing thing\n"; }

    //virtual means "I am a function that my children classes can OVERRIDE"
    // 
    //The all-important keyword "virtual" is used here!
};

class Child : public Parent
{
public: 
    void doThing() override 
    { 
        std::cout << "Child doing thing\n"; 
    }
    /*Including the keyword "override" is recommended (omitted for simplicity)*/
};

void callDoThing(Parent& p)
{
    p.doThing(); 
}

int main()
{
    //
    Parent p; 
    //p.doThing(); //prints "doing parent thing"
    Child c; 
    //c.doThing();  //prints "doing child thing"

    callDoThing(p); 
    callDoThing(c); 

}

