import java.util.Scanner;
 
public class wordCapitalization {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine();
 
        if (!word.isEmpty()){
            String capitalizedWord = Character.toUpperCase(word.charAt(0)) + word.substring(1);
            System.out.println(capitalizedWord);
        }
        scanner.close();
    }
}