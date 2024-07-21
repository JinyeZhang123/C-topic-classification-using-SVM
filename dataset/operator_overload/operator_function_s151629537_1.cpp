bool operator<(const pii& a, const pii& b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}