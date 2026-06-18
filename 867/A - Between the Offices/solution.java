import java.util.Scanner;
 
public class BetweenTheOffices {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    private static void solve(Scanner scanner){
        int n = scanner.nextInt();
        String days = scanner.next().toUpperCase();
        int sfCount = 0;
        int fsCount = 0;
        for (int i=0; i<n-1; i++){
            if (days.charAt(i) == 'S' && days.charAt(i+1) == 'F'){
                sfCount++;
            } else if (days.charAt(i) == 'F' && days.charAt(i+1) == 'S'){
                fsCount++;
            }
        }
        System.out.println((sfCount>fsCount)?"YES":"NO");
    }
}