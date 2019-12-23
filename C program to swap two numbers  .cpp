#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int number=0,change_number=0;
    cin >> number;
    change_number=number%10;
    change_number=change_number*10;
    number=number/10;
    number=number+change_number;
    cout << number;
    return   0;
}
