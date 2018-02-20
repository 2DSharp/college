#include <iostream>
#include <string>

int main() {

  std::string str;
  std::string word[10];
  std::cout << "Enter a sentence";
  std::getline(std::cin, str);

  std::cout << str;
  for (int i = 0;  i <= str.length() - 1; i++) {

    std::cout << str.at(i);
  }

  for (int i = 10; i >= 0; i-- ) {

    std::cout << word[i];
  }
  std::cout << std::endl;

  return 0;

}
