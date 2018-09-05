import java.util.*;
public class Main
{
    public static void main(String args[])
    {
    int i,sum=0,n,count=0,r=0;
    Scanner scan=new Scanner(System.in);
    String input1=scan.nextLine();
		char ch[]=input1.toCharArray();
		int l=ch.length;
		System.out.println(l);
		for(i=0;i<l;i++)
		{
			if(ch[i]==' ')
				count++;
		}
		n=l-count;
		while(n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
	System.out.println(sum);
		
	}
}

