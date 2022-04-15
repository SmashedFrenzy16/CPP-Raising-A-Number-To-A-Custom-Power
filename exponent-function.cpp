#include <iostream>

using namespace std;

int power(int startNum, int expNum)
{
  
  result = 1;
  
  for(int i = 0; i < expNum; i++) {
    
    result = result * startNum;
  
  }
  
  
  
  return result;
  
  
}

int main()
{
  
  int initNum;
  int powerNum;
  
  cout << "Enter a number (integer): ";
  cin >> initNum;
  
  cout << "Enter a power (integer): ";
  cin >> powerNum;
  
  cout << power(initNum, powerNum);
  
  
  return 0;
}
