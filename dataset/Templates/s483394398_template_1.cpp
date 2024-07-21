template <class T>
bool find(vector<T> v, T key) {
	for (size_t i = 0; i < v.size(); i++)
		if (v[i] == key)return true;
	return false;
}