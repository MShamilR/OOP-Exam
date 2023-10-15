#include "AudioBook.h"

AudioBook::AudioBook( string title, string author, string voiceActor):Book(title, author)  {
    this->voiceActor = voiceActor;
};

void AudioBook::setVoiceActor(string voiceActor) {
    this->voiceActor = voiceActor;
}

string AudioBook::getVoiceActor() {
    return voiceActor;
}

void AudioBook::printDescription() {
    cout << "Title: " << AudioBook::title << endl;
    cout << "Author: " << AudioBook::author << endl;
    cout << "Voice Actor: " << AudioBook::voiceActor << endl;
}

AudioBook::~AudioBook()
{
    this->title = "";
    this->author = "";
    this->voiceActor = "";
};