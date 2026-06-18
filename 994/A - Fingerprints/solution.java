import java.util.*;
 
public class FingerPrints {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        Set<Integer> nSet = new HashSet<>();
        List<Integer> nList = new ArrayList<>();
        Set<Integer> mSet = new HashSet<>();
 
        for (int i=0; i<n; i++){
            int element = scanner.nextInt();
            nSet.add(element);
            nList.add(element);
        }
        for (int i=0; i<m; i++){
            mSet.add(scanner.nextInt());
        }
        nList.retainAll(mSet);
        for (int i : nList){
            System.out.print(i + " ");
        }
    }
}