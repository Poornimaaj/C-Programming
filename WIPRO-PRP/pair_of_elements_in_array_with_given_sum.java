import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int count=0;
        int a[]=new int[]{1,5,7,-1,5};
        int sum=s.nextInt();
        for(int i=0;i<a.length;i++)
        {
            for(int j=i+1;j<a.length;j++)
            {
                if(a[i]+a[j]==sum)
                System.out.print(a[i]+","+a[j]+" ");
                else
                count=0;
            }
        }
        if(count==0)
        System.out.println("-1");
    }
}
