template <class data_t>
dice<data_t>::dice(vector<data_t> v){
	typename vector<data_t>::iterator vi = v.begin();
	while(vi!=v.end()){
		field.push_back(*vi);
		vi++;
	}