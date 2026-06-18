import java.util.Scanner;
 
public class petyaAndString {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
 
        String str1 = scanner.nextLine();
        String str2 = scanner.nextLine();
 
        int result1 = str1.compareToIgnoreCase(str2);
 
        if (result1 < 0){
            System.out.println(-1);
        } else if (result1 > 0){
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}