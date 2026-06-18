import java.util.Scanner;
 
/**
 * problemSolver
 */
public class problemSolver {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
        // System.out.println("Enter the number of problems: ");
        int n = in.nextInt();
        int count = 0;
 
        // System.out.println("Enter the " + n + " lines integers. Each integer is
        // either 0 or 1");
        // process each problem
        for (int i = 0; i < n; i++) {
            int petya = in.nextInt();
            int vasya = in.nextInt();
            int tonya = in.nextInt();
 
            // check at least two friends are sure
            if (petya + vasya + tonya >= 2) {
                count++;
            }
        }
        System.out.println(count);
    }
 
}