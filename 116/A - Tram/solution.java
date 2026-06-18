import java.util.Scanner;
 
public class Tram {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int currentPassenger = 0;
        int maxPassenger = 0;
 
        for (int i=0; i<n; i++){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
 
            currentPassenger = currentPassenger-a+b;
 
            if (currentPassenger > maxPassenger){
                maxPassenger = currentPassenger;
            }
        }
        System.out.println(maxPassenger);
        scanner.close();
    }
}