#include <iostream>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  if (A < B) cout << 2;
  else cout << (A != B);
  return 0;
}
