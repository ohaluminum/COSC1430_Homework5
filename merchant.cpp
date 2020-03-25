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

	antiqueList = nullptr;
	numAnt = nullptr;
}

//Copy constructor here: the copy constructor will perform a deep copy
Merchant::Merchant(const Merchant &copy)
{
	size = copy.size;
	revenue = copy.revenue;

	antiqueList = new Antique[size];
	numAnt = new int[size];
	for (int i = 0; i < size; i++)
	{
		antiqueList[i] = copy.antiqueList[i];
		numAnt[i] = copy.numAnt[i];
	}
}

/*
 *Overload the assignment operator (=) here: this will work almost exactly like the copy constructor
 *Except, there may already be allocated memory in the pointers you must delete first
 */
Merchant Merchant::operator=(const Merchant &copy)
{
	size = copy.size;
	revenue = copy.revenue;

	if (this != &copy) {                            // 1. Don't self-assign
		delete[] antiqueList;                       // 2. Delete old memory
		delete[] numAnt;
		antiqueList = new Antique[size];            // 3. Allocate new memory
		numAnt = new int[size];
		for (int i = 0; i < size; i++)
		{
			antiqueList[i] = copy.antiqueList[i];
			numAnt[i] = copy.numAnt[i];
		}
	}
	return *this;
}

/*
 *Overload operator (==) here: 
 *One merchant is equal to another if:
 *Their revenue is equal
 *They have the same number of antiques
 *The antiques are the same and in the same order
 *They have the same quantity of each antique
 */
bool Merchant::operator==(const Merchant &other)
{
	if (fabs(revenue - other.revenue) < 0.0001)
	{
		if (size == other.size)
		{
			for (int i = 0; i < size; i++)
			{
				if ((antiqueList[i].getName().compare(other.antiqueList[i].getName()) != 0) || (antiqueList[i].getPrice() != other.antiqueList[i].getPrice()) || (numAnt[i] != other.numAnt[i]))
				{
					return false;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

/*
 *AddAntique here: this is a void function that takes as arguments an antique object and an int quantity of that antique. 
 *It will add that antique and its quantity to the end of the respective dynamic arrays. 
 *The arrays will be 1 size larger after the addition.
 */
void Merchant::addAntique(Antique newAnt, int newQuan)
{
	if (size == 0)
	{
		size++;
		antiqueList = new Antique[size];
		numAnt = new int[size];

		antiqueList[0] = newAnt;
		numAnt[0] = newQuan;
	}
	else
	{
		size++;
		Antique *tempAnt = new Antique[size];
		int *tempQuan = new int[size];

		for (int i = 0; i < size - 1; i++)
		{
			tempAnt[i] = antiqueList[i];
			tempQuan[i] = numAnt[i];
		}

		delete[] antiqueList;
		delete[] numAnt;

		antiqueList = new Antique[size];
		numAnt = new int[size];

		for (int i = 0; i < size - 1; i++)
		{
			antiqueList[i] = tempAnt[i];
			numAnt[i] = tempQuan[i];
		}

		antiqueList[size - 1] = newAnt;
		numAnt[size - 1] = newQuan;

		delete[] tempAnt;
		delete[] tempQuan;
	}	
}