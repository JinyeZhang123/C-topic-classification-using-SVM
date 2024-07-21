int main(void)
{
	//ifstream fin("in.txt");
	istream& in=cin;
	resArr result;

	while(1)
	{
		int n;
		in >> n;
		if(n == 0)break;

		result.clear();

		for(int i=0; i<n; i++)
		{
			long long id, p, q;
			in >> id >> p >> q;

			resArr::iterator it;
			for(it=result.begin(); it!=result.end(); it++)
				if(it->first == id)
					break;
			
			if(it == result.end())
				result.push_back( pairLL(id, p*q) );
			else
				it->second += p*q;
		}