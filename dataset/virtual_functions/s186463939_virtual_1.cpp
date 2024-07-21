virtual _Ty nPk(int n, int k) {
		if ((k > _maxNum) || (n > _maxNum) || (k > n) || (k < 0) || (n < 0)) {
			return 0;
		}