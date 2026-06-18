import java.util.Scanner;
 
public class ShortSort {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        
        for (int i=0; i<n; i++){
            String in = scanner.nextLine();
            System.out.println((in.charAt(0) == 'a' || in.charAt(1) == 'b' || in.charAt(2) == 'c') ? ("YES") : ("NO"));
        }
    }
}