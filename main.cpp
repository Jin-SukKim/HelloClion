#include <iostream>
using namespace std;

int gcd(const int a, const int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int a, b;

    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    while (a<0 || b<0) {
        cout << "Enter two positive numbers : " << endl;
        cin >> a >> b;
    }
    cout << "Greatest Common Denoinator is : " << gcd(a, b) << endl;
    return 0;
}