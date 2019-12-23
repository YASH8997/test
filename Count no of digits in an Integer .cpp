#include <iostream>
#include<conio.h>
using namespace std;

int main()
{   
    int number=0,number_of_digit;
    cout<< "enter number";
    cin >> number;
    while(number!=0){
        number=number/10;
        number_of_digit++;
    }
  cout<< "total number digits in number " << number_of_digit;
   
    getch();
}