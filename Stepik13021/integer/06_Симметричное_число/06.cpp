#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, d;
    cin >> N;
    a = N / 1000 + 1;
    d = N % 10 + 1;
    b = N / 10 % 10 + 1;
    c = N / 100 % 10 + 1;
    cout << (a % d) + (b % c) + (d % a) + (c % b) + 1;
    return 0;
}
