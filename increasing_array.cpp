#include <iostream>
using namespace std;

int main(void) {
    long long int n, count = 0;
    cin >> n;
    long long int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];

    for(int i = 1; i < n; i++) {

        if(ar[i] < ar[i - 1]) {
            count += ar[i - 1] - ar[i];
            ar[i] += ar[i - 1] - ar[i];
        }
    }

    cout << endl << count << endl;

    return 0;
}