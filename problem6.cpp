#include <iostream>
using namespace std;
int productdigits(int n) {
    if (n==0)
        return 1;
    return (n%10)*productdigits(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<< productdigits(n);
}