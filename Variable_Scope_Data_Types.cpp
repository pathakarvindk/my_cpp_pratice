// Base on scope, variables can be classified into two types:

// Local variables
// Global variables

// Local variables:
// Local variables are declared inside the braces of any function and can be assessed only from there. 

// Global variables:
// Global variables are declared outside any function and can be accessed from anywhere.





// Data Types
// Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

// Data types in C++ are categorized into three groups:

// Built-in
// User-defined
// Derived
// 1. Built-in Data Types in C++:
// Int
// Float
// Char
// Double
// Boolean
// 2. User-Defined Data Types in C++:
// Struct
// Union
// Enum
// Note: We will discuss the concepts of user-defined data types in another lecture. For now, understanding that these are user-defined data types is enough.

// 3. Derived Data Types in C++:
// Array
// Pointer
// Function




// Code

# include <iostream>

using namespace std;

int glo = 6;
void sum(){
    int a; 
    cout<< glo;
    }

int main(){
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}