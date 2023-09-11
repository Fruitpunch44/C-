#include<iostream>

using namespace std;

int array_sum(int ar[],int size){//function for adding the sum of an array
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += ar[i];
}
        return sum;
}

int max(int a,int b,int c){//function for finding max numbers
    int result;
    if(a>=b && a>=c){
        result = a;
    }
    else if(b>=c && b>=a){
        result = b;
    }
else{
    result = c;
}
    return result;
}

int leap_year(int year){//fucntion for leap year
    if((year %4 == 0 &&year %100 != 0) || (year %400 == 0)){	
        return true;}
        else {
            return false;
        }
}

int add(int a ,int b){ //function to add
    int add=0;
    add=a+b;
    return add;
}


void print(){// void used when there isn't any return value
    cout<<"suck"<<endl;
}

int main()
{
    int min,min2,min3;
    min;
    cout<<"enter min"<<endl;
    cin>>min;
    min2;
    cout<<"enter min2"<<endl;
    cin>>min2;
    min3;
    cout<<"enter min3"<<endl;
    cin>>min3;
    cout<<max(min,min2,min3)<<endl;



    int array[]={3,45,4,3,42};
    
    int size =sizeof(array)/sizeof(array[0]);
    int result = array_sum(array,size);
    cout<<result<<endl;


    int year=2024;
    if(leap_year(year)){
        cout<<year <<"is a leap year"<<endl;
    }
    else{
        cout<<year<<"is not a leap year"<<endl;}

    cout<<leap_year<<endl;

    int x,y;
    x=4;
    y=6;
    cout<<add(x,y)<<endl;
    print();

    return 0;
}