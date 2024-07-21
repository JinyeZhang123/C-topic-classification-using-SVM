template <typename T>
class CumulativeSum2D {
    vector <vector <T>> sum;
    public:
    CumulativeSum2D (int h, int w) : sum(vector <vector <T>> (h + 1, vector <int> (w + 1))) {}