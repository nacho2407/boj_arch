import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem10989 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int length = Integer.parseInt(br.readLine());
        int index[] = new int[10001];

        for(int i = 0; i < length; i++) {
            index[Integer.parseInt(br.readLine())]++;
        }

        br.close();

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int flag = 0;
    
        for(int i = 1; i < index.length; i++) {
            for(int j = 0; j < index[i]; j++) {
                if(flag == 0) {
                    bw.write(i + "");
                    flag++;
                }
                else {
                    bw.write("\n" + i);
                }
            }
        }

        bw.close();
    }
}
