template<typename T>
void shell_sort(std::vector<T>&& ary){
    int cnt = 0;
    std::vector<int> G;
    for(int h = 1; ; ){
        if(h > ary.size())
            break;
        G.push_back(h);
        h = 3 * h + 1;
    }