#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    if(age<1){
        cout<<"\nPlease enter a valid age."<<endl;
    }
    else if(age<13){
        cout<<"\nYou are a child."<<endl;
    }
    else if(age<18){
        cout<<"\nYou are a teenager."<<endl;
    }
    else if(age<60){
        cout<<"\nYou are an adult."<<endl;
    }
    else{
        cout<<"\nYou are a senior citizen."<<endl;
    }
    return 0;
}