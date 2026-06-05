#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {5, 3, 4, 1};

    for(int i = 1; i < arr.size(); i++) {

        int current = arr[i];

        int j = i - 1;

        while(j >= 0 && arr[j] > current) {

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = current;
    }

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}