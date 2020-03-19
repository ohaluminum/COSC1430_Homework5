#include "merchant.h"

using namespace std;

#ifndef MerchantGuild_h
#define MerchantGuild_h

class MerchantGuild
{
public:
	MerchantGuild();
	MerchantGuild(const MerchantGuild &copy);
	~MerchantGuild();
	MerchantGuild& operator=(const MerchantGuild &other);
	void addMember(Merchant newM);
	Merchant* getMembers();
private:
	Merchant* members;
	int guildSize;
	int numMem;
};

#endif

