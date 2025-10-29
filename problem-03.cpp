//https://atcoder.jp/contests/abc326/tasks/abc326_a

#include <bits/stdc++.h>
using namespace std;
int main () {
    int x,y;cin>>x>>y;
    if (y>=x && y-x<=2 || y<=x && x-y<=3)  
    {
        cout <<"Yes"<<endl;

    }
    else cout<<"No"<<endl;
    
    
 return 0;
}
