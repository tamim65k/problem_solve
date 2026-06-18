import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
 
public class Olympiad {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        Set<Integer> tamim = new HashSet<>();
        for (int i=0; i<n; i++){
            arr[i] = scanner.nextInt();
            if (arr[i] != 0)
                tamim.add(arr[i]);
        }
        System.out.println(tamim.size());
    }
}