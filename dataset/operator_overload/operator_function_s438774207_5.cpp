node operator-(node a,node b){
		return node(a.hs-b.hs,(a.ms-b.ms+mod)%mod);
	}