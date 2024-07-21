template <typename Mq=ll, typename Mo=std::pair<ll, ll>> class DelayedSegmentTree {
    public:
    using Mqq_func = function<Mq(Mq, Mq)>;
    using Mqo_func = function<Mq(Mq, Mo)>;
    using Moo_func = function<Mo(Mo, Mo)>;
    using Mp_func = function<Mo(Mo, ll)>;
    ll size;
    std::vector<Mq> segment;  // 1-indexed 葉ノードは size ~ 2*size-1
    std::vector<Mo> laz;
    ll time;
    Mq Mq_id; Mo Mo_id;
    Mqq_func Mqq_calc; Mqo_func Mqo_calc; Moo_func Moo_calc; Mp_func Mp_calc;

    DelayedSegmentTree(
                ll N, 
                Mq Mq_id = 0,
                Mo Mo_id = std::make_pair(0, 0),
                Mqq_func Mqq_calc = [](ll a, ll b){return a+b;}