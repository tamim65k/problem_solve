import java.util.Scanner;
 
public class StringTask {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
 
        input = input.toLowerCase();
        String vowels = "aeiouy";
 
        StringBuilder result = new StringBuilder();
 
        for (int i=0; i<input.length(); i++){
            char c = input.charAt(i);
 
            if (vowels.indexOf(c) == -1){
                result.append(".").append(c);
            }
        }
        System.out.println(result);
    }
}