
#include <iostream>
using namespace std;

class Author{
protected:
    string auth_name;

public:
    void get_auth_name();
    void display_auth_name();
};

void Author::get_auth_name(){
    cout << "Enter Author name : ";
    cin >> auth_name;
}

void Author::display_auth_name(){
    cout << "Author name : "<<auth_name<<endl;
}


class Publisher{
protected:
    string publisher_name;

public:
    void get_pub_name();
    void display_pub_name();
};

void Publisher::get_pub_name(){
    cout << "Enter Publisher name : ";
    cin >> publisher_name;
}

void Publisher::display_pub_name(){
    cout << "Publisher name : "<<publisher_name<<endl;
}


class Book:public Author, public Publisher{
private:
    int book_code;
    string book_name;

public:
    void get_data();
    void display_data();

};

void Book::get_data(){
    cout << "Enter Book code: ";
    cin >> book_code;
    cout << "Enter Book name: ";
    cin >> book_name;
}

void Book::display_data() {
    cout << "Book Code: " << book_code << endl;
    cout << "Book Name: " << book_name <<endl;
}

int main(){
    Book b1;
    cout<<"--Enter details of the Book--"<<endl;
    b1.get_auth_name();
    b1.get_pub_name();
    b1.get_data();
    cout<<endl;
    cout<<"---Details of the Book---"<<endl;
    b1.display_auth_name();
    b1.display_pub_name(); 
    b1.display_data();

    return 0;
}