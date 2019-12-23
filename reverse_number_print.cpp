#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int number=0,change_number=0,digit=0,mul=1,copy_number=0,copy_number1;
    cout << " enter number ";
    cin >> number;
    change_number=number;
    while (number!=0){
        number=number/10;
        digit++;
    }
    
    for ( int i=0 ; i < (digit - 1); i++){
        mul=mul*10;
    }
    
    for(int  i = 0 ; i < digit; i++){
         copy_number1=change_number%10;
         copy_number1=copy_number1*mul;
         copy_number=copy_number1 + copy_number ;
         change_number=change_number/10;
         mul=mul/10;
         }
    cout << copy_number;
    return   0;
}
