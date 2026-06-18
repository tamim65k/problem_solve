import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
public class KeyboardLeyouts {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String lay1 = scanner.nextLine();
        String lay2 = scanner.nextLine();
        String text = scanner.nextLine();
        Map<Character, Character> mapping = new HashMap<>();
        for (int i=0; i<26; i++){
            mapping.put(lay1.charAt(i), lay2.charAt(i));
        }
        StringBuilder result = new StringBuilder();
        for (char c : text.toCharArray()){
            if (Character.isLowerCase(c)){
                result.append(mapping.get(c));
            } else if (Character.isUpperCase(c)) {
                result.append(Character.toUpperCase(mapping.get(Character.toLowerCase(c))));
            } else {
                result.append(c);
            }
        }
        System.out.println(result.toString());
    }
}