import java.util.Scanner;
 
public class Translation {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
        String reverse = scanner.nextLine();
 
        StringBuilder sb = new StringBuilder(word);
        String reversed = sb.reverse().toString();
 
        if (reversed.equals(reverse)){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}