import java.util.Arrays;
import java.util.Scanner;
 
public class ChatGptTryAgain {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    private static void solve(Scanner scanner){
        int employee = scanner.nextInt();
        int HowManyTeamLeadersNeeded = 0;
        for (int i=1; i<=employee/2; i++){
                if (employee%i==0){
                    HowManyTeamLeadersNeeded++;
                }
        }
        System.out.println(HowManyTeamLeadersNeeded);
    }
}