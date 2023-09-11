#include<iostream>
 using namespace std;

 int main()
 {
    float age;
    string name;
    cout<<"enter your name"<<endl;
    getline(cin,name);

    cout<<"enter your age"<<endl;
    cin>>age;
   
    cout<<"you are "<<age<<" years old "<<name<<endl;
    return 0;
 } 