import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	   String s[]=scan.nextLine().split(" ");
	   int i,l,j;
	   l=s.length;
	   String s1="";
	  for(i=0;i<l;i++)
	  {
	      String str=s[i];
	      for(j=str.length()-1;j>=0;j--)
	      {
	          s1=s1+str.charAt(j);
	      }
	      s1=s1+" ";
	  }
	  System.out.print(s1);
	}
}
