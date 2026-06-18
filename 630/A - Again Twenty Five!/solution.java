import java.util.Scanner;
 
public class AgainTwentyFive {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        long power = scanner.nextLong();
        
        if (power >= 2) {
            System.out.println(25);  // For any n >= 2, last two digits are always 25
        } else if (power == 1) {
            System.out.println(5);   // For n = 1, the result is 5
        } else {
            System.out.println(
                0);   // For n = 0, 5^0 = 1
        }
        
    }
}