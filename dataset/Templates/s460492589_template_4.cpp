template <class T>
int lb_index(vector<T>& v,T k){
	return lower_bound(v.begin(),v.end(),k)-v.begin();
}