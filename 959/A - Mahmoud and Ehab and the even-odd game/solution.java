import java.util.Scanner;
 
public class test {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        System.out.println((n%2==1)?"Ehab":"Mahmoud");
    }
}