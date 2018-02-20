#ifndef RandInputStream
#define RandInputStream

#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

vector<int> getRandomInputValues(char* file) {
  
  vector<int> arr;
  int temp;
  
  ifstream myfile(file);

  if(!myfile.is_open()) {

    cout << "Can't open the file " << file << "\n";
  }
  
  else {

    while (myfile >> temp) {

      arr.push_back(temp);
    }
    myfile.close();
  }

  return arr;
}

#endif
