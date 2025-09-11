// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x){
    if (x<2) 
        return false;

    for (int i=2; i<x; i++) {
       if (x%i == 0)
          return false;
    }
    return true;
}

int closestPrime(int x){
    if (isPrime(x)) 
        return x; 

    int num = x+1;
    while(!isPrime(num)){
        num++;
    }
    return num;
}
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
/**** 
int main()
{
    
    return 0;          
}
****/