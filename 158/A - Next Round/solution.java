import java.util.Scanner;
 
public class nextRound {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
 
        // Read n (number of participants) and k (cutoff position)
        int[] scores = new int[n];
        for(int i=0; i<n; i++){
            scores[i] = scan.nextInt();
        }
 
        // Get the cutoff score from the k-th place(1-based index)
        int cutoffScore = scores[k - 1];
 
        // Count participants who advance
        int advancers = 0;
        for(int score : scores){
            if(score >= cutoffScore && score > 0){
                advancers++;
            }
        }
 
        // Output the number of participants who advance
        System.out.println(advancers);
        // Close the scanner
        scan.close();
    }
}