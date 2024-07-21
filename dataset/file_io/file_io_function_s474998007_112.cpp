int main(int argc, char **argv) {
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;

#if INPUT_FROM_FILE
	if (!ifs.is_open()) {
		std::cout << "can't open" << std::endl;
		exit(0);
	}