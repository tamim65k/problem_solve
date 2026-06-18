import java.util.Scanner;
 
public class word {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
 
        int upperCaseCount = 0;
        int lowerCaseCount = 0;
 
        for (char i: input.toCharArray()){
            if (Character.isUpperCase(i)){
                upperCaseCount++;
            } else if (Character.isLowerCase(i)) {
                lowerCaseCount++;
            }
        }
 
        if (upperCaseCount <= lowerCaseCount){
            System.out.println(input.toLowerCase());
        } else {
            System.out.println(input.toUpperCase());
        } 
    }
}