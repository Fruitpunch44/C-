#include<iostream>

 using namespace std;

 int main()
 {
    int array[5]={0,1,2,3,4};
    array[0]=3;
    for (int i=0; i<5;i++){
        printf("[%d]=%d\n",i,array[i]);
    }
    return 0;
 }