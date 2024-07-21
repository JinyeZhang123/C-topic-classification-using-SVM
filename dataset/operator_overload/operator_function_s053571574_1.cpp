bool operator<(edge e1,edge e2){
  if(e1.x == e2.x)return e1.y < e2.y;
  return e1.x < e2.x;
}