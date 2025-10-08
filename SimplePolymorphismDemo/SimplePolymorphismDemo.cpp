// SimplePolymorphismDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Parent
{
public: 
    virtual void doThing() { std::cout << "Parent doing thing\n"; }

    //The all-important keyword "virtual" is used here!
};

class Child : public Parent
{
public: 
    void doThing() { std::cout << "Child doing thing\n"; }
    /*Including the keyword "override" is recommended (omitted for simplicity)*/
};

void callDoThing(Parent& p)
{
    p.doThing(); 
}

int main()
{
    Parent p; 
    Child c; 

    callDoThing(p); 
    callDoThing(c); 

}

