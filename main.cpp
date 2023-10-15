#include "libraries.h";
#include "Book.h"
#include "AudioBook.h"

void main() {
    char typeOfBook;
    cout << "Please Choose the type of Book, Type 'a' for Audio Book, type 'b' for Regular Books" << endl;
    cin >> typeOfBook;

    if (typeOfBook == 'a') {
        string title, author, voiceActor;
        cout << "Enter Book title: " << endl;
        cin >> title;
        cout << "Enter Author Name: " << endl;
        cin >> author;
        cout << "Enter Voice Over actor: " << endl;
        cin >> voiceActor;
        AudioBook *newBook = static_cast<AudioBook *>(malloc(sizeof(AudioBook)));
    } else if (typeOfBook == 'b') {
        string title, author, voiceActor;
        cout << "Enter Book title: " << endl;
        cin >> title;
        cout << "Enter Author Name: " << endl;
        cin >> author;
        Book *newBook = static_cast<Book *>(malloc(sizeof(Book)));

    }

}