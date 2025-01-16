#include<bits/stdc++.h>
using namespace std;


// int maxSum(int arr[], int n, int k) {
//     int max_sum = INT_MIN;

//     for(int i = 0; i < n -k + 1; i++) { // outer loop runs until n - k + 1 which is 
//         int current_sum = 0;
//         for(int j = 0; j < k; j++) {
//             current_sum = current_sum + arr[i + j];

//             max_sum = max(current_sum, max_sum);
//         }
        
//         return max_sum;
//     }
// }

// int func_to_print_size(const vector<int>& arr, int k) {
//     int n = arr.size();
//     int sum = 0;
//     int max_sum = 0;

//     // Calculate the sum of the first 'k' elements
//     for (int i = 0; i < k; ++i) {
//         sum += arr[i];
//     }
//     max_sum = sum;

//     int r = k - 1;
//     int l = 0;

//     while (r < n - 1) {
//         sum -= arr[l];
//         l++;
//         r++;
//         sum += arr[r];
//         max_sum = max(max_sum, sum);
//     }

//     cout << "Maximum sum of subarray of size " << k << " is: " << max_sum << endl;
//     return max_sum;
// }

// int main() {
//     vector<int> arr = {-1,2,3,3,4};
//     int k = 4;
//     func_to_print_size(arr, k);
//     return 0;
// }

int maxSum(int arr[], int n, int k) {
    if(n <= k) {
        cout << "Invalid" << "\n";
        return -1;
    }

    int max_sum = 0;
    for(int i = 0; i<k; i++) {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for(int i = k; i< n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }

    cout << max_sum << "\n";
    return 0;

}



int main() {
    int arr[] = {-1,2,3,3,4};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}