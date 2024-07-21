bool operator<(data a,data b)
{
	if(a.val==b.val)
	{
		return a.idx > b.idx;
	}