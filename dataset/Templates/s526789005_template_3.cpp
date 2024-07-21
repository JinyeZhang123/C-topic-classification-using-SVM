template<typename T>
int compress(vector<T> v, unordered_map<T, int> &zip, vector<T> &unzip){
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    unzip.resize(v.size());
    for(int i = 0, i_len = (int)v.size() ; i < i_len ; ++i){
        zip[v[i]] = i;
        unzip[i] = v[i];
    }