#pragma once;
#include "libraries.h";
#include "Book.h";
#include "AudioBook.h";

class BookShop {
    protected:
        int nosBooks;
        Book bookCollection[];

    public:
        void addBooks(Book *book);
        void addBooks(AudioBook *audioBook);
        BookShop(int nosBooks, string bookCollection);
};