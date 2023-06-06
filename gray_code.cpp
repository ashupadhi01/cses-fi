#include <iostream>
#include <vector>
using namespace std;

vector <string> greycode(int n) {
    if(n == 1) {
        vector <string> base;
        base.push_back("0");
        base.push_back("1");
        return base;
    }

    vector <string> ires = greycode(n - 1);
    vector <string> fres;
    for(int i = 0; i < ires.size(); i++) fres.push_back("0" + ires[i]);
    for(int i = ires.size() - 1; i >= 0; i--) fres.push_back("1" + ires[i]);

    return fres;
}

int main(void) {

    int n;
    cin >> n;
    vector <string> v = greycode(n);
    for(auto x : v) cout << x << endl;

    return 0;
}