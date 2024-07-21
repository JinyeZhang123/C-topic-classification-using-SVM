bool operator<(jack a,jack b){
	if(a.di!=b.di) return a.di<b.di;
	return a.when<b.when;
}