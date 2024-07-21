int main(){

	ifstream fin;
	ofstream fout;

	fin.open("input.txt");
	fout.open("output.txt");

	int m,n; 							//inputする変数
	int a[6],b[6];						//inputする配列(一桁ずつ)
	int c[21] = { 0 }