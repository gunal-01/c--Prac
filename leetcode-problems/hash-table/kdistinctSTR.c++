#include<bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
        unordered_map<char,int> hashmap;
        for(char i : arr){
            hashmap[i]++;
        }
        for(int i=1;i<arr.size();i++){
            if(hashmap[i]==2){
                hashmap.erase(i);
            }
        }
        cout << hashmap[k];
        return 0;
    }



int main() {
    vector<string>& arr = {"d","b","c","b","c","a"};
    int k = 2;
    kthDistinct(arr, k);
    return 0;
}