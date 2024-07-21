template <typename T> 
int getIndexOfUpperBound(vector <T> &v, T x){
    return upper_bound(v.begin(),v.end(),x)-v.begin();
}