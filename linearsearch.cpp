#include <iostream>

using namespace std;
int main(){
    int arr[5]={2,4,3,5,1};
    int key = 1;
    for(int i = 0; i<5; i++){
        if (arr[i]==key)
        {
            cout<<key<<" found at index "<<i;
        }
        
    }
    return 0;
}