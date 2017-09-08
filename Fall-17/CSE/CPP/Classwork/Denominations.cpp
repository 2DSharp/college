#include <iostream>
#include <algorithm>


int main() {

  int amt;
  int denomination;
  int res, change;
  
  std::cout << "Enter the amount: ";
  std::cin >> amt;

  std::cout << "Enter the denomination "
	    << std::endl
	    << "(5, 10, 20, 50, 100, 500, 2000) : ";
  
  std::cin >> denomination;
  
  std::vector<int>denominations
  { 5, 10, 20, 50, 100, 500, 2000 };
  
  if (!std::binary_search(denominations.begin(), denominations.end(), denomination)) {

    std::cout << "Enter an actual denomination from the list" << std::endl;
    main();
  }

  res = amt/denomination;
  change = amt % denomination;

  std::cout << "The number of " << denomination << " rupees note required is "
	    << res
	    << std::endl
	    << "And the change left is: " << change << std::endl;

  return 0;
}
