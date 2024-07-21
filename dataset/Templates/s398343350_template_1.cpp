template<typename T>
void merge(vector<T> & A, int left, int mid, int right){
    auto n1 = mid - left;
    auto n2 = right - mid;
    vector<T> L(n1);
    vector<T> R(n2);
    copy(A.begin() + left, A.begin() + mid  , L.begin());
    copy(A.begin() + mid , A.begin() + right, R.begin());
    L.push_back(SENTINEL);
    R.push_back(SENTINEL);
    auto itL = L.begin();
    auto itR = R.begin();
    for (auto itA = A.begin() + left; itA != A.begin() + right; ++itA){
        if (*itL <= *itR){
            *itA = *itL;
            ++itL;
        }