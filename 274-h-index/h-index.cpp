class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int>citationbuckets(n+1,0);
        for(int c:citations){
            citationbuckets[min(c,n)]++;
        }
        int sum=0;
        for(int i=n;i>=0;i--){
            sum+=citationbuckets[i];
            if(sum>=i) return i;
        }
        return 0;
    }
};