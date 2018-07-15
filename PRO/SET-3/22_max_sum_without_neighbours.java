import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	    int i,j,sum=0,k=0,l;
		int n=scan.nextInt();
		int a[]=new int[n];
		int b[]=new int [n];
		for(i=0;i<n;i++)
		{
		    a[i]=scan.nextInt();
		}
		for(i=0;i<n;i++)
		{
		    sum=0;
		    for(j=i;j<n;j=j+2)
		    {
		        sum=sum+a[j];
		    }
		    b[k]=sum;
		    k++;
		}
		Arrays.sort(b);
		System.out.println(b[k-1]);
	}
}
