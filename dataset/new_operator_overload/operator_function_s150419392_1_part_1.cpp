T operator [](int k){
		k += N - 1;
		T ans = ST[k