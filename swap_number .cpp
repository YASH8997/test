 #include <iostream>

using namespace std;

int main()
{ 
    int number_1=0,number_2=0;
    cout << " enter 1st  number ";
    cin >> number_1 ;
    cout << " enter 2nd  number ";
    cin >> number_2 ;
    number_1 = number_1 + number_2;
    number_2 = number_1 - number_2;
    number_1 = number_1 - number_2;
    cout << "number 1 is " <<  number_1 << endl;
    cout << "number 2 is " << number_2 << endl;
  

    return 0;
}