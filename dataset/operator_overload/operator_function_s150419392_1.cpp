T operator [](int k){
		k += N - 1;
		T ans = ST[k].first;
		T time = ST[k].second;
		while (k > 0){
			k = (k - 1) / 2;
			if (ST[k].second > time){
				ans = ST[k].first;
				time = ST[k].second;
			}