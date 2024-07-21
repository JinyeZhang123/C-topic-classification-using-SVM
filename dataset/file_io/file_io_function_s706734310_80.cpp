int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	char code[11];
	char string[11];
	int length;
	int n, check, i, j, k;
	int count = 0;

	cin >> code >> n;
	length = strlen(code);

	for(i = 0; i < n; i++) {
	cin >> string;
		for(j = 0; j < 10; j++) {
			check = 1;
			for(k = 0; k < length; k++) {
				if(string[(j+k)%10] != code[k])
					check = 0;
			}