#include<iostream>	
using namespace std;

class Student{
    private:
   string department;
    public:
    string name;
    double gpa;
    Student(string aname, string adepartment, double agpa){
        name = aname;
        setDepartment(adepartment);
        gpa = agpa;
    }
    bool hasHonors(){
        if(gpa>=4.5){
            return true;
        }
        return false; //additional functions that can be added into the class
    }
    void setDepartment(string adepartment){
        if(adepartment=="Engineering"||adepartment=="Law"||adepartment=="MHS"){
            department = adepartment;
    }
    else{
        department = "does not exist";
    }
}
string getdepartment(){
    return department;
}
};



int main(){
Student student1("James","Engineering",4.6);
Student student2("Jasmine","suhha",4.2);
cout<<student2.hasHonors()<<endl;
cout<<student2.getdepartment()<<endl;
return 0;
}
