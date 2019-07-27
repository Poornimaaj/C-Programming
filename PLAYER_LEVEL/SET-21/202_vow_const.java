import java.util.*;
public class Main
{
	public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	String s=scan.nextLine();
	String s1="";
	String s2="";
	String result="";
	int i;
	int n=s.length();
	char ch[]=s.toCharArray();
	for(i=0;i<n;i++)
	{
	    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
	    s1=s1+ch[i];
	    else
	    s2=s2+ch[i];
	}
	result=s1+s2;
	System.out.println(result);
	}
}
