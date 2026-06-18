import java.util.*;
 
public class ThomasRank {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] scores = new int[n][5]; // 4 scores + 1 for total score
 
        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int d = scanner.nextInt();
            int total = a + b + c + d;
            scores[i][0] = i + 1; // student id
            scores[i][1] = total; // total score
        }
 
        Arrays.sort(scores, (s1, s2) -> {
            if (s2[1] != s1[1]) {
                return s2[1] - s1[1]; // sort by total score in descending order
            } else {
                return s1[0] - s2[0]; // sort by id in ascending order if scores are equal
            }
        });
 
        for (int i = 0; i < n; i++) {
            if (scores[i][0] == 1) {
                System.out.println(i + 1);
                break;
            }
        }
 
        scanner.close();
    }
}