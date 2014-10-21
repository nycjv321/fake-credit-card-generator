// credit_card_prefix.h
// version 00
#ifndef CREDIT_CARD_PREFIX_H
#define CREDIT_CARD_PREFIX_H

#include <string>
#include "credit_card.h"

// Checks and validates account numbers that contain Luhn checksums
class CreditCardPrefix  {
private: 

public:
    static unsigned short int getDiscover();
    static unsigned short int getMasterCard();
    static unsigned short int getVisa();
    static unsigned short int getAmericanExpress();
}; 

#endif


