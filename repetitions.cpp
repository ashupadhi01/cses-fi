#include <iostream>
#include <string>
using namespace std;

int max_length_substring(string s) {
    int count, max = 1;

    for(int i = 0; i < s.length() - 1; i++) {
        
        count = 1;
        
        for(int j = i + 1; j < s.length(); j++) {
            
            if(s[i] != s[j]) {
                i = j - 1;
                break;
            }

            else {
                count++;
                continue;
            }
        }

        if(count > max) max = count; 
    }

    return max;
}

int main(void) {

    string s;
    cin >> s;
    cout << max_length_substring(s) << endl;
    
    return 0;
}
