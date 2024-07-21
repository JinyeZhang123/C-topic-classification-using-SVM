int main () {
   // FILE *fin  = fopen ("ttwo.in", "r");
   // FILE *fout = fopen ("ttwo.out", "w");
    //ofstream fout ("zerosum.out");
  //ifstream fin ("zerosum.in");
  int n,q;
  
  scanf("%d%d",&n,&q);
  for(int i=0;i<=n;i++)
  p[i]=i;
  int com,x,y;
 for(int i=0;i<q;i++)
  {scanf("%d%d%d",&com,&x,&y);
  if(com==0)
  unite(x,y);
  else
  printf("%d\n",same(x,y));
  }