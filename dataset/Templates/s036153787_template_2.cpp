template<typename T>
struct SqrtTree {

  vector<T> data;
  vector<T> bucket;
  T sq;

  SqrtTree( vector<T> const& v) : data(v) {
    int d_size = data.size();
    sq = sqrt( d_size );
    bucket.assign( (d_size + sq - 1) / sq, 0 );
    for(int i = 0; i < d_size; i++) {  bucket[i / sq] += data[i];  }