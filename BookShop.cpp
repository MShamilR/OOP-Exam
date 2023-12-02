#include "BookShop.h"

BookShop::BookShop() {
    this->nosBooks = 0;
    this->index = 0;
}

void BookShop::addBooks(Book newbook) {
    this->bookCollection=static_cast<Book*>(malloc(sizeof(Book)));
    new (&bookCollection[index])Book(newbook);
    index++;
};

void BookShop::addBooks(AudioBook newAudioBook) {
    this->bookCollection=static_cast<AudioBook*>(malloc(sizeof(AudioBook)));
    new (&bookCollection[index])AudioBook(newAudioBook);
    index++;
}

Book BookShop::getBookCollection() {
    return *bookCollection;
}

BookShop::~BookShop() {
    delete BookShop::bookCollection;
}