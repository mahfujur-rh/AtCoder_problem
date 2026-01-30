//https://atcoder.jp/contests/abc309/tasks/abc309_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (B == A + 1 && A != 3 && A != 6)
        cout << "Yes"<<endl;
    else
        cout << "No<<endl";

    return 0;
}
