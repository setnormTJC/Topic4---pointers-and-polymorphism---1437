// One student submission of the Car lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class SomeComponentClass
{
private: 
    int a{};
public: 
    SomeComponentClass()
    {
        std::cout << "Default constructor of SomeComponentClass called\n";

    }
    SomeComponentClass(int a)
        :a(a)
    {
        std::cout << "Parameterized constructor of SomeComponentClass called\n";
    }

    void setA(int a)
    {
        this->a = a; 
    }

    friend class SomeClass; //gives SomeClass access to the private member variable
};

class SomeClass
{
private: 
    SomeComponentClass someComponentClass; 
public: 
    SomeClass(int a)
        :someComponentClass(a)
    {
       /* someComponentClass.setA(a); */

    }

};


int doSomething() //"free function"
{
    return 1; 
}

int main()
{
    SomeClass someClass(4); 

}

