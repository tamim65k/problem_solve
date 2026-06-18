import java.util.Scanner;
 
public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
 
        int b = 4;
        int a = b + n;
 
        while (!isComposite(a)) {
            b++;//8
            while (!isComposite(b)) {
                b++;//8
            }
            a = b + n;//12+1
        }
 
        System.out.println(a + " " + b);
 
        scanner.close();
    }
 
    private static boolean isComposite(int number) {
        if (number <= 3) return false; 
        if (number % 2 == 0 || number % 3 == 0) return true; 
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                return true;
            }
        }
        return false;
    }
}