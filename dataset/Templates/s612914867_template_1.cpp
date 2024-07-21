template <class T>
class SqrtDecompositionRangeAddRangeSum
{
  private:
    int N, K;
    int sqrtN;
    vector<T> data;
    vector<T> bucket_sum;
    vector<T> bucket_add;

  public:
    SqrtDecompositionRangeAddRangeSum(int n) : N(n), K(0), sqrtN(1)
    {
        while (sqrtN * sqrtN <= N)
        {
            sqrtN++;
        }