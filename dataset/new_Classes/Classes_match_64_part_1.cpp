class largenum{
  int nums[DIGIT];
  bool overflow;
  int most;
public:
  largenum(){
    overflow=false;
    most=DIGIT-1;
    for(int i=0;i<DIGIT;i++)
      nums[i]=0;
  }                           