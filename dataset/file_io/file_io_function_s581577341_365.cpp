int main()
{	std::ofstream ofs( "ans.txt" );
	while(cin>>n>>m>>s>>g1>>g2 && n!=0){
		int ans=1000000;
		for(int i=0;i<101;i++){
			cost_s[i]=cost_g1[i]=cost_g2[i]=10000000;
			for(int j=0;j<101;j++){
				edge[i][j]=10000000;
				edge_rev[i][j]=100000000;
			}