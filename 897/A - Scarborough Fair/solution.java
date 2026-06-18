import java.util.Scanner;
 
public class ScarboroughFair {
    public static void solve(Scanner scanner){
        int length = scanner.nextInt();
        int operations = scanner.nextInt();
        String line = scanner.next();
        char[] chars = line.toCharArray();
        while (operations-->0){
            int l = scanner.nextInt();
            int r = scanner.nextInt();
            char c = scanner.next().charAt(0);
            char d = scanner.next().charAt(0);
            for (int i=l-1; i<r && i<chars.length; i++){
                if (chars[i] == c){
                    chars[i] = d;
                }
            }
        }
        for (int i=0; i<chars.length; i++){
            System.out.print(chars[i]);
        }
    }
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
}