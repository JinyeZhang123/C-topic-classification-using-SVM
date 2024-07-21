bool operator==(const Team &a, const Team &b){
    return a.solved == b.solved && a.time == b.time;
}