#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {

  char dayChars[2];
  int time, duration;
  float rate, amt;
  
  std::cout << "Enter the day of the call: ";
  std::cin >> dayChars[0] >> dayChars[1];
  
  std::string day(dayChars);
  
  std::cout << "Enter the time of the call in 24 Hours: ";
  std::cin >> time;

  std::cout << "Enter the duration of the call: ";
  std::cin >> duration;

  // using transform() function and ::tolower in STL
  std::transform(day.begin(), day.end(), day.begin(), ::tolower);
  
  std::vector<std::string> workDays
  { "mo", "tu", "we", "th", "fr"};

  std::vector<std::string> weekends
  { "su", "sa"};

  
  if ((std::find(workDays.begin(), workDays.end(), day) != workDays.end())) {

    if (time >= 800 && time <= 1800) {
      rate = 0.40;
    }
    else {
      rate = 0.25;
    }
  }
  else if ((std::find(weekends.begin(), weekends.end(), day) != weekends.end())) {

    rate = 0.15;
  }

  else {

    std::cout << "Enter a valid day" << std::endl;
    main();
    return 0;
  }

  
  amt = rate * duration;

  std::cout << "Your bill is: " << amt << std::endl;
  
  return 0;
}
