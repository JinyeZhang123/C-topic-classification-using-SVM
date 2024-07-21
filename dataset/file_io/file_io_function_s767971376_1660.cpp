int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	std::string command;
	int key = 0;
	List list = List();

	IS >> n;

	for(int i = 0; i < n; i++){
		IS >> command;

		if(command == "insert"){
			IS >> key;
			list.insert(key);
		}