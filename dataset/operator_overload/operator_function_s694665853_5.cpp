bool operator<(const HOGE<CLASS1, CLASS2> &hoge1, const HOGE<CLASS1, CLASS2> &hoge2){
  return hoge1.value < hoge2.value;
}