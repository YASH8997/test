#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int store=0,frequency=0,store1=0, flag=0;
    string name,copy;
    cin >> name;
    store=name.size();
    for (int i = 0 ; i < store ; i++){        
        for (int j =0 ;j < store1 ; j++ ){   // check the character is repeat 
            if (name[i]==copy[j]){           // if characteris repeat then not chech the frequency of character 
                flag=1;
            }
        }
        if (flag==0){
            for (int j =0 ; j < store ; j++){     // check frequency of character 
                if (name[i]==name[j]){            // count the number of character
                    frequency++;
                }
            }
            cout <<  frequency  << "  is frequncy of " << name[i]  << endl;  
            copy.push_back(name[i]);              // store the character in new string 
            store1=copy.size();
        }
        flag=0;
        frequency=0;
    }
    return   0;
}
