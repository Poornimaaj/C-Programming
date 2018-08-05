import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		String s=scan.next();
		String s1="";
		String s2="";
		int index=scan.nextInt();
		char character=scan.next().charAt(0);
		char ch[]=s.toCharArray();
		int n=ch.length;
		int i;
		for(i=0;i<n;i++)
		{
		        s1=s.substring(0,index);
		        s2=s.substring(index,n);
		}
		System.out.print(s1+""+character+""+s2);
	}
}
