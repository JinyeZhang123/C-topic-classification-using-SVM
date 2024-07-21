int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	std::vector<int> vec;
	int gcd = 1;

#if INPUT_FROM_FILE
	ifs >> n;
#else
	std::cin >> n;
#endif
	vec.resize(n);
	for(int i = 0; i < n; i++){
#if INPUT_FROM_FILE
		ifs >> vec[i];
#else
		std::cin >> vec[i];
#endif
	}