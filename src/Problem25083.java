import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem25083 {
    public static void main(String[] args) throws Exception {
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        bw.write("         ,r'\"7\n" +
                "r`-_   ,'  ,/\n" +
                " \\. \". L_r'\n" +
                "   `~\\/\n" +
                "      |\n" +
                "      |");

        bw.flush();

        bw.close();
        osw.close();
    }
}
