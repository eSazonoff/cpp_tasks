#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    while (i <= n) {
        ++i;
        if (n % i == 0)
            break;
    }
    cout << i;
    return 0;
}
