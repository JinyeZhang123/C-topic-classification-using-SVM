template<class T> ostream& operator<<(ostream &os, const vector<T> &st){
  for(size_t i=0;i<st.size();++i){
    if(i==st.size()-1) os << st[i];
    else os << st[i] << " ";
  }