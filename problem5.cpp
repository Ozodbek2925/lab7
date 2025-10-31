#include <iostream>
using namespace std;
int evendigits(int n, int count=0) {
    if (n%2==0)
        count = 1 + count;
    if (n<1)
        return count-1;
    return evendigits(n/10, count);
}
int main() {
    int n;
    cin >> n;
    cout<< evendigits(n);
}