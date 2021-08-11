#include <iostream>
using namespace std;

int main() {
    int h, m, n;
    cin >> n;
    h = n / 3600;
    m = n % 3600 / 60;
    n = n % 3600 % 60;
    cout << h << ":" << m << ":" << n;
    return 0;
}
