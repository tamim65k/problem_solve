import java.util.Scanner;
 
public class PetyaAndOrigami {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int friend = scanner.nextInt();
        int sheetInNotebook = scanner.nextInt();
 
        int red = Math.ceilDiv(friend*2,sheetInNotebook);
        int green = Math.ceilDiv(friend*5,sheetInNotebook);
        int blue = Math.ceilDiv(friend*8,sheetInNotebook);
        System.out.println(red+green+blue);
    }
}