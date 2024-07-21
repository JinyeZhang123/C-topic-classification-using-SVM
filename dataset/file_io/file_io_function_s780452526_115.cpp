int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif // INPUT_FROM_FILE
	int n = 0;
	int m = 0;
	std::vector<std::vector<int> > mat_A;
	std::vector<int> vec_b;

#if INPUT_FROM_FILE
	ifs >> n >> m;
#else
	std::cin >> n >> m;
#endif // INPUT_FROM_FILE

	mat_A.resize(n);
	for(int i = 0; i < n; i++){
		mat_A[i].resize(m, 0);
	}