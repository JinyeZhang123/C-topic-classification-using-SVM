template <class t> inline void read(t &s)
{
	s=0;
	reg int f=1;
	reg char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}