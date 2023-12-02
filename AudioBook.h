#pragma once
#include "Book.h"

class AudioBook : public Book {
    protected:
        string voiceActor;

    public:
        AudioBook(string title, string author, string voiceActor);
        void setVoiceActor(string voiceActor);
        string getVoiceActor();
        void printDescription();
        ~AudioBook();
};