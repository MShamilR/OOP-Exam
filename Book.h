#pragma once
#include "libraries.h"

class Book {
    protected:
        string title;
        string author;

    public:
        Book(string title, string author);
        void setTitle(string title);
        string getTitle();
        void setAuthor(string author);
        string getAuthor();
        virtual void printDescription();
        ~Book();
};