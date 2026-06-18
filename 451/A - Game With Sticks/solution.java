import java.util.Scanner;
 
public class GameWithSticks {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int to = Math.min(n, m);
        if (to % 2 == 1) {
            System.out.println("Akshat"); // Akshat wins if minMoves is odd
        } else {
            System.out.println("Malvika"); // Malvika wins if minMoves is even
        }
    }
}