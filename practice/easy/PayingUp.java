package practice.easy;

import java.util.Scanner;

public class PayingUp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            int[] note_value = new int[n];
            for (int i = 0; i < n; i++) {
                note_value[i] = scanner.nextInt();
            }
            boolean flag = check(note_value, m, n);

            if (flag)
                System.out.println("Yes");
            else
                System.out.println("No");

            T--;
        }
        scanner.close();
    }

    public static boolean check(int[] arr, int m, int n) {

        while(--n>=0){
            if(m-arr[n] == 0) return true;
            else if(m-arr[n]>0 && check(arr,(m-arr[n]),n)) return true;
            else if(m-arr[n]<0 && n>0) continue; 
        }
        return false;
    }
}
