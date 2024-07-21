bool
    operator==(Die &x) {
        const string aface = "NENENE";
        bool ret = false;
        for (auto it : aface) {
            if (faces[f2i[top]] == x.Front()) {
                ret |= check_top(x);
            }