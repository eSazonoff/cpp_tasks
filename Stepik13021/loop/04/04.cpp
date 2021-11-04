#include <iostream>
using namespace std;

int main() {
  int N, i = 1, k = 0;
    cin >> N;
    while (i <= N) {
        if (i == N) k = i;
        i *= 2;
    }
    if (k != 0) cout << "YES";
    else cout << "NO";
  return 0;
}
