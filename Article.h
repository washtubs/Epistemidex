#ifndef ARTICLE_H
#define ARTICLE_H

#include "Tag.h"

#include <stdlib.h>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Article {
    private:
    const map<string,Tag&> tags;
    public:
    const string name;
    Article(string n) : name(n) {}
    ~Article();
    bool hasTag(string tag_name);
    void insertTag(Tag t);
    void removeTag(string tag_name);

};

#endif
