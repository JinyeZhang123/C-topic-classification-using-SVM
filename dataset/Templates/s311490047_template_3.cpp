template<typename T>
void vdeb(std::vector<T> &bb) {
    for (int i = 0;i < bb.size();i++) {
        if (i == bb.size() - 1) std::cout << bb[i];
        else std::cout << bb[i] << ' ';
    }