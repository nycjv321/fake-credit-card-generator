// credit_card_prefix.cpp
// version 00

#include <string> 
#include "credit_card_prefix.h"
#include "fake_credit_card_generator.h"
#include <time.h>

short unsigned int CreditCardPrefix::getDiscover() {
	srand (time(NULL));
	int prefixes[] = {6011, 65, rand() % 622126 + 799, rand() % 644 + 5};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
short unsigned int CreditCardPrefix::getMasterCard() {
	return rand() % 51 + 4;
}
short unsigned int CreditCardPrefix::getVisa() {
	return 4;
}
short unsigned int CreditCardPrefix::getAmericanExpress() {
	int prefixes[] = {34, 37};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
