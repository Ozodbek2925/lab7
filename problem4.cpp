#include <iostream>
using namespace std;
bool isPrime(int n, int a=2) {
    if (n==2)
        return true;
    if (n % a == 0)
        return false;
    if (a*a>n)
        return true;
    return isPrime(n, a+1);
}
int main() {
    int n;
    cin>>n;
    isPrime(n);

    if (isPrime(n))
        cout<< "true";
    else
        cout << "false";


}