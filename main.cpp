/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    
    int sum = 0;
    
    while (n>0){
        int last_digit= n%10;
        sum = sum + last_digit;
        n=n/10;
        
        
        
    }
    std::cout << sum << std::endl;

    return 0;
}
