bool operator<(Point a,Point b) {
  if(a.x<b.x) return true;
  if(a.x>b.x) return false;
  return a.y<b.y;
}