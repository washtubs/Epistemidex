#ifndef TAG_H
#define TAG_H

#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

class Tag {
    public:
    const string name;
    const vector<Tag*> &synonyms = vector<Tag*>();
    const vector<Tag*> &similars = vector<Tag*>();
    Tag(string n) : name(n){}
};

#endif
