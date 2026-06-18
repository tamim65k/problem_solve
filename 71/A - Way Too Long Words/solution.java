import java.util.Scanner;
 
public class AbbreviateWords {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();// Read the number of words
        input.nextLine();// Consume the new line character
 
        for (int i = 0; i < n; i++) {
            String word = input.nextLine();
            System.out.println(abbreViate(word));
        }
 
        input.close();
    }
 
    private static String abbreViate(String word) {
        if (word.length() > 10) {
            int middleCount = word.length() - 2;
            return word.charAt(0) + String.valueOf(middleCount) + word.charAt(word.length() - 1);
        } else {
            return word;
        }
 
    }
}