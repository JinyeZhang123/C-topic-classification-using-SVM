Info operator-(Info a){
		ll tmp_cmb = mdev(cmb,a.cmb);
		return Info(mdev(tmp_cmb,combination(t,t-a.t)), t-a.t);
		// return Info(tmp_cmb, t-a.t);
	}