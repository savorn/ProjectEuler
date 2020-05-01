#include <iostream>
using namespace std;

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

int main() {
    long long i = 2;
    long long j = 600851475143;
    while (i < j) {
        if (j % i == 0) {
            j = j / i;
        }
        i++;
    }
    cout << j;
    return 0;
}
