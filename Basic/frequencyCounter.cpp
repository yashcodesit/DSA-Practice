#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> arr = {1,2,2,3,4,4,4,4};
    map<int,int> mp;
    for(int x:arr){
        mp[x]++;
    }
    int maxfreq = INT_MIN;
    int minfreq = INT_MAX;
    
    for(auto it : mp ){
        cout<<it.first<<" -> "<<it.second<<endl;
        if(it.second > maxfreq){
            maxfreq = it.second;
        }
        if(it.second < minfreq){
            minfreq = it.second;
        }
    }
    cout<<"Maximum frequency is "<<maxfreq<<endl<<"Minimum frequency is "<<minfreq<<endl;
    
    return 0;
}