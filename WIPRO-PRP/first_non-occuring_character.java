import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	String s=scan.nextLine();
	char ch[]=s.toCharArray();
	int i,count=0,j;
	int l=ch.length;
	int flag=0;
	for(i=0;i<l;i++)
	{
	    flag=1;
	    for(j=0;j<l;j++)
	    {
	        if((ch[i]==ch[j])&&(i!=j))
	       {
	           flag=0;
	           break;
	       }
	    }
	        if(flag==1)
	        {
	        System.out.println(ch[i]);
	        break;
	        }
	}
	 if(flag==0)
	        {
	        System.out.println("-1");
	        }
	}
}
	        
