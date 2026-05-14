#include <iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    // vector<int> arr = {1,2,1,3,2,1,5};
    // map<int,int>mp;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mp[arr[i]]++;
    // }
    // for(auto it:mp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    
    // string str = "banana";
    // map<char,int> mp;
    // for(int i = 0;i<str.length();i++){
    //     mp[str[i]]++;
    // }
    // for(auto it:mp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    // printing duplicate number
    // vector<int> arr = {1,2,3,2,4,1,4,3,2,5,6,5,9,2};
    // map<int,int> mp;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mp[arr[i]]++;
    // }
    // for(auto it:mp){
    //     if(it.second>1){
    //         cout<<it.first<<" ";
    //     }
    // }

    // maximum frequency
    vector<int> arr = {4,1,2,2,3,2,4,4,4};
    map<int,int> mp;
    int max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    map<int,int>::iterator it = mp.begin();
    while(it!=mp.end()){
        pair<int,int> pr = *it;
        if(pr.second>max){
            max = pr.second;
        }
        it++;
    }
    it = mp.begin();
    while(it!=mp.end()){
        pair<int,int> pr = *it;
        if(pr.second==max){
            cout<<pr.second<<endl;
        }
        it++;
    }
    
    
    return 0;
}