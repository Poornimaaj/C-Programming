import java.util.*;

class Main{

     

     public static void main(String args[]){

         int n;

         Scanner s=new Scanner(System.in);

         n=s.nextInt();

         LinkedList<Integer>a=new LinkedList<Integer>();

         for(int i=0;i<n;i++){

             int c=s.nextInt();

             a.add(c);

         }

         Collections.reverse(a);

         for(Integer l:a){

            System.out.print(l+"->");

         }

     }

}
