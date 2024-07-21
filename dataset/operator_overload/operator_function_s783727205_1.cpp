bool operator<(team a)
	{
		if(cnt!=a.cnt)return cnt<a.cnt;
		else if(p!=a.p)return p>a.p;
		else return num>a.num;
	}