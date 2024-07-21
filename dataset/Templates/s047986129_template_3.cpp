template<typename T> inline void print(T &a){
    for(auto itr = a.begin(); itr != a.end(); itr++){
		cout << *itr << " ";
	}