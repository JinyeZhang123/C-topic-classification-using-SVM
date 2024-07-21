int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	char S[10001];
	int joi, ioi, slen, i;

	while(cin >> S) {
		slen = strlen(S);
		joi = 0;
		ioi = 0;
		for(i = 0; i < slen - 2; i++) {
			if(S[i] == 'J' && S[i+1] == 'O' && S[i+2] == 'I') {
				joi++;
			}