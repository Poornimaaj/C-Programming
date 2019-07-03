import java.util.*;
public class Main
{
    public static void main(String args[])
    {
    Scanner scan=new Scanner(System.in);
    String s=scan.nextLine();
    String match1=scan.next();
    int count=0;
    String a[]=s.split(" ");
    int l=a.length;
    for(int j=0;j<l;j++)
    {
    if(a[j].contains(match1)){
         count+=1;
    }
    }
    System.out.println(count);
   
    
}
}
