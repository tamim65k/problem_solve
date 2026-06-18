import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class ChooseTwoNumbers {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    public static void solve(Scanner scanner){
        int A = scanner.nextInt();
        Set<Integer> allNum = new HashSet<>();
        int[] setA = new int[A];
        for (int i=0; i<A; i++){
            int num = 0;
            setA[i] = num = scanner.nextInt();
            allNum.add(num);
        }
        int B = scanner.nextInt();
        int[] setB = new int[B];
        for (int i=0; i<B; i++){
            int num = 0;
            setB[i] = num = scanner.nextInt();
            allNum.add(num);
        }
        boolean found = false;
        for (int i=0; i<A && !found; i++){
            for (int j=0; j<B && !found; j++){
                int sum = setA[i] + setB[j];
                if (!allNum.contains(sum)){
                    System.out.println(setA[i] +" "+setB[j]);
                    found = true;
                }
            }
        }
    }
}