import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int a[]=new int[1000];
		int l=scan.nextInt();
		int i,s=0;
		for(i=0;i<l;i++)
		{
		    a[i]=scan.nextInt();
		}
		for(i=l-1;i>=0;i--)
		{
		    if(a[i]==0)
		    {
		        s=i-1;
		        break;
		    }
		}
		for(i=0;i<=s;i++)
		{
		    if(a[i]!=0)
		    System.out.print(a[i]+" ");
		}
	}
}
		
