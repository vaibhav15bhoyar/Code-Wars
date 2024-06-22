// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

// Examples:
// Input: 42145 Output: 54421

// Input: 145263 Output: 654321

// Input: 123456789 Output: 987654321


#include <cinttypes>
using namespace std;

uint64_t descendingOrder(uint64_t a)
{
  long long rem ;
  vector<int> v;
  while(a > 0){
    rem = a % 10;
    v.push_back(rem);
    a = a / 10;
  }
  
  sort(v.begin(),v.end(),greater<int>());
  long long temp = 0;
  for(int i = 0 ; i < v.size() ; i++){
    temp = temp * 10 + v[i];
    
  }
  return temp;
}