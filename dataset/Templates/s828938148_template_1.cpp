template <class T> void vecout(T V) {
    auto t = V.begin();
    while(t != V.end()) {
        cout << *t++;
        if(t != V.end()) cout << " ";
    }