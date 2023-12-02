#include "Book.h"

Book::Book(string title, string author) {
    this->title = title;
    this->author = author;
};

void Book::setTitle(string title) {
    this->title = title;
}

string Book::getTitle() {
    return title;
}

void Book::setAuthor(string author) {
    this->author = author;
}

string Book::getAuthor() {
    return author;
}

void Book::printDescription() {
    cout << "Title: " << Book::title << endl;
    cout << "Author: " << Book::author << endl;
}

Book::~Book()
{
    this->title = "";
    this->author = "";
};


