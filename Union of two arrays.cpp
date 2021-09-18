//TimeComplexity: O(2*n)=> O(n)
//SpaceComplexity: O(n)
int main() {
	//code
	int t,n,m,i,temp;
	unordered_set<int>s;
	cin>>t;
	while(t!=0)
	{
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {
	        cin>>temp;
	        s.insert(temp);
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>temp;
	        s.insert(temp);
	    }
	    cout<<s.size()<<endl;
	    t--;
	    s.clear();
	    
	}
	return 0;
}
