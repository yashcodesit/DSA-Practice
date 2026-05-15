#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,2,3,1,4,5,4};
    set<int>st;
    for(int i:arr){
        st.insert(i);
    }
    for(int x : st ){
        cout<<x<<" ";
    }
    return 0;
}