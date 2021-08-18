#include <iostream>
using namespace std;

int main() {
    int H, A, B, D;
    cin >> H >> A >> B;
    D = (H - B - 1) / (A - B);
    cout << D + 1;
    return 0;
}
