 import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
         String s[]=scan.nextLine().split(",");
        int count,l=0,s1;
        int  c[]=new int[100];
        for(int i=0;i<s.length;i++)
        {
             count=0;
            char ch[]=s[i].toCharArray();
            for(int j=0;j<ch.length;j++)
            {
              
                for(int k=i+1;k<ch.length;k++)
                {
                    if(ch[j]==ch[k])
                    {
                        count++;
                        ch[k]='*';
                    }
                }
                c[l]=count;
                l++;
            }
             s1=0;
            for(int p=0;p<l;p++)
            {
               
                for(int r=p+1;r<l;r++)
                {
                    if(c[p]==c[r])
                    {
                        count++;
                    }
                    if(count==l-1)
                    s1++;
                }
            }
            if(s1==1)
            System.out.print(ch[i]);
        }
    }
}


