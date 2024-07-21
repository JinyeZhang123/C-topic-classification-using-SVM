template <typename T>
void testV2(T v) {
    for (auto sv : v) {
        testV(sv);
    }