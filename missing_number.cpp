#include <iostream>
using namespace std;

int main(void) {
    int n, temp;
    cin >> n;
    int ar[n + 1];

    for(int i = 1; i < n; i++) {
        cin >> temp;
        ar[temp] = temp;
    }

    for(int i = 1; i <= n; i++) {
        if(ar[i] != i) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}