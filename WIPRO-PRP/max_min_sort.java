import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		int s=n;
		int i;
		int a[]=new int[n];
		for( i=0;i<n;i++)
		{
		    a[i]=scan.nextInt();
		}
		Arrays.sort(a);
		int n1=n/2;
		for(i=0;i<n1;i++)
		{
		    System.out.print(a[n-1]+","+a[i]+",");
		    
		    
		    n=n-1;
		}
		if(s%2!=0)
		System.out.print(a[n1]);
	}
}
