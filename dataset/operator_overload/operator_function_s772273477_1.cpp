bool operator<(brick _1,brick _2){
	if (_1.a==_2.a){
		if (_1.b==_2.b){
			if (_1.c==_2.c){
				return _1.d<_2.d;
			}