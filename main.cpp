#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"


int main() {
    string title, author, voiceActor;
    int typeOfService;
    char typeOfBook;
    cout << "Welcome To Shamil's Book Shop" << endl;
    cout << "Type 1 for current collection, Type 2 to add books" << endl;
    cin >> typeOfService;


        cout << "Enter Book title: " << endl;
        cin >> title;
        cout << "Enter Author Name: " << endl;
        cin >> author;
        BookShop shamilsBookShop;
        Book newBook(title, author);
        shamilsBookShop.addBooks(newBook);
        shamilsBookShop.~BookShop();



        /*     if (typeOfBook == 'a') {
                cout << "Enter Book title: " << endl;
                cin >> title;
                cout << "Enter Author Name: " << endl;
                cin >> author;
                cout << "Enter Voice Over actor: " << endl;
                cin >> voiceActor;
                AudioBook *newBook = static_cast<AudioBook *>(malloc(sizeof(AudioBook)));
            } else if (typeOfBook == 'b') {
                cout << "Enter Book title: " << endl;
                cin >> title;
                cout << "Enter Author Name: " << endl;
                cin >> author;
                Book *newBook = static_cast<Book *>(malloc(sizeof(Book)));

            } */

}