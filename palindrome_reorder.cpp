#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_possible(vector <char>& v) {
    
    int chk = 0, count = 1;
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size() - 1; i++) {
        
        if(v[i] == v[i+1]) count++;
        
        else {
            if(chk) {
                if(count % 2) return false;
            }

            else {
                if(count % 2) chk = 1;
            }

            count = 1;
        }
    }

    if(chk) {
        if(count % 2) return false;
        else return true;
    }

    else return true;
}

int main(void) {
    vector <char> v;
    string s;
    cin >> s;
    
    for(int i = 0; s[i] != '\0'; i++) v.push_back(s[i]);

    if(v.size() == 1) cout << v[0] << endl;
    
    else if(is_possible(v)) {
        char ar[v.size()]; int j = 0;

        for(int i = 0; i < v.size(); i++) {
            if(v[i] == v[i+1]) {
                ar[j] = v[i];
                ar[v.size() - 1 - j] = v[i];
                i += 1;
                j += 1;
            }

            else {
                ar[v.size() / 2] = v[i];
            }

        }

        for(int i = 0; i < v.size(); i++) cout << ar[i] << "";
    }

    else {
        cout << "NO SOLUTION" << endl;
    }
 
    return 0;
}