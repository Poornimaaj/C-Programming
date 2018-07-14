import java.util.*;
class match
{
public static void main(String args[])
{
Scanner scan=new Scanner(System.in);
int i,j,k,count;
System.out.print("enter the missing string");
String s=scan.next();
int n=s.length();
String s1[]=new String[4];
char c[]=s.toCharArray();
System.out.println("enter the options");
for(i=0;i<4;i++)
{
s1[i]=scan.next();
}
for(i=0;i<4;i++)
{
count=0;
if(n==s1[i].length())
{
char ch[]=s1[i].toCharArray();
for(j=0,k=0;j<ch.length && k<c.length;j++,k++)
{
if(c[k]==ch[j])
count++;
}
if(count==n-1)
System.out.println(s1[i]);
}
}
}
}
