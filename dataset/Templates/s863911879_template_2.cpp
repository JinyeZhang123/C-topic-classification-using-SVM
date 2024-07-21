template <class T>
int Toint(T input){
	stringstream ss;
	ss<<input;
	int num;
	ss>>num;
	return num;
}