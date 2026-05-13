#include <iostream>
#include<vector>

using namespace std;
int main(){
    //Creating a vector
    vector<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    vector<int>second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    second.push_back(500);
    //Swapping vector 1 value to vector 2
    first.swap(second);
    //printing value of vector using for each loop
    cout<<"Printing all element "<<endl;
    for(int i:first){
        cout<<i<<" ";
    }
    //using front and back function of vector
    cout<<"First element of vector "<<first.front()<<endl;
    cout<<"Last element of vector "<<first.back()<<endl;
    //poping the last element of vector
    first.pop_back();
    cout<<"Printing all element after poping "<<endl;
    for(int i:first){
        cout<<i<<" ";
    }
    return 0;
}