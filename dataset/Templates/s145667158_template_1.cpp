template<typename T> void TIME(T start, T end)
{
#ifndef ONLINE_JUDGE
    double time_taken =  chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "\nExecuted in: " << fixed
         << time_taken << setprecision(9);
    cout << " sec";
#endif
}