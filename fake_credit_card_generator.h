// fake_credit_card_generator.h
// version 00

#ifndef FAKE_CREDIT_CARD_GENERATOR_H
#define FAKE_CREDIT_CARD_GENERATOR_H

#include <string>
#include <stdlib.h>   
#include "credit_card.h"
#include "credit_card_prefix.h"

using namespace std;

// Checks and validates account numbers that contain Luhn checksums
class FakeCreditCardGenerator : public CreditCard  // class declaration
{
private: 
	CreditCardPrefix credit_card_prefix;
public:
    unsigned long long getDiscover();
    unsigned long long getMasterCard();
    unsigned long long getVisa();
    unsigned long long getAmericanExpress();
}; 

#endif


