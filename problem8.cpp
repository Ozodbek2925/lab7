#include <iostream>
using namespace std;
bool isincreasing(int n) {
    if (n < 10)
        return true;
    int last = n % 10;
    int secondLast = (n / 10) % 10;
    if (secondLast >= last)
        return false;
    return isincreasing(n / 10);
}
int main() {
    int n;
    cin >> n;
    if (isincreasing(n))
        cout << "true";
    else
        cout << "false";
}
