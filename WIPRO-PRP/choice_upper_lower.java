import java.util.*;
 public class Main{
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
        String s=scan.next();
        String s1=scan.next();
        int i,j,count=0;
    String str="";
    String st="";
    String str1="";
        int n=s.length();
        int n1=s1.length();
    int num=scan.nextInt();
    int num1=scan.nextInt();
    char ch[]=s.toCharArray();
        char ch1[]=s1.toCharArray();
        if(num==0)
        {
            
            for(i=0;i<ch.length;i++)
            {
        count=0;
                for(j=0;j<ch1.length;j++)
                {
                    if(ch[i]!=ch1[j])
            {
            count++;
            }    
                       
                }
        if(count==n1)
        {
        str=str+ch[i];
        }
            }
        
      for(j=0;j<ch1.length;j++)
            {
        count=0;
                for(i=0;i<ch.length;i++)
                {
                    if(ch1[j]!=ch[i])
            {
            count++;
            }    
                       
                }

        if(count==n)
        {
        str=str+ch1[j];
        }
               
            }
    System.out.println(str);
    }
    else if(num==1)
    {
     for(i=0;i<ch.length;i++)
            {
                for(j=0;j<ch1.length;j++)
                {
                    if(ch[i]==ch1[j])
            {
             str=str+ch[i];
            }    
                       
                }
       }
      for(j=0;j<ch1.length;j++)
            {
                for(i=0;i<ch.length;i++)
                {
                    if(ch1[j]==ch[i])
            {
            str=str+ch1[j];
            }    
                       
                }
            }
    
    System.out.println(str);
               
            }
if(num1==0)
{
 System.out.println(str.toUpperCase());   
}
else if(num1==1)
{
  System.out.println(str.toLowerCase());  
}
    
    
       
    }

}

