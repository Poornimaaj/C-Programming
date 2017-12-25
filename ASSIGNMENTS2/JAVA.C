import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int p=1,i,n,j;
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		j=s.nextInt();
		for(i=0;i<n;i++)
		{
		    p=p*j;
		}
		System.out.println(p);
	}
}
