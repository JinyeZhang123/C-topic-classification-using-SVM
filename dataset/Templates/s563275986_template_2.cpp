template <class T, class U>
void print_vector(vector<pair<T, U>>& vec){
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << '<' << it->first << ", " << it->second << "> ";
        //cout << *it << ' ';
    }