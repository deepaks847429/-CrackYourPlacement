class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            columnNumber--;
            int r=columnNumber%26;
            s=char(65+r)+s;
            columnNumber/=26;
        }
        return s;
        
    }
};

 