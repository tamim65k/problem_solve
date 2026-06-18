import java.util.Scanner;
 
public class WrongSubtraction {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
 
        for (int i = 0; i < k; i++) {
            if (n % 10 != 0) {
                n--;
            } else {
                n /= 10;
            }
 
        }
 
        System.out.println(n);
    }
}