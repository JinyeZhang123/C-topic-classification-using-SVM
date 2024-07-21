bool operator<(S a,S b){
  if(a.a!=b.a)return a.a<b.a;
  if(a.b!=b.b)return a.b<b.b;
  if(a.c!=b.c)return a.c<b.c;
  return a.d<b.d;
}