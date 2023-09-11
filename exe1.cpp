#include<iostream>
using namespace std;

int algorithm(int a,int b){
    int sum=a + b;
    if(a==b){
        sum=sum *3;
    }
    else{
        return sum;
    }
    return sum;
}

int main() {
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
       cin>>b;
cout<<"the sum of the value is "<<algorithm(a,b)<<endl;
return 0;
}