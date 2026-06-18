import java.util.Scanner;
 
public class ChatRoom {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();
        String target = "hello";
 
        int pointer = 0;
        int targetPointer = 0;
        int lengthLine = line.length();
        int lengthTarget = target.length();
 
        while (pointer < lengthLine && targetPointer < lengthTarget){
            if (line.charAt(pointer) == target.charAt(targetPointer)){
                targetPointer++;
            }
            pointer++;
        }
        if (targetPointer == lengthTarget){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
 
    }
}