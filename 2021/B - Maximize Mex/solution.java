import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
 
public class MaximizeMex {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int totalCases = scanner.nextInt();
 
        while (totalCases-- > 0){
            solve(scanner);
        }
        scanner.close();
    }
 
    private static void solve(Scanner scanner){
        int size = scanner.nextInt();
        int value = scanner.nextInt();
        int[] array = new int[size];
        for (int i=0; i<size; i++){
            array[i] = scanner.nextInt();
        }
        Arrays.sort(array);
 
// Hashmap to count frequency
        Map<Integer, Integer> frequency = new HashMap<>();
        for (int x : array){
            frequency.put(x, frequency.getOrDefault(x, 0)+1);
        }
 
// find the smallest non-negative integer not present
        for (int d=0 ;; d++){ // ;; infinite loop
            if (!frequency.containsKey(d) || frequency.get(d) == 0){
                System.out.println(d);
                return;
            } else {
                frequency.put(d+value, frequency.getOrDefault(d+value, 0) + (frequency.get(d)-1));
                frequency.put(d, 1);
            }
        }
    }
}