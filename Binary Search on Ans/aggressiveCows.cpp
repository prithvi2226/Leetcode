bool ifPossible(vector<int> &stalls, int dis, int k){
    int lastCow = 0;
    int numCows = 1;

    for(int i = 1; i < stalls.size(); i ++){

        if(stalls[i] - stalls[lastCow] >= dis){
            numCows++;
            lastCow = i;
            
            if(numCows >= k){
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here

    std::sort(stalls.begin(), stalls.end());

    int max = stalls[stalls.size() - 1];
    int min = stalls[0];

    int low = 1;
    int high = max - min;

    while(low <= high){        

        int mid = low + (high - low)/2;

        if(ifPossible(stalls, mid, k) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return high;
}











