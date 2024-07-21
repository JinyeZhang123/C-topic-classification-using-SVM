template <class T>
int ub_index(vector<T>& v,T k){
	return upper_bound(v.begin(),v.end(),k)-v.begin();
}