import java.util.*;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int r = scanner.nextInt();
        int lastDigit = r%10;//get last
        
        if (lastDigit <= 5){
            System.out.println(r - lastDigit);
        } else {
            System.out.println(r + (10 - lastDigit));
        } 
        scanner.close();
    }
}