import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int p=1,t=0,i;
        int a=scan.nextInt();
        int b=scan.nextInt();
        if(a==0||b==0)
        System.out.println("0");
        else
        {
        for(i=0;i<b;i++)
        {
            p=p*a;
            a--;
        }
        t=p/b;
        System.out.println(t);
        }
	}
}
