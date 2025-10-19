//https://atcoder.jp/contests/abc333/tasks/abc333_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1, s2, t1, t2;    
    cin >> s1 >> s2 >> t1 >> t2; 
    //ASCII value use 
    int diff1 = abs(s1 - s2);
                            //--len--
                            //--AE,AB--P..  
                            //A-E=65-69=4
                            //A-B=65-66=1
                            //DIFFERNT 1 OR 4 //DIFF=5-DIFF;
  
    if (diff1 > 2) diff1 = 5 - diff1;
                             //--len--
                            //--AD,AC--Q..  
                            //A-D=65-68=3
                            //A-C=65-67=2
                            //DIFFERNT 2 OR 3 //DIFF=5-diff
                                              //DIFF=5-3=2
  
    int diff2 = abs(t1 - t2);
    if (diff2 > 2) diff2 = 5 - diff2;
  
    //diff1==diff2 holey print yes other wise print no
  
    if (diff1 == diff2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
