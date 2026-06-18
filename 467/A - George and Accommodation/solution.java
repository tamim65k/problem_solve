import java.util.Scanner;
 
public class GeorgeAndAccomodation {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int numberOfRooms = scanner.nextInt();
        int count = 0;
 
        for (int i=0; i<numberOfRooms; i++){
            int numberOfPeople = scanner.nextInt();
            int roomCapacity = scanner.nextInt();
 
            if (numberOfPeople <= roomCapacity-2){
                count++;
            }
        }
        System.out.println(count);
    }
}