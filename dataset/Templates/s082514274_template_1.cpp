template<typename I, typename F>
void for_each2(I begin, I end, F fnc){
    if (begin == end) return;
    fnc(true, begin == end - 1, *begin);
    while(++begin <= end - 1) fnc(false, begin == end - 1, *begin);
}