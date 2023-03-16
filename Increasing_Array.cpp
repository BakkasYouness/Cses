#include <iostream>

using namespace std;


int main(){

    int num   ;
    long current;
    long previous = 0;
    long move_counter= 0;

    cin >> num;

    
    for(int i=0;i<num;i++){
        cin >> current;
        if( current < previous){
            move_counter += previous - current;
            current = previous;
        }
        previous = current;
        

    }

    cout << move_counter;

}