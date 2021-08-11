#include <iostream>
using namespace std;

int main() {
    int h, m1, m2, s, n;
    cin >> n;
    h = n / 3600;
    m2 = n % 3600 / 60;
    m1 = m2 / 10;
    m2 %= 10;
    n = n % 3600 % 60;
    s = n / 10;
    n %= 10;
    cout << h << ":" << m1 << m2 << ":" << s << n;
    return 0;
}
