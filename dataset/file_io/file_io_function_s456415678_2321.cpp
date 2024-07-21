int main() {

//    ifstream file("C:\\Users\\riku\\Downloads\\01-16.txt");

    int n;
    cin >> n;
    vector<P> questions(n);
    rep(i, n) cin >> questions[i].first >> questions[i].second;

    P l = *min_element(questions.begin(), questions.end(), [](P p1, P p2) { return p1.second < p2.second; }