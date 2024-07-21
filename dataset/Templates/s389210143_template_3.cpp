template <class t> inline void write(t x)
{
	if(x<0)putchar('-'),x=-x;
	int buf[21],top=0;
	while(x)buf[++top]=x%10,x/=10;
	if(!top)buf[++top]=0;
	while(top)putchar(buf[top--]^'0');
	return;
}