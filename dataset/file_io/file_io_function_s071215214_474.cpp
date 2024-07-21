int main() {
	int d,n,m,q;
	istream &sin=cin;
	ostream &sout=cout;
//	fstream sin("input.txt",fstream::in);
//	fstream sout("output.txt",fstream::out);

	while(true){
	sin >> d >> n >> m;
	if(d==0)break;
	
	vector<int> s(n);
	for(int i=1;i<n;i++){
		sin >> s[i];
	}