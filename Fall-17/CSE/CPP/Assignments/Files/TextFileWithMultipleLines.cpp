#include <iostream>
#include <fstream>
#include <string>

int main() {

  std::string file = "TextFileWithMultipleLines.txt";

  std::ofstream someFile(file, std::ios::app);

  for (int i = 0; i <= 10; i++) {
    someFile << i << "\n";
  }

  someFile.close();

}
