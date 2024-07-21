MCXI operator+(const MCXI &b){
		MCXI c;
		c.N = this->N + b.N;
		c.Conv();
		return c;
	}