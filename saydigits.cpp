#include <iostream>

using namespace std;
void saydigit(int n, string digit[]){
  if(n == 0){
    return;
  }
  int d = n%10;
  n = n/10;
  saydigit(n,digit);
  cout<<digit[d]<<" ";
}
int main(){
  int n;
  cout<<"Enter number "<<endl;
  cin>>n;
  string digit[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  if(n==0){
    cout<<digit[0];
  }
  saydigit(n,digit);
  return 0;
}