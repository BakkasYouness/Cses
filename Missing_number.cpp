#include <bits/stdc++.h>

using namespace std;

/* this way of solving the problem may lead to an overflow if 
    n is big enough. A better version of this would rely on 
    the XOR operation to solve this 
*/
int main() {

    long  num ,sum= 0;

    cin >> num;
    for(int i=1;i<num;i++){

        int a;
        cin >> a;

        sum +=a;
   }
   cout << (num *(num + 1)/2 - sum );
    
}