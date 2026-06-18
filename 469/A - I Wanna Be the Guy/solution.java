import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
 
public class IWannaBeTheGuy {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
 
        String[] firstLine = scanner.nextLine().split(" ");
        Set<Integer> firstSet = new HashSet<>();
        for (int i=1; i<firstLine.length; i++){
                firstSet.add(Integer.parseInt(firstLine[i]));
        }
 
        String[] secondLine = scanner.nextLine().split(" ");
        for (int i=1; i<secondLine.length; i++){
                firstSet.add(Integer.parseInt(secondLine[i]));
        }
 
        boolean ContainsAll = false;
 
        for (int i=1; i<=n; i++){
            if (!firstSet.contains(i)){
                ContainsAll = false;
                break;
            } else {
                ContainsAll = true;
            }
        }
     
        if (ContainsAll){
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
 
 
    }
}