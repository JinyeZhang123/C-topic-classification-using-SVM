template<class T> ostream& operator<<(ostream &os, const vector<vector<T>> &st){
  for(size_t i=0;i<st.size();++i){
    os << st[i];
    if(i!=st.size()-1) os << endl;
  }