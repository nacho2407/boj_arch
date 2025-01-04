import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem9063 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int minX = Integer.parseInt(st.nextToken());
        int minY = Integer.parseInt(st.nextToken());
        int maxX = minX;
        int maxY = minY;

        for(int i = 1; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int tmpX = Integer.parseInt(st.nextToken());
            int tmpY = Integer.parseInt(st.nextToken());

            if(tmpX < minX) {
                minX = tmpX;
            }
            if(tmpY < minY) {
                minY = tmpY;
            }

            if(maxX < tmpX) {
                maxX = tmpX;
            }
            if(maxY < tmpY) {
                maxY = tmpY;
            }
        }

        isr.close();

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(((maxX - minX) * (maxY - minY)) + "");

        bw.flush();

        osw.close();
    }
}
