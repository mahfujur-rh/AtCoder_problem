//https://atcoder.jp/contests/abc237/tasks/abc237_b?lang=en

#include <bits/stdc++.h>

using namespace std;

int main() {

    int h, w;
    cin >> h >> w;

    int arr[h][w];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            cout << arr[i][j]<<" ";
        }
        cout << "\n";
    }


    return 0;
}
