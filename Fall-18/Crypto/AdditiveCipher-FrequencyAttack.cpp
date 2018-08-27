#include <iostream>
#include <string>

void findPossiblePlainTexts(const std::string&, int);
char* decrypt(const char*);

int main(int argc, char** argv)
{
  std::cout << "Letter Frequency attack on additive cipher\n";
  std::cout << "Enter the cipher text: ";

  std::string ciphertext;
  std::cin >> ciphertext;

  int num;
  std::cout << "Total possible plaintext sets: ";
  std::cin >> num;

  findPossiblePlainTexts(ciphertext, num);
}

void findPossiblePlainTexts(const std::string& cipherText, int num)
{
  int i = 0;
  const char *array = cipherText.c_str();
  while (i < num) {
    std::cout << i + 1 << decrypt(array) << "\n";
  }
}

char* decrypt(const char *cipherText)
{
  return nullptr;
}
