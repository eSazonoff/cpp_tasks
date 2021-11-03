#include <iostream>
using namespace std;

int main() {
    int N, k = 0;
    cin >> N;
    while (k < N) {
        ++k;
        if (k * k <= N){
            cout << k * k << ' ';
        }

    }
    return 0;
}
