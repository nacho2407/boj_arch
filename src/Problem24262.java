import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem24262 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        br.readLine();
        
        br.close();

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(1 + "\n" + 0);

        bw.flush();
        bw.close();
    }
}
