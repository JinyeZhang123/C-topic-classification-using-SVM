template<typename T>
T FordFulkersonByMatrix(vector< vector<T> > &matrix, int source, int sink){
    int n = matrix.size();
    T maxCost = (T)0;
    vector< vector<T> > flowMat(n, vector<T>(n,0)), resMat = matrix;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)
        maxCost = max(maxCost,matrix[i][j]);

    while(1){
        stack<int> st;
        vector<int> parent(n,-1);
        st.push(source);
        while(!st.empty() && parent[sink] == -1){
            int tp = st.top(); st.pop();
            for(int i=0; i<n; i++){
                if(parent[i] == -1 && resMat[tp][i] > 0){
                    st.push(i);
                    parent[i] = tp;
                }