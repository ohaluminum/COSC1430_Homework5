#include "MerchantGuild.h"

using namespace std;

/*
 *Constructor with parameter size (with default value 10):
 *Sets guildSize to size, allocates members array and sets numMem to 0. 
 *If size < 1, use default value 10
 */
MerchantGuild::MerchantGuild(int size = 10)
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

MerchantGuild& MerchantGuild::operator=(const MerchantGuild& other)
{

}

void MerchantGuild::addMember(Merchant newM)
{

}

Merchant* MerchantGuild::getMembers()
{

}
