#include "merchant.h"

using namespace std;

//Default constructor here: the default constructor will initialize things to zero or nullptr
Merchant::Merchant()
{
	revenue = 0.0;
	antiqueList = nullptr;
	numAnt = nullptr;
}

//Constructor with only a float value
Merchant::Merchant(float r)
{
	revenue = r;
	antiqueList = nullptr;
	numAnt = nullptr;
}

//Destructor here: the destructor will free all allocated memory (delete pointers and delete[ ] dynamic arrays)
Merchant::~Merchant()
{
	delete[] antiqueList;
	delete[] numAnt;
}

//copy constructor
&Merchant::Merchant(const Merchant& copy)
{

}

//==operator overload here

//add antique here