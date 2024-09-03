#include <iostream>
using namespace std;

int main() {

    int myInt = 3;
    int anotherInt = 7;
    
    int holder = myInt;
    
    myInt = anotherInt;
    anotherInt = holder;

    return 0;

}