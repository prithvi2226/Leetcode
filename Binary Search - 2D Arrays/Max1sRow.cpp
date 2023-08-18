int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //Write your code here.

    int cnt = -1;
    int row = -1;

    

    for(int i = 0; i < n; i++){
        int low = 0;
        int high = m-1;
        
        while(low <= high){

            int mid = low + (high - low)/2;

            if(matrix[i][mid] == 0){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        int in_cnt = m - low;

        if(in_cnt > cnt){
            cnt = in_cnt;
            row = i;
        }

    }
    

    return row;
    

}