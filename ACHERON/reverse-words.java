import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	   String s[]=scan.nextLine().split(" ");
	   int i,l;
	   l=s.length;
	   for(i=l-1;i>=0;i--)
	   {
	       System.out.print(s[i]+" ");
	   }
	}
}
