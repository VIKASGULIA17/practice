// Create a namespace Library containing a struct Book with fields like title, author, and price.
// Write functions to add books to a collection and display all books. Use these functions in main.

#include<iostream>
#include<vector>
using namespace std;

namespace Library{
    struct Book
    {
        string title;
        string author;
        int price;
    } ;
    vector<Book> collection;
    void enterbook(string title,string author,int price){
        Book Newbook={title,author,price};
        collection.push_back(Newbook);
    }
    void display(){
        for(auto temp:collection){
            cout<<temp.author<<" "<<temp.price<<" "<<temp.title<<endl;
        }
    }
}
int main(){
    Library::enterbook("one piece","oda",100000);
    Library::enterbook("Naruto","kishimoto",500000);
    Library::enterbook("Bleach","idk",4000);
    Library::display();
}