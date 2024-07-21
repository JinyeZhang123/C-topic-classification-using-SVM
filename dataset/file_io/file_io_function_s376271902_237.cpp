int main()
{
	//ifstream cin("input.txt");
	int n;
	int sum = 0;
	int mx = 0;
	rep(i,0,4){
		cin>>n;
		if(n%10 != 0){
			sum += n + (10 - n%10);
			mx = max(10 - n%10, mx);
		}