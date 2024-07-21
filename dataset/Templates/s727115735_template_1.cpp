template<typename T = int>
vector<vector<T>> vvector(int h, int w, T def = T()) { return move(vector<vector<T>>(h, vector<T>(w, def))); }