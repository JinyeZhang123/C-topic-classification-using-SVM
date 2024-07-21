template <typename T>
class Mat
{
    vector<vector<T>> mat;
    int rows, columns;
public:
    Mat<T>(int r, int c) : rows(r), columns(c) {
        mat = vector<vector<T>>(rows, vector<T>(columns));
    }