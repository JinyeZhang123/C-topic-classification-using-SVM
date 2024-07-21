template<typename T>
class SegmentTree
{
    private:
        int n;
        vector<T> node, lazy;
    
    public:
        SegmentTree(vector<T> V) {
            int a = V.size();
            n = 1;
            while (n < a) {
                n *= 2;
            }