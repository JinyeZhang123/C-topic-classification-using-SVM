int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");

#endif

	int h, w;

	while (true)
	{

		cin >> h >> w;

		if (h == 0 && w == 0) break;
		for (int k = 1; k <= w; k++)
		{
			cout << "#";

		}