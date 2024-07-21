bool operator<(node a,node b)
	{
		return a.x==b.x?a.y<b.y:a.x<b.x;
	}