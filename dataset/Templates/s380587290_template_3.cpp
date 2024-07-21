template <typename T>
void testV(T v) {
    cout << "[";
    for (auto i : v) {
        cout << i << ", ";
    }