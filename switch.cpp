#include<iostream>
 using namespace std;

string dayOfWeek(int day){
    string dayname;
    switch(day) {
        case 0: dayname = "Sun"; break;
        case 1: dayname = "mon"; break;
        case 2: dayname = "tue"; break;
        case 3: dayname = "wen"; break;
        case 4: dayname = "thur"; break;
        case 5: dayname = "fri"; break;
        case 6: dayname = "sat"; break;
        default: dayname = "fuck out"; break;
        return dayname;
    }
}

int main(){
    cout<<dayOfWeek(5);
    return 0;
}