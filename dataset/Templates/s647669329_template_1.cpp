template<typename Vec>
void push_sum(Vec &v, int size)
{
    for(unsigned i = 0; i < size; i++){
        int num = v[i];

        unsigned sub = i + 1;
        while(sub < size)
        {
            num += v[sub];
            v.push_back(num);
            sub++;
        }