//TimeComplexity:O(nlogn)
//SpaceComplexity:O(n*n)
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int i,l,start,end;
        l=intervals.size();
        start=intervals[0][0];
        end=intervals[0][1];
        for(i=1;i<l;i++){
            if(intervals[i][0]<=end){
                if(intervals[i][1]>=end)
                    end=intervals[i][1];
                if(intervals[i][0]<start)
                    start=intervals[i][0];
                    
            }
            else{
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        vector<int>temp;
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
        return ans;
        
        
    }
