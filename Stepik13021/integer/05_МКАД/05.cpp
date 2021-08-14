#include <iostream>
using namespace std;

int main() {
    const int S = 109;
    int V, T;
    cin >> V >> T;
    cout << S - V * T % 109;
    return 0;
}
