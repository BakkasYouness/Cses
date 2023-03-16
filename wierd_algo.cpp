#include <bits/stdc++.h>

using namespace std;
 


int main() {

    // i used long instead of int to handle greater values 
    // it may be better to use long long for even greater tolerance
    long n;

    cin >> n;
    cout << n;
    
    while(n>1){
        if(n%2 == 0)
            n=n/2;
        else 
            n = 3*n+1;
        cout << " " <<  n;
   }

}