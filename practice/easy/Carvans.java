package practice.easy;

import java.util.Scanner;

public class Carvans {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int n = scanner.nextInt();
            int[] speed = new int[n];
            int count=0;
            for (int i = 0; i < n; i++){
                speed[i] = scanner.nextInt();
                if(i>0 && speed[i]>speed[i-1]) speed[i] = speed[i-1];
                else count++;
            }
            System.out.println(count);
                

            T--;
        }
        scanner.close();
    }
}
