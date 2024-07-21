bool operator<(const key& l, const key& r) {
    return l.sum < r.sum || (l.sum == r.sum && l.count < r.count) || (l.sum == r.sum && l.count == r.count && l.index < r.index);
}