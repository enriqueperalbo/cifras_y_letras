#include "../include/dictionary.h"

Dictionary::Dictionary() {}

Dictionary::Dictionary(const Dictionary& other) {
    words = other.words;
}

bool Dictionary::exists(const string& val) const {
    return words.find(val) != words.end();
}

bool Dictionary::insert(const string& word) {
    return words.insert(word).second;
}

bool Dictionary::erase(const string& val) {
    return words.erase(val);
}

void Dictionary::clear() {
    words.clear();
}

bool Dictionary::empty() const {
    return words.empty();
}

unsigned int Dictionary::size() const {
    return words.size();
}

vector<string> Dictionary::wordsOfLength (int length) {
    vector<string> result;
    
    for (const string& word : words) {
        if (word.length() == length) {
            result.push_back(word);
        }
    }
    
    return result;
}

int Dictionary::getOcurrences(const char c) {
    int cont = 0;

    for (const string& word : words) {
        for (const char& letra : word) {
            if (letra == c) {
                cont++;
            }
        }
    }
    return cont;
}

void Dictionary::anade(const Dictionary &dic) {
    for (const string& word : dic.words) {
        words.insert(word);
    }
}

