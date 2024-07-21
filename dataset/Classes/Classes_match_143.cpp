class island
{
private:
  int num;
  char data[12][12];
  void calc_r(int x,int y)
  {
    if(data[x][y]=='1'){
      data[x][y]='0';
      if(x!=0)
	calc_r(x-1,y);
      if(y!=0)
	calc_r(x,y-1);
      if(x!=11)
	calc_r(x+1,y);
      if(y!=11)
	calc_r(x,y+1);
    }