bool operator<(const team& l, const team& r) {
    if (l.num_corrects == r.num_corrects) {
        if (l.time == r.time) {
            return l.team_id > r.team_id;
        }