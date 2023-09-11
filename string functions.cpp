#include<iostream>
using namespace std;

int main()
{
    //string fucntions

    string suker="suker is king";
    suker[0]='u';//modoifi=ying elemenst in the string
    cout<<suker.length()<<endl;//gives ou the length of a string
    cout<<suker[0]<<endl;//printering out a particlar part of a string or  indexing
    cout<<suker.find("suker")<<endl;//printering out a particlar part of a string
    cout<<suker.substr(8,3)<<endl;//getting a particlar part of a string
    cout<<suker<<endl;//
    return 0;
    }