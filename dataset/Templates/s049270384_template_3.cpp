template<class T> int former(const vector<T> &v, T x){
   return upper_bound(v.begin(),v.end(),x) - v.begin() - 1;
}