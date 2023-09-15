#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mn = a;
    if (b < a) mn = b;

    cout << mn << endl;
}