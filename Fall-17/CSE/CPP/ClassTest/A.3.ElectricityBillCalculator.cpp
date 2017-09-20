/**
 * This program calculates the Electricity Bill and outputs the detailed bill
 * Along with user info 
 *
 * @author Dedipyaman Das
 * Registration No. : 17BCE7080
 */

#include <iostream>
#include <string>

const float SLAB_1 = 1.20;
const float SLAB_2 = 1.50;
const float SLAB_3 = 1.80;
const float SLAB_4 = 2.00;

int main() {

  int custID;
  float rate, totalAmt, amt, units;
  std::string name;
  
  std::cout << "Enter the customer ID, Name and units consumed separated by spaces:";
  std::cout << "Example: 1001 James 800";
  std::cout << std::endl << "Input: ";
  std::cin >> custID >> name >> units;

  if (units <= 199) {

    rate = SLAB_1;
  }
  else if (units >= 200 && units <= 400) {

    rate = SLAB_2;
  }

  else if (units >= 400 && units <= 600) {

    rate = SLAB_3;
  }
  else if (units > 600) {

    rate = SLAB_4;
  }

  amt = rate * units;

  if (amt < 100) {

    totalAmt = 100;
  }
  
  if (amt > 400) {
    
    totalAmt = amt + amt*0.15;
  }

  std::cout << "Electricity bill calculated!" << std::endl
	    << "Customer ID: " << custID << std::endl
	    << "Customer Name: " << name << std::endl
	    << "Units consumed: " << units << std::endl
	    << "Amount charges @ " << rate << "/unit: "
	    << amt << std::endl
	    << "Surcharge: " << totalAmt - amt << std::endl
	    << "Total amount: " << totalAmt << std::endl;
  return 0;
}
