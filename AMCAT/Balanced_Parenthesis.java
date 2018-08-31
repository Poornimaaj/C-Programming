import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
        String str=scan.next();
        int i,j,count=1,count1=1;
        char ch[]=str.toCharArray();
        for(i=0;i<ch.length;i++)
        {
            for(j=i+1;j<ch.length;j++)
            {
                if(ch[i]=='(')
                {
                if((ch[i]==ch[j])&&(ch[j]!='*'))
                {
                    count++;
                    ch[j]='*';
                }
               
                }
                if(ch[i]==')')
                {
                    if((ch[i]==ch[j])&&(ch[j]!='*'))
                {
                    count1++;
                    ch[j]='*';
                }
               
                }
                    
                }
            }
            if(count==count1)
            System.out.print(count); 
            else
            System.out.print(-1);
        }
        
    }
