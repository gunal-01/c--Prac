#include <bits/stdc++.h>
using namespace std;

/*


Problem Statement:
Write a function that finds the maximum and
minimum elements in an array. 

Input: [2, 8, 3, 1, 5, 7] 

Output: Maximum: 8, Minimum: 1


*/

/*void MaxMin(vector<int>& arr) {
      int n = arr.size();
      int max = 0;
      int min = n;
      for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
          max = arr[i];
        }
      }
      for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
          min = arr[i];
        }
      }
      cout <<"maximum_number: " << max << "\n";
      cout <<"minimum number: "<< min;
}

int main() 
{
    vector<int> arr = {2, 8, 35, 7};
    MaxMin(arr);
    return 0;
}*/

/*
Problem Statement:
write a function to count the number of vowels
and consonants in a given string.

input: "hello world"
output: "Vowels: 3, Consonants: 7"

based on this input vowels are {e, o, o}

consonants are : {h,l,l,w,r,l,d}


vowels are : 'a', 'e', "i", "o", "u"
*/



/*
---- Wrong approach ----



void vowelCons(string s) {
  vector<int> vowels = {'a', 'e', 'i', 'o', 'u'};
  vector<int> Vow;
  vector<int> cons;
  int n = s.length();
  for(char i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(s[i] == vowels[j]) {
      Vow.push_back(s[i]);
    } else {
      cons.push_back(s[i]);
    }
    }
    
  }
  for(char i : Vow) {
    cout << i << " ";
  }
}

int main() {
  string s = "hello world";
  vowelCons(s);
  return 0;
}

*/


/*

Corrected code for finding vowels and consonants in the given string


void vowelCons(string s) {
    // Set to store vowels for quick lookup
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 
    
    vector<char> Vow; // Vector to store vowels
    
    vector<char> cons; // Vector to store consonants
    
    int n = s.length(); // Get the length of the string
    
    for(int i = 0; i < n; i++) {
      
        // Convert character to lowercase and check if it is a vowel
        if(vowels.count(tolower(s[i]))) {
          
            Vow.push_back(s[i]); // Add to vowels vector
            
        } else if (isalpha(s[i])) {
          
            // Check if the character is an alphabetic character
            cons.push_back(s[i]); // Add to consonants vector
        }
    }

    cout << "Vowels: ";
    // Print all vowels
    for(char c : Vow) {
        cout << c << " ";
    }
    cout << endl;
    
    cout << "Consonants: ";
    // Print all consonants
    for(char c : cons) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    string s = "NEMoniA"; // Input string
    vowelCons(s); // Call function to process string
    return 0; // Return 0 to indicate successful execution
}
*/



//Merge two sorted arrays


/*
Given input and problem statement:


need to merge two sorted array into a single array.

input: arr = [1,3,5], arr1 = [2,4,6]
output: [1,2,3,4,5,6]

*/



void twoSortedArr(vector<int>& arr, vector<int>& arr1) {
    for(int i : arr1) {
      arr.push_back(i);
    }
    sort(arr.begin(), arr.end());
    
    for(int i : arr) {
      cout << i << " ";
    }
}


int main() {
  vector<int> arr = {1,3,5};
  vector<int> arr1 = {2,4,6};
  twoSortedArr(arr, arr1);
  return 0;
}

















































