//https://atcoder.jp/contests/abc149/tasks/abc149_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k;
    cin>>a>>b>>k;
    if(k<=a)
        //step-1 k<=A // k-a,b--
        /*  --input--
            2 3 3--s1
            1 3 2--s2
            0 3 1--s3
            0 2 0--output--
           */
    {
        cout<<a-k<<" "<<b<<endl;
    }
    else //step--2 k>A --k=k-a
        //---k<=b-- 0, k-b
        // 0, 0
    {
        k=k-a;
        if(k<=b)
            cout<<0<<" "<<b-k<<endl;
        else
            cout<<0<<" "<<0<<endl;
    }

    return 0;
}
