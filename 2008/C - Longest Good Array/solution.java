import java.util.Scanner;
 
public class LongestGoodArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
 
        while (t-- > 0) {
            long l = scanner.nextLong();
            long r = scanner.nextLong();
            System.out.println(findLongestGoodArrayLength(l, r));
        }
 
        scanner.close();
    }
 
    private static int findLongestGoodArrayLength(long l, long r) {
        int length = 1;
        long current = l;
        long difference = 1;
 
        while (current + difference <= r) {
            current += difference;
            difference++;
            length++;
        }
        return length;
    }
}