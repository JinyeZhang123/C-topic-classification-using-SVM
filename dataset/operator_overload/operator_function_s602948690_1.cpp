bool operator<(const line x,const line y)
	{
		return (x.l!=y.l)?x.l<y.l:x.r<y.r;
	}