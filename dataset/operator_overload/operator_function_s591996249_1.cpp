bool
    operator==(Die &x) {
        const string aface = "NENEN";
        for (auto it = aface.cbegin(); it != aface.cend() && faces[f2i[top]] != x.Front(); it++) {
            turn(*it);
        }