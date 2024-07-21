bool operator<(const Line&l1,const Line&l2){
  return l1.a != l2.a ? l1.a < l2.a : (l2.b!=l1.b ? l1.b<l2.b : l1.c < l2.c);
}