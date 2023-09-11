#include<iostream>
#include<vector>
//a vector is a dynamically rezizabel araay ie it can easily increase its size compared to noraml arrays with a fixed size
using namespace std;
int main(){
vector<int> v1 ={1,2,3,4};
v1.push_back(8);//what this does is that it just adds an element ie adding to the end of a vector
v1.push_back(32);
v1.push_back(83);
v1.push_back(81);
v1.push_back(38);

cout<<v1.capacity()<<endl;
cout<<v1.size()<<endl;

v1.pop_back();//
v1.pop_back();
v1.pop_back();
v1.pop_back();
//to decre ase the capacity of a vector mainly want to do this to prevent an element from sucking space when
v1.shrink_to_fit();
cout<<v1.capacity()<<endl;
cout<<v1.size()<<endl;
cout<<v1.front()<<endl;//some forms of memory accessing in a vector
cout<<v1.back()<<endl;


//insertion and deletion

vector<int> v2= {23,24,23,42,3};
v1.insert(v2.begin(),33);
v1.insert(v2.begin(),332);
cout<<v2[0]<<endl;


    
}