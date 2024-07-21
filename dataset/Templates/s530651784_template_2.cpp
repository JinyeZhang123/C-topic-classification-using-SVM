template<typename T>
class CSum {
    vector<vector<T> > data, src;
public:
    CSum(vector<vector<T> >& src):src(src){
        data = src;
        data.insert(data.begin(), vector<T>(src[0].size(), 0));
        for(auto& v: data)v.insert(v.begin(), 0);
        update(0, 0, src[0][0]);
    }