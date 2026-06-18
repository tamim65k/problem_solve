import java.util.Scanner;
 
public class ChoosingTeams {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] participants = new int[n];
 
        for (int i=0; i<n; i++){
            participants[i] = scanner.nextInt();
        }
 
        int eligibleStudents = 0;
        for (int i=0; i<n; i++){
            if (participants[i] <= 5-k){
                eligibleStudents++;
            }
        }
        System.out.println(eligibleStudents/3);
    }
}