bool operator>(Edge e1,Edge e2){
  if(e1.weight != e2.weight) return (e1.weight > e2.weight);
  else return (e1.to > e2.to);
}