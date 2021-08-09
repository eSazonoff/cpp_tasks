#include <iostream>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;
    A *= N;
    B *= N;
    A += B / 100;
    B %= 100;
    cout << A << " " << B;
    return 0;
}
