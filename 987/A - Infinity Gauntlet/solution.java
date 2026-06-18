import java.util.*;
 
public class InfinityGauntlet {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
 
        Map<String, String> allWords = new HashMap<>();
        allWords.put("purple" , "Power");
        allWords.put("green" , "Time");
        allWords.put("blue" , "Space");
        allWords.put("orange" , "Soul");
        allWords.put("red" , "Reality");
        allWords.put("yellow" , "Mind");
 
        Set<String> inputWords = new HashSet<>();
        for (int i=0; i<n; i++){
            inputWords.add(scanner.nextLine());
        }
 
        Set<String> missingWords = new HashSet<>(allWords.keySet());
        missingWords.removeAll(inputWords);
 
        System.out.println(missingWords.size());
        for (String key: missingWords){
                System.out.println(allWords.get(key));
        }
    }
}