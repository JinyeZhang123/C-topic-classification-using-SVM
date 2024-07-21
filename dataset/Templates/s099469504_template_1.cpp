template<typename T>
class Heap
{
private:
  void maxHeapfy(int i)
  {
    int l, r, largest;
    l = left(i);
    r = right(i);

    if(l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if(r <= H && A[r] > A[largest]) largest = r;

    if(largest != i)
    {
      swap(A[i], A[largest]);
      maxHeapfy(largest);
    }