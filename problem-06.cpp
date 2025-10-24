//https://atcoder.jp/contests/abc426/tasks/abc426_a

#include<bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    string names[3] = {"Ocelot", "Serval", "Lynx"};
    int a, b;

    //find x and y position 
    for (int i = 0; i < 3; i++) {
        if (x == names[i]) a = i;
        if (y == names[i]) b = i;
    }

    if (a >= b) cout << "Yes"<<endl;
    else cout << "No"<<endl;

    return 0;
}
