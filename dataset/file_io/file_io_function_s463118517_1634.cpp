signed main() {
    //ifstream cin("E:\\acm dream\\in.in");
	//ofstream cout("E:\\acm dream\\out.out");
	FIO;
    #ifdef err
	double be = clock();
    #endif

    int sx,sy,ex,ey;cin>>sx>>sy>>ex>>ey;
    int n;cin>>n;
    x[0]=sx,y[0]=sy,r[0]=0,x[n+1]=ex,y[n+1]=ey,r[n+1]=0;
    _for(i,1,n+1){
        cin>>x[i]>>y[i]>>r[i];
    }