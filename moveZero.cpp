#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int arr[] = {0,1,0,3,0,9,12};
    int n = 7;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0) {

            for(int j = i + 1; j < n; j++) {

                if(arr[j] != 0) {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}