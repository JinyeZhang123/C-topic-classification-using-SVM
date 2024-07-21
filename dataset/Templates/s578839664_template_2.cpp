template <class RandomIt>
size_t shsort(RandomIt first, RandomIt last) {
    /* Shell sort */
    size_t count_=0, m=last-first;

    vector<ptrdiff_t> g; g.push_back(1);
    for (size_t h=4; h<=m&&g.size()<100; ++(h*=3))
        g.push_back(h);

    reverse(g.begin(), g.end());

    printf("%zu\n", g.size());
    for (size_t i=0; i<g.size(); ++i) {
        printf("%zu%c", g[i], i<g.size()-1? ' ':'\n');
        count_ += isort(first, last, g[i]);
    }