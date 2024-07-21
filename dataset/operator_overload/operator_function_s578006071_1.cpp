bool operator>(const Log &l1,const Log &l2){
  if(l1.correct != l2.correct) return (l1.correct > l2.correct);
  else if(l1.pena != l2.pena) return (l1.pena < l2.pena);
  else return (l1.team_id < l2.team_id);
}