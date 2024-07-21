int main()
{
	string str;
	
//	ifstream ifs(stdin);
	getline(cin, str);
	
	int len = str.size();
	for (int i = 0; i < len; i++){
		if (str.substr(i, 5) == "apple"){
			str.replace(i, 5, "peach");
		}