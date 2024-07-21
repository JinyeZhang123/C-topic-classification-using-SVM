template<typename T>
int calc_area(T start, T end){
    auto s_alti = get<1>(*start);
    int area = 0;
    while (start != end + 1) {
        int alti = get<1>(*start);
        switch (get<0>(*start)) {
            case DOWN:
            case UP:
                area += s_alti - alti + 1;
                break;
            case FLAT:
                area += s_alti - alti + 2;
                break;
        }