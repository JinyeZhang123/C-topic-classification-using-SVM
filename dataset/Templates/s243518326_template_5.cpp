template<typename T>
void _print(vector<T>v){cerr<<"(";for(unsigned _i=0;_i<v.size();_i++)_print(v[_i]),cerr<<(_i==v.size()-1?"":", ");cerr << ")";}