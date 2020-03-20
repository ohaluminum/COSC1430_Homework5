
#include "antique.h"
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

#ifndef merchant_h
#define merchant_h

class Merchant {
private:
	Antique *antiqueList;
	int *numAnt;
    float revenue;
	int size;
public:
	Merchant();
	Merchant(float r);
	~Merchant();
	Merchant(const Merchant &copy);
	Merchant operator=(const Merchant &copy);
	bool operator==(const Merchant &other);
	void addAntique(Antique newAnt, int newQuan);
};


#endif /* merchant_h */