#include <iostream>
using namespace std;

int main(void) {
    int n, k = 5, sum = 0;
    cin >> n;

    while(k <= n) {
        sum += n / k;
        k *= 5;
    }    

    cout << sum << endl;

    return 0;
}

/*
The number of 5s in the prime factorisation of *n* factorial is equal to the number of trailing zeros that will be in the result. In prime factorisation of any number, number of 5s will always be less than that of 2s. So, number of 5s is the limiting case, and we check for it.

Now, *n* factorial can be written as the product of all consecutive integers from 1 to n. We can clearly see the 5 as a factor only occurs in numbers that are multiple of 5. For example, in factorial of 20. 5 as a factor exists in 5, 10, 15 and 20. These all are multiples of 5.

So, dividing *n* by 5 generates how many numbers in range: [1, n] contain a single 5 as factor. Suppose, a number in the range: [1, n] contains four 5s in its prime factorisation. But, when we divide *n* by 5, we conclude that specific number contains only one 5 as a factor which is not true. 

So, we divide *n* by 5*5 to check how many numbers are there in the range: [1, n] which contains two 5s as a factor. But, here we miss those numbers which contains three 5s as a factor.

So, we again divide *n* by 5*5*5 to take into account all numbers in the range: [1: n] which contains three 5s in its prime factorisation. 

So, to find the number of 5s in the prime factorisation of *n* factorial, we keep dividing *n* by powers of 5 starting from one till the power of 5 becomes greater than *n*. We keep the cumulative sum of all the results obtained from division operations, and that is the number of 5s in the prime factorisation of *n* factorial.

The complexity of this algorithm is as follows:
Division operations happens till power of 5 doesn't become equal to *n*. Let pow(5, k) = n.
k = log n base 5
So, It takes logarithmic time to compute number of 5s in the prime factorisation of *n* factorial.
*/
