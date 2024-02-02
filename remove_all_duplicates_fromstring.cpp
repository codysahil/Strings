class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans = "";
	    unordered_map<char,int> mp;
	    
	    for(int i = 0; i<str.size(); i++){
	        if(mp.find(str[i]) == mp.end()){
	            mp[str[i]] = 1;
	            ans = ans + str[i];
	        }

	    }
	   
	    return ans;
	}
};
