import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
 
public class TeamOlympiad {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
 
        int n = scanner.nextInt();
        int[] skills = new int[n];
        for (int i=0; i<n; i++){
            skills[i] = scanner.nextInt();
        }
 
        List<Integer> programmers = new ArrayList<>();
        List<Integer> mathematicians = new ArrayList<>();
        List<Integer> sportsman = new ArrayList<>();
 
        for (int i=0; i<n; i++){
            if (skills[i] == 1){
                programmers.add(i + 1);// Store 1 based index
            } else if (skills[i] == 2) {
                mathematicians.add(i + 1);
            } else if(skills[i] == 3){
                sportsman.add(i + 1);
            }
        }
 
        int teamCount = Math.min(programmers.size(), Math.min(mathematicians.size(), sportsman.size()));
        System.out.println(teamCount);
 
        for (int i=0; i<teamCount; i++){
            System.out.println(programmers.get(i) + " " + mathematicians.get(i) + " " + sportsman.get(i) + " ");
        }
    }
}