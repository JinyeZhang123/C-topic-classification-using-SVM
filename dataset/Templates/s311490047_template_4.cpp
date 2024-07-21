template<typename T>
void vdeb(std::vector<std::vector<T>> &bb) {
    for (int i = 0;i < bb.size();i++) {
        std::cout << i << ' ';
        vdeb(bb[i]);
    }