void PrintTree(){
        static ofstream fout("tree.txt");
        for(int i = (int)Tree.size() - 1; i >= 0; i--){
            for(vector<Node>::size_type j = 0; j < Tree[i].size(); j++){
                fout << "(";
                if(Tree[i][j].value == MAX_VALUE)
                    fout << "∞";
                else
                    fout << Tree[i][j].value;
                fout << ", [" << Tree[i][j].low << ", " << Tree[i][j].high << "])";
            }