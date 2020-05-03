#include <iostream>
using namespace std;

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main () {
    int i = 20;
    int divisible = 0;
    while (divisible < i) {
        for (int j = 1; j < 21; j++) {
            if (i % j != 0) {
                i = i + 20;
                break;
            }
            else {
                divisible = i;
            }
        }
    }
    cout << divisible;
    return 0;
}

