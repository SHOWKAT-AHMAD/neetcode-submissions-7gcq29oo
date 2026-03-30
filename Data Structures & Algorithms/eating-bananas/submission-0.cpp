class Solution {
    private:
    int eatrate(vector<int>& piles,int n,int mid){
        int hours=0;
        for(int i=0;i<n;i++){
            hours+=ceil((double)(piles[i])/mid);
        }
        return hours;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxpile=piles[0];
        for(int i=0;i<n;i++){
            maxpile=max(maxpile,piles[i]);
        }
        int l=1, r=maxpile;
        while(l<r){
            int mid = l +(r-l)/2;
            int eath=eatrate(piles,n,mid);
            if(eath <= h){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
};
