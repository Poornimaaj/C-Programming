import java.util.*;

class Main {
	public static void main(String args[])
	{
	Scanner scan=new Scanner(System.in);
	String s=scan.next();
	int n=s.length();
	int i,j,sum=0,count=0,k=0;
	String str="";
	char ch[]=s.toCharArray();
	int n1=ch.length;
	for(i=0;i<n1;i++)
	{
		int c=ch[i];
		count=0;
		for(j=2;j<c;j++)
		{
			if(c%j!=0)
			{
				count++;
			}
		}
		if(count==(c-2))
		{
		    str=str+ch[i];
			sum=sum+c;
		}
		else
		k++;
		
		if(k==n)
		{
		    str=str+ch[0]+':'+ch[n-1];
		    System.out.println(str);
		}
	
	}
	str=str+':'+sum;
	System.out.print(str);

}
}
