struct str_hash{size_t operator()(const string& str)const{return __stl_hash_string(str.c_str());}};
