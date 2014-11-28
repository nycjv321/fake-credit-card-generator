// credit_card_prefix.cpp
// version 00

#include <string> 
#include "credit_card_prefix.h"
#include "fake_credit_card_generator.h"
#include <time.h>

short unsigned int CreditCardPrefix::discover() {
	srand (time(NULL));
	int prefixes[] = {6011, 65, rand() % 799 + 622126, rand() % 5 + 644};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
short unsigned int CreditCardPrefix::mastercard() {
	return rand() % 4 + 51;
}
short unsigned int CreditCardPrefix::visa() {
	return 4;
}
short unsigned int CreditCardPrefix::american_express() {
	int prefixes[] = {34, 37};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
