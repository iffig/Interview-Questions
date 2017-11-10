/*
  In this problem, you must take an integer reverse its order
  - Assume no leading zeroes.
  - Negatives should stay in leading position.
  - If integer is reversed and has a leading zero, it should be dropped.

  Examples:
      reverse(12345) --> return 54321
      reverse(-5643) --> return -3465
      reverse(1230) --> return 321
*/


#include <iostream>
using namespace std;

int reverse(int x){
  bool positive = true;
  if(x < 0){
    positive = false;
    x = -x;
  }
  int mult = 1;
  int reverse = 0;
  while(x > 0){
    int digit = x/mult % 10;
    int subtract = digit*mult;
    reverse = reverse*10 + digit;
    x -= subtract;
    mult *= 10;
  }
  if(!positive)return -reverse;
  else return reverse;
}

int main () {

  int solution1 = reverse(12345);
  int solution2 = reverse(-12345);
  int solution3 = reverse(1230);
  int solution4 = reverse(5004);
  int solution5 = reverse(66);

  cout << solution1 <<endl;
  cout << solution2 <<endl;
  cout << solution3 <<endl;
  cout << solution4 <<endl;
  cout << solution5 <<endl;

}
