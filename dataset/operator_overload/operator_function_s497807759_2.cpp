BigNum operator-(const BigNum& b) {
//		// assumes that this.num > b.num
//		BigNum res = *this;
//		int i = res.num.length() - 1;
//		int j = b.num.length() - 1;
//		int borrow = 0;
//		while (i >= 0 || j >= 0) {
//			int s = (res.num[i] - '0') - (j >= 0 ? (b.num[j] - '0') : 0) - borrow;
//			if (s < 0) {
//				s = s + 10;
//				borrow = 1;
//			}