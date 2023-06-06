#include <iostream>
using namespace std;

int main(void) {
    long long int t, x, y, num;
    cin >> t;
    
    while(t--) {

        cin >> y >> x;

        if(y > x) {
            if(y % 2) num = (y - 1) * (y - 1) + 1 + (x - 1);
            else num = (y * y) - (x - 1);
        }

        else {
            if(x % 2) num = (x * x) - (y - 1);
            else num = (x - 1) * (x - 1) + 1 + (y - 1);
        }

        cout << num << endl;
    }

    return 0;
}