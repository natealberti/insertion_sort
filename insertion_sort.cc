#include <iostream>

using namespace std;

void sort(int arr[], int len) {
    int temp, j;
    // running thru each element in the arr
    for(int i = 1; i < len; i++) {
            temp = arr[i];
            // comparing current to each element before it
            j = i - 1;
            while(j >= 0 && arr[j] > temp) {
                arr[j+1] = arr[j];
                j--;
            }
        // incrementing current element
        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {99, 30, 52, -8, 104, 89, 12, 43, 60, 25};
    int len = 10;
    cout << "unsorted array:" << endl;
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, 10);
    cout << "\n\nsorted array:" << endl;
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
}