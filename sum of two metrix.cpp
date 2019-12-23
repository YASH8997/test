
#include <iostream>

using namespace std;

int main()
{   
    int i=0,j=0;
    cout << "enter the row for the 1st & 2nd metrix      ";  // i is the row of metrix j is the column of metrix
    cin >> i;
    cout << "enter the column   1st  &  & 2nd   mertix   ";
    cin >> j;
    int a[i][j];
    cout << " enter value in the row 1st mertix  ";  // loop for the value in the 1st metrix
    for (int m=0;m<i;m++){
        for (int k=0;k<j;k++){
            cin >> a[m][k];
        }
     }
   
    int b[i][j];
    cout << " enter value in the row   2nd mertix ";  // loop for the value in the 2nd metrix
    for (int m=0;m<i;m++){
        for (int k=0;k<j;k++){
            cin >> b[m][k];
        }
     }
    cout << " print 1st mertix " << endl;     // print 1st metrix
    for (int m=0;m<i;m++){
        for (int k=0;k<j;k++){
            cout << a[m][k]<< " ";
        }
      cout << endl;
    }   
    cout << " print 2nd mertix "<< endl;     // print 2nd metrix
    for (int m=0;m<i;m++){
        for (int k=0;k<j;k++){
            cout << b[m][k] << " ";
        }
      cout << endl;
    }
    cout << "sum of two metrix"<< endl;     // print the  sum of two metrix
     for (int m=0;m<i;m++){
        for (int k=0;k<j;k++){
            a[m][k]= a[m][k]+b[m][k];
            cout << a[m][k]<< " ";
        }
      cout << endl;
    }
    return   0;
}