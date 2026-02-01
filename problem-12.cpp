#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int ans = 0;
    for (int i = 0; i < h; i++) {
        string row;
        cin >> row;  
        for (char c : row) {
            if (c == '#') ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
