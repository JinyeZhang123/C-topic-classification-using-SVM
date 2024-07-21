template <class T>
void print_vector(vector<T>& vec){
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << '<' << it->first << ", " << it->second << "> ";
        //cout << *it << ' ';
    }