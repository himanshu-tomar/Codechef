package practice.easy;

import java.util.Arrays;
import java.util.Scanner;

public class UncleJohny {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int N = scanner.nextInt();
            int[] A = new int[N];
            for (int i = 0; i < N; i++) {
                A[i] = scanner.nextInt();
            }
            int K = scanner.nextInt();
            int lenght_of_uncleJohny = A[K - 1];
            Arrays.sort(A);
            int newPosition = 0;
            for (int i = 0; i < N; i++) {
                if (A[i] == lenght_of_uncleJohny) {
                    newPosition = i + 1;
                    break;
                }
            }
            System.out.println(newPosition);
            T--;
        }
        scanner.close();
    }
}
