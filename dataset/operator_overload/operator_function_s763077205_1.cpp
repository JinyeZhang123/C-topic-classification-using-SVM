bool operator<(const team &a, const team &b) {
    if (a.correct != b.correct) return a.correct > b.correct;
    if (a.penalty != b.penalty) return a.penalty < b.penalty;
    return a.id < b.id;
}