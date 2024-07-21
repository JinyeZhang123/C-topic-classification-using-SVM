bool operator<(Rectangle r1,Rectangle r2){
  int di1=Dist(r1.height,r1.weight);
  int di2=Dist(r2.height,r2.weight);
  if(di1 < di2) return true;
  else if(di1 > di2) return false;
  else return (r1.height < r2.height);
}