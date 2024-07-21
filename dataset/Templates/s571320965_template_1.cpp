template <typename T> 
int getIndexOfLowerBound(vector <T> &v, T x){
    return lower_bound(v.begin(),v.end(),x)-v.begin();
}