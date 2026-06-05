#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    // VECTOR

    vector<int> v = {5, 2, 8, 1, 9};

    cout << "Vector Elements: ";
    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;

    // Sort
    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;

    // Reverse
    reverse(v.begin(), v.end());

    cout << "Reversed Vector: ";
    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;
    // SET

    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    cout << "\nSet Elements: ";

    for(int x : s) {
        cout << x << " ";
    }

    cout << endl;
    // MAP

    map<string, int> marks;

    marks["Yash"] = 95;
    marks["Rahul"] = 88;
    marks["Aman"] = 76;

    cout << "\nMap Elements:\n";

    for(auto x : marks) {
        cout << x.first << " -> " << x.second << endl;
    }
    // STACK

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "\nStack Top: " << st.top() << endl;

    st.pop();

    cout << "After Pop Top: " << st.top() << endl;
    // QUEUE

    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "\nQueue Front: " << q.front() << endl;

    q.pop();

    cout << "After Pop Front: " << q.front() << endl;

    // PAIR

    pair<string, int> p;

    p = {"Age", 20};

    cout << "\nPair:\n";
    cout << p.first << " -> " << p.second << endl;

    // VECTOR OF PAIRS

    vector<pair<string, int>> students;

    students.push_back({"Yash", 90});
    students.push_back({"Aman", 85});

    cout << "\nVector of Pairs:\n";

    for(auto x : students) {
        cout << x.first << " " << x.second << endl;
    }

    // BINARY SEARCH

    vector<int> arr = {1,2,3,4,5,6,7};

    if(binary_search(arr.begin(), arr.end(), 4)) {
        cout << "\n4 Found\n";
    }
    else {
        cout << "\n4 Not Found\n";
    }


    // MIN / MAX

    cout << "\nMinimum Element: "
         << *min_element(arr.begin(), arr.end());

    cout << "\nMaximum Element: "
         << *max_element(arr.begin(), arr.end());



    return 0;
}