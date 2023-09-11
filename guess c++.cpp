#include<iostream>
using namespace std;

int main()
{
    int sec_number=32;
    int guess_count=0;
    int guess_limit=4;
    int guess;
    for(int i=0; i<guess_limit; i++){
        cout<<"enter the select number"<<endl;
        cin>>guess;
        guess_count++;
        if(guess==sec_number){
            cout<<"congrats you win"<<endl;
            break;
        }
        else{
            cout<<"try again"<<endl;
        }
        if(guess_count==guess_limit){
            cout<<"game over"<<endl;
        }
    }
    return 0;
   
}