#include <iostream>
using namespace std;

int main() {
    int A1, A2, B1, B2;
    cin >> A1 >> A2 >> B1 >> B2;
    if ((A1 - B1) * (A1 - B1) > 1 || (A2 - B2) * (A2 - B2) > 1) cout << "NO";
    else cout << "YES";
  return 0;
}
