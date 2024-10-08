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

// Output 

// Enter values of numbers 1 and 2: 5
// 7
// Answer = 0.714286 

// Enter values of numbers 1 and 2: 29
// 0
//  
// ERROR: Division by 0 
