#include "merchant.h"

using namespace std;

//Default constructor here: the default constructor will initialize things to zero or nullptr
Merchant::Merchant()
{
	revenue = 0.0;
	antiqueList = nullptr;
	numAnt = nullptr;
	size = 0;
}

//Constructor with only a float value here: the constructor with one value will initialize revenue to the float and everything else to zero or nullptr
Merchant::Merchant(float r)
{
	revenue = r;
	antiqueList = nullptr;
	numAnt = nullptr;
	size = 0;
}

//Destructor here: the destructor will free all allocated memory (delete pointers and delete[ ] dynamic arrays)
Merchant::~Merchant()
{
	delete[] antiqueList;
	delete[] numAnt;
}

//Copy constructor here: the copy constructor will perform a deep copy
Merchant::Merchant(const Merchant &copy)
{
	int item = copy.size;

	antiqueList = new Antique[item];
	numAnt = new int[item];
	for (int i = 0; i < item; i++)
	{
		antiqueList[i] = copy.antiqueList[i];
		numAnt[i] = copy.numAnt[i];
	}
}

//==operator overload here

/*
 *Add antique here: this is a void function that takes as arguments an antique object and an int quantity of that antique. 
 *It will add that antique and its quantity to the end of the respective dynamic arrays. 
 *The arrays will be 1 size larger after the addition.
 */
void Merchant::addAntique(Antique newAnt, int newQuan)
{

}