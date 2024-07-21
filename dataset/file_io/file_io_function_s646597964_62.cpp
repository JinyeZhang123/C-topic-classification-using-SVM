int main() {
	int a,d,n;

	//ifstream fin("in.txt");

	//fin >> a >> d >> n;
	cin >> a >> d >> n;

	int prime[100000];
	int ite = 4;
	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;

	int i,j;
	for(i = 11; i < 1000000; i++) {
		if(i%2==0 || i%3==0 || i%5== 0 || i%7 == 0) goto NOT_PRIME;
		for(j = 0; j < ite; j++) {
			if(i%prime[j]==0) {
				goto NOT_PRIME;
			}