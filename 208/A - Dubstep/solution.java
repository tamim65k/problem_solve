import java.util.Scanner;
 
public class Dubstep {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String original = scanner.nextLine();
        String modified = original.replace("WUB", " ").trim();
        System.out.println(modified);
    }
}