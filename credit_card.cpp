// credit_card.cpp

#include "credit_card.h"
#include <string> 
#include <sstream>
#include <regex>

using namespace std;

// Checks to see if a provided account number is 
// valid based on the suffix checksum digit
 CreditCard::CreditCard(string n, string r, unsigned short int s) {
	name = n;
	regex = r;
	length = s; 	
 }
 
 const CreditCard *CreditCard::VISA() {
 	const CreditCard *visa = new CreditCard("Visa", "^4[0-9]{12}(?:[0-9]{3})?$", 16);
 	return visa;
 }
 
 const CreditCard *CreditCard::DISCOVER() {
 	const CreditCard *visa = new CreditCard("Discover", "^6(?:011\d{12}|5\d{14}|4[4-9]\d{13}|22(?:1(?:2[6-9]|[3-9]\d)|[2-8]\d{2}|9(?:[01]\d|2[0-5]))\d{10})$", 16);
 	return visa;
 }
 
   const CreditCard *CreditCard::MASTER_CARD() {
 	const CreditCard *visa = new CreditCard("MasterCard", "^5[1-5][0-9]{14}$", 16);
 	return visa;
 }
 
 const CreditCard *CreditCard::AMERICAN_EXPRESS() {
 	const CreditCard *visa = new CreditCard("American Express", "^3[47][0-9]{13}$", 15);
 	return visa;
 }
 
string CreditCard::get_name() const {
	return name;
}

 
string CreditCard::get_regex() const {
	return regex;
}

 
unsigned short int CreditCard::get_length() const {
	return length;
}

