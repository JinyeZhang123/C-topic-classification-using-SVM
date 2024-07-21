virtual _Ty nCk(int n, int k) {
		_Ty ans = 0;
		if ((k > _maxNum) || (n > _maxNum) || (k > n) || (k < 0) || (n < 0)) {
			ans = 0;
		}