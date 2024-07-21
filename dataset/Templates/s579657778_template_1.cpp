template<class T> class SegTreeDelaySkelton
{
    private:
        int _n;
        int _d;
        int _bit;
        T* nodes;
        bool *_used;
        // 子に伝搬する情報があるか
        bool *_last;

        // leftとrightでparentを更新。left, rightにNULLが入ることも。[indexl, indexr)までがparentの担当
        void (*_update)(T* parent, T* left, T* right, int indexl, int indexr);

        // nodeをvで更新する。（親への伝搬はクラス内で処理）
        void (*_rangef)(T* node, T *v, int indexl, int indexr);

        void (*_get)(T* node, T *ret, int l);

    public:
        SegTreeDelaySkelton(int n, void (*update)(T*, T*, T*, int, int), void (*f)(T*, T*, int, int) )
        {
            construct(n, update, f);
        }