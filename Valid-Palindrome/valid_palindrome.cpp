/********************************************************************************** 
* 
* Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
* 
* For example,
* "A man, a plan, a canal: Panama" is a palindrome.
* "race a car" is not a palindrome.
* 
* Note:
* Have you consider that the string might be empty? This is a good question to ask during an interview.
* 
* For the purpose of this problem, we define empty string as valid palindrome.
* 
*               
**********************************************************************************/

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) 
                str+=tolower(s[i]);
        }
        string y=str;
        reverse(str.begin(),str.end());
        int i=0;

        if(str!=y) return false;
        return true;
    }
};
