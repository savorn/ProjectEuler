#include <iostream>
using namespace std;

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

int reverseNum(int n) {
    int remainder;
    int reNum = 0;
    while (n != 0) {
        remainder = n % 10;
        reNum = reNum * 10 + remainder;
        n /= 10;
    }
    return reNum;
}

int main() {
    int largePalindrome = 0;
    int revNum = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            revNum = reverseNum(i * j);
            if ((i * j) == revNum && (i * j) > largePalindrome) {
                largePalindrome = i * j;
            }
        }
    }
    cout << largePalindrome;
    return 0;
}
