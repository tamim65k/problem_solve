import java.io.*;
import java.util.Scanner;
 
public class Qaq {
    public static void main(String[] args) throws IOException {
        //BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        Reader rs = new Reader();
        String input = rs.readLine();
        System.out.println(countQAQ(input));
        rs.close();
    }
 
    public static int countQaq(String s){
        int n = s.length();
        int[] q = new int[n + 1];
        int[] qa = new int[n + 1];
        int[] qaq = new int[n + 1];
 
        for (int i=1; i<=n; i++){
            //Copies the counts from the previous index to the current index for each of the arrays.
            q[i] = q[i-1];
            qa[i] = qa[i-1];
            qaq[i] = qaq[i-1];
 
            //Gets the character at the i-1 position from the string s.
            char c = s.charAt(i-1);
            if (c == 'Q'){
                q[i]++;//Increments the count of 'Q's
                qaq[i] += qa[i];//updates the QAQ array by adding the count of "QA" subsequences.
            } else if (c == 'A'){
                qa[i] += q[i];
            }
        }
        return qaq[n];
    }
 
    public static int countQAQ(String s){
        int count = 0;
        for (int i=0; i<s.length(); i++){
            if (s.charAt(i) == 'Q'){
                for (int j=i+1; j<s.length(); j++){
                    if (s.charAt(j) == 'A'){
                        for (int k=j+1; k<s.length(); k++){
                            if (s.charAt(k) == 'Q'){
                                count++;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
 
    static class Reader
    {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
        public Reader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public Reader(String file_name) throws IOException
        {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public String readLine() throws IOException {
            byte[] buf = new byte[BUFFER_SIZE]; // Use a larger buffer
            int cnt = 0, c;
 
            // Read bytes into the buffer
            while ((c = read()) != -1) {
                if (c == '
') {
                    break; // Stop reading at newline
                }
                // Ensure we don't exceed buffer size
                if (cnt >= buf.length) {
                    // Resize buffer if necessary (not usually needed if BUFFER_SIZE is large enough)
                    byte[] newBuf = new byte[buf.length * 2];
                    System.arraycopy(buf, 0, newBuf, 0, buf.length);
                    buf = newBuf;
                }
                buf[cnt++] = (byte) c; // Store byte
            }
 
            return new String(buf, 0, cnt); // Convert to String and return
        }
        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
        public long nextLong() throws IOException
        {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == ' ');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
        public double nextDouble() throws IOException
        {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (c == '.')
            {
                while ((c = read()) >= '0' && c <= '9')
                {
                    ret += (c - '0') / (div *= 10);
                }
            }
            if (neg)
                return -ret;
            return ret;
        }
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
        public void close() throws IOException
        {
            if (din == null)
                return;
            din.close();
        }
    }
}