class Word {
public:
	char w[33];
	int length;
	int freq;
public:	
	Word() {
		strcpy(w, "");
		length = 0;
		freq = 0;
	}                                                                              