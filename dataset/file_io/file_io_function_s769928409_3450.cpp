int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int xd = x2 - x1;
    int yd = y2 - y1;
    
    int x3, y3, x4, y4;
    x3 = x2 - yd;
    y3 = y2 + xd;
    x4 = x1 - yd;
    y4 = y1 + xd;
    
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}