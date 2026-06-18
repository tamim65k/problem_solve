import java.util.Scanner;
 
public class StonesOnTheTable {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        scanner.nextLine();
        String color = scanner.nextLine();
 
        int count = 0;
 
        for (int i=0; i < number-1; i++){
            if (color.charAt(i) == color.charAt(i+1)){
                count++;
            }
        }
        System.out.println(count);
        scanner.close();
    }
}