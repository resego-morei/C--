/*
    C++ Storage Class:
    Every variable in C++ has two features: type and storage class.
    Type specifies the type of data that can be stored in a variable. For example: int, float, char etc.
    And, storage class controls two different properties of a variable: lifetime (determines how long a variable can exist) and scope (determines which part of the program can access it).

    Depending upon the storage class of a variable, it can be divided into 4 major types:
        1. Local variable
        2. Global variable
        3. Static local variable
        4. Register Variable
        5. Thread Local Storage
*/

/*
    1. Local variable - A variable defined inside a function
    (defined inside function body between braces) is called a local variable or automatic variable.
*/

/*
    2. Global variable - variable is defined outside all functions, then it is called a global variable.
*/

/*
    3. Static local variable - Keyword static is used for specifying a static variable.
    A static local variable exists only inside a function where it is declared (similar to a local variable)
    but its lifetime starts when the function is called and ends only when the program ends.
    The main difference between local variable and static variable is that,
    the value of static variable persists the end of the program.
*/

#include <iostream>
using namespace std;
// Global variable declaration
int globalVariable = 12;

void test();
void testGlobal();
void testStatic();
void testNonStatic();

int main(){

    cout << "The globalVariable is " << globalVariable << " before operation.";

    ++globalVariable;
    cout << " And after addition in the main function it is " << globalVariable << " and on the\ntestGlobal() it is ";

    testGlobal();

    // local variable to main()
    int var = 5;

    cout << var << "  is the local variable to the main method. And ";
    test();
    
    // illegal: var1 not declared inside main()
    // var1 = 9;

    cout << "Testing how static varibles run compared to non-static variables:\n";
    cout << "Static Variables:\n";
    for (int i = 0; i < 5; i++) testStatic();
    cout << "Non-Static Variables:\n";
    for (int i = 0; i < 5; i++)  testNonStatic();
}

void test()
{
    // local variable to test()
    int var1;
    var1 = 6;

    

    cout << var1 << " is the local variable for the function test.\n";

    // illegal: var not declared inside test()
    // cout << var;
}

void testGlobal()
{
    cout << ++globalVariable << ".\n";
}

void testStatic()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}

void testNonStatic()
{
    // var is a static variable
    int var = 0;
    ++var;

    cout << var << endl;
}