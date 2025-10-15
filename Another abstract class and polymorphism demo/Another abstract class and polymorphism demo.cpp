// Another abstract class and polymorphism demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Exercise
{
	int duration{}; //how many minutes you do it for 
public: 
	virtual void doIt() const
	{
		//the keyword "virtual" means "can be overridden" (by children class implementations) 
		std::cout << "Doing the generic exercise\n";
	}

	Exercise() = default; //set duration = 0; 
	Exercise(int duration)
		:duration(duration)
	{
		//this->duration = duration; 
	}
};

class WeightLifting : public Exercise
{
public: 
	void doIt() const
	{
		std::cout << "BRO, you gotta do PROGRESSIVE OVERLOAD. It's bro science!\n";
	}
};

class Yoga : public Exercise
{
public: 
	void doIt() const
	{
		std::cout << "Doing one of the most beautiful exercise. It's all about BREATH and motion\n";
	}
};

class PickleBall : public Exercise
{
public: 
	void doIt() const
	{
		std::cout << "It's easier than tennis\n";
	}
};

int main()
{

	//std::vector<Exercise> listOfExercises =
	//{
	//	Exercise(12), //"anonymous object" 
	//	WeightLifting(),
	//	Yoga(),
	//	PickleBall()
	//}; 

	Exercise firstExercise(12); //exercised for 12 minutes - in some generic way
	Yoga secondExercise;
	PickleBall thirdExercise; 
	WeightLifting* pFourthExercise = new WeightLifting; //new returns 
								//a memory address
							//AND it allocates X bytes for the object 
	std::cout << " The size of a weightlifting object:" << sizeof(WeightLifting) << "\n";

	std::vector<Exercise*> pListOfExercises
	{
		&firstExercise, //the & when it is applied to a single operand in this way 
						//means get the memory address of this object 
		&secondExercise,
		&thirdExercise,
		pFourthExercise
	};

	for (const auto& currentExercise : pListOfExercises)
	{
		currentExercise->doIt();  //use an arrow for pointers to objects 
	}

	delete pFourthExercise;  //do this! else a memory leak! (if the program were to run in a loop, for instance) 

	//the SMART pointer approach: 
	
	//std::vector<std::unique_ptr<Exercise>> smartListOfExercises =
	//{
	//	std::make_unique<Exercise>(12), //12 seconds of generic exercise (again)
	//	std::make_unique<Yoga>, 

	//}

}

