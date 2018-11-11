class Solution {
public:
    string emailHelper(string e){
        bool skip_plus = false;
        string ans="";
        bool skip_all = true;
        for(auto i : e){
            if(i=='@')
            {
                skip_plus = false;
                skip_all = false;
            }
            if(i=='+')
                skip_plus = true;
            
            if((i=='.'||skip_plus)&&skip_all)
                continue;
            else
                ans.push_back(i);
        }
        cout<<"ans "<<ans<<endl;
        return ans;
        
    }
    
    int numUniqueEmails(vector<string>& emails) {
         set<string> s;
	for (auto i : emails)
		s.insert(emailHelper(i));
	return s.size();
    }
};
