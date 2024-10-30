int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans=0;
    for(int i=0;i<accountsSize;i++){
        int tmp=0;
        for(int j=0;j<accountsColSize[i];j++){
            tmp += accounts[i][j];
        }
        if(ans<tmp)ans = tmp;
    }
    return ans;
}