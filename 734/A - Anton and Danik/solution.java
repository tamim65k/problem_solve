import java.util.Scanner;
 
public class AntonAnddanik {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        scanner.nextLine();
        String word = scanner.nextLine();
        int a = 0;
        int d = 0;
 
        for (char ch : word.toCharArray()){
            if (ch == 'A'){
                a++;
            } else if (ch == 'D') {
                d++;
            }
        }
        if (a>d){
            System.out.println("Anton");
        } else if (a==d) {
            System.out.println("Friendship");
        } else {
            System.out.println("Danik");
        }
    }
}