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
class FakeCreditCardGenerator {
	private: 
	public:
	    unsigned static long long discover();
	    unsigned static long long mastercard();
	    unsigned static long long visa();
	    unsigned static long long american_express();
}; 

#endif


