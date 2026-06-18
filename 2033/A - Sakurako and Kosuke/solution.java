import java.util.Scanner;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();  // Number of test cases
        for (int i=0; i<t; i++){
            int a = scanner.nextInt();
            if (a % 2 == 1) System.out.println("Kosuke");
            else System.out.println("Sakurako");
        }
        scanner.close();
    }
}