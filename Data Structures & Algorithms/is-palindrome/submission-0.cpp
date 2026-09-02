class Solution {
public:
    bool isPalindrome(string s) {
        string newString = "";
        for (char c : s) {
            if (std::isalnum(c)) {
                newString += std::tolower(c);
            }
        }
    int n=newString.size();
    for(int i=0;i<n/2;i++){
        if(newString[i]!=newString[n-1-i]){
            return false;
        }
    }
    return true;
    }

};
