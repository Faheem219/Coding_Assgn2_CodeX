#include <iostream>
using namespace std;

int main(){
    bool flag=1;
    int count=0;
    for (int i=2; i<100; i++){
        flag=1;
        for (int j=2; j<(i-1); j++){
            if (i%j==0){
                flag=0;
            }
        }
        if (flag==1){
            cout<<i<<endl;
            count++;
        }
        if (count>=5){
            break;
        }
    }
    return 0;
}