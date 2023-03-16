#include <iostream>
#include <string>
using namespace std;

int main(){

    //variable declaration
    int length ;
    //it is important to initialize these 2 variables with 1 for the program to fonction correctly
    int max_length=1;
    int local_max=1;

    string input ;

    //getting the input string 
    cin >> input;


    length =  input.length();
    for(int i =1 ; i<length ; i++){

        if(input[i] ==  input[i-1])
            local_max ++;
        else    
            local_max = 1;
        max_length = max(max_length,local_max);
    }
    cout << max_length;
}