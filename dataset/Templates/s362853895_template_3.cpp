template<class t>
void output(t a){
	if(was_output)cout << " ";
	cout << a;
	was_output = true;
}