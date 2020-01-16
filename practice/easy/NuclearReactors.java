package practice.easy;
import java.util.Scanner;

public class NuclearReactors{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a=scanner.nextInt();
        int n=scanner.nextInt();
        int k=scanner.nextInt();
        //int [] chambers = new int[k];

        while(--k>=0){
            if(a>0){
                System.out.print(a%(n+1)+" ");
                a/=(n+1);
            }
            else System.out.print(0+" ");
        }
        

        
        scanner.close();
    }
}
