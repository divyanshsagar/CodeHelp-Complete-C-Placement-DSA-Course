class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int startingrow=0;
        int endingcol=col-1;
        while(endingcol>=0 && startingrow<row){
            int element=matrix[startingrow][endingcol];
            if(element==target){
                return 1;
            }
            else if(element<target){
                startingrow++;
            }
            else{
                endingcol--;
            }
        }
        return 0;
    }
};
