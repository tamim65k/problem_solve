import java.util.Scanner;
 
public class evenOdds {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long k = scanner.nextLong();
        long kth = 0;
        long odd = 0;
 
        if (n % 2 == 1) {
            odd = (n + 1) / 2;
        } else {
            odd = n / 2;
        }
 
        if (k <= odd) {
            kth = 2 * k - 1;
        } else {
            kth = 2 * (k - odd);
        }
 
        System.out.println(kth);
    }
}