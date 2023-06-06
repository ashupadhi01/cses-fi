#include <iostream>
using namespace std;

int main(void) {

    int n, count = 1, chk;
    cin >> n;
    int ar[n];

    for(int i = 0; i < n; i++) cin >> ar[i];

    for(int i = 1; i < n; i++) {
        chk = 1;

        for(int j = 0; j < i; j++) {
            if(ar[j] == ar[i]) {
                chk = 0;
                break;
            }
        }

        if(chk) count++;
    }

    cout << count << endl;

    return 0;
}
