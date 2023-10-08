#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t systime = time(0);
    char* curtime = ctime(&systime);
    cout << "Current Date and Time: "<<curtime<<endl;
    return 0;
}
