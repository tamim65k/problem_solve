/*Creates an InputStreamReader for Standard Input (System.in):
 
System.in is the standard input stream in Java, which usually corresponds to keyboard input.
InputStreamReader is a bridge from byte streams (like System.in) to character streams. It reads bytes and converts them into characters.
Wraps the InputStreamReader in a BufferedReader:
 
BufferedReader reads text from a character-input stream and buffers characters to provide efficient reading of characters, arrays, and lines.
The buffering provided by BufferedReader makes reading text more efficient, as it minimizes the number of I/O operations.
 
Explanation
reader.readLine() reads a full line of text from the console until the user presses Enter.
This line can throw an IOException, so you either need to handle it with a try-catch block or declare throws IOException in the main method, as shown above.
Pros and Cons of Using BufferedReader for Console Input
Pros:
 
Efficient for reading large inputs due to buffering.
BufferedReader.readLine() allows reading an entire line of text, which makes it easier to handle multi-word inputs.
Cons:
 
Requires handling IOException since it’s a checked exception.
Since it reads only String input, you need to parse values manually (e.g., using Integer.parseInt() for integers).
 */
 
 
 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
/* Jump statement use-cases
continue statement skips the current iteration of a loop and proceeds to the next iteration.
break statement is used to exit from a loop or switch statement immediately.
The return statement exits a method and optionally returns a value.
*/
 
public class Quintomania {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(reader.readLine());
 
        while (t-->0){
            boolean res = false;
            int n = Integer.parseInt(reader.readLine());
            String[] e = reader.readLine().split(" ");
            int[] a = new int[n];
            for (int i=0; i<n; i++) a[i] = Integer.parseInt(e[i]);
 
            for (int i=0; i<n-1; i++){
                if (Math.abs(a[i] -a[i+1]) == 5 || Math.abs(a[i] -a[i+1]) == 7) {
                    res = true;
                } else {
                    res = false;
                    break; // exit the loop.
                }
            }
 
            System.out.println((res) ? "yes" : "no");
        }
 
        reader.close();
    }
}