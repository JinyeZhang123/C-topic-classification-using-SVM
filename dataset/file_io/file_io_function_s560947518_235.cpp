int main()
{
	//ifstream cin("input.txt");
	ll k;
	cin>>k;
	queue<ll> q;
	rep(i,1,9)
		q.push(i);

	rep(i, 1,k -1)
	{
		ll x = q.front();q.pop();

		if(x % 10 != 0)
			q.push((x*10 +(x%10) - 1));

		q.push(x*10+(x%10));
		if(x%10 != 9)
			q.push((x*10 + (x%10) + 1));
	}