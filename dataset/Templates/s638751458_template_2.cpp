template <typename A>
string to_string(A v) {
    if(v.size() >= 200) {
        return "Too big length";
    }