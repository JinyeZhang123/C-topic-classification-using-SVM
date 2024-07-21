void _masterprint(T t, V... v){cout << t;if(sizeof...(v)) cout << " ";_masterprint(v...);}
