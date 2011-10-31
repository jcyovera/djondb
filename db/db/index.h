#ifndef INDEX_H_INCLUDED
#define INDEX_H_INCLUDED

class BSONObj;

struct Index {
    BSONObj* key;
    long posData;
    long indexPos;
};

class IndexAlgorithm {
    public:
    virtual ~IndexAlgorithm() {};
    virtual Index* add(const BSONObj& elem, long filePos) = 0;
    virtual Index* find(const BSONObj& elem) = 0;
    virtual void remove(const BSONObj& elem) = 0;
};

#endif // INDEX_H_INCLUDED
