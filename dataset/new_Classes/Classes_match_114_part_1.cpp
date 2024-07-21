class Solve{
private:
    int n_     = 0;
    int s_     = 0;
    int result = 0;
    void dfs(int num, int sum, int cnt);
public:
    Solve(int num, int sum);
    int getSolve();
}                   