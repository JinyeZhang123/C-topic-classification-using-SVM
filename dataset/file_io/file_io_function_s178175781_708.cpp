void proc_status(){
	ifstream t ("/proc/self/status");
	cerr<<string(istreambuf_iterator<char>(t),istreambuf_iterator<char>())<<endl;
	/*freopen("/proc/self/status","r",stdin);
	char ch[100];
	while(scanf("%s",ch)!=EOF)cerr<<ch<<endl;*/
}