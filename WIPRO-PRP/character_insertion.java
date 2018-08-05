import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		String s=scan.next();
		int index=scan.nextInt();
		char character=scan.next().charAt(0);
		char ch[]=s.toCharArray();
		int n=ch.length;
		int i,j;
		for(i=0;i<n;i++)
		{
		    if(i==index)
		    {
		        for(j=n-1;j>i;j--)
		        {
		            ch[j]=ch[j-1];
		        }
		        ch[i]=character;
		    }
		}
		for(i=0;i<n;i++)
		{
		System.out.print(ch[i]);
		}
	}
}
