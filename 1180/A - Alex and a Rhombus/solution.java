import java.util.*;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int r = scanner.nextInt();
        int sum = 2*(r*r) - (2*r) +1;
 
        System.out.println(sum);
        scanner.close();
    }
}