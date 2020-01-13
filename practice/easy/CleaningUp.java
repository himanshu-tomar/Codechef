package practice.easy;

import java.util.ArrayList;

import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class CleaningUp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = 0;
        if (scanner.hasNextInt())
            T = scanner.nextInt();
        while (T > 0) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            //int[] jobs_done = new int[m];
            List<Integer> jobsDone = new ArrayList<>();
            for (int i = 0; i < m; i++) {
                //jobs_done[i] = scanner.nextInt();
                jobsDone.add(scanner.nextInt());
            }
            Collections.sort(jobsDone);
            List<Integer> jobsRemaining = new ArrayList<>();
            for (int i = 1; i <= n; i++) {
                if (jobsDone.indexOf(i)>=0) {
                    continue;
                } else {
                    jobsRemaining.add(i);
                }
            }
            List<Integer> jobsAssignedToChef = new ArrayList<>();
            List<Integer> jobsAssignedToAssistant = new ArrayList<>();
            for(int i=0;i<jobsRemaining.size();i+=2){
                jobsAssignedToChef.add(jobsRemaining.get(i));
            }
            for(int i=1;i<jobsRemaining.size();i+=2){
                jobsAssignedToAssistant.add(jobsRemaining.get(i));
            }

            if(jobsAssignedToChef.size()>0){
                for(int i : jobsAssignedToChef) System.out.print(i+" ");
                System.out.println();
            } else System.out.println();

            if(jobsAssignedToAssistant.size()>0){
                for(int i : jobsAssignedToAssistant) System.out.print(i+" ");
                System.out.println();
            } else System.out.println();


            T--;

        }
        scanner.close();
    }
}
