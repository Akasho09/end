class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int>reach(n+1,0);
        for(int i=0;i<=n;i++){
            int low = max(0 , i-ranges[i]);
            int high = min(n, i+ranges[i]);
            reach[low]=max(reach[low] , high);
        }
        int taps = 0 , curr = 0 , far  = 0;
        for(int i=0;i<n;++i){
            far = max(far, reach[i]);
            if(curr == i){
                if (far <= i) return -1;
                ++taps;
                curr = far;
            }
        }
        return taps;
    }
};