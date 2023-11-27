/*
    A function is a group of statements that perform a specific task, organized as a separate unit in a program.
    Functions help in breaking the code into smaller, manageable, and reusable blocks.
*/

//User-defined Functions - groups code to perform a specific task and that group of code is given a name (identifier).

/*
    returnType functionName(parameter1, parameter2, ...){
        //function body
    }

    an example of a function declaration
    void greet(){
        cout << "Hello World!";
    }

    returnType - void
    functionName - greet
*/

#include <iostream>
using namespace std;

// declaring a function
void greet() {
    cout << "Hello there!\n";
}

/*
    Function Parameters - function can be declared with parameters (arguments).
    A parameter is a value that is passed when declaring a function.

    for example
        void printNum(int num) {
        cout << num;
    }
    parameter - num 
*/

//function with parameters
void printNum(int num) {
    cout << num << ".\n";
}

/*
    function with multiple parameters.
    The type of the arguments passed while calling the function must match with the
    corresponding parameters defined in the function declaration.
*/
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << ".\nThe double number is " << n2 << ".\n";
}

/*
    The above functions had a returnType of void, which means the function is not return any value.
    Henceforth - it is possible to return a value from a function.
    For this, we need to specify the returnType of the function during function declaration.

    Then the return statement can be used to return a value from a function.

    For example:
    int add (int a, int b) {
        return (a + b);
    }

    Therefore we have the data type int instead of void. This means that the function return an int value.
    The return (a + b); - returns the sum of the two parameters as the function value.

    Also - the return statement denotes that the function has ended. Any code after return inside the function is not executed.
*/
int add(int a, int b) {
    return (a + b);
}

/*
    function prototype - provides the compiler with information about the function name and its parameters.
    syntax of a function prototype is: returnType functionName(dataType1, dataType2, ...);
*/
void addPrototype(int, int);


int main() {
    // calling the function
    greet();

    int n = 7;
    
    cout << "The number passed to the function is ";
    // calling the function
    // n is passed to the function as argument
    printNum(n);

    int num1 = 5, sum;
    double num2 = 5.5;

    //calling the function
    displayNum(num1, num2);

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << "." << endl;

    // calling the function before declaration.
    addPrototype(5, 3);
    return 0;
}

/*
    Function Prototype - the code of function declaration should be before the function call.
    However, if we want to define a function after the function call, we need to use the function prototype.
*/
// function definition
void addPrototype(int a, int b) {
    cout << (a + b) << endl;
}
