#include<bits/stdc++.h>

using namespace std;


void selec_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min]) {
                min = j; // Track the index of the minimum element
            }
        }
        // Swap only once per outer loop iteration
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}



int main() {
    int n = 6;
    int arr[] = {13, 46, 24, 52, 20, 9};
    selec_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
