import java.util.Arrays;
import java.util.Scanner;
 
public class Puzzles {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of students (puzzles needed) and the number of available puzzles
        int n = scanner.nextInt(); // number of students
        int m = scanner.nextInt(); // number of available puzzles
        
        int[] puzzles = new int[m]; // array to hold puzzle sizes
        for (int i = 0; i < m; i++) {
            puzzles[i] = scanner.nextInt(); // read puzzle sizes
        }
 
        // Sort the array of puzzle sizes
        Arrays.sort(puzzles);
        int minDifference = Integer.MAX_VALUE;
 
        // Find the minimum difference
        for (int i = 0; i <= m - n; i++) { // loop until m - n
            int maxPuzzle = puzzles[i + n - 1]; // maximum in the current selection
            int minPuzzle = puzzles[i]; // minimum in the current selection
            int difference = maxPuzzle - minPuzzle; // calculate difference
            minDifference = Math.min(minDifference, difference); // update minimum difference
        }
 
        // Output the minimum difference
        System.out.println(minDifference);
        
        scanner.close();
    }
}