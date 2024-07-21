template<class... T>
void debug_print(T... args){
    vector<lint> tmp = initializer_list<lint>{args...}