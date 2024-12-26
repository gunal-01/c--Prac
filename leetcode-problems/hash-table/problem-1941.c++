#include <bits/stdc++.h>
using namespace std;

// bool areOccurrencesEqual(string s) {
//     unordered_map<char, int> freq;

//     // Index-based for loop
//     for (size_t i = 0; i < s.size(); i++) {
//         char c = s[i];
//         freq[c]++;
//     }

//     // Range-based for loop
//     for (char c : s) {
//         freq[c]++;
//     }

//     // Additional logic to check if occurrences are equal
//     int count = freq.begin()->second;
//     for (const auto& pair : freq) {
//         if (pair.second != count) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     areOccurrencesEqual(s);
// }



int main() {

    // *** Extraction of last digit using modulo and division operator ***

    // int s = 1231242;

    // int lastDigit = s % 10;


    // int afterExtraction = s / 10;

    // cout <<"{ The last digit is: "<< lastDigit << "}" << endl <<"{ The given number after extraction is: " << afterExtraction << " }" << endl << "{The original input is: " << s << "}" << endl;





    // *** Method for printing the key-value pairs in the Map ***
    
    // map<int, int> freq;
    // for(int c : s) {
    //     freq[c]++;
    // }

    // for(const auto& pair : freq) {
    //     cout << pair.first << ": " << pair.second << endl;
    // }


    int num = 1231242;
    map<int, int> freq;

    while (num > 0) {
        int digit = num % 10;  // Extract the last digit
        freq[digit]++;         // Increment the frequency of the digit
        num /= 10;             // Remove the last digit
    }

    int count = freq.begin()->second;  // Get the frequency of the first digit in the map
    cout << "this is the count: " << count << endl;  // Add endl here

    for (const auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;  // Print each digit and its frequency
    }

    return 0;

}