#include <iostream>
using namespace std;
int Powerofnumber(int x, int y) {
    if (y==0)
        return 1;
    return x * Powerofnumber(x,y-1);
}
int main() {
    int x, y;
    cin >> x >>y;
    Powerofnumber(x, y);
    cout << Powerofnumber(x, y);
}