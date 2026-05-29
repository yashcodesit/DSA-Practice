#include <iostream>

using namespace std;
int countways(int n){
  if(n<=2){
    return n;
  }
  return countways(n-1)+countways(n-2);
}
int main(){
  int n;
  cout<<"Enter number "<<endl;
  cin>>n;
  cout << "Number of ways to climb stairs is: " << countways(n);
  return 0;
}