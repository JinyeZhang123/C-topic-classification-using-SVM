void init_io(int argc, char* argv[]){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
#ifdef PYONPOI
  if(argc > 1) {
    ifstream *ifs = new ifstream();
    ifs->open(argv[1]);
    cin.rdbuf(ifs->rdbuf());
  }