#include <iostream>
#include<algorithm>
using namespace std;
int getLength(char ch[]){
  int length = 0;
  int i = 0;
  while(ch[i]!='\0'){
    length++;
    i++;
  }
  return length;
}
void reverse(char name[]){
  int n = getLength(name);
  int s = 0;
  int e = n-1;
  while(s<=e){
    swap(name[s++],name[e--]);
  }

}
int main(){
  char name[100];
  cout<<"Enter string "<<endl;
  cin>>name;
  reverse(name);
  cout<<name<<endl;
  cout<<"length of sting is "<<getLength(name);
  return 0;
}