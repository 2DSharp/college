#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

void generate(string file, int num) {
  int randNum;
  srand((int) time(0)); //randomize string according to timestamp

  ofstream myfile (file.c_str()); //initialize ofstream

  for(int i=0;i<=num-1; i++) {
    
    //randNum= (rand()%(num*10 -1))+1;
    randNum = i * 17;
    myfile << randNum << "\n";
  }
  myfile.close();
  cout << "Written into " << file << ".\n";
}
int main(){
  //Just something that generates large input files with numbers in newlines
  string name,file;
  int num;
  cout<< "Enter the input file to write into: ";
  cin >> name;
  cout << "\nHow many numbers should be printed? ";
  cin >> num;
  file= name;
  generate(file,num);

  return 0;
}
