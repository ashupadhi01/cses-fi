
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector <string> v;

int find_ceil(string s, char c, int lo, int hi) {
    int ceil_index = lo;

    for(int i = lo + 1; i <= hi; i++) {
        if(s[i] > c && s[i] < s[ceil_index]) ceil_index = i; 
    }

    return ceil_index;
}

int permute(string& s, int count = 0) {
    int size = s.length();
    sort(s.begin(), s.end());
    bool is_true = false;

    while(!is_true) {
        v.push_back(s);
        count += 1;

        int i;

        for(i = size - 2; i >= 0; i--) {
            if(s[i] < s[i + 1]) break;
            else continue;
        }

        if(i == -1) is_true = true;
        else {
            int ceil_index = find_ceil(s, s[i], i + 1, size - 1);
            swap(s[i], s[ceil_index]);
            sort(s.begin() + i + 1, s.end());
        }
    }

    return count;
}

int main(void) {
    string s;
    cin >> s;
    cout << permute(s) << endl;
    for(auto x : v) cout << x << endl;

    return 0;
}

/*
This is an explanation of the algorithm to print all possible distinct permutations of a given string. Suppose, you are given a string *S*. 

Sort the entire string in ascending order, and figure out the length of the string.
Then, continue a process untill the entire string gets arranged in descending order.

Print the string.
Iterate the string from backwards, and check whether the charecter after it is greater than that of the one currently we have pointed at. If so, we find the ceiling character of the one we are pointing at. Then, we swap the charecter being hold with the newly found ceiling charecter. After the swapping is done, we sort the string rest of the string i.e from (i + 1)th index to the last element.

Now, again print the string. Stop this iterative process when the entire string gets arranged in descending order.
*/
