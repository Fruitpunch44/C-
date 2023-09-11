#include<iostream>
#include<fstream>//file reading and writing
#include<string>
using namespace std;

bool Isloggedin(){//creates a bool to check if the user is logged in
string username,password,un,pw;
cout<<"enter user name"<<endl;//username is entered
cin>>username;
cout<<"enter password"<<endl;//passwordis entered
cin>>password;	

ifstream read("C:\\"+ username + ".txt");//reading the name of the text file
if(!read){//if the file can't be read program is term
    cout<<"user does not exist"<<endl;
    return false;
}
getline(read,un);
getline(read,pw);
cout<<"stored username "<<un<<endl;
cout<<"stored password "<<pw<<endl;

if(un==username && pw==password){
    return true;
}
else{
    return false;
}
}

int main()
{
    int choice;
    cout<<"1 :Register\n2:Login \nYour choice:";
    cin>>choice;

if(choice==1){
    string username,password;
    cout<<"select username:"<<endl;
    cin.ignore();
    cin>>username;
    cout<<"select password:";
   cin>>password;

    ofstream file;
    file.open("C:\\"+username+".txt");//accessin the file
    file<<username<<endl<<password;
    file.close();

    main();
}
else if(choice==2){
 bool status =Isloggedin();
 if(!status){
    cout<<"false login"<<endl;
    return 1;
}
else{
    cout<<"sucessful login"<<endl;
    system("pause");
    return 0;}
   } 
   return 0;
}