#include<iostream>
using namespace std;

int c = 40; 
int main(){

// ***************Build in data types*****************//
    int a, b, c;
    cout<<"Write the value of a :- "<<endl;
    cin>>a;

    cout<<"Write the value of b :- "<<endl;
    cin>>b;
    cout<<"The Sum of a and b is :- "<<a+b<<endl;
    cout<<"The Global c is "<<::c<<endl;  // C ke pahle colon isliye lagaye kyuki global wali value lena tha gar nhi lagate to local me se le leta
    
    // ***************float , double and long double Literals*****************//
    float d = 34.4f;
    long double e = 35.4l;

    //  // Sizeof(variable) iski help ki kisi bhi inte ya float ki size jaan skte hai 

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 35.4l is "<<sizeof(35.4l)<<endl;
    cout<<"The size of 35.4L is "<<sizeof(34.4L)<<endl;

    cout<<"The value of d = "<<d<<endl<<"The value of e = "<<e;

    // ***************Reference variable*****************//
    float x = 52;
    float & y = x;
    cout<<"The Value of x = "<<x<<endl;
    cout<<"The Value of y = "<<y<<endl;

     // ***************Typecasting*****************//
    int p = 50;
    float q = 50.3;
    float r = 52.9;
    cout<<"The value of p is = "<<float(p)<<endl;  // int ko float me change kr dega 
    cout<<"The value of p is = "<<(float)p<<endl;
    cout<<"The value of q is = "<<(int)q<<endl;  // float values ko int me change kr dega this is known as typecasting 
    cout<<"The value of q is = "<<int(q)<<endl;
    cout<<"The value of r is = "<<(int)r<<endl;
    cout<<"The value of r is = "<<int(r)<<endl;
    int s = (int)q;
    cout<<"The value of s is = "<<s<<endl;

    cout<<"The Expression for p + q :- "<<p+q<<endl;
    cout<<"The Expression for p + (int)q :- "<<p+(int)q<<endl;
    cout<<"The Expression for p + int(q) :- "<<p+int(q)<<endl;
    return 0;
}