import java.util.Scanner;
 
public class Polycarp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
 
        for (int i = 0; i < t; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int d = scanner.nextInt();
            int k = scanner.nextInt();
 
            int pensNeeded = (int) Math.ceil((double) a / c);
            int pencilsNeeded = (int) Math.ceil((double) b / d);
 
            if (pensNeeded + pencilsNeeded <= k) {
                System.out.println(pensNeeded + " " + pencilsNeeded);
            } else {
                System.out.println("-1");
            }
        }
        
        scanner.close();
    }
}