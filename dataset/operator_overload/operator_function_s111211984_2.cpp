face_t operator[](int32_t v) {
        for (face_t f = TOP; f <= RIGHT; ++f) {
            if (v == val[f]) {
                return f;
            }