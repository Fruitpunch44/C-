#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
//this is basically a  class which can store various elements and so on in
//this case we created a public class called book and gave it a set of attributes 
//that can be accessed outside of this class
};


class Character{
    public:
    string archetype;
    string damage;
    string weight;
    int guts;
    string gameplan;
    Character(string Aarchetype, string Adamage, int Aguts, string Agameplan,string Aweight){
        Aarchetype=archetype;
        Adamage=damage;
        Aguts=guts;
        Agameplan=gameplan;
        Aweight=weight;
        
    }

};

int main(){
  Book book1("The wings of shadows","Henry moogel",493);
  Book book2("The wings of shadows II","Henry moogel",500);
  cout<<book1.title<<endl;

  Character Johnny("Stance Character","High",29,"Mid screen control","HEAVEY");
  Character POT("grapller","High",36,"Get in and grab","HEAVEY");
  cout<<Johnny.archetype<<endl<<Johnny.damage<<endl;
  return 0;
}