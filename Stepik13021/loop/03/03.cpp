#include <iostream>
using namespace std;

int main() {
    int n, k = 1;
    cin >> n;
    while (k <= n){
        if (k <= n) cout << k << ' ';
        k *= 2;
    }
  return 0;
}
