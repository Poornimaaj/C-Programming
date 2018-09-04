import java.util.*;
class Main
{
public static void main(String args[])
{
    Scanner scan=new Scanner(System.in);
    int i;
    String s="";
    String s1=scan.next();
    String s2=scan.next();
    int pin=scan.nextInt();
    int n=scan.nextInt();
    String p=Integer.toString(pin);
    char d[]=p.toCharArray();
    char ch[]=s1.toCharArray();
    char ch1[]=s2.toCharArray();
    int l=ch.length;
    int l1=ch1.length;
    if(l<l1)
    {
        for(i=l-1;i>=0;i--)
        {
            s=s+s1.charAt(i);
            break;
        }
        for(i=0;i<l1;i++)
        {
            s=s+s2.charAt(i);
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(n-1);
            break;
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(d.length-n);
            break;
        }
    }
    else if(l1<l)
     {
        for(i=l1-1;i>=0;i--)
        {
            s=s+s2.charAt(i);
            break;
        }
        for(i=0;i<l;i++)
        {
            s=s+s1.charAt(i);
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(n-1);
            break;
        }
       for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(d.length-n);
            break;
        }
    }
    else
    {
        if(ch[0]<ch1[0])
         {
        for(i=l-1;i>=0;i--)
        {
            s=s+s1.charAt(i);
            break;
        }
        for(i=0;i<l1;i++)
        {
            s=s+s2.charAt(i);
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(n-1);
            break;
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(d.length-n);
            break;
        }
    }
    else if(ch1[0]<ch[0])
     {
        for(i=l1-1;i>=0;i--)
        {
            s=s+s2.charAt(i);
            break;
        }
        for(i=0;i<l;i++)
        {
            s=s+s1.charAt(i);
        }
        for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(n-1);
            break;
        }
       for(i=0;i<d.length;i++)
        {
            s=s+p.charAt(d.length-n);
            break;
        }
    }
    }
    System.out.print(s);
        char res[]=s.toCharArray();
          for( i=0;i<res.length;i++)
        {
            if(res[i]>='A' && res[i]<='Z')
            {
            res[i]=Character.toLowerCase(res[i]);
            }
            else if(res[i]>='a' && res[i]<='z')
            {
            res[i]=Character.toUpperCase(res[i]);
            }
            else
            res[i]=res[i];
        }
        String out1=new String(res);
        System.out.println(out1);
    
        
    }
}
