import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	    int n=scan.nextInt();
	    int i,sum=0,org,r=0;
	    i=n+1;
	    while(i<1000)
	    {
	        org=i;
	        
	        while(i!=0)
	        {
	            r=i%10;
	            sum=(sum*10)+r;
	            i=i/10;
	        }
	        
	        if(sum==org)
	        {
	        System.out.println(i);
	        break;
	        }
	        i++;
	        
	    }
	}
}
