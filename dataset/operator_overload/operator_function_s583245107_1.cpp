bool operator<(const string& s,const string& t){
    if(s.size() != t.size())return s.size() < t.size();
    rep(i,s.size()){
        if(s[i] != t[i])return s[i] < t[i];
    }