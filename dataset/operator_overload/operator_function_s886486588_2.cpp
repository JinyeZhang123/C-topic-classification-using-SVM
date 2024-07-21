bool operator==(const Data &d1,const Data &d2){
  return d1.correct==d2.correct && d1.time==d2.time;
}