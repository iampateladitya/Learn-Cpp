#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 55;
    cout<<"The value of a = "<<a<<endl;
    a = 34;
    cout<<"Now the new value of a = "<<a<<endl;

    // Constant value 
    const int a = 50;
    cout<<"Now the constant value of a = "<<a<<endl;
    a = 35;
    cout<<"Now the constant value of a = "<<a<<endl;

    //  Manipulators in c++
    int a = 1 , b = 10 , c = 100, d = 1000;
    cout<<"Without Setw :- "<<a<<endl;  // agar setw ka use kr rahe ho to uper #include<iomanip> likhna jaruri hain arna run nhi hoga 
    cout<<"Without Setw :- "<<b<<endl;
    cout<<"Without Setw :- "<<c<<endl;
    cout<<"Without Setw :- "<<d<<endl;

    cout<<"With Setw :- "<<setw(4)<<a<<endl;
    cout<<"With Setw :- "<<setw(4)<<b<<endl;
    cout<<"With Setw :- "<<setw(4)<<c<<endl;
    cout<<"With Setw :- "<<setw(4)<<d<<endl;

    //  Operators precedence
    int a = 3, b = 3;
    // int c = ((a*5)+b)
    int c = ((((a*5)+b)-45)+87);
    cout<<c;                
    
    return 0;
}
