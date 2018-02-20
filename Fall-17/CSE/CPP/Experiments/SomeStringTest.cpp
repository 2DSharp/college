// string::empty
#include <iostream>
#include <string>

int main ()
{
  std::string content;

  std::cout << "Please introduce a text. Enter an empty line to finish:\n";
  std::string line;
  while (std::getline(std::cin, line))
    {
      std::cout << line << std::endl;
    }
  return 0;
}
