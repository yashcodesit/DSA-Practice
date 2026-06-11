#include <iostream>

using namespace std;
int main(){
  int num[3]={3,0,1};
  int actual = 3;
  int excepted = actual*(actual+1)/2;
  for(int i:num)
  {
    excepted += i; 
  }
  return 0;
}