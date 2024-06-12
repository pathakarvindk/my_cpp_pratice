#include <iostream> // iostream is a header file for C++ programs that is used for input and output
using namespace std; // This is used to identify the location of cout function inside iostream


int c = 45;

// ALways use data type for c++ functions
int main() {
    // Write C++ code here
    int a, b, c;

    cout<<"Enter the velue of a: \n"; //Insertion operator
    cin>>a; //Extraction operator

    cout<< "Enter the value of b: \n";
    cin>>b;

    c = a + b;

    cout << "Sum of a and b is:"<<c<<endl;
    cout << "\nSum of global variavle c is:"<<::c<<endl; // :: is a scope resolution operator, if you want to acces value of global variables

    // ************* Float, double and long double Literals****************
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  


    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x; 
    cout<<x<<endl;
    cout<<y<<endl;

    // *************Typecasting**************** 
    //  COnvert one data type to another datatype
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0; // Return 0 is signal for successful termination of program
}

