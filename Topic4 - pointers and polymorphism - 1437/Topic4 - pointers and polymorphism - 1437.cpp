// Topic4 - pointers and polymorphism - 1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory> //for "smart" pointers that NEVER leak (RAM) 
#include<string> 

int main()
{
	/*This is called "manual dynamic memory management"*/
	//while (true)
	//{
	//	int* pointerToAnInteger = new int; 
	//	delete pointerToAnInteger; //"deallocates" the memory we just asked for 
	//}

	//NO leak here!
	//while (true)
	//{
		//std::unique_ptr<int> ptrToAnInteger; 
	//}

	//std::cout << "The default memory address of the smart pointer is 0x" << ptrToAnInteger.get() << "\n";

	std::cout << "How many things do you want space for on your grocery list?\n";

	int desiredNumberOfThings; 
	std::cin >> desiredNumberOfThings; 
	std::cin.ignore(); //"flush" the newline character that gets read in with cin
	//std::string groceryList[desiredNumberOfThings]; //doesn't work!

	std::unique_ptr<std::string[]> ptrToAnArrayOfStrings; 

	ptrToAnArrayOfStrings = std::make_unique<std::string[]>(desiredNumberOfThings);
	//this statement is similar to (but SAFER than): 
	//std::string* ptrToString = new std::string[desiredSize]; 

	std::string currentItemInGroceryList; 

	//get the items in the grocery list from keyboard input: 
	for (int i = 0; i < desiredNumberOfThings; ++i)
	{
		std::cout << "Enter thing number " << i + 1 << "\n";

		std::getline(std::cin, currentItemInGroceryList);

		ptrToAnArrayOfStrings[i] = currentItemInGroceryList; 
	}

	//now print the full grocery list: 
	for (int i = 0; i < desiredNumberOfThings; ++i)
	{
		std::cout << ptrToAnArrayOfStrings[i] << "\n";
	}

	//int nums[111'111'111'111]; //stack overflow! 

	//print the MEMORY address of the FIRST element in the dynamic (subject to change) array 
	std::cout << "The address of the first element is: " << ptrToAnArrayOfStrings << "\n";
	std::cout << "Alternative syntax for getting the address: " << ptrToAnArrayOfStrings.get() << "\n";

	std::cout << "\"Dereferencing\" the first element: " << *ptrToAnArrayOfStrings.get() << "\n";

}

