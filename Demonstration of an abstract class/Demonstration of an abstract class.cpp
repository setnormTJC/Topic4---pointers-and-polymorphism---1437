// Demonstration of an abstract class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class AnAbstractClass
{
public: 
    virtual void doThing() = 0; 
    //marking a function as virtual IMPLIES that a child of this class will override
};

class Shape
{
public: 
    virtual void draw() = 0; //this is now a "pure virtual function"
    //all shapes "should" be able to be drawn
};

class Rectangle : public Shape
{
private:
    int length{}, width{};

public: 
    void draw() override
    {
        std::cout << "Drawing rectangle using its length = " << length <<
            " and width " << width << "\n";
    }
};

class Triangle : public Shape
{
    void draw() override
    {
        std::cout << "Drawing a triangle\n";
    }
};


int main()
{
    //instantiate an object of `AnAbstractClass`
    //AnAbstractClass abstractClassObject; //this will throw!
    //Shape myShape; 

    Rectangle mySpecialRectangle; 
    
    Triangle t;


}
