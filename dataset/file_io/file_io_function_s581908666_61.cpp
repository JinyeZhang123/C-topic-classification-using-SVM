int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int i, sum, p;
	while(1) {
	cin >> sum;
	if(sum == 0)
		break;
	for(i = 0; i < 9; i++) {
		cin >> p;
		sum -= p;
	}