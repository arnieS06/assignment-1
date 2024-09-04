#include <iostream>
using namespace std;

int main() {

    int myInt = 3; // first number defined
    int anotherInt = 7; // second number defined
    
    int holder = myInt; // substitute variable to hold second number
    
    myInt = anotherInt; // first number value now equals second number
    anotherInt = holder; // second number value now equals the first number

    return 0;

}