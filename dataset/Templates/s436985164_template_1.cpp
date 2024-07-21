template <typename T>
void printVector2d(std::vector<std::vector<T>>& matrix) {
    int h = matrix.size();
    int w = matrix.at(0).size();

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << matrix.at(i).at(j);
        }