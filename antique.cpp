#include "antique.h"

using namespace std;

void Antique::setName(string NAME) 
{
	name = NAME;
}

void Antique::setPrice(float PRICE) 
{
	price = PRICE;
}

string Antique::getName() const 
{
	return name;
}

float Antique::getPrice() const 
{
	return price;
}

string Antique::toString() 
{
	//string price_s;
	ostringstream streamObj;

	streamObj << fixed;
	streamObj << setprecision(2);

	streamObj << price;
	return name + ": $" + streamObj.str();
}

Antique::Antique() 
{
	name = "";
	price = 0;
}

bool Antique::operator==(const Antique &other)
{
	bool isSame = false;

	//Using compare() to compare two strings
	if ((price == other.price) && (name.compare(other.name) == 0))
	{
		isSame = true;
	}
	return isSame;
}

Antique Antique::operator+(const Antique &other)
{
	Antique antiqueTotal;

	antiqueTotal.price = price + other.price;

	//Creating a string stream
	ostringstream outSS;

	outSS << name << " + " << other.name;
	antiqueTotal.name = outSS.str();
}
