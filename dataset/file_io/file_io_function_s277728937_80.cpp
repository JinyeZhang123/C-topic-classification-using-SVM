int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int n, i, j, k, l;
	char newt[26];
	char oldt[101];
	int newtlen, oldtlen;
	int check, check2;
	int sum;

	cin >> n >> newt;
	newtlen = strlen(newt);
	sum = 0;
	for(i = 0;i < n; i++) {
		cin >> oldt;
		oldtlen = strlen(oldt);
		check = 0;
		for(j = 1; j <= oldtlen - newtlen + 1; j++) {
			for(k = 0; newtlen+(newtlen-1)*k <= oldtlen-j+1; k++) {
				check2 = 0;
				for(l = 0; l < newtlen; l++) {
					if(oldt[j+(k+1)*l-1] == newt[l]) {
						check2++;
					}