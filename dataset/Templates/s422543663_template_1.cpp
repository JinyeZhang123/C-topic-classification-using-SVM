template<typename T,typename... V>
void _masterread(T& t, V&... v){cin >> t;_masterread(v...);}