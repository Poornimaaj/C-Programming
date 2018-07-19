import java.util.*;
class Main
{
	public static void main(String[] args) 
	{
		Scanner scan=new Scanner(System.in);
		int ucount=0,lcount=0,dcount=0,scount=0,k=0;
		String s=scan.next();
		int n=s.length();
		if(n<6)
		{
		    System.out.print(6-n);
		}
		else
		{
		    char ch[]=s.toCharArray();
		    {
		        for(int i=0;i<ch.length;i++)
		        {
		            if(ch[i]>=65 && ch[i]<=90)
		            ucount++;
		            else if(ch[i]>=97 && ch[i]<=122)
		            lcount++;
		            else if(ch[i]>=48 && ch[i]<=57)
		            dcount++;
		            else if(ch[i]>=33 && ch[i]<=47)
		            scount++;
		        }
		    }
		
		if(ucount<1)
		k++;
		if(lcount<1)
		k++;
		if(dcount<1)
		k++;
		if(scount<1)
		k++;
		System.out.println(k);
		}
	}
}
