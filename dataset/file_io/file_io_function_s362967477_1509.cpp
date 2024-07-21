int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int num_faces = 6;
	std::vector<int> labels(num_faces, 0);
	Dice *dice = NULL;
	std::string operations;

	for(int i = 0; i < num_faces; i++){
#if INPUT_FROM_FILE
		ifs >> labels[i];
#else
		std::cin >> labels[i];
#endif;
	}