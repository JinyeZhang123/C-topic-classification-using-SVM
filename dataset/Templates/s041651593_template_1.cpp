template<class T>
class SegmentTree{
    public:
        SegmentTree(T size){
            mSize = 1;
            while(size > mSize) mSize *= 2;
            mData.assign(mSize*2-1, INT_MAX);
        }