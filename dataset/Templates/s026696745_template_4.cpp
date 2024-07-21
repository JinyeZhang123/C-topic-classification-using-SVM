template<typename T> 
void remdup(vector<T>& v) {
	sort(all(v)); v.erase(unique(all(v)), v.end());
}