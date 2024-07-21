int main(){
   scanf("%d",&n); rep(i,0,n)scanf("%d",&a[i]);
   //ifstream in("input.txt"); in>>n; rep(i,0,n)in>>a[i];
   int lb=0,rb=1e6;
   while(rb-lb>1){
      int mid=(lb+rb)/2;
      if(check(mid))rb=mid; else lb=mid;
   }