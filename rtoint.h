class Solution {
public:
    int romanToInt(string s) {
        int i;
        int rim;
        rim=0;
         int chars[size(s)];
        for(i=0; i<size(s); i++){
            if (s.c_str()[i]=='M') {chars[i]=1000;}
            if (s.c_str()[i]=='D') {chars[i]=500;}
            if (s.c_str()[i]=='C') {chars[i]=100;}
            if (s.c_str()[i]=='L') {chars[i]=50;}
            if (s.c_str()[i]=='X') {chars[i]=10;}
            if (s.c_str()[i]=='V') {chars[i]=5;}
            if (s.c_str()[i]=='I') {chars[i]=1;}
            }
            for(i=0;i<size(s);i++)
            {               
                if(i<size(s)-1){
                    if(chars[i]>=chars[i+1]) {rim+=chars[i];}
                else{rim+=0; i++;}
                                 }   else {rim+=chars[i];}
               if(i>0){
                    if(chars[i-1]<chars[i]) {rim+=chars[i]-chars[i-1];}
               }    
            }
       
     return rim;   
    }
};
