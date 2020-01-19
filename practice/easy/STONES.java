package practice.easy;

import java.util.Scanner;

public class STONES {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        scanner.nextLine();

        while (T > 0) {
            String J = scanner.nextLine();
            String S = scanner.nextLine();
            int j_small[] = new int[26];
            int j_caps[] = new int[26];
            int s_small[] = new int[26];
            int s_caps[] = new int[26];
            char ch = 'a';
            for (int i = 0; i < J.length(); i++) {
                ch = J.charAt(i);
                if (Character.isUpperCase(ch))
                    j_caps[ch - 'A']++;
                else
                    j_small[ch - 'a']++;
            }

            for (int i = 0; i < S.length(); i++) {
                ch = S.charAt(i);
                if (Character.isUpperCase(ch))
                    s_caps[ch - 'A']++;
                else
                    s_small[ch - 'a']++;
            }

            short count = 0;

            for (int i = 0; i < 26; i++) {
                if (j_small[i] > 0 && s_small[i] > 0) {
                    count += s_small[i];
                }
                if (j_caps[i] > 0 && s_caps[i] > 0) {
                    count += s_caps[i];
                }

            }

            System.out.println(count);

            T--;

        }
        scanner.close();
    }
}
