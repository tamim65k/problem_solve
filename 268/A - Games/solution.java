import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class Games {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        scanner.nextLine();
        List<Integer> firstLine = new ArrayList<>();
        List<Integer> secondLine = new ArrayList<>();
 
 
        for (int i=0; i<num; i++){
            String line = scanner.nextLine();
            String[] parts = line.split(" ");
            int first = Integer.parseInt(parts[0]);
            int second = Integer.parseInt(parts[1]);
 
            firstLine.add(first);
            secondLine.add(second);
        }
        int count = 0;
 
        for (int i=0; i<firstLine.size(); i++){
            int currentItem = firstLine.get(i);
 
            for (int item : secondLine){
                if (currentItem == item){
                    count++;
                }
            }
        }
 
 
        System.out.println(count);
 
    }
}