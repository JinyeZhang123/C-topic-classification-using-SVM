template <typename T> string toString ( T Number ) {
    stringstream ss;
    ss << Number;
    return ss.str();
}