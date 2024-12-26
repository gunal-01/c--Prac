#include<bits/stdc++.h>
using namespace std;

int hashh[100000000];// here you are given with the array and its size(n)
int main() {
    int n;              // arr size
    cin >> n;
    int arr[n];         // declaring a arr
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // entering the arr elements
    }


// this is the precomputation:

     // declared an array size and the elements as 0

for(int i = 0; i < n; i++) {
    hashh[arr[i]] += 1;
}

    int q;              // this represents the query which was given by the user to check frequency
    cin >> q;           // getting query input
    while(q--) {
        int number;
        cin >> number;  // we going to each element as query input
        //this is where you fetch
        cout << hashh[number] << endl;
    }
    return 0;
}