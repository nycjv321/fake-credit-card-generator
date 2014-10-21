// fake_credit_card_generator.cpp
// version 00

#include <string> 
#include "fake_credit_card_generator.h"
#include "luhn.h"
#include <stdlib.h> 
#include "number_utilities.h"
#include <iostream>

unsigned long long FakeCreditCardGenerator::getDiscover() {
	long prefix = CreditCardPrefix::getDiscover();
	unsigned long long number = 0;
	int length = to_string(prefix).size();
	switch (length) {
		case 4: 
			number = NumberUtilities::randomNumeric(11);
			break;
		case 2:	
			number = NumberUtilities::randomNumeric(13);
			break;
		case 3:
			number = NumberUtilities::randomNumeric(12);
			break;	
		case 6:	
			number = NumberUtilities::randomNumeric(9);
			break;	
	}
	
	long check_digit = Luhn::get_checkdigit(to_string(prefix).append(to_string(number)));
	return std::stoull(to_string(prefix).append(to_string(number)).append(to_string(check_digit)));
}

unsigned long long FakeCreditCardGenerator::getMasterCard() {

}
unsigned long long FakeCreditCardGenerator::getVisa() {

}
unsigned long long FakeCreditCardGenerator::getAmericanExpress() {

}
