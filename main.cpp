// main.cpp
#include <iostream>
#include "fake_credit_card_generator.h"
#include "credit_card.h"
#include "libs/optionparser.h"

 enum  optionIndex { UNKNOWN, HELP, VISA, DISCOVER, AMERICAN_EXPRESS, MASTERCARD };
 const option::Descriptor usage[] = {
  {UNKNOWN, 0,"" , ""    ,option::Arg::None, "USAGE: fake-credit-card-generator [options]\n\n"
                                             "Options:" },
  {VISA,    0,"" , "visa",option::Arg::None, "  --visa  \tGenerates a number resembling a Visa card." },
  {DISCOVER,    0,"" , "discover",option::Arg::None, "  --discover  \tGenerates a number resembling a Discover card." },
  {AMERICAN_EXPRESS,    0,"" , "american_express",option::Arg::None, "  --american_express  \tGenerates a number resembling an American Express card." },
  {MASTERCARD,    0,"" , "mastercard",option::Arg::None, "  --mastercard  \tGenerates a number resembling a MasterCard." },
  {0,0,0,0,0,0}
 };

 int main(int argc, char* argv[])
 {
   argc-=(argc>0); argv+=(argc>0); // skip program name argv[0] if present
   option::Stats  stats(usage, argc, argv);
   option::Option options[stats.options_max], buffer[stats.buffer_max];
   option::Parser parse(usage, argc, argv, options, buffer);

   if (parse.error())
     return 1;

   if (options[HELP] || argc == 0) {
     option::printUsage(std::cout, usage);
     return 0;
   }
   
   if (options[VISA]) {
     std::cout << FakeCreditCardGenerator::visa() << endl;
     return 0;
   }
   
   if (options[DISCOVER]) {
     std::cout << FakeCreditCardGenerator::discover() << endl;
     return 0;
   }

   if (options[AMERICAN_EXPRESS]) {
     std::cout << FakeCreditCardGenerator::american_express() << endl;
     return 0;
   }

   if (options[MASTERCARD]) {
     std::cout << FakeCreditCardGenerator::mastercard() << endl;
     return 0;
   }

 }
