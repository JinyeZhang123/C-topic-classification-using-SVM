node operator*(node a,node b){
		return node(a.hs*b.hs,1ll*a.ms*b.ms%mod);
	}