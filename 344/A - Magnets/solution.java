import java.util.Scanner;
 
public class Magnets {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int count = 1;
        int n = scanner.nextInt();
        scanner.nextLine();
        String lastOrientation = scanner.nextLine();
 
        for (int i=1; i<n; i++){
            String currentOrientation = scanner.nextLine();
            if (!lastOrientation.equals(currentOrientation)){
                count++ ;
                lastOrientation = currentOrientation;
            }
        }
        System.out.println(count);
    }
}