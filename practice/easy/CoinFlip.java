package practice.easy;

import java.util.Scanner;

public class CoinFlip {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int G = scanner.nextInt();
            while(G>0){
                int I = scanner.nextInt(); //I=1 means all coins showing Head in start of game
                int N = scanner.nextInt();
                int Q = scanner.nextInt();
                
                if(I==Q){
                    System.out.println(N/2);
                }
                else System.out.println((N+1)/2);
                G--;
            }
            T--;
        }
        scanner.close();
    }
}
