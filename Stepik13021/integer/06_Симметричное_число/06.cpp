#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, d;
    cin >> N;
    a = N % 1000 + 1;
    d = N / 1000 + 1;
    b = N / 10 % 10 + 1;
    c = N / 100 % 10 + 1;
    cout << 1 + a % d + b % c;
    return 0;
}
