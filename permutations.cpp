#include <iostream>
using namespace std;

int main(void) {
    
    int n, count = 0;
    cin >> n;
    
    if(n == 1) cout << 1 << endl;
    else if(n <= 3) cout << "NO SOLUTION" << endl;
    
    else {
        int ar[n];
        for(int i = 2; i <= n; i += 2) ar[count++] = i;
        for(int i = 1; i <= n; i += 2) ar[count++] = i;
        for(int i = 0; i < n; i++) cout << ar[i] << " ";
    }

    return 0;
}