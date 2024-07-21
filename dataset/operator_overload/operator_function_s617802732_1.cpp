bool operator<(const Team &a, const Team &b){
    if( a.solved == b.solved ){
        if( a.time == b.time ){
            return a.team_id > b.team_id;
        }