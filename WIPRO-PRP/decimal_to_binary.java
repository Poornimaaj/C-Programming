import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		String x="";
		String reverse="";
		int i,k=0,r=0,count=0,j;
		while(n!=0)
		{
		    r=n%2;
		    x=x+r;
		    n=n/2;
		}
		int l=x.length();
		for ( i =l-1; i >= 0 ; i-- )
		{
         reverse = reverse + x.charAt(i);
		}
		char ch[]=reverse.toCharArray();
		    for(j=0;j<ch.length;j++)
		    {
		        if(ch[j]==1)
		        count++;
		    }
		    String s=new String(ch);
		    if(count%2==0)
		    s=s+'0';
		    else
		    s=s+'1';
		  System.out.print(s);  
		
	}
}
