largenum operator+(largenum l1,largenum l2){
  bool carry=false;
  largenum ans;
  for(int i=DIGIT-1;i>=0;i--){
    int tmp=l1.nums[i]+l2.nums[i]+carry;
    carry=bool((tmp)/10);
    ans.nums[i]=(tmp)%10;
  }