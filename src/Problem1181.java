import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.Comparator;

public class Problem1181 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String arr[] = new String[Integer.parseInt(br.readLine())];

        for(int i = 0; i < arr.length; i++) {
            arr[i] = br.readLine();
        }

        br.close();

        Arrays.sort(arr, new Comparator<String>() {
            public int compare(String i, String j) {
                if(i.length() != j.length()) {
                    return i.length() - j.length();
                }
                else {
                    for(int k = 0; k < i.length(); k++) {
                        if(i.charAt(k) != j.charAt(k)) {
                            return i.charAt(k) - j.charAt(k);
                        }
                    }

                    return 0;
                }
            }
        });

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(arr[0]);

        for(int i = 1; i < arr.length; i++) {
            if(!arr[i].equals(arr[i - 1])) {
                bw.write("\n" + arr[i]);
            }
        }

        bw.close();
    }
}
