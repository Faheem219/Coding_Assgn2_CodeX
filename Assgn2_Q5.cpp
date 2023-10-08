#include <iostream>
#include <string.h>
using namespace std;

int main(){
    const string pass="Password";
    string a;
    while(true){
        cout<<"\nPlease enter the password: ";
        cin>>a;
        if(a==pass){
            cout<<"\nCorrect Password!"<<endl;
            break;
        }
    }
    return 0;
}