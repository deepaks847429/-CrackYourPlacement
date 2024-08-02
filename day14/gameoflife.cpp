class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int rows = board.size();
        int cols = board[0].size();

        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                int neigboursCount = -board[i][j];

                for(int x = i-1;x<=i+1;++x){
                    for(int y=j-1;y<=j+1;++y){
                        
                        if(x>=0 && y>=0 && x<rows && y<cols && board[x][y]>0)
                        ++neigboursCount;
                    }
                }
                if(board[i][j]==1 && (neigboursCount<2 || neigboursCount>3)) board[i][j] = 2;
                if(board[i][j]==0 && neigboursCount==3)
                    board[i][j] = -1;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j]==2){
                    board[i][j]=0;
                }
                if(board[i][j]==-1){
                    board[i][j]=1;
                }
            }
        }
    }
};