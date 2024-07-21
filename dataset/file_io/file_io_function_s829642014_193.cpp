int main(int argc, char **argv){
	std::string str;

#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
	//FILE *fp = fopen("test.txt", "r");
#endif

#if INPUT_FROM_FILE
	while(std::getline(ifs, str)){
#else
	while(std::getline(std::cin, str)){
#endif
		std::string result;

		for(int i = 0; i < str.size(); i++){
			if(str[i] == '@'){
				int n = str[i + 1] - '0';
				std::string s(1, str[i + 2]);
				for(int j = 0; j < n; j++){
					result.append(s);
				}