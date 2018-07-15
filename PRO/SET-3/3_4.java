import java.util.*;
public class Main
{
	public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int t=sc.nextInt();
        int r=0;
	for(int i=1;i<=t;i++)
	{
	    int num=i;
	    while(num!=0)
	    {
	    r=num%10;
	    if((r==m)||(r==n))
	        num=num/10;
	    }
	    System.out.println(i);
	}
	}
}
