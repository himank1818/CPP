#include<iostream>
using namespace std;
int main(){
    int x=10+40;      //Single operations
    cout<<"x="<<x<<"\n";       

    int y=200-90;
    cout<<"y="<<y<<"\n";

    int z=10*5;
    cout<<"z="<<z<<"\n";

    int a=100/5;
    cout<<"a="<<a<<"\n";



    int b=1000;
    ++b;
    cout<<"b="<<b<<"\n"; //It will give 1001 because we have used pre increment operator

    int c=10;
    c++;
    cout<<"c="<<c<<"\n"; //It will give 11 because we have used post increment operator




    int d=100;
    --d;
    cout<<"d="<<d<<"\n"; //It will give 99 because we have used pre decrement operator

    int e=10;
    e--;
    cout<<"e="<<e<<"\n"; //It will give 9 because we have used post decrement operator


    int f;
    f=5%2;
    cout<<"f="<<f<<"\n"; //It will give 1 because we have used modulus operator



//Multiple operations
    int sum1=2000;
    int sum2=sum1+1000;
    cout<<"Total="<<sum2<<"\n";

    return 0;
}
