Info operator+(Info a){
		ll tmp_cmb = cmb * a.cmb % M;
		return Info(tmp_cmb * combination(t+a.t,t) % M, t+a.t);
	}