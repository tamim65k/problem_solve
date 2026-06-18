import java.util.Scanner;
 
public class Expression {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
       
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
 
        
        int expr1 = a + b + c;
        int expr2 = a + (b * c);
        int expr3 = (a + b) * c;
        int expr4 = a * b + c;
        int expr5 = a * (b + c);
        int expr6 = a * b * c;
 
        
        int maxValue = Math.max(Math.max(expr1, expr2), Math.max(Math.max(expr3, expr4), Math.max(expr5, expr6)));
 
        // Output the maximum value
        System.out.println(maxValue);
 
        scanner.close();
    }
}