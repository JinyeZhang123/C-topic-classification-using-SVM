bool operator<(const Edge<Weight> &e, const Edge<Weight> &f) {
    if (e.weight != f.weight) {
        return e.weight > f.weight;
    }