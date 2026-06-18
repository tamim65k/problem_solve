import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
 
public class Pangram {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String line = scanner.nextLine().toLowerCase();
 
        Set<Character> uniqeCharacter = new HashSet<>();
 
        for (char c : line.toCharArray()){
            uniqeCharacter.add(c);
        }
 
        System.out.println((uniqeCharacter.size() == 26) ? "YES" : "NO");
    }
}