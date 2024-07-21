template <typename C>
void PrintAll(const C& c) {
    for(auto it = c.cbegin(); it != c.cend();) {
        cout << *it++;
        if(it != c.cend()) {
            cout << ' ';
        }