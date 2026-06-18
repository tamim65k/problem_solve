import java.util.Scanner;
 
public class DesignTutorialLearnFromMath {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
 
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        for (int x=4; x<=n/2; x++){
            int y = n - x;
            if (isComposite(x) && isComposite(y)){
                System.out.println(x + " " + y);
                return;
            }
        }
    }
 
    public static boolean isComposite(int n) {
        if (n < 4) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return true;// number has divisors other than 1 and itself.
            }
        }
        return false;
    }
}