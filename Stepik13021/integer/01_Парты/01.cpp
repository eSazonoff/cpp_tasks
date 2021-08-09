#include <iostream>
using namespace std;

int main() {
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    cout << c1 / 2 + c2 / 2 + c3 / 2 + c1 % 2 + c2 % 2 + c3 % 2;
    return 0;
}
