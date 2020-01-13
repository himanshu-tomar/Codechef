package practice.easy;

import java.util.Scanner;

public class RacingHorses {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        // if(scanner.hasNextInt())
        T = scanner.nextInt();
        while (T > 0) {
            int N = scanner.nextInt();
            int[] S = new int[N];
            for (int i = 0; i < N; i++) {
                S[i] = scanner.nextInt();
            }
            int min = Integer.MAX_VALUE;
            int diff = 0;
            for (int i = 0; i < N; i++) {
                for (int j = i + 1; j < N; j++) {
                    diff = Math.abs(S[i] - S[j]);
                    if (diff < min)
                        min = diff;
                }
            }
            System.out.println(min);

            T--;
        }

        scanner.close();

    }
}