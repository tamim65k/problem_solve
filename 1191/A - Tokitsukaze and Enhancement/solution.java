import java.util.Scanner;
public class ChatGptTryAgain {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    private static void solve(Scanner scanner){
       int hp = scanner.nextInt();
           if (hp%4==1){
               System.out.println("0 A");
           } else if (hp%4==3){
               System.out.println("2 A");
           } else if (hp%4==2){
               System.out.println("1 B");
           } else if (hp%4==0){
               System.out.println("1 A");
           }
 
    }
}