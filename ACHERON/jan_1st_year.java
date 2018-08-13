import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan=new Scanner(System.in);
	    int r=0,i,j,b,c,k=0,t,day,d;
	    int a[]=new int[10];
		int y=scan.nextInt();
	   t=y%100;
	   j=t/4;
	   b=1;
	   if((y>=1900)&&(y<=1999))
	   c=0;
	   else
	   c=6;
	   day=t+j+b+c;
	  
	   if(y%4==0)
	   day=day-1;
	   else
	   day=day+0;
	    d=day%7;
	   if(d==0)
	   System.out.println("sunday");
	   else if(d==1)
	  System.out.println("monday");
	   else if(d==2)
	  System.out.println("tuesday");
	   else if(d==3)
	  System.out.println("wednesday");
	   else if(d==4)
	   System.out.println("thursday");
	   else if(d==5)
	   System.out.println("friday");
	   else 
	  System.out.println("saturday");
	}
}
