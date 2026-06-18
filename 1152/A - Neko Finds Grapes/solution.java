import java.util.Scanner;
public class NekoFindsGrapes {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int oddChest = 0;
        int evenChest = 0;
        int oddKeys = 0;
        int evenKeys = 0;
 
        for (int i=0; i<n; i++){
            int a = scanner.nextInt();
            if (a%2==1){
                oddChest++;
            } else {
                evenChest++;
            }
        }
        for (int i=0; i<m; i++){
            int a = scanner.nextInt();
            if (a%2==1){
                oddKeys++;
            } else {
                evenKeys++;
            }
        }
 
        int max = Math.min(oddKeys,evenChest) + Math.min(evenKeys, oddChest);
        System.out.println(max);
    }
}