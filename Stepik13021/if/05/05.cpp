#include <iostream>
using namespace std;

int main() {
    int A, B , C;
    cin >> A >> B >> C;
    if (A == B && B == C) 
        cout << 3;
    else if (A == B || A == C || B == C)
        cout << 2;
    else cout << 0;
    return 0;
}
