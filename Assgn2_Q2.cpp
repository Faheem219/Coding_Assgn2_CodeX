#include <iostream>
using namespace std;

int main(){
    const double pi=3.1415;
    double r, Area;
    cout<<"Please enter radius of the circle: ";
    cin>>r;
    Area=pi*r*r;
    cout<<"\nThe area of the circle is: "<<Area<<endl;
    return 0;
}