import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	int n=scan.nextInt();
	int i,sum=0;
	int a[]=new int[20];
	int b[]=new int[20];
	for(i=0;i<n;i++)
	{
	    a[i]=scan.nextInt();
	}
	b[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	{
	    b[i]=a[i]-b[i+1];
	}
		for(i=0;i<n;i++)
	{
	System.out.print(b[i]+" ");
	}
	for(i=0;i<n;i++)
	{
	System.out.println(b[i]);
	break;
	}
	for(i=0;i<n;i++)
	{
    sum=sum+b[i];
	}
		System.out.println(sum);
	}
}
