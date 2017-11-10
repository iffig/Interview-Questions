/*
  In this problem, check to see if a given string is a palindrome
  - Assume there is no extra spacing

  Examples:
      isPalindrome("hello") --> return 0
      isPalindrome("abba") --> return 1
      isPalindrome("racecar") --> return 1
*/


#include <iostream>
using namespace std;

bool isPalindrome(string x){
  int n = x.length();
  int i = 0;
  int j = n-1;
  while(i <= j){
    if(x[i] != x[j]) return false;
    else{
      i++;
      j--;
    }
  }
  return true;
}

int main () {

  bool check1 = isPalindrome("racecar");
  bool check2 = isPalindrome("housecat");
  bool check3 = isPalindrome("codingiscool");

  cout << check1 << endl;
  cout << check2 << endl;
  cout << check3 << endl;

}
