import java.util.Scanner;
 
public class BearAndBigBrother {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int limak = scanner.nextInt();
        int bob = scanner.nextInt();
        int count = 0;
 
       while (limak <= bob){
           limak*=3;
           bob*=2;
           count++;
       }
        System.out.println(count);
    }
}