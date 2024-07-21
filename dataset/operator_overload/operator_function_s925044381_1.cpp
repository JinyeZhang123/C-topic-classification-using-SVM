bool operator<( const team &a, const team &b )
{
	if(a.accept > b.accept) return true;
	else if(a.accept < b.accept) return false;
	else {
		if(a.time < b.time) return true;
		else if(a.time > b.time) return false;
		else {
			if(a.id < b.id) return true;
			else return false;
		}