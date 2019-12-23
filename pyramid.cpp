#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number=0,n,print_number_1=0,print_number_2=0,o=0;
    cout << "enter number";
    cin >> number;    
    n=number;
    for (int i=0;  i <number;  i++){
        for(int i=0;  i<=n;  i++){     // loop for the space 
        cout << "  ";
        }
        n--;
        for(int i=0; i<number-n;i++){   //print_number_1 is the print of onlry left side number from center line 
            print_number_1++;
            cout<<print_number_1<< " ";
        }
        print_number_2=print_number_1;  //print_number_1 is the print of onlry right side number from center line
        for(int i =0;i<o;i++){
            print_number_2--;
            cout<< print_number_2 << " " ;
        }
        print_number_1=print_number_2;
        o++;
        cout<<endl;
    }
    return 0;
}
      