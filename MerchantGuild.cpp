#include "MerchantGuild.h"

using namespace std;

/*
 *Constructor with parameter size (with default value 10):
 *Sets guildSize to size, allocates members array and sets numMem to 0. 
 *If size < 1, use default value 10
 */
MerchantGuild::MerchantGuild(int size)
{
    if (size < 1)
    {
        size = 10;
    }
    guildSize = size;

    members = new Merchant[guildSize];
    numMem = 0;
}

//Copy constructor: perform a deep copy
MerchantGuild::MerchantGuild(const MerchantGuild &copy)
{
    guildSize = copy.guildSize;
    numMem = copy.numMem;

    members = new Merchant[guildSize];
    for (int i = 0; i < guildSize; i++)
    {
        members[i] = copy.members[i];
    }
}

//Destructor: free the allocated memory
MerchantGuild::~MerchantGuild()
{
    delete[] members;
    members = nullptr;
}

//Overloads the assignment operator (=): this works like the copy constructor except there is allocated memory you have to delete first
MerchantGuild& MerchantGuild::operator=(const MerchantGuild &other)
{
    guildSize = other.guildSize;
    numMem = other.numMem;

    if (this != &other)
    {
        delete[] members;
        members = new Merchant[guildSize];
        for (int i = 0; i < guildSize; i++)
        {
            members[i] = other.members[i];
        }
    }

    return *this;
}

/*
 *addMember:
  *This is a void function that takes as an argument a Merchant object, 
  *adds it to the end of its array of members, and increases it the number of members by 1. 
  *If the array is full(numMem == guildSize), do not add the new memberand print "Guild is full."
  */
void MerchantGuild::addMember(Merchant newM)
{
    if (numMem == guildSize) 
    {
        cout << "Guild is full." << endl;
    }
    else
    {
        members[numMem - 1] = newM;
        numMem++;
    }
}

//getMembers: returns the pointer to the dynamic array
Merchant* MerchantGuild::getMembers()
{
    return members;
}
