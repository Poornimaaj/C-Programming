import java.util.*;
class Main
{
public static void main(String args[])
{
Scanner in=new Scanner(System.in);
int i,n,j,k,count,max_pos=0;
String a=in.nextLine();
char ch[]=a.toCharArray();
for(j=0;j<ch.length-1;j++)
{
    count=0;
for(k=j+1;k<ch.length;k++)
{
if(ch[j]!=ch[k])
count++;
else
ch[k]='*';
}
if(count==ch.length-j-1)
System.out.print(ch[j]+" ");
}
}
}
