import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	int i,j=0,k=0,m=0;
	int a[]=new int[100];
		int b[]=new int[100];
			int c[]=new int[100];
	int n=scan.nextInt();
	for(i=0;i<n;i++)
	{
	    a[i]=scan.nextInt();
	}
		for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	    b[j]=a[i]; 
	    j++;
	   }
	    else
	    {
	    c[k]=a[i];
	    k++;
	    }
	}
	if(j==1)
	{
	    for(m=0;m<j;m++)
	System.out.println(b[m]);
	}
	if(k==1)
	{
	    for(m=0;m<k;m++)
	System.out.println(c[m]);
	}
	    
	
	 
	
	
	}
}
