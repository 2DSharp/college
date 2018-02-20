#include <fstream>

int main () {

  std::ofstream outfile;
  outfile.open ("test.txt");

  outfile.write ("This is an apple",13);
  long pos = outfile.tellp();
  outfile.seekp (pos-7);
  outfile.write (" sam",4);
  
  outfile.close();

  return 0;
}
