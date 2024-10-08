# Experiment-16
## Aim
To study and implement Exception Handling in C++.

## Software
Visual Studio Code

## Theory
In C++ exceptions are runtime anomalies or abnormal conditions that a program encounters durig its execution.
The process of handling these exceptions is known as exception handling.
Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.
It can be done using three keywords:
try - The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.
catch - The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.
throw - An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.
## Code and Output
(A)
```
// NAME - SAURABH BIHANI
//PRN - 23070123166 
// EXPERIMET - 16(A) 

// EXCEPTION HANDLING 

#include<iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, ans;
    cout<<"Enter values of numbers 1 and 2: ";
    cin>>n1>>n2;
    try{
        if(n2==0) {
            throw n2;
        }
        else {
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch(float num) {
        cout<<"\n ERROR: Division by "<<num<<endl;
    }
}
![Output_16A](https://github.com/user-attachments/assets/62b6e02d-1714-4f08-a526-c8b5c52e9768)

(B)
```
// NAME - SAURABH BIHANI
// PRN - 23070123166 
// EXPERIMENT - 16(B) 

// EXCEPTION HANDLING 

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18) {
            throw age;
        }
        else {
            cout<<"Age: "<<age<<"\n APPROVED"<<endl;
        }
    }
    catch(int a) {
        cout<<"\n ERROR: Underage! ("<<age<<")"<<endl;
    }
}
```
![Output_16B](https://github.com/user-attachments/assets/d7142720-0e25-43e3-a94b-ab82fabbdf99)
