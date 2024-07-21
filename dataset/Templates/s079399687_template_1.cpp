template<typename T>
void print(vector<T> v, uint8_t delimiter = ' ') {
    for (uint32_t i = 0; i < v.size() - 1; i++) {
        cout << v[i] << delimiter;
    }