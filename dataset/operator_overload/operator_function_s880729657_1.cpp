bool operator<(const jikoku j1,const jikoku j2){
    if(j1.ah<j2.ah)return 1;
    if(j1.ah==j2.ah&&j1.am<j2.am)return 1;
    if(j1.ah==j2.ah&&j1.am==j2.am&&j1.as<j2.as)return 1;
    return 0;
}