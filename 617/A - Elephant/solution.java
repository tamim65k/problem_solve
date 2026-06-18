import java.util.Scanner;
 
public class Elephant {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int count = 0;
 
        if (num > 0){
           if (num % 5 == 0){
               int step = num / 5;
               count = step;
           } else if (num % 5 == 4) {
               int step = num / 5;
               count = step + 1;
           } else if (num % 5 == 3) {
               int step = num / 5;
               count = step + 1;
           } else if (num % 5 == 2) {
               int step = num / 5;
               count = step + 1;
           } else if (num % 5 == 1) {
               int step = num / 5;
               count = step + 1;
           } else {
               return;
           }
        } else {
            return;
        }
        System.out.println(count);
        scanner.close();
    }
}