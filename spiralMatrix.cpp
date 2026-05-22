#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
  vector<vector<int>> arr ={
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};
      
      vector<int> ans;
      int row = arr.size();
      int col = arr[0].size();
      int count = 0;
      int total = row*col;

      int startRow = 0;
      int startCol = 0;
      int endRow = row-1;
      int endCol = col-1;

      while(count<total){
        for(int i = startCol;count<total&&i<=endCol;i++){
          ans.push_back(arr[startRow][i]);
          count++;
        }
        startRow++;
        for(int i = startRow;count<total&&i<=endRow;i++){
          ans.push_back(arr[i][endCol]);
          count++;
        }
        endCol--;
        for(int i = endCol; count<total&&i>=startCol;i--){
          ans.push_back(arr[endRow][i]);
          count++;
        }
        endRow--;
        for(int i = endRow;count<total&&i>=startRow;i--){
          ans.push_back(arr[i][startCol]);
          count++;
        }
        startCol++;

      }
      for(int x:ans){
        cout<<x<<" ";
      }


  return 0;
}