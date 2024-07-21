template<typename T>
void display_contents(const T & container){
    cout << *(container.cbegin());
    for (auto it = container.cbegin() + 1; it != container.cend(); ++it){
        cout << ' ' << *it;
    }