// credit_card.h
// version 00

#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <stdlib.h>   

using namespace std;

// Checks and validates account numbers that contain Luhn checksums
class CreditCard  // class declaration
{
private: 

public:
    unsigned long long getDiscover();
    unsigned long long getMasterCard();
    unsigned long long getVisa();
    unsigned long long getAmericanExpress();

}; 

#endif


