
import java.util.Scanner;
class Main {
    public static void main(String args[])
    {
        Scanner scan=new Scanner(System.in);
        String r=" ";
        String t=" ";
        String p=" ";
        String r1=" ";
        String t1=" ";
        String p1=" ";
        String r2=" ";
        String t2=" ";
        String p2=" ";
        String s1=scan.next();
        String s2=scan.next();
        String s3=scan.next();
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        if(n1%3==1)
        {
            r=r+s1.substring(0,n1/3);
            t=t+s1.substring(n1/3,(1+(n1/3)*2));
            p=p+s1.substring(n1-n1/3);
        }
        System.out.print(r+" "+t+" "+p);
        if(n2%3==2)
        {
            r1=r1+s2.substring(0,(n2/3)+1);
            t1=t1+s2.substring((n2/3)+1,((n2/3)+1)+n2/3);
            p1=p1+s2.substring(n2-((n2/3)+1));
            
        }
         System.out.print(r1+" "+t1+" "+p1);
        if(n3%3==0)
        {
            r2=r2+s3.substring(0,n3/3);
            t2=t2+s3.substring(n3/3,(n3/3+n3/3));
            p2=p2+s3.substring(n3-n3/3);
        }
        System.out.print(r2+" "+t2+" "+p2);
        String f=r+r1+r2;
        String s=t+t1+t2;
        String th=p+p1+p2;
        System.out.println(f+" "+s+" "+th);
        char ch[]=f.toCharArray();
        for(int i=0;i<ch.length;i++)
        {
            if(Character.isUpperCase(ch[i])) {
            ch[i] = Character.toLowerCase(ch[i]);
        } else if(Character.isLowerCase(ch[i])) {
            ch[i] = Character.toUpperCase(ch[i]);
        }
            
        }
        char ch1[]=s.toCharArray();
         for(int i=0;i<ch.length;i++)
        {
            if(Character.isUpperCase(ch1[i])) {
            ch1[i] = Character.toLowerCase(ch1[i]);
        } else if(Character.isLowerCase(ch1[i])) {
            ch1[i] = Character.toUpperCase(ch1[i]);
        }
            
        }
         char ch2[]=th.toCharArray();
         for(int i=0;i<ch.length;i++)
        {
            if(Character.isUpperCase(ch2[i])) {
            ch2[i] = Character.toLowerCase(ch2[i]);
        } else if(Character.isLowerCase(ch2[i])) {
            ch2[i] = Character.toUpperCase(ch2[i]);
        }
            
        }
        
        String l=new String(ch);
         String m=new String(ch1);
          String q=new String(ch2);
        
        System.out.print(l+" "+m+" "+q);
    }

}
