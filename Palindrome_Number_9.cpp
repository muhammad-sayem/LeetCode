class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int i = 0;
        int j = str.size()-1;

        while(i<j){
            if(str[i] != str[j]){
                return false;
                break;
            }
            i++;
            j--;
        }
        return true;
    }
};



// --------------------------------------------------------------------- //

// Code of har_preet //

/*
class Solution {
public:
    bool isPalindrome(int x) {
        
            int num = x;
        
        if(x<0){
            return false;
        }
        else{
            unsigned int rev=0;
            while(x!=0){
                 int rem = x % 10;
                 rev=rev*10 + rem ;
                 x = x/10;
            }
            if(num==rev){
                 return true;
            }
        
            else{
                 return false ;
            } 
        }   

    }
};
*/