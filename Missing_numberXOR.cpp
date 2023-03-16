#include <bits/stdc++.h>

using namespace std;

/* this is the imporved version of the Missing Number problem 
   using the XOR operator to find the missing number. */
int main() {

    int  num ,XOR= 0;

    cin >> num;

    for(int i=1;i<num;i++){
        int a;

        // this allows us to use the XOR operation on all integers from 0 to num
        XOR ^=i;
        cin >> a;

        XOR  ^=a;
   }

   // oops i forgot to apply XOR on  num 
   XOR ^=num;
   cout << XOR;
    
}