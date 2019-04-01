#include <iostream>
#include <string>
#include <vector>
using namespace std;

int digitSum(int x){

  int sum = 0;
  if (x == 0){
    return x;
  }
  sum += (x%10)+digitSum(x/10);
  return sum;

}


int main(){

  cout << digitSum(1364) << endl;
  cout << digitSum(14) << endl;;
  cout << digitSum(34) << endl;;
  cout << digitSum(-34)<< endl;;
  return 0;
}
