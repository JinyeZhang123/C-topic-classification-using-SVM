template< class T >
struct DecomposableSearchingStructure
{
  struct DecomposableSearchingProblem
  {
    T structure;
    int length;

    DecomposableSearchingProblem(T t, int l) : structure(t), length(l) {}