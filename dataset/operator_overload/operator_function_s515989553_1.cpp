bool operator<(const Edge &e, const Edge &f)
{
    return e.weight != f.weight ? e.weight > f.weight : //辺は重さが重いものを"小さい"と定義する
               e.src != f.src ? e.src < f.src : e.dst < f.dst;
}