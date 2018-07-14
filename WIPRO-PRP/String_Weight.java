import java.util.*;
class Main
{
public static void main(String args[])
{
Scanner scan=new Scanner(System.in);
String s=scan.next();
int sum=0,sum2=0,r,r2,count=0,s1=0;
char ch[]=s.toCharArray();
for(int i=0;i<ch.length;i++)
{
if(ch[i]!='a'||ch[i]!='e'||ch[i]!='o'||ch[i]!='u'||ch[i]!='i')
{
sum=sum+ch[i];
}
}
    while(sum!=0)
     {
            r=sum%10;
            sum2=sum2+r;
            sum=sum/10;
            }
            while(sum2!=0)
            {
                count++;
                r2=sum2%10;
                s1=s1+r2;
                sum2=sum2/10;
            }
            if(count>0)
            System.out.print(s1);
            else
         System.out.print(sum2);
}
}
