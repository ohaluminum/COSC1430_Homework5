
#include "antique.h"
#include <iostream>
#include <fstream>

using namespace std;

#ifndef merchant_h
#define merchant_h

class Merchant {
private:
	Antique* antiqueList;
	int* numAnt;
    float revenue;
	int size;
public:
	Merchant();
	Merchant(float r);
	~Merchant();
	Merchant(const Merchant &copy);
	Antique operator+(const Antique& other);

	void addAntique(Antique newAnt, int newQuan);
	/*
	   == operator overload here
	   addAntique function here
	*/
};


#endif /* merchant_h */