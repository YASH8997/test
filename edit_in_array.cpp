#include <iostream>

using namespace std;

int main()
{   
    int size;
    cout << "eneter the size odf array" << endl;
    cin >> size;
    int n=0, array[size];
    cout << "1 press to insert an element into array "<< endl;
    cout << "2 press   to delete an element from array "<< endl;
    cout << "3  to replace an element "<<endl ;
    cout <<"4 print array"<<endl;
    cout << "5 to exit"<<endl; 
    while (size!=0)
    {
                cin >> n;
                if (n==1){
                     cout << "enter the value in  array "<<endl;
                     for (int i=0 ; i < size ; i++){
                         cin >> array[i];
                     }
                     cout << "enter the value successfully "<<endl;
                }
              if (n==2){
                  cout << "wicha number of element want to  delet  from the  array"<<endl;
                  int i=0;
                  cin  >> i;
                  array[i-1]=0;
                  cout<< array[i-1];
                  for (i ; i<size ;i++){
                      array[i-1]=array[i];
                  }
                  size=size-1;
                  cout << "delet the element  successfully "<<endl; 
              }
              if (n==3){
                  cout << "wicha number of element want to  replace  from the  array"<<endl;
                  int i=0,m=0;
                  cin >> i;
                  cout << "enter the value you want"<< endl;
                  cin >> m;
                  array[i-1]=m;
                  cout << "enter the replace successfully "<<endl;
                   
              }
              if (n==4){
                  for (int i =0 ; i < size ; i++){
                      cout << array[i]<<"  ";
                  }
                   cout << endl;
                   cout << "array is printed successfully "<<endl;
              }
              if (n==5){
                  size=0;
              }
    }

    return 0;

}
