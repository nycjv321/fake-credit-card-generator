// credit_card_prefix.cpp
// version 00

#include <string> 
#include "credit_card_prefix.h"
#include "fake_credit_card_generator.h"
#include <time.h>

long CreditCardPrefix::getDiscover() {
	srand (time(NULL));
	int prefixes[] = {6011, 65, rand() % 622126 + 799, rand() % 644 + 5};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
long CreditCardPrefix::getMasterCard() {
	return rand() % 51 + 4;
}
long CreditCardPrefix::getVisa() {
	return 4;
}
long CreditCardPrefix::getAmericanExpress() {
	int prefixes[] = {34, 37};
	return prefixes[rand() % sizeof(prefixes)/sizeof(*prefixes)];
}
