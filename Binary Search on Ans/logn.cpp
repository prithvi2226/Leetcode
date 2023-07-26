//1 -> if lesser
//0 -> if we find it
// 2 -> greater
long long int powr(long long int mid, long long int n, long long int m){
  long long int res = 1;
  for(int i = 1; i <= n; i++){
    res = res * mid;
    if(res > m){
      return 2;
    }
  }
  if(res == m){
    return 1;
  }
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  long long int low = 1;
  long long int high = m;


  while(low <= high){
    long long int mid = low +(high - low)/2;
    
    if(powr(mid, n, m) == 1){
      return mid;
    }

    else if(powr(mid, n, m) == 0){     
      low = mid + 1;
    }

    else {
      high = mid - 1;
    }
  }

  return -1;
  
}