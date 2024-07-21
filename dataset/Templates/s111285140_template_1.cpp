template<class T>
class FenwickTree {
    vector <T> sum;
public:
    FenwickTree (int treeSize) {
        sum = move(vector<T>(treeSize+1));
    }