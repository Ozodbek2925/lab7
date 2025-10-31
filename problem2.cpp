#include <iostream>
using namespace std;
int reversenum(int n, int rev=0) {
    if (n<1)
        return rev;
    return reversenum(n/10, rev*10+n%10);
}
int main() {
    int n;
    cin >> n;
    reversenum(n);
    cout<<reversenum(n);
    return 0;
}
