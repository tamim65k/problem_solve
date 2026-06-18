import java.util.Scanner;
 
public class XeniaAndRingroad {
    public static void main(String... args){
        Scanner scanner = new Scanner(System.in);
        long numberOfHouse = scanner.nextInt();
        long numberOfTask = scanner.nextInt();
        long currentHouse = 1;
        long time = 0;
 
        for (int i=0; i<numberOfTask; i++){
            int task = scanner.nextInt();
            if (task >= currentHouse){
                time += task - currentHouse;
                currentHouse = task;
            } else {
                time += numberOfHouse - (currentHouse - task);
                currentHouse = task;
            }
        }
        System.out.println(time);
    }
}