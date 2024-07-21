bool operator>(const Data &d1,const Data &d2){
  if(d1.correct!=d2.correct) return d1.correct>d2.correct;
  else if(d1.time!=d2.time) return d1.time<d2.time;
  else return d1.team>d2.team;
}