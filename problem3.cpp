#include <iostream>
using namespace std;
int reversenum(int n, int rev = 0) {
    if (n == 0)
        return rev;
    return reversenum(n / 10, rev * 10 + n % 10);
}
bool isPalindrome(int n) {
    return n == reversenum(n);
}
int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "true";
    else
        cout << "false";
    return 0;
}
