#include<iostream>
 using namespace std;
//so this can be done with a function or with an operator
 int main()
 {
    //this is a simplecalculatotr program
    int code;
    int a,b;
    int mul,add,sub,div;
    
    cout<<"the value of a"<<endl;
    cin>>a;
    cout<<"the value of b"<<endl;
    cin>>b;
    
    cout<<"enter a work code"<<endl;
    cin>>code;

    if(code==0 || code=='+'){
        add=a + b;
        cout<<add<<endl;
    }
      else if(code==1|| code=='-'){
        sub=a - b;
        cout<<sub<<endl;
    }
       else if(code==2|| code=='*'){
        mul=a * b;
        cout<<mul<<endl;
    }
      else if(code==3 || code=='/'){
        div=a / b;
        cout<<div<<endl;
    }
    else{
        cout<<"invalid code"<<endl;
    }
    return 0;
 }