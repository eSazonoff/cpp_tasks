#include <iostream>
using namespace std;

int main() {
  int n, k = 0, m1, m2;
    cin >> n;
    m1 = n;
    m2 = m1;
    while (n != 0) {
        if (n > m2) m2 = n;
        if (m1 == n) k++;
        if (m2 > m1) {
            m1 = m2;
            k = 1;
        }
        cin >> n;
    }
    cout << k;
  return 0;
}
