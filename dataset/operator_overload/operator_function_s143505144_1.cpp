bool operator<(const P& a, const P& b){
		return imag(a) != imag(b) ? imag(a) < imag(b) : real(a) < real(b);
		//return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
	}