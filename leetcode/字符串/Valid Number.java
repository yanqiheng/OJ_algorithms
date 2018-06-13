public class Solution {
    public boolean isNumber(String s) {
        s=s.trim();
        boolean point=false,e=false,num=false,numAfterE=false;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='0'&&s.charAt(i)<='9'){
                num=true;
                numAfterE=true;
            }
            else if(s.charAt(i)=='.'){
                if(point||e)
                    return false;
                point=true;
            }
            else if(s.charAt(i) == 'e'){
                if(e||num==false)
                    return false;
                e=true;
                numAfterE=false;
            }
            else if(s.charAt(i) == '-' || s.charAt(i) == '+'){
                if(i!= 0 && s.charAt(i-1)!= 'e')
                    return false;
            }
            else
                return false;
        }
        return num&&numAfterE;
    }
}