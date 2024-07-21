template<typename T> class SparseTable {
private:
    vector<T> Arr;
    vector<int> LogTable;
    vector<vector<int> > Table; //最小値のインデックスを保持
    int sz;
public:
    void resize(vector<T>& v){
        sz = (int)v.size();
        Arr = v;
        LogTable.resize(sz+1);
        for(int i = 2; i < sz + 1; i++){
            LogTable[i] = LogTable[i >> 1] + 1;
        }