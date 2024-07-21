bool operator<(DATA a, DATA b){
  return a.correct!=b.correct?a.correct>b.correct:(a.penalty!=b.penalty?a.penalty<b.penalty:a.id<b.id);
}