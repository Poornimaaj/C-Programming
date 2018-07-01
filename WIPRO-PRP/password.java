
import java.util.*;
class Main
{
    public static void main(String args[])
    {
      Scanner scan=new Scanner(System.in);
      int count=0;
      
    System.out.print("\n\tEnter the string :");
    String s[]=scan.nextLine().split(" ");
        int n=s.length;
    char a[]=s[n-1].toCharArray();
       
           int x=a[n-1];
           int r1=0,sum1=0;
           while(x>10)
            {
            r1=x%10;
            sum1=sum1+r1;
            x=x/10;
            }
           
    System.out.print(sum1);
    System.out.print("\n\tEnter the phone number :");
    int n1=scan.nextInt();
    int sum=0,r=0,r2=0,sum2=0;
    while(n1!=0)
    {
     r=n1%10;
     sum=sum+r;
    n1=n1/10;
   }
    while(sum!=0)
     {
         count++;
            r2=sum%10;
            sum2=sum2+r2;
            sum=sum/10;
            }
            if(count>0)
         System.out.print(sum2);
         else
         System.out.print(sum);
         System.out.print("\n\tEnter the floor number: ");
    String floor=scan.next();
    char b[]=floor.toCharArray();
    int ad=0,sum3=0;
    for(int i=0;i<b.length;i++)
    {
        if(b[i]>='0' && b[i]<='9')
        {
        ad=ad+b[i]-48;
        }
    }
    
    System.out.print("\n");
    while(ad!=0)
    {
        count++;
        int rem=ad%10;
             sum3=sum3+rem;
             ad=ad/10;
        
    }
    if(count>0)
    System.out.print(sum3);
    else
    System.out.print(ad);
    System.out.print("\n\tEnter the city:");
    String city=scan.next();
    char c[]=city.toCharArray();
    int p=0;
    for(int j=0;j<c.length;j++)
    {
         p=c[0];
    }
    int p1=p%10;
    
    String sp="!@#$%^&*()";
    char d[]=sp.toCharArray();
    char sb=0;
    for(int k=0;k<d.length;k++)
    {
       
        System.out.print(d[p1-1]);
        sb=d[p1-1];
        break;
    }
    System.out.println("Password="+sum1+""+sum2+""+sum3+""+sb);
    }
}
