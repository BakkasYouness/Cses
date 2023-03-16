#include <iostream>
using namespace std;


int main(){
    long long num;
    long long size;

    cin >> num;


    cout << 0 << endl;
    for(int i =2;i <= num;i++){
        size = (i*i);
        
        cout << size*(size -1)/2 - 4*(i-2)*(i-1) <<endl;

    }




}
