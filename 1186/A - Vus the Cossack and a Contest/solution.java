import java.util.Scanner;
 
public class test {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        solve(scanner);
        scanner.close();
    }
    private static void solve(Scanner scanner){
        int people = scanner.nextInt();
        int pen = scanner.nextInt();
        int notebook = scanner.nextInt();
        System.out.println((pen >= people && notebook >= people)?"YES":"NO");
    }
}