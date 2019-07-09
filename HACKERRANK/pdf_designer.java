import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int a[]=new int[30];
		int i,max=0,l=0,k=0,j=0,m=0,p=0,r=0;
	
		int b[]=new int[100];
		int c[]=new int[1000];
			max=b[0];
		for(i=1;i<=26;i++)
		{
		    a[i]=scan.nextInt();
		}
		String s=scan.next();
		char ch[]=s.toCharArray();
		l=ch.length;
		for(j=0;j<l;j++)
		{
		    b[k]=ch[j]-96;
		    k++;
		}
		for(i=1;i<=26;i++)
		{
		    for(r=0;r<k;r++)
		    {
		    c[p]=a[b[r]];
		    p++;
		    }
		}
		for(m=0;m<p;m++)
		{
		    if(c[m]>max)
		    max=c[m];
		}
		System.out.println(max*l);
	}
}
