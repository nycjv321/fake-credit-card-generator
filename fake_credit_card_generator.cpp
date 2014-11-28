// fake_credit_card_generator.cpp
// version 00

#include <string> 
#include "fake_credit_card_generator.h"
#include "luhn.h"
#include <stdlib.h> 
#include "number_utilities.h"
#include <iostream>

unsigned long long FakeCreditCardGenerator::discover() {
	long prefix = CreditCardPrefix::discover();
	unsigned long long number = 0;
	int length = to_string(prefix).size();
	switch (length) {
		case 4: 
			number = NumberUtilities::random_numeric(11);
			break;
		case 2:	
			number = NumberUtilities::random_numeric(13);
			break;
		case 3:
			number = NumberUtilities::random_numeric(12);
			break;	
		case 6:	
			number = NumberUtilities::random_numeric(9);
			break;	
	}
	
	long check_digit = Luhn::checkdigit(to_string(prefix).append(to_string(number)));
	return std::stoull(to_string(prefix).append(to_string(number)).append(to_string(check_digit)));
}

unsigned long long FakeCreditCardGenerator::mastercard() {
	long prefix = CreditCardPrefix::mastercard();
	unsigned long long number = NumberUtilities::random_numeric(13);
	long check_digit = Luhn::checkdigit(to_string(prefix).append(to_string(number)));
	return std::stoull(to_string(prefix).append(to_string(number)).append(to_string(check_digit)));
}
unsigned long long FakeCreditCardGenerator::visa() {
	long prefix = CreditCardPrefix::visa();
	unsigned long long number = NumberUtilities::random_numeric(14);
	long check_digit = Luhn::checkdigit(to_string(prefix).append(to_string(number)));
	return std::stoull(to_string(prefix).append(to_string(number)).append(to_string(check_digit)));

}
unsigned long long FakeCreditCardGenerator::american_express() {
	long prefix = CreditCardPrefix::american_express();
	unsigned long long number = NumberUtilities::random_numeric(12);
	long check_digit = Luhn::checkdigit(to_string(prefix).append(to_string(number)));
	return std::stoull(to_string(prefix).append(to_string(number)).append(to_string(check_digit)));
}
