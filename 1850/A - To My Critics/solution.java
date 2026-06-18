import java.util.Scanner;
 
public class SuneetDigits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();
        
        for (int i = 0; i < t; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
 
            String result = (a + b >= 10 || a + c >= 10 || b + c >= 10) ? "YES" : "NO";
            System.out.println(result);
        }
        
        scanner.close(); 
    }
}