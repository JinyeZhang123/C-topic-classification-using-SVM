template<typename T>
bool elem(set<T> st, T val){
	return (st.find(val) != st.end());
}