bool operator<(S a,S b){
	return a.ok>b.ok||a.ok==b.ok&&a.ti<b.ti||a.ok==b.ok&&a.ti==b.ti&&a.no>b.no;
}