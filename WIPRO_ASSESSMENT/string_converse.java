import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	int l,l1,i,j,k,a,b,t,t1;
	String s[]=scan.nextLine().split(" ");
	int n=scan.nextInt();
	String str="",str1="";
	String r="";
	String r1="";
	t=n/10;
	t1=n%10;
	for(i=0;i<s.length;i++)
	{
	     str=s[t-1];
	}
	    l=str.length();
	    if(l%2==0)
	    {
	    for(j=l/2-1;j>=0;j--)
	    {
	        r=r+str.charAt(j);
	    }
	    for(k=l/2;k<l;k++)
	    {
	        r=r+str.charAt(k);
	    }
	    }
	    else
	    {
	        for(j=l/2;j>=0;j--)
	    {
	        r=r+str.charAt(j);
	    }
	    for(k=l/2;k<l;k++)
	    {
	        r=r+str.charAt(k);
	    }
	        
	    }
	    for(i=0;i<s.length;i++)
	{
	     str1=s[t1-1];
	}
	    l1=str1.length();
	    if(l1%2==0)
	    {
	    for(a=l1/2-1;a>=0;a--)
	    {
	        r1=r1+str1.charAt(a);
	    }
	    for(b=l1/2;b<l1;b++)
	    {
	        r1=r1+str1.charAt(b);
	    }
	    }
	    else
	    {
	        for(a=l1/2;a>=0;a--)
	    {
	        r1=r1+str1.charAt(a);
	    }
	    for(b=l1/2;b<l1;b++)
	    {
	        r1=r1+str1.charAt(b);
	    }
	        
	    }
	for(i=0;i<s.length;i++)
	{
	    s[t-1]=r;
	    s[t1-1]=r1;
	    System.out.print(s[i]+" ");
	}
	}
	}


