// credit_card.h
#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include <vector>

using namespace std;

class CreditCard {
	private: 
		string name;
		string regex;
		unsigned short int length;
	public:
		CreditCard(string n, string r, unsigned short int s);
		CreditCard();
	    string get_name() const;
	    string get_regex() const;
	    unsigned short int get_length() const;
	    static const CreditCard *VISA();
	    static const CreditCard *DISCOVER();
	    static const CreditCard *MASTER_CARD();
	    static const CreditCard *AMERICAN_EXPRESS();
	    static const vector<CreditCard> cards();
	    static CreditCard *parse(string card);
}; 

#endif
