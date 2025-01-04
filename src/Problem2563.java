import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2563 {
    public static void main(String[] args) throws Exception {
        int[][] coordinates = new int[100][100];
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken()) - 1;
            int y = Integer.parseInt(st.nextToken()) - 1;

            for(int j = x; j < x + 10; j++) {
                for(int k = y; k < y + 10; k++) {
                    coordinates[j][k] = 1;
                }
            }
        }

        isr.close();

        int area = 0;
        for(int i = 0; i < coordinates.length; i++) {
            for(int j = 0; j < coordinates[i].length; j++) {
                if(coordinates[i][j] == 1) {
                    area++;
                }
            }
        }

        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write(area + "");

        bw.flush();

        osw.close();
    }
}
