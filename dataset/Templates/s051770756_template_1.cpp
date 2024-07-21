template<typename T>
void print_ary(std::vector<T> ary, char delim = '\n') {
    for(int i = 0; i < ary.size()-1; i++) {
        std::cout << ary[i] << delim;
    }