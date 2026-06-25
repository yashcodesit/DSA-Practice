#include <iostream>
#include<stack>

using namespace std;
void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st, x);

    st.push(temp);
}
void reverse(stack<int>& st){
  if(st.empty()){
    return;
  }
  int store = st.top();
  st.pop();

  reverse(st);
  insertAtBottom(st,store);
}
int main(){
  stack<int> st;
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(6);
  st.push(7);
  reverse(st);
  while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
  return 0;
}