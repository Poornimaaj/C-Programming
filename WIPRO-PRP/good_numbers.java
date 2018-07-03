import java.util.*;
class Main
{
    public static void main(String args[])
    {
    Scanner scan=new Scanner(System.in);
    int n=scan.nextInt();
    String s="";
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s=s+1;
        }
        else if((i%2==0)&&(i%4!=0))
        {
        s=s+2;
        }
        else if((i%2==0)&&(i%4==0))
        {
            s=s+3;
        }
    }
    System.out.println(s);
}
}
