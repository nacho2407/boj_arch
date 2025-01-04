import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Problem11651 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int pos[][] = new int[Integer.parseInt(br.readLine())][2];
        StringTokenizer st;

        for(int i = 0; i < pos.length; i++) {
            st = new StringTokenizer(br.readLine());
            pos[i][0] = Integer.parseInt(st.nextToken());
            pos[i][1] = Integer.parseInt(st.nextToken());
        }

        br.close();

        Arrays.sort(pos, new Comparator<int[]>() {
            public int compare(int[] i, int[] j) {
                return i[1] != j[1] ? i[1] - j[1] : i[0] - j[0];
            }
        });

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        
        bw.write(pos[0][0] + " " + pos[0][1]);

        for(int i = 1; i < pos.length; i++) {
            bw.write("\n" + pos[i][0] + " " + pos[i][1]);
        }

        bw.close();
    }
}
