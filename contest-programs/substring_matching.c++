#include <iostream>
#include <string>
using namespace std;

class solution {
    public:
        bool hasMatch(string s, string p) {
            size_t startingPos = p.find('*');
            cout << "starting position: " << startingPos << endl; // starting will be 2

            string pre = p.substr(0, startingPos); // here the p string becomes "ee"
            cout << "this is prefix element: " << pre << endl;
            
            string suf = p.substr(startingPos + 1); // after this the string becomes "e"
            cout << "this is suffix element: " << suf << endl;

            size_t start = s.find(pre);
            cout <<"this is the size_t of start: " << start << endl;

            if( start == string::npos) return false;

            start  += pre.size();

            cout <<"New substring: "<< s.substr(start) << endl;
            
            string store = s.substr(start);

            cout << "finding where 'e' is first occurring: " <<  store.find(suf) << endl;

            return s.substr(start).find(suf) != string::npos;
        }
};          


int main() {
    solution sol;
    string s = "leetcode";
    cout << "Given input : " << s << endl;
    string p = "ee*e";
    cout << "Given matching string: " << p << endl;

    if(sol.hasMatch(s, p)) {
        cout << "true";
    } else {
        cout << "false";
    }
}