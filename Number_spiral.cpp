#include <iostream>

using namespace std;


int main(){
    long long num;
    long long  i,j;
    long long diagonal;
    cin >> num;


    for(long long counter = 0; counter <num;counter++){

        cin >>i >>j;

        if (i<j){
            diagonal = j*(j-1) + 1;
        
            if(j%2 ==0)
                cout << diagonal + (i-j) << endl;
            else
                cout << diagonal - (i-j) << endl;
        }
        else{
            diagonal = i*(i-1) + 1;
            if(i%2 ==0)
                cout << diagonal + (i-j) << endl ;
            else
                cout << diagonal - (i-j) << endl;
        }
        
    }




    /* i = j =>
        1   3       7 13 21 31
        1  1+2     3+4
        Un+1 = Un + 2n ; u1 = 1
        somme de 1 a n 
        un = n(n-1) -1
        grid[i][i] = n(n-1) -1
    */
    /*  i > j => 
        i IS EVEN  => grid[i][j]  = grid[i][i] + (i-j)
        i IS ODD   => grid[i][j]  = grid[i][i] - (i-j)
    */
    /*  j > i => 
        j IS EVEN  => grid[i][j]  = grid[j][j] + (i-j)
        j IS ODD   => grid[i][j]  = grid[j][j] - (i-j)
    */


}