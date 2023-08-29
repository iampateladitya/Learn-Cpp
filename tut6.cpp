#include<iostream>  
//  iostream mean input output hearder file 
//  There are two types of header files;
//  1. Sytem header files : it comes with the compiler 
//  2. User defined header files: it is written by the programmer
/* #inlcude "This.h" This will produced an error if this.h is not
 present in the current directory */

using namespace std; 

int main(){
    int a=2, b=2;
    cout<<"Operators in c++ :"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    cout<<endl;
     
    //  1.  Arithmatic Operators 
    cout<<"1. Arithmatic operator"<<endl;
    cout<<"The value of a - b is = "<<a-b<<endl;
    cout<<"The value of a + b is = "<<a+b<<endl;
    cout<<"The value of a * b is = "<<a*b<<endl;
    cout<<"The value of a / b is = "<<a/b<<endl;
    cout<<"The value of a % b is = "<<a%b<<endl;  // Modules
    cout<<"The value of a ++  is = "<<a++<<endl;  //Increament   (Pahle print fir increament)
    cout<<"The value of a --  is = "<<a--<<endl;      //Decreament   (Pahle print fir Decreament)
    cout<<"The value of ++ a  is = "<<++a <<endl;  // (Pahle increament fir print )
    cout<<"The value of -- a  is = "<<--a <<endl;    // (Pahle Decreament fir print )
    cout<<endl;
    

    // 2.  Assignment Operators  -- > Used to assign values to variables 
    // int a = 3, b = 8;
    // char d = 'd' ;

    // 3.  Comparison operators 
    cout<<"3. Comparison operators"<<endl;
    cout<<"The Value of a == b is = "<<(a==b)<<endl;
    cout<<"The Value of a != b is = "<<(a!=b)<<endl;
    cout<<"The Value of a <= b is = "<<(a<=b)<<endl;
    cout<<"The Value of a >= b is = "<<(a>=b)<<endl;
    cout<<"The Value of a < b is = "<<(a<b)<<endl;
    cout<<"The Value of a > b is = "<<(a>b)<<endl;
    cout<<endl;

    // 4.  Logical operator 
    cout<<"4.  Logical operator"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}