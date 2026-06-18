import java.util.HashSet;
import java.util.Scanner;
 
public class AntonAndLetters {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
 
        input = input.substring(1,input.length()-1).trim();
        // trim method is called for removing any leading or trailing white space.
 
        if (input.isEmpty()){
            System.out.println(0);
            return;
        }
 
        HashSet<Character> distinctCharacter = new HashSet<>();
 
        String[] letter = input.split(",");
        for (String let : letter){
            let = let.trim();
            distinctCharacter.add(let.charAt(0));
        }
 
        System.out.println(distinctCharacter.size());
    }
}