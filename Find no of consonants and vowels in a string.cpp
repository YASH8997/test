#include <iostream>
#include <string>
using namespace std;

int main()
{
    int store=0,vowels=0,consonants=0;  
    string name ;
    cout << " enter name ";
    cin >> name ;
    store=name.size();
    for (int i=0;i<store;i++){
        if (name[i]==97 || name[i]==101 || name[i]==105||name[i]==111 || name[i]==117|| 
            name[i]==65 || name[i]==69 || name[i]==73 ||name[i]==79 || name[i]==85 ){
            vowels++;   
        }
    }
    consonants=store-vowels;
    cout <<"total number consonants =  " <<consonants<< endl;
    cout <<"total number vowels  =  " <<vowels<< endl;
    return 0;
}
