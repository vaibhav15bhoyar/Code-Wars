// If you can't sleep, just count sheep!!

// Task:
// Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...".
// Input will always be valid, i.e. no negative integers.

#include <string>
using namespace std;
std::string countSheep(int number) {
  string str;
  for(int i = 1 ; i<=number;i++){
    str += to_string(i) + " sheep...";
  
  }
  return str;
}