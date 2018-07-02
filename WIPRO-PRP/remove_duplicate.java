import java.util.*;
class Main
{
public static void main(String args[])
{
Scanner scan=new Scanner(System.in);
int i,j,n,k,l,p,r,count=0;
char c1[]=new char[100];
char c2[]=new char[100];
String str[]=scan.nextLine().split(" "); 
for(i=0;i<str.length;i++)
{
    char ch[]=str[i].toCharArray();
p=0;
r=0;
n=ch.length;
for(j=0;j<n;j++)
{
for(k=i+1;k<n;k++)
{
    if(ch[j]==ch[k])
    {
        ch[k]=ch[n-1];
        count++;
     n--;
     j--;
    }
}
System.out.print(ch[j]);
}
}
}
}
