int main()
{
	//ifstream ifs("data.txt");

	int x, y;

	while( cin >> x >> y && x)
	{
		vector<bitset<MAX_M> > table(x + 2);
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				int buf;
				cin >> buf;
				if(buf)
					table[i+1][j+1] = true;
			}