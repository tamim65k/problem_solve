import java.util.Scanner;
 
public class gpt {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[ n];
        for (int i=0; i<n; i++){
            a[i] = scanner.nextInt();
        }
        if (canEqualizeBid(n,a)){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        scanner.close();
    }
    private static int reduceBid(int bid){
        while (bid %2 == 0){
            bid /= 2;
        }
        while (bid % 3 == 0){
            bid /= 3;
        }
        return bid;
    }
    private static boolean canEqualizeBid(int n, int[] bids){
        int firstBid = reduceBid(bids[0]);
        for (int i=1; i<n; i++){
            if (reduceBid(bids[i]) != firstBid){
                return false;
            }
        }
        return true;
    }
}