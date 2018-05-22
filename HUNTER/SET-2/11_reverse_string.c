import java.util.*;
import java.lang.*;
class GFG 
{
	public static void main (String[] args)
	{
	    Scanner sc=new Scanner(System.in);
	    String s=sc.nextLine();
	    String str[]=s.split("\\s");
	   //System.out.println(str.length);
	    for(int i=0;i<str.length;i++)
	    {
	     for(int j=str[i].length()-1;j>=0;j--)
	     {
	         System.out.printf("%c",str[i].charAt(j));
	     }
	     System.out.print(" ");
	    }     
	}
}
