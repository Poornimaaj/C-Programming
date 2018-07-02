import java.util.*;
class Main
{
public static void main(String args[])
{
Scanner scan=new Scanner(System.in);
int i,j,n,k,l,p,r;
char c1[]=new char[100];
char c2[]=new char[100];
String str[]=scan.nextLine().split(" "); 
for(i=0;i<str.length;i++)
{
    char ch[]=str[i].toCharArray();
p=0;
r=0;
for(j=0;j<ch.length;j++)
{
if(j%2==0)
{
c1[p]=ch[j];
p++;
}
else
{
c2[r]=ch[j];
r++;
}
}
for(k=0;k<p;k++)
{
System.out.print(c1[k]);
}
for(l=r-1;l>=0;l--)
{
System.out.print(c2[l]);
}
System.out.print(" ");
}
}}
