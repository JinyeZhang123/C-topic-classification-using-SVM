bool operator<(node a,node b){
		return a.hs<b.hs||(a.hs==b.hs&&a.ms<b.ms);
	}