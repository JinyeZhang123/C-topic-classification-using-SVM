template<class t>
void output(t x){
	if(was_output)cout << " ";
	was_output = true;
	cout << x;
}