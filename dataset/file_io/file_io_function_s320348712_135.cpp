int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string str;
	int m = 0;
	int h = 0;

	for(;;){
#if INPUT_FROM_FILE
		ifs >> str;
#else
		std::cin >> str;
#endif
		if(str == "-"){ break;}