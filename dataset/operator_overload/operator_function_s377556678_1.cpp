bool operator<(const node &A,const node &B)
	{
		if(A.l!=B.l) return A.l<B.l;
		return A.r<B.r;
	}