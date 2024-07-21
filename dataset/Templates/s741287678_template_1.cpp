template<class ForwardIt>
pair<ForwardIt, ForwardIt> sieve(ForwardIt begin, ForwardIt end){
    return make_pair(begin, (*begin) * (*begin) <= *(end - 1) ?
            sieve(begin + 1, remove_if(begin + 1, end, [=](int x){return x % *begin == 0;}