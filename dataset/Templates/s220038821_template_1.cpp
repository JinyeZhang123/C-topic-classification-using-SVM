template <class T>
class SegmentTree
{
private :
    int n;
    vector<T> data;
public :
    void init(int);
    void update(int, int);
    int query(int, int, int, int, int);
    int size();
    T top();
}