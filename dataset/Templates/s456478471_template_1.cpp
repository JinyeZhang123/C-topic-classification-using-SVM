template <class T> void vecout(T V) {
    auto t = V.begin();
    *t++;
    while(t != V.end()) {
        cout << " " << *t++;
        // if(t != V.end()) cout << " ";
    }