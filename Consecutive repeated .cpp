#include <iostream>
#include <string>
using namespace std;

int main()
{  
    int store=0, flag=0,prv_character=0;
    string name,copy;
    cin >> name;
    store=name.size();
    for (int i = 0 ; i < store ; i++){        
        
            if (name[i]==prv_character){           // if characteris repeat then not print  
                flag=1;
            }
        if (flag==0){
            
            prv_character=name[i];
            copy.push_back(name[i]);              // store the character in new string 
        }
        flag=0;
    }
    cout << "  Consecutive repeated " << copy  << endl;  
    return   0;
}
