bool operator<(St a,St b){
	return (a.P<b.P||(a.P==b.P&&a.L>b.L));
}