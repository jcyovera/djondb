#ifndef BPLUSINDEX_H
#define BPLUSINDEX_H

#include "index.h"
#include <boost/shared_ptr.hpp>

typedef char* INDEXPOINTERTYPE;

const int BUCKET_MAX_ELEMENTS = 3; // Should be even (3, 5, 7)

struct BucketElement {
    boost::shared_ptr<Index> index;

    INDEXPOINTERTYPE key;

    BucketElement* previous;
    BucketElement* next;
};

struct Bucket {
    int size;
    INDEXPOINTERTYPE minKey;
    INDEXPOINTERTYPE maxKey;

    BucketElement* root;
    BucketElement* tail;

    Bucket* left;
    Bucket* right;

    Bucket* parentBucket;
};

class BPlusIndex: public IndexAlgorithm
{
    public:
        BPlusIndex();
        virtual ~BPlusIndex();

        virtual Index* add(const BSONObj& elem, long filePos);
        virtual Index* find(const BSONObj& elem);
        virtual void remove(const BSONObj& elem);
    protected:
    private:
        Bucket* _head;

    private:
        bool insertElement(Index* elem);
        BucketElement* findBucketElement(Bucket* start, Index* index, bool create);
        void initializeBucket(Bucket* const element);
        void initializeBucketElement(BucketElement* const elem);

        void insertBucketElement(Bucket* bucket, BucketElement* element);
        void checkBucket(Bucket* const bucket);
};

#endif // BPLUSINDEX_H
