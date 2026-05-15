// arr = [1 2 3 4 5 6]
// k = 7

// Output:
// 1 6
// 2 5
// 3 4
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    set<int> st;
    int k = 7;
    
    for(int num : arr){

        int need = k - num;

        if(st.find(need) != st.end()){
            cout << "Pair found: "
                 << num << " " << need << endl;
        }

        st.insert(num);
    }
    
    return 0;
}