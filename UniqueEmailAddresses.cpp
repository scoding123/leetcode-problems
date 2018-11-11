class Solution {
public:
    string emailHelper(string e){
        int pos = e.find("@"); 
        string sub = e.substr(0,pos - 1);
        sub = std::regex_replace(sub, std::regex("."), "");
        int pos1 = sub.find("+");
        sub = sub.substr(0,pos-1);
        return sub+"@"+e.substr(pos+1);
        
    }
    
    int numUniqueEmails(vector<string>& emails) {
         set<string> s;
	for (auto i : emails)
		s.insert(emailHelper(i));
	return s.size();
    }
};
