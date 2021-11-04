#include <iostream>
using namespace std;

int main() {
  int nw, max;
    cin >> nw;
    max = nw;
    while (nw != 0){
        if (nw > max) max = nw;
        cin >> nw;
    }
    cout << max;
  return 0;
}
