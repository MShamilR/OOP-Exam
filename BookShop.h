#pragma once
#include "Book.h"
#include "AudioBook.h"

class BookShop {
    protected:
        int nosBooks;
        int index;
        Book *bookCollection;

    public:
        BookShop();
        void addBooks(Book book);
        void addBooks(AudioBook audioBook);
        Book getBookCollection();
        ~BookShop();
};