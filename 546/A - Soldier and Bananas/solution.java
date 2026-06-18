import java.util.Scanner;
public class SoldierAndBananas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt(); 
        int n = scanner.nextInt(); 
        int w = scanner.nextInt(); 
        int totalPrice = k * w * (w + 1) / 2;
        if (totalPrice > n) {
            int borrow = totalPrice - n;
            System.out.println(borrow);
        } else {
            System.out.println(0);
        }
    }
}