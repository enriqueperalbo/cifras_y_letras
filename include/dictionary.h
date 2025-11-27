#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__

#include <set>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief TDA Dictionary
 * @details Almacena las palabras de un fichero de texto y permite iterar sobre ellas
 *
 */

class Dictionary {
private:
    set <string> words;
public:
    Dictionary();
    Dictionary(const Dictionary& other);
    bool exists(const string& val) const;
    bool insert(const string& word);
    bool erase(const string& val);

    void clear();
    bool empty() const;
    unsigned int size() const;
    vector<string> wordsOfLength (int length);
    int getOcurrences(const char c);
    void anade(const Dictionary &dic);
    
};

#endif
